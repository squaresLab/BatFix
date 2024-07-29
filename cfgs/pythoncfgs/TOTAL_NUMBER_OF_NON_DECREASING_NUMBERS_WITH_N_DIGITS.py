Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(10)];8;
2;conditional;fun_1(10);9;
3;conditional;fun_1(10);11;
4;statement;foo_1 = 0;15;
5;conditional;fun_1(10);16;
6;statement;return foo_1;18;
7;statement;foo_1 += foo_2[foo_3][foo_4];17;
8;conditional;foo < foo;12;
9;conditional;fun_1(foo_1 + 1);13;
10;statement;foo_1[foo_2][foo_3] += foo_4[foo_5][foo_6 - 1];14;
11;statement;foo_1[foo_2][1] = 1;10;
12;exit;;
Edges
0;2;
1;3;11;
2;4;8;
3;5;
4;6;7;
5;12;
6;5;
7;3;9;
8;8;10;
9;9;
10;2;
11;
