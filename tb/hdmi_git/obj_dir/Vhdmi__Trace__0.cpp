// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhdmi__Syms.h"


void Vhdmi___024root__trace_chg_0_sub_0(Vhdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhdmi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_chg_0\n"); );
    // Init
    Vhdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhdmi___024root*>(voidSelf);
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhdmi___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhdmi___024root__trace_chg_0_sub_0(Vhdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_chg_0_sub_0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tmds_channel__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+1,(vlSelfRef.tmds_channel__DOT__N1D),4);
        bufp->chgSData(oldp+2,(vlSelfRef.tmds_channel__DOT__control_coding),10);
        bufp->chgSData(oldp+3,(vlSelfRef.tmds_channel__DOT__terc4_coding),10);
    }
    bufp->chgBit(oldp+4,(vlSelfRef.clk_pixel));
    bufp->chgCData(oldp+5,(vlSelfRef.video_data),8);
    bufp->chgCData(oldp+6,(vlSelfRef.data_island_data),4);
    bufp->chgCData(oldp+7,(vlSelfRef.control_data),2);
    bufp->chgCData(oldp+8,(vlSelfRef.mode),3);
    bufp->chgSData(oldp+9,(vlSelfRef.tmds),10);
    bufp->chgCData(oldp+10,(vlSelfRef.tmds_channel__DOT__acc),5);
    bufp->chgSData(oldp+11,(vlSelfRef.tmds_channel__DOT__q_m),9);
    bufp->chgSData(oldp+12,(vlSelfRef.tmds_channel__DOT__q_out),10);
    bufp->chgCData(oldp+13,(vlSelfRef.tmds_channel__DOT__N1q_m07),5);
    bufp->chgCData(oldp+14,(vlSelfRef.tmds_channel__DOT__N0q_m07),5);
    bufp->chgCData(oldp+15,(vlSelfRef.tmds_channel__DOT__acc_add),5);
    bufp->chgSData(oldp+16,(((0U == (IData)(vlSelfRef.control_data))
                              ? 0x28eU : ((1U == (IData)(vlSelfRef.control_data))
                                           ? 0x271U
                                           : ((2U == (IData)(vlSelfRef.control_data))
                                               ? 0x163U
                                               : 0x2c3U)))),10);
}

void Vhdmi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_cleanup\n"); );
    // Init
    Vhdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhdmi___024root*>(voidSelf);
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
