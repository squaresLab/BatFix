Nodes
1;special;;;
2;statement;int res = 1;14;
3;statement;int i;14;
4;statement;i = 2;15;
5;conditional;foo_1 <= foo_2;16;
6;statement;res *= foo_1;17;
7;statement;i++;17;
8;statement;return foo_1;18;
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
