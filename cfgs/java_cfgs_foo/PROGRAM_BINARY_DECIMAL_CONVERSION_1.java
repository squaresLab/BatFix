Nodes
1;special;;;
2;statement;String num = foo_1;14;
3;statement;int dec_value = 0;15;
4;statement;int base = 1;16;
5;statement;int len = fun_1();17;
6;statement;int i = foo_1 - 1;18;
7;conditional;foo_1 >= 0;19;
8;conditional;fun_1(foo_2) == '1';21;
9;statement;dec_value += foo_1;21;
10;statement;base = foo_1 * 2;22;
11;statement;i--;20;
12;statement;return foo_1;24;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;12;
7;9;10;
8;10;
9;11;
10;7;
11;13;
12;
