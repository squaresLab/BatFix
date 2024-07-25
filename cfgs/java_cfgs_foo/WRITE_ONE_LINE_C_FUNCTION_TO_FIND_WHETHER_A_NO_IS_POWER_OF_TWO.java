Nodes
1;special;;;
2;conditional;foo_1 == 0;14;
3;statement;return false;14;
4;exit;;;
5;conditional;foo_1 != 1;15;
6;conditional;(foo_1 % 2) != 0;16;
7;statement;return false;16;
8;statement;n = foo_1 / 2;17;
9;statement;return true;19;
Edges
0;2;
1;3;5;
2;4;
3;
4;9;6;
5;7;8;
6;4;
7;5;
8;4;
