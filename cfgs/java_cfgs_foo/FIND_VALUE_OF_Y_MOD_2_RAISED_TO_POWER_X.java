Nodes
1;special;;;
2;conditional;(fun_1(foo_1) / fun_2(2)) < foo_2;14;
3;statement;return foo_1;14;
4;exit;;;
5;conditional;foo_1 > 63;15;
6;statement;return foo_1;15;
7;statement;return foo_1 % (1 << ((int) (foo_2)));16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;4;
