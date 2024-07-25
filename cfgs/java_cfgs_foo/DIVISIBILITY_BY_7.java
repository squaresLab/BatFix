Nodes
1;special;;;
2;conditional;foo_1 < 0;14;
3;statement;return fun_1(-foo_1);14;
4;exit;;;
5;conditional;(foo_1 == 0) || (foo_2 == 7);15;
6;statement;return true;15;
7;conditional;foo_1 < 10;16;
8;statement;return false;16;
9;statement;return fun_1((foo_1 / 10) - (2 * (foo_2 - ((foo_3 / 10) * 10))));17;
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
