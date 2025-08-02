// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtmds_encoder_dvi__Syms.h"


void Vtmds_encoder_dvi___024root__trace_chg_0_sub_0(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtmds_encoder_dvi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_chg_0\n"); );
    // Init
    Vtmds_encoder_dvi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtmds_encoder_dvi___024root*>(voidSelf);
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtmds_encoder_dvi___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtmds_encoder_dvi___024root__trace_chg_0_sub_0(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_chg_0_sub_0\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.i_clk));
    bufp->chgBit(oldp+1,(vlSelfRef.i_rst));
    bufp->chgCData(oldp+2,(vlSelfRef.i_data),8);
    bufp->chgCData(oldp+3,(vlSelfRef.i_ctrl),2);
    bufp->chgBit(oldp+4,(vlSelfRef.i_de));
    bufp->chgSData(oldp+5,(vlSelfRef.o_tmds),10);
    bufp->chgCData(oldp+6,(vlSelfRef.tmds_encoder_dvi__DOT__d_ones),4);
    bufp->chgBit(oldp+7,(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor));
    bufp->chgSData(oldp+8,(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm),9);
    bufp->chgCData(oldp+9,(vlSelfRef.tmds_encoder_dvi__DOT__ones),5);
    bufp->chgCData(oldp+10,((0x1fU & ((IData)(8U) - (IData)(vlSelfRef.tmds_encoder_dvi__DOT__ones)))),5);
    bufp->chgCData(oldp+11,(vlSelfRef.tmds_encoder_dvi__DOT__balance),5);
    bufp->chgCData(oldp+12,(vlSelfRef.tmds_encoder_dvi__DOT__bias),5);
}

void Vtmds_encoder_dvi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_cleanup\n"); );
    // Init
    Vtmds_encoder_dvi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtmds_encoder_dvi___024root*>(voidSelf);
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
