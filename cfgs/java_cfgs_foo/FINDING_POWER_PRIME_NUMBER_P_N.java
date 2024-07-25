Nodes
1;special;;;
2;statement;int ans = 0;14;
3;statement;int i = 1;15;
4;conditional;foo_1 <= foo_2;16;
5;statement;int count = 0;18;
6;statement;int temp = foo_1;18;
7;conditional;(foo_1 % foo_2) == 0;19;
8;statement;count++;20;
9;statement;temp = foo_1 / foo_2;21;
10;statement;ans += foo_1;23;
11;statement;i++;17;
12;statement;return foo_1;25;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;12;
4;6;
5;7;
6;10;8;
7;9;
8;7;
9;11;
10;4;
11;13;
12;
