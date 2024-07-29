Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3)] for foo_4 in fun_2(foo_5)];8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;12;
4;conditional;fun_1(foo_1);13;
5;statement;return foo_1;16;
6;conditional;fun_1(foo_1);14;
7;statement;foo_1 += foo_2[foo_3][foo_4];15;
8;conditional;fun_1(foo_1);10;
9;statement;foo_1[foo_2][foo_3] = fun_1(foo_4 - foo_5);11;
10;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;6;
4;10;
5;4;7;
6;6;
7;2;9;
8;8;
9;
