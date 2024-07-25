Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int x = foo_1 & (foo_2 - 1);15;
4;conditional;(foo_1 > 0) && (foo_2 == 0);16;
5;conditional;foo_1 > 1;17;
6;statement;n >>= 1;18;
7;statement;count += 1;19;
8;statement;return (foo_1 % 2) == 0 ? 1 : 0;21;
9;exit;;;
10;statement;return 0;23;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;8;6;
5;7;
6;5;
7;9;
8;
9;9;
