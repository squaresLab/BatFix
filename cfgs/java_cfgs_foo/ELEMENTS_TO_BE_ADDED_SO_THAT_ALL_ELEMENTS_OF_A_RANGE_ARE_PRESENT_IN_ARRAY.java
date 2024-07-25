Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;fun_1(foo_1);15;
4;statement;int i = 0;16;
5;conditional;foo_1 < (foo_2 - 1);17;
6;conditional;(foo_1[foo_2] != foo_3[foo_4 + 1]) && (foo_5[foo_6] != (foo_7[foo_8 + 1] - 1));18;
7;statement;count += (foo_1[foo_2 + 1] - foo_3[foo_4]) - 1;18;
8;statement;i++;18;
9;statement;return foo_1;19;
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
