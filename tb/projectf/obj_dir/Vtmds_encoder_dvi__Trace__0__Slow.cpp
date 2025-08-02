// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtmds_encoder_dvi__Syms.h"


VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_init_sub__TOP__0(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_init_sub__TOP__0\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"i_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"i_de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"o_tmds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("tmds_encoder_dvi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"i_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"i_de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"o_tmds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+7,0,"d_ones",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"use_xnor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"enc_qm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+10,0,"ones",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"zeros",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"balance",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"bias",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_init_top(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_init_top\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtmds_encoder_dvi___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtmds_encoder_dvi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtmds_encoder_dvi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_register(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_register\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtmds_encoder_dvi___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtmds_encoder_dvi___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtmds_encoder_dvi___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtmds_encoder_dvi___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_const_0\n"); );
    // Init
    Vtmds_encoder_dvi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtmds_encoder_dvi___024root*>(voidSelf);
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_full_0_sub_0(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_full_0\n"); );
    // Init
    Vtmds_encoder_dvi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtmds_encoder_dvi___024root*>(voidSelf);
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtmds_encoder_dvi___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtmds_encoder_dvi___024root__trace_full_0_sub_0(Vtmds_encoder_dvi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root__trace_full_0_sub_0\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.i_clk));
    bufp->fullBit(oldp+2,(vlSelfRef.i_rst));
    bufp->fullCData(oldp+3,(vlSelfRef.i_data),8);
    bufp->fullCData(oldp+4,(vlSelfRef.i_ctrl),2);
    bufp->fullBit(oldp+5,(vlSelfRef.i_de));
    bufp->fullSData(oldp+6,(vlSelfRef.o_tmds),10);
    bufp->fullCData(oldp+7,(vlSelfRef.tmds_encoder_dvi__DOT__d_ones),4);
    bufp->fullBit(oldp+8,(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor));
    bufp->fullSData(oldp+9,(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm),9);
    bufp->fullCData(oldp+10,(vlSelfRef.tmds_encoder_dvi__DOT__ones),5);
    bufp->fullCData(oldp+11,((0x1fU & ((IData)(8U) 
                                       - (IData)(vlSelfRef.tmds_encoder_dvi__DOT__ones)))),5);
    bufp->fullCData(oldp+12,(vlSelfRef.tmds_encoder_dvi__DOT__balance),5);
    bufp->fullCData(oldp+13,(vlSelfRef.tmds_encoder_dvi__DOT__bias),5);
}
