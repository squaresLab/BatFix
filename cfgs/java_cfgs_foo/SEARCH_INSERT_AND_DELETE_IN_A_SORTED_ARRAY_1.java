Nodes
1;special;;;
2;conditional;foo_1 >= foo_2;14;
3;statement;return foo_1;14;
4;exit;;;
5;statement;int i;15;
6;statement;i = foo_1 - 1;16;
7;conditional;(foo_1 >= 0) && (foo_2[foo_3] > foo_4);17;
8;statement;foo_1[foo_2 + 1] = foo_3[foo_4];18;
9;statement;i--;18;
10;statement;foo_1[foo_2 + 1] = foo_3;19;
11;statement;return foo_1 + 1;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;10;
7;9;
8;7;
9;11;
10;4;
