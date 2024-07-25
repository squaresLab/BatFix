Nodes
1;special;;;
2;statement;int max_ele = foo_1[foo_2 - 1];14;
3;statement;int min_ele = foo_1[0];15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;(foo_1 % 2) == 0;19;
7;statement;foo_1[foo_2] = foo_3;20;
8;statement;max_ele -= 1;21;
9;statement;foo_1[foo_2] = foo_3;24;
10;statement;min_ele += 1;25;
11;statement;i++;18;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;12;
5;7;9;
6;8;
7;11;
8;10;
9;11;
10;5;
11;
