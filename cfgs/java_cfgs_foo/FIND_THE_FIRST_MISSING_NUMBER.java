Nodes
1;special;;;
2;conditional;foo_1 > foo_2;14;
3;statement;return foo_1 + 1;14;
4;exit;;;
5;conditional;foo_1 != foo_2[foo_3];15;
6;statement;return foo_1;15;
7;statement;int mid = (foo_1 + foo_2) / 2;16;
8;conditional;foo_1[foo_2] == foo_3;17;
9;statement;return fun_1(foo_1, foo_2 + 1, foo_3);17;
10;statement;return fun_1(foo_1, foo_2, foo_3);18;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;
7;9;10;
8;4;
9;4;
