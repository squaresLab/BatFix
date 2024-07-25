Nodes
1;special;;;
2;statement;int sum = 0;14;
3;statement;int i = 2;15;
4;conditional;(foo_1 * foo_2) <= foo_3;16;
5;conditional;(foo_1 % foo_2) == 0;18;
6;statement;sum += foo_1;19;
7;statement;num /= foo_1;20;
8;statement;i++;17;
9;statement;sum += foo_1;23;
10;statement;return foo_1;24;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;8;6;
5;7;
6;5;
7;4;
8;10;
9;11;
10;
