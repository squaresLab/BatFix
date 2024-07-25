Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;statement;return fun_1(foo_1);15;
4;conditional;foo_1 * foo_2 % foo_3 == 1;10;
5;statement;foo_1 = foo_2 + foo_3 * (foo_4 / foo_5);11;
6;conditional;foo_1 > foo_2;12;
7;statement;foo_1 += (foo_2 - foo_3) / foo_4 + 1;14;
8;statement;foo_1 -= foo_2;13;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;2;5;
4;6;
5;7;8;
6;2;
7;7;
8;