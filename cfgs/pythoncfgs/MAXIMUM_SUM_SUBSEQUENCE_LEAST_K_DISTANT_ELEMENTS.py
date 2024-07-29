Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];8;
2;statement;foo_1[foo_2 - 1] = foo_3[foo_4 - 1];9;
3;conditional;fun_1(foo_1 - 2, -1, -1);10;
4;statement;return foo_1[0];15;
5;conditional;foo_1 + foo_2 + 1 >= foo_3;11;
6;statement;foo_1[foo_2] = fun_1(foo_3[foo_4] + foo_5[foo_6 + foo_7 + 1], foo_8[foo_9 + 1]);14;
7;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6 + 1]);12;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;6;7;
5;3;
6;3;
7;
