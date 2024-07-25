Nodes
1;special;;;
2;statement;int min = foo_1[0];14;
3;statement;int min_index = -1;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < foo_2;16;
6;conditional;foo_1 > foo_2[foo_3];18;
7;statement;min = foo_1[foo_2];19;
8;statement;min_index = foo_1;20;
9;statement;i++;17;
10;statement;return foo_1;23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;9;
6;8;
7;9;
8;5;
9;11;
10;
