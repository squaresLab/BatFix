Nodes
1;special;;;
2;statement;boolean parity = false;14;
3;conditional;foo_1 != 0;15;
4;statement;parity = !foo_1;16;
5;statement;n = foo_1 & (foo_2 - 1);17;
6;statement;return foo_1;19;
7;exit;;;
Edges
0;2;
1;3;
2;6;4;
3;5;
4;3;
5;7;
6;
