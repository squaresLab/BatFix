Nodes
1;special;;;
2;statement;int i = 1;14;
3;statement;int fact = 1;15;
4;statement;i = 1;16;
5;conditional;foo_1 < foo_2;17;
6;statement;fact = foo_1 * foo_2;19;
7;conditional;(foo_1 % foo_2) == 0;20;
8;statement;break;20;
9;statement;i++;18;
10;statement;return foo_1;22;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;
6;8;9;
7;10;
8;5;
9;11;
10;
