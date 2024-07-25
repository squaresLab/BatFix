Nodes
1;special;;;
2;statement;char last = ' ';12;
3;statement;int res = 0;13;
4;statement;int i = 0;14;
5;conditional;foo_1 < foo_2;15;
6;conditional;foo_1 != fun_1(foo_3);17;
7;statement;res++;17;
8;statement;last = fun_1(foo_2);18;
9;statement;i++;16;
10;statement;return foo_1 / 2;20;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;8;
6;8;
7;9;
8;5;
9;11;
10;
