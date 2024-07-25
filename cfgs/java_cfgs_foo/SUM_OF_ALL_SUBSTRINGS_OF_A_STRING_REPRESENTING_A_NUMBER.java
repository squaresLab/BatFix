Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int[] sumofdigit = new int[foo_1];15;
4;statement;foo_1[0] = fun_1(0) - '0';16;
5;statement;int res = foo_1[0];17;
6;statement;int i = 1;18;
7;conditional;foo_1 < foo_2;19;
8;statement;int numi = fun_1(foo_2) - '0';21;
9;statement;foo_1[foo_2] = ((foo_3 + 1) * foo_4) + (10 * foo_5[foo_6 - 1]);22;
10;statement;res += foo_1[foo_2];23;
11;statement;i++;20;
12;statement;return foo_1;25;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;12;
7;9;
8;10;
9;11;
10;7;
11;13;
12;
