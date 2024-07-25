Nodes
1;special;;;
2;conditional;(foo_1 == 0) || (foo_2 == 9);14;
3;statement;return true;14;
4;exit;;;
5;conditional;foo_1 < 9;15;
6;statement;return false;15;
7;statement;return fun_1(((int) (foo_1 >> 3)) - ((int) (foo_2 & 7)));16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;4;
