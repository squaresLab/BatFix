Nodes
1;special;;;
2;conditional;foo_1 >= foo_2;14;
3;statement;int mid = (foo_1 + foo_2) / 2;15;
4;conditional;foo_1 == foo_2[foo_3];16;
5;statement;return foo_1;16;
6;exit;;;
7;conditional;foo_1 > foo_2[foo_3];17;
8;statement;return fun_1(foo_1, foo_2 + 1, foo_3);17;
9;statement;return fun_1(foo_1, foo_2, foo_3 - 1);18;
10;statement;return -1;20;
Edges
0;2;
1;3;10;
2;4;
3;5;7;
4;6;
5;
6;8;9;
7;6;
8;6;
9;6;
