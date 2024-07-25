Nodes
1;special;;;
2;statement;int checker = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < fun_1();16;
5;statement;int val = fun_1(foo_2) - 'a';18;
6;conditional;(foo_1 & (1 << foo_2)) > 0;19;
7;statement;return foo_1;19;
8;exit;;;
9;statement;checker |= 1 << foo_1;20;
10;statement;++i;17;
11;statement;return -1;22;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;
5;7;9;
6;8;
7;
8;10;
9;4;
10;8;
