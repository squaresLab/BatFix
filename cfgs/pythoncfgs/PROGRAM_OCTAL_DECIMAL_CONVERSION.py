Nodes
1;statement;foo_1 = foo_2;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 1;10;
4;statement;foo_1 = foo_2;11;
5;conditional;foo_1;12;
6;statement;return foo_1;17;
7;statement;foo_1 = foo_2 % 10;13;
8;statement;foo_1 = fun_1(foo_2 / 10);14;
9;statement;foo_1 += foo_2 * foo_3;15;
10;statement;foo_1 = foo_2 * 8;16;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;11;
6;8;
7;9;
8;10;
9;5;
10;
