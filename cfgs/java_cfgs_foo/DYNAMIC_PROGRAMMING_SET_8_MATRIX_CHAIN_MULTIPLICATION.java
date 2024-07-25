Nodes
1;special;;;
2;conditional;foo_1 == foo_2;14;
3;statement;return 0;14;
4;exit;;;
5;statement;int min = Integer.MAX_VALUE;15;
6;statement;int k = foo_1;16;
7;conditional;foo_1 < foo_2;17;
8;statement;int count = (fun_1(foo_1, foo_2, foo_3) + fun_2(foo_4, foo_5 + 1, foo_6)) + ((foo_7[foo_8 - 1] * foo_9[foo_10]) * foo_11[foo_12]);19;
9;conditional;foo_1 < foo_2;20;
10;statement;min = foo_1;20;
11;statement;k++;18;
12;statement;return foo_1;22;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;12;
7;9;
8;10;11;
9;11;
10;7;
11;4;
