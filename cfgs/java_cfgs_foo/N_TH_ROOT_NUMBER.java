Nodes
1;special;;;
2;statement;double xPre = fun_1() % 10;14;
3;statement;double eps = 0.001;15;
4;statement;double delX = 2147483647;16;
5;statement;double xK = 0.0;17;
6;conditional;foo_1 > foo_2;18;
7;statement;xK = (((foo_1 - 1.0) * foo_2) + (((double) (foo_3)) / fun_1(foo_4, foo_5 - 1))) / ((double) (foo_6));19;
8;statement;delX = fun_1(foo_1 - foo_2);20;
9;statement;xPre = foo_1;21;
10;statement;return foo_1;23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;10;7;
6;8;
7;9;
8;6;
9;11;
10;
