Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 = 0;11;
5;conditional;fun_1(foo_1);12;
6;statement;return foo_1 * foo_2 + foo_3 * (foo_4 - 1) / 2 * foo_5 * foo_6;18;
7;conditional;foo_1[foo_2] == 'a';13;
8;conditional;foo_1[foo_2] == 'b';15;
9;statement;foo_1 += 1;16;
10;statement;foo_1 += foo_2;17;
11;statement;foo_1 += 1;14;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;12;
6;8;11;
7;5;9;
8;10;
9;5;
10;8;
11;