Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;conditional;foo_1 == 0;15;
4;statement;return false;15;
5;exit;;;
6;conditional;foo_1 == 1;16;
7;statement;return ((fun_1(0) - '0') % 4) == 0;16;
8;statement;int last = fun_1(foo_2 - 1) - '0';17;
9;statement;int second_last = fun_1(foo_2 - 2) - '0';18;
10;statement;return (((foo_1 * 10) + foo_2) % 4) == 0;19;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;7;8;
6;5;
7;9;
8;10;
9;5;
