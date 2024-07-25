Nodes
1;special;;;
2;statement;int l = fun_1();14;
3;statement;char[] arr = fun_1();15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;foo_1[foo_2] == foo_3;19;
7;statement;foo_1[foo_2] = foo_3;19;
8;conditional;foo_1[foo_2] == foo_3;20;
9;statement;foo_1[foo_2] = foo_3;20;
10;statement;i++;18;
11;statement;return fun_1(foo_1);22;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;8;
6;10;
7;9;10;
8;10;
9;5;
10;12;
11;
