Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;conditional;foo < foo;12;
5;statement;return foo_1 - foo_2;17;
6;conditional;fun_1(foo_1);13;
7;statement;foo_1 = fun_1(foo_2, foo_3[foo_4]);16;
8;conditional;foo_1[foo_2] > foo_3[foo_4] and foo_5 - foo_6 <= foo_7[foo_8] - foo_9[foo_10];14;
9;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6] + 1);15;
10;statement;foo_1[foo_2] = 1;11;
11;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;6;
4;11;
5;7;8;
6;4;
7;6;9;
8;6;
9;3;
10;