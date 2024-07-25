Nodes
1;conditional;foo_1 == 0;8;
2;statement;foo_1 = 1;12;
3;statement;foo_1 = 1;13;
4;statement;foo_1 = fun_1(foo_2 % foo_3, foo_4, foo_5, foo_6);14;
5;statement;foo_1 = foo_2 - foo_3 / foo_4 * foo_5;15;
6;statement;foo_1 = foo_2;16;
7;statement;return foo_1;17;
8;statement;foo_1 = 0;9;
9;statement;foo_1 = 1;10;
10;statement;return foo_1;11;
11;exit;;
Edges
0;2;8;
1;3;
2;4;
3;5;
4;6;
5;7;
6;11;
7;9;
8;10;
9;11;
10;