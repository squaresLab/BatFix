Nodes
1;conditional;foo_1 >= foo_2;8;
2;statement;return -1;17;
3;statement;foo_1 = foo_2 + (foo_3 - foo_4) // 2;9;
4;conditional;foo_1[foo_2] == foo_3;10;
5;conditional;foo_1[foo_2] > foo_3;12;
6;statement;return fun_1(foo_1, foo_2 + 1, foo_3, foo_4);15;
7;statement;return fun_1(foo_1, foo_2, foo_3 - 1, foo_4);13;
8;statement;return foo_1;11;
9;exit;;
Edges
0;2;3;
1;9;
2;4;
3;5;8;
4;6;7;
5;9;
6;9;
7;9;
8;
