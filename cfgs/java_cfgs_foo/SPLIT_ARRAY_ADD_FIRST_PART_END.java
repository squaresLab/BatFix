Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < foo_2;15;
4;statement;int x = foo_1[0];17;
5;statement;int j = 0;18;
6;conditional;foo_1 < (foo_2 - 1);19;
7;statement;foo_1[foo_2] = foo_3[foo_4 + 1];20;
8;statement;++j;20;
9;statement;foo_1[foo_2 - 1] = foo_3;21;
10;statement;i++;16;
11;exit;;;
Edges
0;2;
1;3;
2;4;11;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;
9;3;
10;
