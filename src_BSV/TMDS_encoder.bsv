import Vector :: *;
interface IEncoder;
    (* always_ready, always_enabled *)
    method ActionValue#(Bit#(10)) encode (
        Bit#(8) vd, // Video data (RGB)
        Bit#(2) cd, // Control data
        Bit#(1) vde); // Video Data Enable, to choose between cd (vde=0) and vd (vde=1)
endinterface

(* synthesize *)
module mkTMDS_encoder (IEncoder);
    Reg#(Bit#(4)) balance_acc <- mkReg(0);
    Reg#(Bit#(9)) q_m <- mkReg(0);
    method ActionValue#(Bit#(10)) encode (
        Bit#(8) vd, // Video data (RGB)
        Bit#(2) cd, // Control data
        Bit#(1) vde); // Video Data Enable, to choose between cd (vde=0) and vd (vde=1)

        UInt#(4) nb1s = unpack(zeroExtend(vd[0])) + unpack(zeroExtend(vd[1])) + unpack(zeroExtend(vd[2])) + unpack(zeroExtend(vd[3])) + unpack(zeroExtend(vd[4])) + unpack(zeroExtend(vd[5])) + unpack(zeroExtend(vd[6])) + unpack(zeroExtend(vd[7])); // Number of 1s
        Bit#(1) xnorBits = pack((nb1s>4'd4) || (nb1s==4'd4 && vd[0]==1'b0));
        q_m <= {~xnorBits, q_m[6:0] ^ vd[7:1] ^ {pack(replicate(xnorBits))}, vd[0]};

        Bit#(4) balance = zeroExtend(q_m[0]) + zeroExtend(q_m[1]) + zeroExtend(q_m[2]) + zeroExtend(q_m[3]) + zeroExtend(q_m[4]) + zeroExtend(q_m[5]) + zeroExtend(q_m[6]) + zeroExtend(q_m[7]) - 4'd4;

        Bit#(1) balance_sign_eq = pack(balance[3] == balance_acc[3]);
        Bit#(1) invert_q_m = (balance==0 || balance_acc==0) ? ~q_m[8] : balance_sign_eq;
        Bit#(4) balance_acc_inc = balance - zeroExtend({q_m[8] ^ ~balance_sign_eq} & ~(pack(balance==0 || balance_acc==0)));
        Bit#(4) balance_acc_new = unpack(invert_q_m) ? balance_acc-balance_acc_inc : balance_acc+balance_acc_inc;
        Bit#(10) tmds_data = {invert_q_m, q_m[8], q_m[7:0] ^ {pack(replicate(invert_q_m))}};
        Bit#(10) tmds_code = unpack(cd[1]) ? (unpack(cd[0]) ? 10'b1010101011 : 10'b0101010100) : (unpack(cd[0]) ? 10'b0010101011 : 10'b1101010100);
        balance_acc <= unpack(vde) ? balance_acc_new : 4'h0;
        return unpack(vde) ? tmds_data : tmds_code;
    endmethod
endmodule
