Nodes
1;special;;;
2;statement;int fact = 1;14;
3;statement;int x = 1;14;
4;conditional;foo_1 < foo_2;15;
5;statement;fact = foo_1 * foo_2;16;
6;statement;x++;17;
7;statement;int res = 0;19;
8;conditional;foo_1 <= foo_2;20;
9;statement;res++;21;
10;statement;fact = foo_1 * foo_2;22;
11;statement;x++;23;
12;statement;return foo_1;25;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;7;5;
4;6;
5;4;
6;8;
7;12;9;
8;10;
9;11;
10;8;
11;13;
12;
