Nodes
1;conditional;foo_1 <= 0;10;
2;statement;foo_1 = 4;12;
3;conditional;foo < foo;13;
4;statement;return foo_1;18;
5;statement;foo_1 = foo_2 * foo_3 - foo_4 * foo_5;14;
6;statement;foo_1 = fun_2(fun_2(foo_2));15;
7;conditional;foo_1 * foo_2 == foo_3;16;
8;statement;foo_1 += 4;17;
9;statement;return 0;11;
10;exit;;
Edges
0;2;9;
1;3;
2;4;5;
3;10;
4;6;
5;7;
6;3;8;
7;3;
8;10;
9;