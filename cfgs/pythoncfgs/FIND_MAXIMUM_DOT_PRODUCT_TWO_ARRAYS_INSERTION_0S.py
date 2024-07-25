Nodes
1;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3 + 1)] for foo_4 in fun_2(foo_5 + 1)];8;
2;conditional;fun_1(1, foo_1 + 1, 1);9;
3;statement;return foo_1[foo_2][foo_3];12;
4;conditional;fun_1(foo_1, foo_2 + 1, 1);10;
5;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5 - 1][foo_6 - 1] + foo_7[foo_8 - 1] * foo_9[foo_10 - 1], foo_11[foo_12][foo_13 - 1]);11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;2;5;
4;4;
5;