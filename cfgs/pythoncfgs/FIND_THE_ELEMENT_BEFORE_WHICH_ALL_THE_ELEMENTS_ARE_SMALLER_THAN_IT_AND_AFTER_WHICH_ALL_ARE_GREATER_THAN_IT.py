Nodes
1;statement;foo_1 = [None] * foo_2;8;
2;statement;foo_1[0] = fun_1('-inf');9;
3;conditional;foo < foo;10;
4;statement;foo_1 = fun_1('inf');12;
5;conditional;fun_1(foo_1 - 1, -1, -1);13;
6;statement;return -1;17;
7;conditional;foo_1[foo_2] < foo_3[foo_4] and foo_5 > foo_6[foo_7];14;
8;statement;foo_1 = fun_1(foo_2, foo_3[foo_4]);16;
9;statement;return foo_1;15;
10;statement;foo_1[foo_2] = fun_1(foo_3[foo_4 - 1], foo_5[foo_6 - 1]);11;
11;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;
4;6;7;
5;11;
6;8;9;
7;5;
8;11;
9;3;
10;
