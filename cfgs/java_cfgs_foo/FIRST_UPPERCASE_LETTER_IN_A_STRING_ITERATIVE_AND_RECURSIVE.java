Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < fun_1();15;
4;conditional;fun_1(fun_2(foo_2));16;
5;statement;return fun_1(foo_2);16;
6;exit;;;
7;statement;i++;16;
8;statement;return 0;17;
Edges
0;2;
1;3;
2;4;8;
3;5;7;
4;6;
5;
6;3;
7;6;
