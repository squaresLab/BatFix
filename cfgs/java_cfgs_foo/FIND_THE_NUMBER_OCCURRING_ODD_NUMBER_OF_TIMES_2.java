Nodes
1;special;;;
2;statement;int i;14;
3;statement;int res = 0;15;
4;statement;i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;res = foo_1 ^ foo_2[foo_3];19;
7;statement;i++;18;
8;statement;return foo_1;21;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;
