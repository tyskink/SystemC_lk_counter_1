@0;moduleinfo.sc;5;17;0;gnuc;4;2;0

F1;C:/Users/lk2v17/OneDrive - University of Southampton/SystemC/ModelSim/trying/lk_counter\lk_counter.cpp
F0;C:/Users/lk2v17/OneDrive - University of Southampton/SystemC/ModelSim/trying/lk_counter\testbench.cpp


M8;counter;19;134230016;512;512;0;0;lk_counter.dbs;F1;L2
B0;sc_core::sc_module;256;0;<NONE>;M3
P0;clock;12;132;lk_counter.dbs;T5;F1;L4
P0;reset;12;248;lk_counter.dbs;T5;F1;L4
P0;count_out;20;364;lk_counter.dbs;T2;F1;L5
V0;count_buf;0;480;lk_counter.dbs;T2;F1;L7
N0;count;();lk_counter.dbs;F1;L10
N0;counter;(sc_core::sc_module_name);lk_counter.dbs;F1;L23

T7;int;5;0;4;4;0;0;<NONE>

M6;lk_counter;19;12288;512;512;0;0;lk_counter.dbs;F1;L4
B0;sc_core::sc_module;256;0;<NONE>;M3
P0;clock;12;132;lk_counter.dbs;T5;F1;L6
P0;reset;12;248;lk_counter.dbs;T5;F1;L6
P0;count_out;20;364;lk_counter.dbs;T0;F1;L7
V0;count_buf;0;480;lk_counter.dbs;T0;F1;L9
N0;lk_counter;(sc_core::sc_module_name);lk_counter.dbs;F1;L25
N0;count;();lk_counter.dbs;F1;L12

T5;sc_logic;14;4096;1;12;0;0;<NONE>

M4;sc_main;19;8320;0;0;0;0;testbench.dbs;F0;L4
S0;clock;2;0;testbench.dbs;T5;F0;L7
S0;reset;2;0;testbench.dbs;T5;F0;L7
S0;count_out;2;0;testbench.dbs;T0;F0;L8
C0;counter;1;0;testbench.dbs;M6;F0;L11

M3;sc_module;19;4352;0;0;0;0;<NONE>

T2;sc_uint<4>;17;134222336;4;32;0;0;<NONE>

T1;sc_uint<5>;17;134222336;5;32;0;0;<NONE>

T0;sc_uint<8>;17;4608;8;32;0;0;<NONE>

