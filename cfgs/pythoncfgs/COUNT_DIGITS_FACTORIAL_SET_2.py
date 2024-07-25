Nodes
1;conditional;foo_1 < 0;10;
2;conditional;foo_1 <= 1;12;
3;statement;foo_1 = foo_2 * fun_1(foo_3 / foo_4.e) + fun_2(2 * foo_5.pi * foo_6) / 2.0;14;
4;statement;return fun_1(foo_1) + 1;15;
5;statement;return 1;13;
6;statement;return 0;11;
7;exit;;
Edges
0;2;6;
1;3;5;
2;4;
3;7;
4;7;
5;7;
6;