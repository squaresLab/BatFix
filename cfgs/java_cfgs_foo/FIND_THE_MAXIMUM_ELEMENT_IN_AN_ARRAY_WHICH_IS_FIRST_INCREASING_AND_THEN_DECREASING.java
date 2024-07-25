Nodes
1;special;;;
2;statement;int max = foo_1[foo_2];14;
3;statement;int i;15;
4;statement;i = foo_1;16;
5;conditional;foo_1 <= foo_2;17;
6;conditional;foo_1[foo_2] > foo_3;19;
7;statement;max = foo_1[foo_2];19;
8;statement;i++;18;
9;statement;return foo_1;21;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;8;
6;8;
7;5;
8;10;
9;
