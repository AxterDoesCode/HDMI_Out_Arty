interface IEncoder;
    (* always_ready, always_enabled *)
    method ActionValue#(Bit#(10)) encode (
        Bit#(8) d_in, // Video data (RGB)
        Bit#(2) cd, // Control data
        Bit#(1) de); // Data Enable, to choose between cd (vde=0) and r_vd (vde=1)
endinterface

function UInt#(5) count_ones (Bit#(8) bits);
    UInt#(5) ones = 0;
    for (int i = 0; i < 8; i = i + 1) begin
        ones = ones + (unpack(bits[i]) ? 1 : 0);
    end
    return ones;
endfunction

function UInt#(5) count_zeroes (Bit#(8) bits);
    return (8 - count_ones(bits));
endfunction

function Bit#(9) rolling_xor(Bit#(8) bits);
    Bit#(9) rolling = 0;
    rolling[0] = bits[0];
    for (int i = 1; i < 8; i = i+ 1) begin
        rolling[i] = rolling[i-1] ^ bits[i];
    end
    rolling[8] = 1'b1;
    return rolling;
endfunction

function Bit#(9) rolling_xnor(Bit#(8) bits);
    Bit#(9) rolling = 0;
    rolling[0] = bits[0];
    for (int i = 1; i < 8; i = i+1) begin
        rolling[i] = rolling[i-1] ~^ bits[i];
    end
    rolling[8] = 1'b0;
    return rolling;
endfunction

module mkTMDS_encoder (IEncoder);
    // State
    Reg#(Int#(5)) cnt[1] <- mkCRegU(1);

    method ActionValue#(Bit#(10)) encode (
        Bit#(8) d_in, // Video data (RGB)
        Bit#(2) cd, // Control data
        Bit#(1) de); // Data Enable, to choose between cd (vde=0) and r_vd (vde=1)

        // First condition block to determine q_m intermediate value
        // Whether it uses XNOR or XOR
        let n1_d_in = count_ones(d_in);
        Bool cond1 = (n1_d_in > 4) || (n1_d_in == 4 && d_in[0] == 1'b0);
        let q_m = cond1 ? rolling_xnor(d_in) : rolling_xor(d_in);

        // Init q_out variable
        Bit#(10) q_out = 10'b0;

        let n1_q_m = count_ones(q_m[7:0]);
        let n0_q_m = count_zeroes(q_m[7:0]);

        // Second condition block
        if (unpack(de)) begin // DE == HIGH
            if (cnt[0] == 5'b0 || (n1_q_m == n0_q_m)) begin // Third condition block
                q_out = {~q_m[8], q_m[8], unpack(q_m[8]) ? q_m[7:0] : ~q_m[7:0] };
                if (q_m[8] == 1'b0) // Bottom right conditional
                    cnt[0] <= cnt[0] + unpack(pack(n0_q_m)) - unpack(pack(n1_q_m));
                else
                    cnt[0] <= cnt[0] + unpack(pack(n1_q_m)) - unpack(pack(n0_q_m));
            end
            else begin
                // Bottom left conditional here
                if ((cnt[0] > 0 && (n1_q_m > n0_q_m)) || (cnt[0] < 0 && (n0_q_m > n1_q_m))) begin
                    q_out = {1'b1, q_m[8], ~q_m[7:0]};
                    cnt[0] <= cnt[0] + (unpack(q_m[8]) ? 2 : 0) + (unpack(pack(n0_q_m)) - unpack(pack(n1_q_m)));
                end
                else begin
                    q_out = {1'b0, q_m[8], q_m[7:0]};
                    cnt[0] <= cnt[0] - (unpack(~q_m[8]) ? 2 : 0) + (unpack(pack(n1_q_m)) - unpack(pack(n0_q_m)));
                end
            end
        end
        else begin // !(DE == HIGH)
            cnt [0] <= 0;
            q_out = case (cd)
                2'b00: 10'b1101010100;
                2'b01: 10'b0010101011;
                2'b10: 10'b0101010100;
                2'b11: 10'b1010101011;
            endcase;
        end

        return q_out;
    endmethod
endmodule
