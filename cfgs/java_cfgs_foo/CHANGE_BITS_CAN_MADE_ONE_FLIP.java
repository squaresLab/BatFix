Nodes
1;special;;;
2;statement;int zeros = 0;14;
3;statement;int ones = 0;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < fun_1();16;
6;statement;char ch = fun_1(foo_2);18;
7;conditional;foo_1 == '0';19;
8;statement;++zeros;19;
9;statement;++ones;20;
10;statement;i++;17;
11;statement;return (foo_1 == 1) || (foo_2 == 1);22;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;
6;8;9;
7;10;
8;10;
9;5;
10;12;
11;
