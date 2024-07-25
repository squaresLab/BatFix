Nodes
1;conditional;foo_1 > foo_2;10;
2;conditional;foo_1 == foo_2;12;
3;conditional;foo_1 == foo_2 - 1;14;
4;conditional;foo_1[foo_2] == foo_3[foo_4];16;
5;statement;return fun_3(fun_2(foo_1, foo_2, foo_3 - 1), fun_3(foo_4, foo_5 + 1, foo_6)) + 1;19;
6;statement;return fun_1(foo_1, foo_2 + 1, foo_3 - 1);17;
7;statement;return 0 if foo_1[foo_2] == foo_3[foo_4] else 1;15;
8;statement;return 0;13;
9;statement;return foo_1.maxsize;11;
10;exit;;
Edges
0;2;9;
1;3;8;
2;4;7;
3;5;6;
4;10;
5;10;
6;10;
7;10;
8;10;
9;