Nodes
1;special;;;
2;statement;int aCount = 0;14;
3;statement;int bCount = 0;15;
4;statement;int cCount = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < fun_1();18;
7;conditional;fun_1(foo_2) == 'a';20;
8;statement;aCount = 1 + (2 * foo_1);20;
9;conditional;fun_1(foo_2) == 'b';21;
10;statement;bCount = foo_1 + (2 * foo_2);21;
11;conditional;fun_1(foo_2) == 'c';22;
12;statement;cCount = foo_1 + (2 * foo_2);22;
13;statement;i++;19;
14;statement;return foo_1;24;
15;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;14;
6;8;9;
7;13;
8;10;11;
9;13;
10;12;13;
11;13;
12;6;
13;15;
14;
