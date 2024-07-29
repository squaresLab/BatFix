Nodes
1;conditional;foo_1 < 0;8;
2;conditional;foo_1 < 0 or foo_2 < 0;10;
3;statement;foo_1 = foo_2[foo_3][foo_4][foo_5];12;
4;conditional;foo_1 != -1;13;
5;statement;foo_1 = fun_3(fun_2(foo_2, foo_3, foo_4 - 1, foo_5, foo_6, foo_7), fun_3(foo_8, foo_9, foo_10, foo_11, foo_12 - 1, foo_13));15;
6;conditional;foo_1[foo_2 - 1] == foo_3[foo_4 - 1];16;
7;statement;foo_1 = fun_2(foo_2, fun_2(foo_3, foo_4, foo_5 - 1, foo_6, foo_7 - 1, foo_8 - 1));18;
8;statement;return foo_1;19;
9;statement;foo_1 = fun_2(foo_2, 1 + fun_2(foo_3, foo_4, foo_5 - 1, foo_6, foo_7 - 1, foo_8));17;
10;statement;return foo_1;14;
11;statement;return 0;11;
12;statement;return -10 ** 7;9;
13;exit;;
Edges
0;2;12;
1;3;11;
2;4;
3;5;10;
4;6;
5;7;9;
6;8;
7;13;
8;7;
9;13;
10;13;
11;13;
12;
