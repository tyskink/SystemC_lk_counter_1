@0;moduleinfo.sc;5;17;0;gnuc;4;2;0

F1;C:/Users/lk2v17/OneDrive - University of Southampton/SystemC/ModelSim/trying/lk_counter\lk_counter.cpp
F0;C:/Users/lk2v17/OneDrive - University of Southampton/SystemC/ModelSim/trying/lk_counter\testbench.cpp


T7;bool;12;0;1;1;0;0;<NONE>

M6;lk_counter;19;12288;728;728;0;0;lk_counter.dbs;F1;L6
B0;sc_core::sc_module;256;0;<NONE>;M2
P0;clock;12;132;lk_counter.dbs;T7;F1;L8
P0;reset;12;248;lk_counter.dbs;T4;F1;L9
P0;count_ctrl;12;364;lk_counter.dbs;T1;F1;L10
P0;count_data;12;472;lk_counter.dbs;T0;F1;L11
P0;count_out;20;580;lk_counter.dbs;T0;F1;L12
V0;count_buf;0;696;lk_counter.dbs;T0;F1;L14
N0;lk_counter;(sc_core::sc_module_name);lk_counter.dbs;F1;L40
N0;count;();lk_counter.dbs;F1;L17

T5;sc_clock;30;0;0;0;0;0;<NONE>

T4;sc_logic;14;4096;1;12;0;0;<NONE>

M3;sc_main;19;8320;0;0;0;0;testbench.dbs;F0;L6
S0;clock;2;0;testbench.dbs;T5;F0;L9
S0;reset;2;0;testbench.dbs;T4;F0;L10
S0;count_ctrl;2;0;testbench.dbs;T1;F0;L12
S0;count_data;2;0;testbench.dbs;T0;F0;L13
S0;count_out;2;0;testbench.dbs;T0;F0;L14
C0;counter;1;0;testbench.dbs;M6;F0;L17

M2;sc_module;19;4352;0;0;0;0;<NONE>

T1;sc_uint<2>;17;4608;2;32;0;0;<NONE>

T0;sc_uint<8>;17;4608;8;32;0;0;<NONE>

