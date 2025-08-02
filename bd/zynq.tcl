# Add Zynq-7000 PS IP
set processing_system [
    create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7
]

apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 -config {
    make_external "FIXED_IO, DDR"
    Master "Disable"
    Slave "Disable"
} $processing_system

set_property -dict [list \
    CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ {125} \
    CONFIG.PCW_USE_M_AXI_GP0 {0} 
] $processing_system

