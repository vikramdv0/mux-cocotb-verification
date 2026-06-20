TOPLEVEL_LANG = verilog
VERILOG_SOURCES = $(PWD)/mux4.v
TOPLEVEL = mux4
MODULE = test_mux

SIM = verilator

include $(shell cocotb-config --makefiles)/Makefile.sim
