Nodes
1;special;;;
2;statement;int variable = 1;14;
3;conditional;foo_1 == foo_2;15;
4;statement;return 1;15;
5;exit;;;
6;conditional;(foo_1 - foo_2) >= 5;16;
7;statement;return 0;16;
8;statement;long i = foo_1 + 1;18;
9;conditional;foo_1 <= foo_2;19;
10;statement;variable = ((int) (foo_1 * (foo_2 % 10))) % 10;20;
11;statement;i++;20;
12;statement;return foo_1 % 10;21;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;
5;7;8;
6;5;
7;9;
8;10;12;
9;11;
10;9;
11;5;
