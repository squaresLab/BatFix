Nodes
1;statement;foo_1 = [[0] * foo_2] * foo_3;8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;12;
4;conditional;fun_1(foo_1);13;
5;statement;return fun_1(foo_1 / 2);17;
6;conditional;fun_1(foo_1);14;
7;conditional;foo_1[foo_2][foo_3] != foo_4[foo_5][foo_6];15;
8;statement;foo_1 += 1;16;
9;conditional;fun_1(foo_1);10;
10;statement;foo_1[foo_2][foo_3] = foo_4[foo_5][foo_6];11;
11;exit;;
Edges
0;2;
1;3;9;
2;4;
3;5;6;
4;11;
5;4;7;
6;6;8;
7;6;
8;2;10;
9;9;
10;