// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhdmi.h for the primary calling header

#include "Vhdmi__pch.h"
#include "Vhdmi__Syms.h"
#include "Vhdmi___024root.h"

void Vhdmi___024root___ctor_var_reset(Vhdmi___024root* vlSelf);

Vhdmi___024root::Vhdmi___024root(Vhdmi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhdmi___024root___ctor_var_reset(this);
}

void Vhdmi___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhdmi___024root::~Vhdmi___024root() {
}
