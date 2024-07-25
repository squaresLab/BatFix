Nodes
1;statement;fun_1();8;
2;statement;foo_1 = [0] * foo_2;9;
3;statement;foo_1[0] = 0;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2 - 1];18;
6;statement;foo_1[foo_2] = foo_3[foo_4 - 1];12;
7;conditional;foo_1[foo_2] - foo_3[foo_4 - 1] < foo_5;13;
8;conditional;foo_1 >= 2;14;
9;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6] + foo_7[foo_8 - 1]);17;
10;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6 - 2] + foo_7[foo_8] + foo_9[foo_10 - 1]);15;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;11;
5;7;
6;4;8;
7;9;10;
8;4;
9;4;
10;