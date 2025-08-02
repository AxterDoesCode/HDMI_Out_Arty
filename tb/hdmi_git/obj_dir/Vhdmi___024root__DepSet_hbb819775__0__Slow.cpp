// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhdmi.h for the primary calling header

#include "Vhdmi__pch.h"
#include "Vhdmi__Syms.h"
#include "Vhdmi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhdmi___024root___dump_triggers__stl(Vhdmi___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhdmi___024root___eval_triggers__stl(Vhdmi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhdmi___024root___eval_triggers__stl\n"); );
    Vhdmi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.tmds_channel__DOT__q_m) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tmds_channel__DOT__q_m__0 
        = vlSelfRef.tmds_channel__DOT__q_m;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhdmi___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
