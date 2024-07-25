Nodes
1;special;;;
2;conditional;fun_1() != fun_2();14;
3;statement;return false;14;
4;exit;;;
5;statement;String clock_rot = "";15;
6;statement;String anticlock_rot = "";16;
7;statement;int len = fun_1();17;
8;statement;anticlock_rot = (foo_1 + fun_1(foo_3 - 2, foo_4)) + fun_2(0, foo_6 - 2);18;
9;statement;clock_rot = (foo_1 + fun_1(2)) + fun_2(0, 2);19;
10;statement;return fun_1(foo_2) || fun_2(foo_4);20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;
7;9;
8;10;
9;4;
