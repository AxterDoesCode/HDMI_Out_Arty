// #include <iostream>
#include "obj_dir/Vhdmi.h"
#include "verilatedos.h"
#include <cstdlib>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_TIME 20

vluint64_t sim_time = 0;

int main(int arc, char** argv, char** env)
{
    
    Vhdmi* dut = new Vhdmi;

    Verilated ::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;

    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < MAX_TIME) {
        dut->clk_pixel ^= 1;
        dut->video_data = 0xFF;
        dut->mode = 0b1;
        dut->control_data = 0b11;
        dut->eval();
        m_trace->dump(sim_time);
    
        sim_time++;
    }
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
