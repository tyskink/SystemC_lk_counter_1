//lk_testbench.cpp	for lk_counter
//2018年3月11日20点46分
#include "systemc.h"
#include "lk_counter.cpp"
#include "lk_config.h"
int sc_main(int argc, char *argv[] )
{
	//signal declarations
	sc_clock clock ("clock",2,0.5,1,true);
	sc_signal<sc_logic>reset;
	
	sc_signal<sc_uint<2> > count_ctrl;
	sc_signal<sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> > count_data;
	sc_signal<sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> > count_out;//<//could not using sc_out, no port in main function

	//Module Instantiations and Binding Signals
	lk_counter counter("counter");
	counter.clock(clock);
	counter.reset(reset);
	counter.count_out(count_out);
	counter.count_ctrl(count_ctrl);
	counter.count_data(count_data);
	
	//start
	count_ctrl=LK_COUNT_CONTROL_INCR1;
	sc_start(1,SC_NS);
	//std::cout<<"testbench:	start!"<<endl;
	//reset
	// testbench could be putting here as a part of top level module
	//clock=SC_LOGIC_0;	//using SC_LOGIC_0 or SC_LOGIC_1 for sc_signal<sc_logic> variables
						//may using 0 or 1 for sc_signal<bool>
	sc_start(1,SC_NS);
	reset=SC_LOGIC_1;
	sc_start(1,SC_NS);
	reset=SC_LOGIC_0;
	
	sc_start(1,SC_NS);
	reset=SC_LOGIC_1;

	
	//LK_COUNT_CONTROL_DIREC
	count_ctrl=LK_COUNT_CONTROL_DIREC;
	count_data=2;
	sc_start(1,SC_NS);	
	count_ctrl=LK_COUNT_CONTROL_INCR1;
	

	
	//LK_COUNT_CONTROL_RELAT
	count_ctrl=LK_COUNT_CONTROL_RELAT;
	count_data=2;
	sc_start(1,SC_NS);	
	count_ctrl=LK_COUNT_CONTROL_INCR1;
	
	
	
	//LK_COUNT_CONTROL_WAIT
	count_ctrl=LK_COUNT_CONTROL_WAIT;
	count_data=2;
	sc_start(1,SC_NS);	
	count_ctrl=LK_COUNT_CONTROL_INCR1;
	
}//a new line
/*
sccom -g *.cpp
sccom -link
vsim sc_main
add wave -position insertpoint  \
sim:/sc_main/counter/clock \
sim:/sc_main/counter/reset \
sim:/sc_main/counter/count_ctrl \
sim:/sc_main/counter/count_data \
sim:/sc_main/counter/count_out \
sim:/sc_main/counter/count_buf
run
*/