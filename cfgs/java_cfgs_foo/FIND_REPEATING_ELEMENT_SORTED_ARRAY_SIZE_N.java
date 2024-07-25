Nodes
1;special;;;
2;conditional;foo_1 > foo_2;14;
3;statement;return -1;14;
4;exit;;;
5;statement;int mid = (foo_1 + foo_2) / 2;15;
6;conditional;foo_1[foo_2] != (foo_3 + 1);16;
7;conditional;(foo_1 > 0) && (foo_2[foo_3] == foo_4[foo_5 - 1]);17;
8;statement;return foo_1;17;
9;statement;return fun_1(foo_1, foo_2, foo_3 - 1);18;
10;statement;return fun_1(foo_1, foo_2 + 1, foo_3);20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;10;
6;8;9;
7;4;
8;4;
9;4;
