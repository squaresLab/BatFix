Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int a = 0;15;
4;statement;int b = 0;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;conditional;(foo_1 % 2) != 0;19;
8;statement;a = (foo_1 * 10) + foo_2[foo_3];19;
9;statement;b = (foo_1 * 10) + foo_2[foo_3];20;
10;statement;i++;18;
11;statement;return foo_1 + foo_2;22;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;11;
6;8;9;
7;10;
8;10;
9;6;
10;12;
11;
