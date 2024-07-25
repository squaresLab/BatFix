Nodes
1;special;;;
2;statement;long sum = 0;14;
3;statement;int row = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;sum = foo_1 + (1 << foo_2);18;
6;statement;row++;17;
7;statement;return foo_1;20;
8;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;
