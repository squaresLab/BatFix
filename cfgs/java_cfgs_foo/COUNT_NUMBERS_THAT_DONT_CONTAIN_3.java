Nodes
1;special;;;
2;conditional;foo_1 < 3;14;
3;statement;return foo_1;14;
4;exit;;;
5;conditional;(foo_1 >= 3) && (foo_2 < 10);15;
6;statement;return foo_1 - 1;15;
7;statement;int po = 1;16;
8;conditional;(foo_1 / foo_2) > 9;17;
9;statement;po = foo_1 * 10;17;
10;statement;int msd = foo_1 / foo_2;18;
11;conditional;foo_1 != 3;19;
12;statement;return ((fun_1(foo_1) * fun_2(foo_2 - 1)) + fun_3(foo_3)) + fun_4(foo_4 % foo_5);19;
13;statement;return fun_1((foo_1 * foo_2) - 1);20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;
7;10;9;
8;8;
9;11;
10;12;13;
11;4;
12;4;
