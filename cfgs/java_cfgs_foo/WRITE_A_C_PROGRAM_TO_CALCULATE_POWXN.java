Nodes
1;special;;;
2;conditional;foo_1 == 0;14;
3;statement;return 1;14;
4;exit;;;
5;conditional;(foo_1 % 2) == 0;15;
6;statement;return fun_1(foo_1, foo_2 / 2) * fun_2(foo_3, foo_4 / 2);15;
7;statement;return (foo_1 * fun_1(foo_2, foo_3 / 2)) * fun_2(foo_4, foo_5 / 2);16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;4;
