Nodes
1;special;;;
2;conditional;foo_1 < foo_2;14;
3;statement;return -1;14;
4;exit;;;
5;conditional;foo_1[foo_2] == foo_3;15;
6;statement;return foo_1;15;
7;conditional;foo_1[foo_2] == foo_3;16;
8;statement;return foo_1;16;
9;statement;return fun_1(foo_1, foo_2 + 1, foo_3 - 1, foo_4);17;
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
