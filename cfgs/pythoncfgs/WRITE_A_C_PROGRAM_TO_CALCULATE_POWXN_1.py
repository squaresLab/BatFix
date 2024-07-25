Nodes
1;conditional;foo_1 == 0;8;
2;statement;foo_1 = fun_2(foo_2, fun_2(foo_3 / 2));9;
3;conditional;foo_1 % 2 == 0;10;
4;conditional;foo_1 > 0;13;
5;statement;return foo_1 * foo_2 / foo_3;14;
6;statement;return foo_1 * foo_2 * foo_3;13;
7;statement;return foo_1 * foo_2;11;
8;statement;return 1;8;
9;exit;;
Edges
0;2;8;
1;3;
2;4;7;
3;5;6;
4;9;
5;9;
6;9;
7;9;
8;