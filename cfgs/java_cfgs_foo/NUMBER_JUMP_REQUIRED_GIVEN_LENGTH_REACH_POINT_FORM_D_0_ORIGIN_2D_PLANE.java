Nodes
1;special;;;
2;statement;int temp = foo_1;14;
3;statement;a = fun_1(foo_1, foo_2);15;
4;statement;b = fun_1(foo_1, foo_2);16;
5;conditional;foo_1 >= foo_2;17;
6;statement;return ((foo_1 + foo_2) - 1) / foo_3;17;
7;exit;;;
8;conditional;foo_1 == 0;18;
9;statement;return 0;18;
10;conditional;foo_1 == foo_2;19;
11;statement;return 1;19;
12;statement;return 2;20;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;
7;9;10;
8;7;
9;11;12;
10;7;
11;7;
