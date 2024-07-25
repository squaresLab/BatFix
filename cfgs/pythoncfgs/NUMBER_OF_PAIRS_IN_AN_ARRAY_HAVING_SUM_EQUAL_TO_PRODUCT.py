Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;statement;foo_1 = foo_2 * (foo_3 - 1) // 2 + foo_4 * (foo_5 - 1) // 2;15;
5;statement;return foo_1;17;
6;conditional;foo_1[foo_2] == 0;11;
7;conditional;foo_1[foo_2] == 2;13;
8;statement;foo_1 += 1;14;
9;statement;foo_1 += 1;12;
10;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;10;
5;7;9;
6;3;8;
7;3;
8;7;
9;