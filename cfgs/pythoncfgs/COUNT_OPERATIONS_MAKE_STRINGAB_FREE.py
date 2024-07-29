Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;fun_2(fun_2(foo_1));10;
4;statement;return foo_1;16;
5;conditional;foo_1[~foo_2] == 'a';11;
6;statement;foo_1 += 1;15;
7;statement;foo_1 = foo_2 + foo_3;12;
8;statement;foo_1 = foo_2 * 2;13;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;7;
5;3;
6;8;
7;3;
8;
