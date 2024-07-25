Nodes
1;special;;;
2;statement;String tmp = foo_1 + foo_2;14;
3;statement;int n = fun_1();15;
4;statement;int i = 1;16;
5;conditional;foo_1 <= foo_2;17;
6;statement;String substring = fun_1(foo_2, fun_2());19;
7;conditional;foo_1 == foo_2;20;
8;statement;return foo_1;20;
9;exit;;;
10;statement;i++;18;
11;statement;return foo_1;22;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;
6;8;10;
7;9;
8;
9;5;
10;9;
