@0;moduleinfo.sc;5;17;0;gnuc;4;2;0

F1;C:/Users/lk2v17/OneDrive - University of Southampton/SystemC/ModelSim/trying/lk_counter\lk_counter.cpp
F0;C:/Users/lk2v17/OneDrive - University of Southampton/SystemC/ModelSim/trying/lk_counter\testbench.cpp


T11;bool;12;0;1;1;0;0;<NONE>

M10;counter;19;134230016;512;512;0;0;lk_counter.dbs;F1;L2
B0;sc_core::sc_module;256;0;<NONE>;M4
P0;clock;12;132;lk_counter.dbs;T6;F1;L4
P0;reset;12;248;lk_counter.dbs;T6;F1;L4
P0;count_out;20;364;lk_counter.dbs;T2;F1;L5
V0;count_buf;0;480;lk_counter.dbs;T2;F1;L7
N0;counter;(sc_core::sc_module_name);lk_counter.dbs;F1;L23
N0;count;();lk_counter.dbs;F1;L10

T9;int;5;134217728;4;4;0;0;<NONE>

M8;lk_counter;19;12288;728;728;0;0;lk_counter.dbs;F1;L6
B0;sc_core::sc_module;256;0;<NONE>;M4
P0;clock;12;132;lk_counter.dbs;T11;F1;L8
P0;reset;12;248;lk_counter.dbs;T6;F1;L9
P0;count_ctrl;12;364;lk_counter.dbs;T3;F1;L10
P0;count_data;12;472;lk_counter.dbs;T0;F1;L11
P0;count_out;20;580;lk_counter.dbs;T0;F1;L12
V0;count_buf;0;696;lk_counter.dbs;T0;F1;L14
N0;lk_counter;(sc_core::sc_module_name);lk_counter.dbs;F1;L40
N0;count;();lk_counter.dbs;F1;L17

T7;sc_clock;30;0;0;0;0;0;<NONE>

T6;sc_logic;14;4096;1;12;0;0;<NONE>

M5;sc_main;19;8320;0;0;0;0;testbench.dbs;F0;L6
S0;clock;2;0;testbench.dbs;T7;F0;L9
S0;reset;2;0;testbench.dbs;T6;F0;L10
S0;count_ctrl;2;0;testbench.dbs;T3;F0;L12
S0;count_data;2;0;testbench.dbs;T0;F0;L13
S0;count_out;2;0;testbench.dbs;T0;F0;L14
C0;counter;1;0;testbench.dbs;M8;F0;L17

M4;sc_module;19;4352;0;0;0;0;<NONE>

T3;sc_uint<2>;17;4608;2;32;0;0;<NONE>

T2;sc_uint<4>;17;134222336;4;32;0;0;<NONE>

T1;sc_uint<5>;17;134222336;5;32;0;0;<NONE>

T0;sc_uint<8>;17;4608;8;32;0;0;<NONE>

