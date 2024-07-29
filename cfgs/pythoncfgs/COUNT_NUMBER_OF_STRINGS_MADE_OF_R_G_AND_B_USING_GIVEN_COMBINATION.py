Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3 + 1)];8;
2;statement;foo_1[0] = 1;9;
3;conditional;fun_1(1, foo_1 + 1, 1);10;
4;statement;foo_1 = foo_2 - (foo_3 + foo_4 + foo_5);12;
5;statement;foo_1 = 0;13;
6;conditional;fun_1(0, foo_1 + 1, 1);14;
7;statement;return foo_1;18;
8;conditional;fun_1(0, foo_1 - foo_2 + 1, 1);15;
9;statement;foo_1 = foo_2 - (foo_3 + foo_4);16;
10;statement;foo_1 = foo_2 + foo_3[foo_4] / (foo_5[foo_6 + foo_7] * foo_8[foo_9 + foo_10] * foo_11[foo_12 + foo_13]);17;
11;statement;foo_1[foo_2] = foo_3[foo_4 - 1] * foo_5;11;
12;exit;;
Edges
0;2;
1;3;
2;4;11;
3;5;
4;6;
5;7;8;
6;12;
7;6;9;
8;10;
9;8;
10;3;
11;
