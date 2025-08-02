// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTMDS_ENCODER_DVI__SYMS_H_
#define VERILATED_VTMDS_ENCODER_DVI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtmds_encoder_dvi.h"

// INCLUDE MODULE CLASSES
#include "Vtmds_encoder_dvi___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtmds_encoder_dvi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtmds_encoder_dvi* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtmds_encoder_dvi___024root    TOP;

    // CONSTRUCTORS
    Vtmds_encoder_dvi__Syms(VerilatedContext* contextp, const char* namep, Vtmds_encoder_dvi* modelp);
    ~Vtmds_encoder_dvi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
