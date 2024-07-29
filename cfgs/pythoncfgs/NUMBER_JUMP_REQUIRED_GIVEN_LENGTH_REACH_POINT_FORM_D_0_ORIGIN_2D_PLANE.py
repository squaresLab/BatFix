Nodes
1;statement;foo_1 = foo_2;8;
2;statement;foo_1 = fun_1(foo_2, foo_3);9;
3;statement;foo_1 = fun_1(foo_2, foo_3);10;
4;conditional;foo_1 >= foo_2;11;
5;conditional;foo_1 == 0;13;
6;conditional;foo_1 == foo_2;15;
7;statement;return 2;17;
8;statement;return 1;16;
9;statement;return 0;14;
10;statement;return (foo_1 + foo_2 - 1) / foo_3;12;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;9;
5;7;8;
6;11;
7;11;
8;11;
9;11;
10;
