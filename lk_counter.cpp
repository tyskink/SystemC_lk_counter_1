//lk_counter.cpp
//2018年3月11日20点46分
#include "systemc.h"
#include "lk_config.h"

SC_MODULE(lk_counter)
{
	sc_in<sc_logic> clock,reset;
	sc_in<sc_uint<2> > count_ctrl;
	sc_in<sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> > count_data;
	sc_out<sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> > count_out;

	sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> count_buf;//as a middle variable or a buf ot a wire?

	void count()
		{
		count_buf=1;
			if(reset.read()==0)
				{
					cout<<"counter:	reset!"<<endl;
					count_buf=1;
					//count_out.write(count_buf);
				}
			else
				{	cout<<"counter:	working!"<<endl;
					switch (count_ctrl.read())
					{
						case LK_COUNT_CONTROL_WAIT :;//do nothing
						case LK_COUNT_CONTROL_INCR1: count_buf=count_buf+1;cout<<"counter:	incr 1!"<<endl;
						case LK_COUNT_CONTROL_DIREC: count_buf=count_data.read();
						case LK_COUNT_CONTROL_RELAT: count_buf=count_buf+count_data.read();
						default :;//do nothing
					}					
					//count_out.write(count_buf);
				}
			count_out.write(count_buf);
		}
	SC_CTOR(lk_counter)
		{
			SC_METHOD(count);
			sensitive<<reset;
			sensitive<<clock.pos();
		}
};//a new line
