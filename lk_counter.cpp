//lk_counter.cpp
//2018年3月11日20点46分
#include "systemc.h"
#include "lk_config.h"

SC_MODULE(lk_counter)
{
	sc_in_clk clock;	//using sc_clock for auto clock time
	sc_in<sc_logic> reset;
	sc_in<sc_uint<2> > count_ctrl;	//<	//LK_COUNT_CONTROL_WAIT	LK_COUNT_CONTROL_INCR1	LK_COUNT_CONTROL_DIREC	LK_COUNT_CONTROL_RELAT
	sc_in<sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> > count_data;	//input data: relative or absolute ```````````````````````````````````````````````````````````````````````````````````	`	`address
	sc_out<sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> > count_out;	//

	sc_uint<LK_COUNTER_ADDRESSING_BIT_NUMBER> count_buf;//<	//as a middle variable or a buf ot a wire?

	void count()
		{
		//count_buf=1;
			if(reset.read()==0)
				{
					cout<<"counter:	reset!"<<endl;
					count_buf=0;
					//count_out.write(count_buf);
				}
			else
				{	//cout<<"counter:	working!"<<endl;
					switch (count_ctrl.read())//using .read() and .write for sc_in and sc_out class
					{
						case LK_COUNT_CONTROL_WAIT :											cout<<"counter:	wait!"<<endl;	break;//do nothing
						case LK_COUNT_CONTROL_INCR1:	count_buf=count_buf+1;					cout<<"counter:	incr 1!"<<endl;	break;
						case LK_COUNT_CONTROL_DIREC:	count_buf=count_data.read();			cout<<"counter:	direc!"<<endl;	break;
						case LK_COUNT_CONTROL_RELAT:	count_buf=count_buf+count_data.read();	cout<<"counter:	relate!"<<endl;	break;
						default :																cout<<"counter:	default!"<<endl;	break;//do nothing
					}					
					//count_out.write(count_buf);
				}
			count_out.write(count_buf);
		}
	SC_CTOR(lk_counter)
		{
			SC_METHOD(count);
			sensitive<<reset.neg();//asynchronous negative reset
			sensitive<<clock.pos();
		}
};//a new line
