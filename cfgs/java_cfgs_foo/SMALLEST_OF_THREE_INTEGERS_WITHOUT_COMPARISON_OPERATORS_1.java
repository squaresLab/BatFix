Nodes
1;special;;;
2;conditional;(foo_1 / foo_2) != 1;14;
3;statement;return (foo_1 / foo_2) != 1 ? foo_3 : foo_4;14;
4;exit;;;
5;statement;return (foo_1 / foo_2) != 1 ? foo_3 : foo_4;15;
Edges
0;2;
1;3;5;
2;4;
3;
4;4;
