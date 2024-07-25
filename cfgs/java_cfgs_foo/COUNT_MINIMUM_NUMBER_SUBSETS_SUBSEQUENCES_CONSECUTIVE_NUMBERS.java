Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int count = 1;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < (foo_2 - 1);17;
6;conditional;(foo_1[foo_2] + 1) != foo_3[foo_4 + 1];19;
7;statement;count++;19;
8;statement;i++;18;
9;statement;return foo_1;21;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;8;
6;8;
7;5;
8;10;
9;
