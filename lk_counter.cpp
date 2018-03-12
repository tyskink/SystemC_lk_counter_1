//lk_counter.cpp
//2018年3月11日20点46分
#include "systemc.h"
#include "lk_config.h"
#//define COUNTER_ADDRESSING_BIT_NUMBER 4
SC_MODULE(lk_counter)
{
	sc_in<sc_logic> clock,reset;
	sc_in<>
	sc_out<sc_uint<COUNTER_ADDRESSING_BIT_NUMBER> > count_out;

	sc_uint<COUNTER_ADDRESSING_BIT_NUMBER> count_buf;//as a middle variable or a buf ot a wire?

	void count()
		{
			if(reset.read()==1)
				{
					count_buf=0;
					count_out.write(0);
				}
			else
				{	
					count_buf=count_buf+1;
					count_out.write(count_buf);
				}
		}
	SC_CTOR(lk_counter)
		{
			SC_METHOD(count);
			sensitive<<reset;
			sensitive<<clock.pos();
		}
};//a new line
