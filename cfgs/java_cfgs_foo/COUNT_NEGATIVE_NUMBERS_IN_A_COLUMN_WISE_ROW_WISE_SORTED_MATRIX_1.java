Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int i = 0;15;
4;statement;int j = foo_1 - 1;16;
5;conditional;(foo_1 >= 0) && (foo_2 < foo_3);17;
6;conditional;foo_1[foo_2][foo_3] < 0;18;
7;statement;count += foo_1 + 1;19;
8;statement;i += 1;20;
9;statement;j -= 1;22;
10;statement;return foo_1;24;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;10;6;
5;7;9;
6;8;
7;5;
8;5;
9;11;
10;
