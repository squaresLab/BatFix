Nodes
1;special;;;
2;statement;int i;14;
3;statement;i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;foo_1[foo_2] == foo_3;18;
6;statement;return foo_1;19;
7;exit;;;
8;statement;i++;17;
9;statement;return -1;22;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;8;
5;7;
6;
7;4;
8;7;
