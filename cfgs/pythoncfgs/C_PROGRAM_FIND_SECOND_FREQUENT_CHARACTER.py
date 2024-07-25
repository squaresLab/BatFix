Nodes
1;statement;foo_1 = 256;8;
2;statement;foo_1 = [0] * foo_2;9;
3;conditional;fun_2(fun_2(foo_1));10;
4;statement;(foo_1, foo_2) = (0, 0);12;
5;conditional;fun_1(foo_1);13;
6;statement;return fun_1(foo_1);19;
7;conditional;foo_1[foo_2] > foo_3[foo_4];14;
8;conditional;foo_1[foo_2] > foo_3[foo_4] and foo_5[foo_6] != foo_7[foo_8];17;
9;statement;foo_1 = foo_2;18;
10;statement;foo_1 = foo_2;15;
11;statement;foo_1 = foo_2;16;
12;statement;foo_1[fun_1(foo_2[foo_3])] += 1;11;
13;exit;;
Edges
0;2;
1;3;
2;4;12;
3;5;
4;6;7;
5;13;
6;8;10;
7;5;9;
8;5;
9;11;
10;5;
11;3;
12;