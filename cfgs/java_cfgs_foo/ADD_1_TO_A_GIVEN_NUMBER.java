Nodes
1;special;;;
2;statement;int m = 1;14;
3;conditional;((int) (foo_1 & foo_2)) >= 1;15;
4;statement;x = foo_1 ^ foo_2;16;
5;statement;m <<= 1;17;
6;statement;x = foo_1 ^ foo_2;19;
7;statement;return foo_1;20;
8;exit;;;
Edges
0;2;
1;3;
2;6;4;
3;5;
4;3;
5;7;
6;8;
7;
