Nodes
1;special;;;
2;conditional;foo_1 < foo_2;14;
3;statement;return 0;14;
4;exit;;;
5;conditional;foo_1 == 0;15;
6;statement;return 1;15;
7;statement;return fun_1(foo_1 - 1, foo_2) + fun_2(foo_3 / 2, foo_4 - 1);16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;4;
