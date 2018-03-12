//lk_testbench.cpp	for lk_counter
//2018年3月11日20点46分
#include "systemc.h"
#include "lk_counter.cpp"
#include "lk_config.h"
int sc_main(int argc, char *argv[] )
{
	//signal declarations
	sc_signal<sc_logic>clock,reset;
	sc_signal<sc_uint<COUNTER_ADDRESSING_BIT_NUMBER> > count_out;//could not using sc_out, no port in main function

	//Module Instantiations and Binding Signals
	lk_counter counter("counter");
	counter.clock(clock);
	counter.reset(reset);
	counter.count_out(count_out);
	
	//start
	sc_start(1,SC_NS);
	
	// testbench could be putting here as a part of top level module
	clock=SC_LOGIC_0;	//using SC_LOGIC_0 or SC_LOGIC_1 for sc_signal<sc_logic> variables
						//may using 0 or 1 for sc_signal<bool>
	for(int i=0;i<10;i++)
	{
		clock=SC_LOGIC_0;
		sc_start(1,SC_NS);
		clock=SC_LOGIC_1;
		sc_start(1,SC_NS);		
	}
	reset=SC_LOGIC_0;
	sc_start(1,SC_NS);
	reset=SC_LOGIC_1;
	sc_start(1,SC_NS);
	reset=SC_LOGIC_0;
	for(int i=0;i<10;i++)
	{
		clock=SC_LOGIC_0;
		sc_start(1,SC_NS);
		clock=SC_LOGIC_1;
		sc_start(1,SC_NS);		
	}
	
}//a new line
