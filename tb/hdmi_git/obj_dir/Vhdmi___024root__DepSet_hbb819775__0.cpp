// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhdmi.h for the primary calling header

#include "Vhdmi__pch.h"
#include "Vhdmi__Syms.h"
#include "Vhdmi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__ico(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG

void Vhdmi___024root___eval_triggers__ico(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_triggers__ico\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhdmi___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__act(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG

void Vhdmi___024root___eval_triggers__act(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_triggers__act\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__1)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk_pixel) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_pixel__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__1 
        = vlSelfRef.tmds_channel__DOT__q_m;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_pixel__0 = vlSelfRef.clk_pixel;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhdmi___024root___dump_triggers__act(vlSelf);
    }
#endif
}
