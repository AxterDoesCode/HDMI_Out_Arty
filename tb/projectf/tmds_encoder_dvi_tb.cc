// #include <iostream>
#include "obj_dir/Vtmds_encoder_dvi.h"
#include "verilatedos.h"
#include <cstdlib>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_TIME 20

vluint64_t sim_time = 0;

int main(int arc, char** argv, char** env)
{

    Vtmds_encoder_dvi* dut = new Vtmds_encoder_dvi;

    Verilated ::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;

    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < MAX_TIME) {
        dut->i_clk ^= 1;
        dut->i_data = 0xFF;
        dut->i_de = 0b1;
        dut->i_ctrl = 0b11;
        dut->eval();
        m_trace->dump(sim_time);

        sim_time++;
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
