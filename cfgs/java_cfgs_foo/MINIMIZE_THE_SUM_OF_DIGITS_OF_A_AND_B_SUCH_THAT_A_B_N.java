Nodes
1;special;;;
2;statement;int sum = 0;14;
3;conditional;foo_1 > 0;15;
4;statement;sum += foo_1 % 10;16;
5;statement;n /= 10;17;
6;conditional;foo_1 == 1;19;
7;statement;return 10;19;
8;exit;;;
9;statement;return foo_1;20;
Edges
0;2;
1;3;
2;6;4;
3;5;
4;3;
5;7;9;
6;8;
7;
8;8;
