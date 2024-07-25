Nodes
1;special;;;
2;statement;int sum = 0;14;
3;conditional;foo_1 != 0;15;
4;statement;sum = foo_1 + (foo_2 % 10);16;
5;statement;n = foo_1 / 10;17;
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
