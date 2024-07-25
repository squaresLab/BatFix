Nodes
1;special;;;
2;conditional;foo_1 > foo_2;14;
3;statement;return Integer.MAX_VALUE;14;
4;exit;;;
5;conditional;foo_1 == foo_2;15;
6;statement;return 0;15;
7;conditional;foo_1 == (foo_2 - 1);16;
8;statement;return foo_1[foo_2] == foo_3[foo_4] ? 0 : 1;16;
9;statement;return foo_1[foo_2] == foo_3[foo_4] ? fun_1(foo_5, foo_6 + 1, foo_7 - 1) : fun_2(fun_3(foo_8, foo_9, foo_10 - 1), fun_4(foo_11, foo_12 + 1, foo_13)) + 1;17;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;9;
7;4;
8;4;
