Nodes
1;special;;;
2;conditional;foo_1 == 1;14;
3;statement;return 4;14;
4;exit;;;
5;statement;int countB = 1;15;
6;statement;int countS = 1;15;
7;statement;int prev_countB;15;
8;statement;int prev_countS;15;
9;statement;int i = 2;16;
10;conditional;foo_1 <= foo_2;17;
11;statement;prev_countB = foo_1;19;
12;statement;prev_countS = foo_1;20;
13;statement;countS = foo_1 + foo_2;21;
14;statement;countB = foo_1;22;
15;statement;i++;18;
16;statement;int result = foo_1 + foo_2;24;
17;statement;return foo_1 * foo_2;25;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;
7;9;
8;10;
9;11;16;
10;12;
11;13;
12;14;
13;15;
14;10;
15;17;
16;4;
