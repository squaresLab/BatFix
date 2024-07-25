Nodes
1;statement;foo_1 = fun_1(foo_2);10;
2;statement;foo_1 = foo_2 * foo_3;11;
3;conditional;foo_1 == foo_2;12;
4;statement;foo_1 = foo_2 / foo_3;15;
5;statement;foo_1 = 2 * (foo_2 + foo_3);16;
6;conditional;foo_1 % foo_2 != 0;17;
7;statement;return foo_1;19;
8;statement;foo_1 += 2;18;
9;statement;return foo_1 * 4;13;
10;exit;;
Edges
0;2;
1;3;
2;4;9;
3;5;
4;6;
5;7;8;
6;10;
7;7;
8;10;
9;