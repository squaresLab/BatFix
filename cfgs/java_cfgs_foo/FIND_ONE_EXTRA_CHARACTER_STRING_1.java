Nodes
1;special;;;
2;statement;int res = 0;14;
3;statement;int i;14;
4;statement;i = 0;15;
5;conditional;foo_1 < fun_1();16;
6;statement;res ^= fun_1(foo_2);18;
7;statement;i++;17;
8;statement;i = 0;20;
9;conditional;foo_1 < fun_1();21;
10;statement;res ^= fun_1(foo_2);23;
11;statement;i++;22;
12;statement;return ((char) (foo_1));25;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;10;12;
9;11;
10;9;
11;13;
12;
