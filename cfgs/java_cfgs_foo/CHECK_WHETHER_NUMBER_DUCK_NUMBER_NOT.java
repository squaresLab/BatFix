Nodes
1;special;;;
2;statement;int len = fun_1();14;
3;statement;int count_zero = 0;15;
4;statement;char ch;16;
5;statement;int i = 1;17;
6;conditional;foo_1 < foo_2;18;
7;statement;ch = fun_1(foo_2);20;
8;conditional;foo_1 == '0';21;
9;statement;count_zero++;21;
10;statement;i++;19;
11;statement;return foo_1;23;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;11;
6;8;
7;9;10;
8;10;
9;6;
10;12;
11;
