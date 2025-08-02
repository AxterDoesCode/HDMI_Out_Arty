// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtmds_encoder_dvi__pch.h"
#include "Vtmds_encoder_dvi.h"
#include "Vtmds_encoder_dvi___024root.h"

// FUNCTIONS
Vtmds_encoder_dvi__Syms::~Vtmds_encoder_dvi__Syms()
{
}

Vtmds_encoder_dvi__Syms::Vtmds_encoder_dvi__Syms(VerilatedContext* contextp, const char* namep, Vtmds_encoder_dvi* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(51);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
