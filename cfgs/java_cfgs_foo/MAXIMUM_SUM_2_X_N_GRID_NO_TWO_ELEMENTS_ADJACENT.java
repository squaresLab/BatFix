Nodes
1;special;;;
2;statement;int incl = fun_1(foo_1[0][0], foo_2[1][0]);14;
3;statement;int excl = 0;15;
4;statement;int excl_new;15;
5;statement;int i = 1;16;
6;conditional;foo_1 < foo_2;17;
7;statement;excl_new = fun_1(foo_1, foo_2);19;
8;statement;incl = foo_1 + fun_1(foo_2[0][foo_3], foo_4[1][foo_5]);20;
9;statement;excl = foo_1;21;
10;statement;i++;18;
11;statement;return fun_1(foo_1, foo_2);23;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;11;
6;8;
7;9;
8;10;
9;6;
10;12;
11;
