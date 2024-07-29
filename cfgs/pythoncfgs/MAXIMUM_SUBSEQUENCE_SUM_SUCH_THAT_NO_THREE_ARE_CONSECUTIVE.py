Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];8;
2;conditional;foo_1 >= 1;9;
3;conditional;foo_1 >= 2;11;
4;conditional;foo_1 > 2;13;
5;conditional;foo < foo;15;
6;statement;return foo_1[foo_2 - 1];17;
7;statement;foo_1[foo_2] = fun_2(fun_2(foo_3[foo_4 - 1], foo_5[foo_6 - 2] + foo_7[foo_8]), foo_9[foo_10] + foo_11[foo_12 - 1] + foo_13[foo_14 - 3]);16;
8;statement;foo_1[2] = fun_2(foo_2[1], fun_2(foo_3[1] + foo_4[2], foo_5[0] + foo_6[2]));14;
9;statement;foo_1[1] = foo_2[0] + foo_3[1];12;
10;statement;foo_1[0] = foo_2[0];10;
11;exit;;
Edges
0;2;
1;3;10;
2;4;9;
3;5;8;
4;6;7;
5;11;
6;5;
7;5;
8;4;
9;3;
10;
