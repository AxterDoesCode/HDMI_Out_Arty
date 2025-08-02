// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtmds_encoder_dvi.h for the primary calling header

#include "Vtmds_encoder_dvi__pch.h"
#include "Vtmds_encoder_dvi___024root.h"

void Vtmds_encoder_dvi___024root___ico_sequent__TOP__0(Vtmds_encoder_dvi___024root* vlSelf);
void Vtmds_encoder_dvi___024root___ico_comb__TOP__0(Vtmds_encoder_dvi___024root* vlSelf);

void Vtmds_encoder_dvi___024root___eval_ico(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_ico\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtmds_encoder_dvi___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtmds_encoder_dvi___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtmds_encoder_dvi___024root___ico_sequent__TOP__0(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___ico_sequent__TOP__0\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tmds_encoder_dvi__DOT__d_ones = (0xfU 
                                               & ((1U 
                                                   & (IData)(vlSelfRef.i_data)) 
                                                  + 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.i_data) 
                                                       >> 1U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.i_data) 
                                                        >> 2U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.i_data) 
                                                         >> 3U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.i_data) 
                                                          >> 4U)) 
                                                      + 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.i_data) 
                                                           >> 5U)) 
                                                       + 
                                                       ((1U 
                                                         & ((IData)(vlSelfRef.i_data) 
                                                            >> 6U)) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.i_data) 
                                                            >> 7U))))))))));
    vlSelfRef.tmds_encoder_dvi__DOT__use_xnor = ((4U 
                                                  < (IData)(vlSelfRef.tmds_encoder_dvi__DOT__d_ones)) 
                                                 | ((~ (IData)(vlSelfRef.i_data)) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.tmds_encoder_dvi__DOT__d_ones))));
}

VL_INLINE_OPT void Vtmds_encoder_dvi___024root___ico_comb__TOP__0(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___ico_comb__TOP__0\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                      ? 0U : 1U) << 8U) | ((0x80U & 
                                            (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                                               ? (~ 
                                                  (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                    >> 6U) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.i_data) 
                                                    >> 7U)))
                                               : (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                   >> 6U) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.i_data) 
                                                   >> 7U))) 
                                             << 7U)) 
                                           | (0x40U 
                                              & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                                                   ? 
                                                  (~ 
                                                   (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                     >> 5U) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.i_data) 
                                                     >> 6U)))
                                                   : 
                                                  (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                    >> 5U) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.i_data) 
                                                    >> 6U))) 
                                                 << 6U)))) 
                  | ((0x20U & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                                 ? (~ (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                        >> 4U) ^ ((IData)(vlSelfRef.i_data) 
                                                  >> 5U)))
                                 : (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                     >> 4U) ^ ((IData)(vlSelfRef.i_data) 
                                               >> 5U))) 
                               << 5U)) | (0x10U & (
                                                   ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                                                     ? 
                                                    (~ 
                                                     (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                       >> 3U) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.i_data) 
                                                       >> 4U)))
                                                     : 
                                                    (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                      >> 3U) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.i_data) 
                                                      >> 4U))) 
                                                   << 4U)))) 
                 | (((8U & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                              ? (~ (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                     >> 2U) ^ ((IData)(vlSelfRef.i_data) 
                                               >> 3U)))
                              : (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                  >> 2U) ^ ((IData)(vlSelfRef.i_data) 
                                            >> 3U))) 
                            << 3U)) | (4U & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                                               ? (~ 
                                                  (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                    >> 1U) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.i_data) 
                                                    >> 2U)))
                                               : (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                   >> 1U) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.i_data) 
                                                   >> 2U))) 
                                             << 2U))) 
                    | ((2U & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__use_xnor)
                                ? (~ ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                      ^ ((IData)(vlSelfRef.i_data) 
                                         >> 1U))) : 
                               ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                ^ ((IData)(vlSelfRef.i_data) 
                                   >> 1U))) << 1U)) 
                       | (1U & (IData)(vlSelfRef.i_data)))));
    vlSelfRef.tmds_encoder_dvi__DOT__enc_qm = __Vtemp_1;
    vlSelfRef.tmds_encoder_dvi__DOT__ones = (0x1fU 
                                             & ((1U 
                                                 & (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm)) 
                                                + (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                       >> 1U)) 
                                                   + 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                        >> 2U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                         >> 3U)) 
                                                     + 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                          >> 4U)) 
                                                      + 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                           >> 5U)) 
                                                       + 
                                                       ((1U 
                                                         & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                            >> 6U)) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                            >> 7U))))))))));
    vlSelfRef.tmds_encoder_dvi__DOT__balance = (0x1fU 
                                                & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__ones) 
                                                   - 
                                                   ((IData)(8U) 
                                                    - (IData)(vlSelfRef.tmds_encoder_dvi__DOT__ones))));
}

void Vtmds_encoder_dvi___024root___eval_triggers__ico(Vtmds_encoder_dvi___024root* vlSelf);

bool Vtmds_encoder_dvi___024root___eval_phase__ico(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_phase__ico\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtmds_encoder_dvi___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtmds_encoder_dvi___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtmds_encoder_dvi___024root___eval_act(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_act\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtmds_encoder_dvi___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vtmds_encoder_dvi___024root___nba_sequent__TOP__0(Vtmds_encoder_dvi___024root* vlSelf);

void Vtmds_encoder_dvi___024root___eval_nba(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_nba\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtmds_encoder_dvi___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtmds_encoder_dvi___024root___nba_sequent__TOP__0(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___nba_sequent__TOP__0\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__tmds_encoder_dvi__DOT__bias;
    __Vdly__tmds_encoder_dvi__DOT__bias = 0;
    // Body
    __Vdly__tmds_encoder_dvi__DOT__bias = vlSelfRef.tmds_encoder_dvi__DOT__bias;
    if (vlSelfRef.i_rst) {
        vlSelfRef.o_tmds = 0x354U;
        __Vdly__tmds_encoder_dvi__DOT__bias = 0U;
    } else if (vlSelfRef.i_de) {
        if (((0U == VL_EXTENDS_II(32,5, (IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias))) 
             | (0U == VL_EXTENDS_II(32,5, (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance))))) {
            if ((0x100U & (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm))) {
                VL_WRITEF_NX("\t%3# %b %3d, %3d, A0\n",0,
                             8,vlSelfRef.i_data,9,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm),
                             5,vlSelfRef.tmds_encoder_dvi__DOT__ones,
                             5,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias));
                __Vdly__tmds_encoder_dvi__DOT__bias 
                    = (0x1fU & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias) 
                                + (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance)));
                vlSelfRef.o_tmds = (0x100U | (0xffU 
                                              & (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm)));
            } else {
                VL_WRITEF_NX("\t%3# %b %3d, %3d, A1\n",0,
                             8,vlSelfRef.i_data,9,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm),
                             5,vlSelfRef.tmds_encoder_dvi__DOT__ones,
                             5,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias));
                __Vdly__tmds_encoder_dvi__DOT__bias 
                    = (0x1fU & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias) 
                                - (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance)));
                vlSelfRef.o_tmds = (0x200U | (0xffU 
                                              & (~ (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm))));
            }
        } else if (((VL_LTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias))) 
                     & VL_LTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance)))) 
                    | (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias))) 
                       & VL_GTS_III(32, 0U, VL_EXTENDS_II(32,5, (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance)))))) {
            VL_WRITEF_NX("\t%3# %b %3d, %3d, B1\n",0,
                         8,vlSelfRef.i_data,9,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm),
                         5,vlSelfRef.tmds_encoder_dvi__DOT__ones,
                         5,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias));
            __Vdly__tmds_encoder_dvi__DOT__bias = (0x1fU 
                                                   & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias) 
                                                       + 
                                                       (2U 
                                                        & ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                           >> 7U))) 
                                                      - (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance)));
            vlSelfRef.o_tmds = (0x200U | ((0x100U & (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm)) 
                                          | (0xffU 
                                             & (~ (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm)))));
        } else {
            VL_WRITEF_NX("\t%3# %b %3d, %3d, B0\n",0,
                         8,vlSelfRef.i_data,9,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm),
                         5,vlSelfRef.tmds_encoder_dvi__DOT__ones,
                         5,(IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias));
            __Vdly__tmds_encoder_dvi__DOT__bias = (0x1fU 
                                                   & (((IData)(vlSelfRef.tmds_encoder_dvi__DOT__bias) 
                                                       - 
                                                       (2U 
                                                        & ((~ 
                                                            ((IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm) 
                                                             >> 8U)) 
                                                           << 1U))) 
                                                      + (IData)(vlSelfRef.tmds_encoder_dvi__DOT__balance)));
            vlSelfRef.o_tmds = (0x1ffU & (IData)(vlSelfRef.tmds_encoder_dvi__DOT__enc_qm));
        }
    } else {
        vlSelfRef.o_tmds = ((0U == (IData)(vlSelfRef.i_ctrl))
                             ? 0x354U : ((1U == (IData)(vlSelfRef.i_ctrl))
                                          ? 0xabU : 
                                         ((2U == (IData)(vlSelfRef.i_ctrl))
                                           ? 0x154U
                                           : 0x2abU)));
        __Vdly__tmds_encoder_dvi__DOT__bias = 0U;
    }
    vlSelfRef.tmds_encoder_dvi__DOT__bias = __Vdly__tmds_encoder_dvi__DOT__bias;
}

void Vtmds_encoder_dvi___024root___eval_triggers__act(Vtmds_encoder_dvi___024root* vlSelf);

bool Vtmds_encoder_dvi___024root___eval_phase__act(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_phase__act\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtmds_encoder_dvi___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtmds_encoder_dvi___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtmds_encoder_dvi___024root___eval_phase__nba(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_phase__nba\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtmds_encoder_dvi___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__ico(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__nba(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtmds_encoder_dvi___024root___dump_triggers__act(Vtmds_encoder_dvi___024root* vlSelf);
#endif  // VL_DEBUG

void Vtmds_encoder_dvi___024root___eval(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtmds_encoder_dvi___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tmds_encoder_dvi.v", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtmds_encoder_dvi___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtmds_encoder_dvi___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tmds_encoder_dvi.v", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtmds_encoder_dvi___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tmds_encoder_dvi.v", 8, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtmds_encoder_dvi___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtmds_encoder_dvi___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtmds_encoder_dvi___024root___eval_debug_assertions(Vtmds_encoder_dvi___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtmds_encoder_dvi___024root___eval_debug_assertions\n"); );
    Vtmds_encoder_dvi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.i_clk & 0xfeU)))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY(((vlSelfRef.i_rst & 0xfeU)))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY(((vlSelfRef.i_ctrl & 0xfcU)))) {
        Verilated::overWidthError("i_ctrl");}
    if (VL_UNLIKELY(((vlSelfRef.i_de & 0xfeU)))) {
        Verilated::overWidthError("i_de");}
}
#endif  // VL_DEBUG
