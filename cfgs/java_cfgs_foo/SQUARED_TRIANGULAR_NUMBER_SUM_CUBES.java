Nodes
1;special;;;
2;statement;int sum = 0;14;
3;statement;int n = 1;15;
4;conditional;foo_1 < foo_2;16;
5;statement;sum += (foo_1 * foo_2) * foo_3;18;
6;conditional;foo_1 == foo_2;19;
7;statement;return foo_1;19;
8;exit;;;
9;statement;n++;17;
10;statement;return -1;21;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;
5;7;9;
6;8;
7;
8;4;
9;8;
