TOPFILE   ?= src_BSV/dvi.bsv
TOPMODULE ?= mkTMDS_encoder
BSCDIRS_VSIM = -bdir build_v  -info-dir build_v  -vdir verilog

build_v:
	mkdir -p $@

verilog:
	mkdir -p $@

compile: build_v verilog
	bsc --show-range-conflict -u -verilog $(BSCDIRS_VSIM) -g $(TOPMODULE) $(TOPFILE)

build:
	vivado -mode batch -nolog -nojournal -source build.tcl
	rm usage_statistics_webtalk.html usage_statistics_webtalk.xml
	echo "Bitstream generated successfully"

program:
	openFPGALoader -b arty_z7_20 bitstream.bit
program_working:
	openFPGALoader -b arty_z7_20 working.bit
verilate:
	verilator --trace -cc --exe --build fpga4fun_encoder_tb.cpp fpga4fun_encoder.v -Wno-WIDTHEXPAND -Wno-UNOPTFLAT
