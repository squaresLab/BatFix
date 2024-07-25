Nodes
1;special;;;
2;statement;String mx = "";14;
3;statement;int i = 0;15;
4;conditional;foo_1 < fun_1();16;
5;conditional;fun_1(foo_2) <= 0;18;
6;statement;mx = fun_1(foo_2);19;
7;statement;++i;17;
8;statement;return foo_1;22;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;7;
6;4;
7;9;
8;
