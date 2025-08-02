# Create the block design
set bdname "yes"
create_bd_design $bdname

source ./bd/zynq.tcl
source ./bd/clk_wiz.tcl

set module_hdmi [
    create_bd_cell -type module -reference HDMI_test hdmi_0
]

list_property $module_hdmi

set reset_system [
    create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 proc_sys_reset
]

# These are output ports you need to define which on the toplevel module get mapped to external I/O
create_bd_port -dir O hdmi_tx_d_n -from 2 -to 0
create_bd_port -dir O hdmi_tx_d_p -from 2 -to 0
create_bd_port -dir O hdmi_tx_clk_n -type CLK
create_bd_port -dir O hdmi_tx_clk_p -type CLK
# create_bd_port -dir O hdmi_hpd

create_bd_port -dir O debug_red

connect_bd_net [get_bd_pins proc_sys_reset/slowest_sync_clk] [get_bd_pins processing_system7/FCLK_CLK0]
connect_bd_net [get_bd_pins proc_sys_reset/ext_reset_in] [get_bd_pins processing_system7/FCLK_RESET0_N]

connect_bd_net [get_bd_pins processing_system7/FCLK_CLK0] [get_bd_pins clk_wiz/clk_in1]
connect_bd_net [get_bd_pins clk_wiz/clk_out1] [get_bd_pins hdmi_0/pixclk]
connect_bd_net [get_bd_pins clk_wiz/clk_out2] [get_bd_pins hdmi_0/clk_TMDS]

## Only needed for HDMI_test.v
# connect_bd_net [get_bd_pins proc_sys_reset/peripheral_aresetn] [get_bd_pins hdmi_0/RST_N]

connect_bd_net [get_bd_pins proc_sys_reset/peripheral_aresetn] [get_bd_pins clk_wiz/resetn]

# Connect the HDMI testbench to output ports
connect_bd_net [get_bd_pins hdmi_0/TMDSp] [get_bd_ports hdmi_tx_d_p]
connect_bd_net [get_bd_pins hdmi_0/TMDSn] [get_bd_ports hdmi_tx_d_n]
connect_bd_net [get_bd_pins hdmi_0/TMDSp_clock] [get_bd_ports hdmi_tx_clk_p]
connect_bd_net [get_bd_pins hdmi_0/TMDSn_clock] [get_bd_ports hdmi_tx_clk_n]
# connect_bd_net [get_bd_pins hdmi_0/HPD] [get_bd_ports hdmi_hpd]
connect_bd_net [get_bd_pins hdmi_0/DebugRed] [get_bd_ports debug_red]

regenerate_bd_layout
save_bd_design

set bdpath [file dirname [get_files [get_property FILE_NAME [current_bd_design]]]]
