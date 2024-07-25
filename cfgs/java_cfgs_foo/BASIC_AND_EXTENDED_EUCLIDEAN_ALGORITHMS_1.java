Nodes
1;special;;;
2;conditional;foo_1 == 0;14;
3;statement;x = 0;15;
4;statement;y = 1;16;
5;statement;return foo_1;17;
6;exit;;;
7;statement;int x1 = 1;19;
8;statement;int y1 = 1;19;
9;statement;int gcd = fun_1(foo_1 % foo_2, foo_3, foo_4, foo_5);20;
10;statement;x = foo_1 - ((foo_2 / foo_3) * foo_4);21;
11;statement;y = foo_1;22;
12;statement;return foo_1;23;
Edges
0;2;
1;3;7;
2;4;
3;5;
4;6;
5;
6;8;
7;9;
8;10;
9;11;
10;12;
11;6;
