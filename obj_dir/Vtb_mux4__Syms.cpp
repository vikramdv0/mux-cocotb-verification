// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mux4__pch.h"
#include "Vtb_mux4.h"
#include "Vtb_mux4___024root.h"

// FUNCTIONS
Vtb_mux4__Syms::~Vtb_mux4__Syms()
{
}

Vtb_mux4__Syms::Vtb_mux4__Syms(VerilatedContext* contextp, const char* namep, Vtb_mux4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
