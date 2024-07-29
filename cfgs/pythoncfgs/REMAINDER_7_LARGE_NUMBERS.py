Nodes
1;statement;foo_1 = [1, 3, 2, -1, -3, -2];8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;conditional;fun_2(fun_2(foo_1) - 1, -1, -1);11;
5;conditional;foo_1 < 0;16;
6;statement;return foo_1;18;
7;statement;foo_1 = (foo_2 + 7) % 7;17;
8;statement;foo_1 = fun_1(foo_2[foo_3]) - 48;12;
9;statement;foo_1 += foo_2 * foo_3[foo_4];13;
10;statement;foo_1 = (foo_2 + 1) % 6;14;
11;statement;foo_1 %= 7;15;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;12;
6;6;
7;9;
8;10;
9;11;
10;4;
11;
