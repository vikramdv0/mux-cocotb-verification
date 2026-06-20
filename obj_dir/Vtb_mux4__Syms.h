// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MUX4__SYMS_H_
#define VERILATED_VTB_MUX4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_mux4.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mux4___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_mux4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mux4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mux4___024root             TOP;

    // CONSTRUCTORS
    Vtb_mux4__Syms(VerilatedContext* contextp, const char* namep, Vtb_mux4* modelp);
    ~Vtb_mux4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
