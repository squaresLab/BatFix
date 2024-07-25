Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int res = -1;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < (foo_2 - 1);17;
6;statement;int j = foo_1 + 1;18;
7;conditional;foo_1 < foo_2;19;
8;conditional;fun_1(foo_2) == fun_2(foo_4);20;
9;statement;res = fun_1(foo_1, fun_2((foo_2 - foo_3) - 1));20;
10;statement;j++;20;
11;statement;i++;18;
12;statement;return foo_1;21;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;12;
5;7;
6;8;11;
7;9;10;
8;10;
9;7;
10;5;
11;13;
12;
