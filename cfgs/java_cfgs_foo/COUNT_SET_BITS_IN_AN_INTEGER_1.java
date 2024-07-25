Nodes
1;special;;;
2;conditional;foo_1 == 0;14;
3;statement;return 0;14;
4;exit;;;
5;statement;return (foo_1 & 1) + fun_1(foo_2 >> 1);15;
Edges
0;2;
1;3;5;
2;4;
3;
4;4;
