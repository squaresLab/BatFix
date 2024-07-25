Nodes
1;special;;;
2;conditional;(foo_1 == 0) || (foo_2 == 0);14;
3;statement;return false;14;
4;exit;;;
5;statement;long result = foo_1 * foo_2;15;
6;conditional;foo_1 == (foo_2 / foo_3);16;
7;statement;return false;16;
8;statement;return true;17;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;8;
6;4;
7;4;
