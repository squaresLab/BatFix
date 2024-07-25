Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int p = fun_1(foo_1 * foo_2);15;
4;conditional;foo_1 == 0;16;
5;statement;return 1;16;
6;exit;;;
7;conditional;foo_1 > 0;17;
8;statement;count++;18;
9;statement;p = foo_1 / 10;19;
10;statement;return foo_1;21;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;
6;10;8;
7;9;
8;7;
9;6;
