Nodes
1;statement;foo_1 = -1;8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 != foo_2;10;
4;statement;foo_1;15;
5;statement;fun_2(fun_2(foo_1) + ' ', end='');16;
6;conditional;foo_1[foo_2] % 2 == 0;11;
7;statement;foo_1 = foo_2 + 1;14;
8;statement;foo_1 = foo_2 + 1;12;
9;statement;(foo_1[foo_2], foo_3[foo_4]) = (foo_5[foo_6], foo_7[foo_8]);13;
10;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;4;
5;7;8;
6;3;
7;9;
8;7;
9;
