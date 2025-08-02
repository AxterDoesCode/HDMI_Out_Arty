// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhdmi__Syms.h"


VL_ATTR_COLD void Vhdmi___024root__trace_init_sub__TOP__0(Vhdmi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_init_sub__TOP__0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,0,"clk_pixel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"video_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"data_island_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"control_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"tmds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("tmds_channel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"CN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+5,0,"clk_pixel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"video_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"data_island_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"control_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"tmds",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+11,0,"acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"q_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+13,0,"q_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+13,0,"video_coding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2,0,"N1D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"N1q_m07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"N0q_m07",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"acc_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"control_coding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+4,0,"terc4_coding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+19,0,"video_guard_band",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+17,0,"data_guard_band",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhdmi___024root__trace_init_top(Vhdmi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_init_top\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhdmi___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhdmi___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhdmi___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhdmi___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhdmi___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhdmi___024root__trace_register(Vhdmi___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_register\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhdmi___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vhdmi___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vhdmi___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vhdmi___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhdmi___024root__trace_const_0_sub_0(Vhdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhdmi___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_const_0\n"); );
    // Init
    Vhdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhdmi___024root*>(voidSelf);
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhdmi___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhdmi___024root__trace_const_0_sub_0(Vhdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_const_0_sub_0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+18,(0U),32);
    bufp->fullSData(oldp+19,(0x2ccU),10);
}

VL_ATTR_COLD void Vhdmi___024root__trace_full_0_sub_0(Vhdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhdmi___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_full_0\n"); );
    // Init
    Vhdmi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhdmi___024root*>(voidSelf);
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhdmi___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhdmi___024root__trace_full_0_sub_0(Vhdmi___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root__trace_full_0_sub_0\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tmds_channel__DOT__i),32);
    bufp->fullCData(oldp+2,(vlSelfRef.tmds_channel__DOT__N1D),4);
    bufp->fullSData(oldp+3,(vlSelfRef.tmds_channel__DOT__control_coding),10);
    bufp->fullSData(oldp+4,(vlSelfRef.tmds_channel__DOT__terc4_coding),10);
    bufp->fullBit(oldp+5,(vlSelfRef.clk_pixel));
    bufp->fullCData(oldp+6,(vlSelfRef.video_data),8);
    bufp->fullCData(oldp+7,(vlSelfRef.data_island_data),4);
    bufp->fullCData(oldp+8,(vlSelfRef.control_data),2);
    bufp->fullCData(oldp+9,(vlSelfRef.mode),3);
    bufp->fullSData(oldp+10,(vlSelfRef.tmds),10);
    bufp->fullCData(oldp+11,(vlSelfRef.tmds_channel__DOT__acc),5);
    bufp->fullSData(oldp+12,(vlSelfRef.tmds_channel__DOT__q_m),9);
    bufp->fullSData(oldp+13,(vlSelfRef.tmds_channel__DOT__q_out),10);
    bufp->fullCData(oldp+14,(vlSelfRef.tmds_channel__DOT__N1q_m07),5);
    bufp->fullCData(oldp+15,(vlSelfRef.tmds_channel__DOT__N0q_m07),5);
    bufp->fullCData(oldp+16,(vlSelfRef.tmds_channel__DOT__acc_add),5);
    bufp->fullSData(oldp+17,(((0U == (IData)(vlSelfRef.control_data))
                               ? 0x28eU : ((1U == (IData)(vlSelfRef.control_data))
                                            ? 0x271U
                                            : ((2U 
                                                == (IData)(vlSelfRef.control_data))
                                                ? 0x163U
                                                : 0x2c3U)))),10);
}
