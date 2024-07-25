Nodes
1;special;;;
2;statement;int res = 1;14;
3;statement;int i = foo_1;15;
4;conditional;foo_1 >= 0;16;
5;conditional;(foo_1 == 0) || (foo_2 == 1);18;
6;statement;return foo_1;18;
7;exit;;;
8;statement;res *= foo_1;19;
9;statement;i = foo_1 - 2;17;
10;statement;return foo_1;21;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;8;
5;7;
6;
7;9;
8;4;
9;7;
