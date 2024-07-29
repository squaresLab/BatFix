Nodes
1;conditional;foo_1 < 3;8;
2;conditional;foo_1 >= 3 and foo_2 < 10;10;
3;statement;foo_1 = 1;12;
4;conditional;foo_1 / foo_2 > 9;13;
5;statement;foo_1 = foo_2 / foo_3;15;
6;conditional;foo_1 != 3;16;
7;statement;return fun_1(foo_1 * foo_2 - 1);19;
8;statement;return fun_1(foo_1) * fun_2(foo_2 - 1) + fun_3(foo_3) + fun_4(foo_4 % foo_5);17;
9;statement;foo_1 = foo_2 * 10;14;
10;statement;return foo_1 - 1;11;
11;statement;return foo_1;9;
12;exit;;
Edges
0;2;11;
1;3;10;
2;4;
3;5;9;
4;6;
5;7;8;
6;12;
7;12;
8;4;
9;12;
10;12;
11;
