Nodes
1;statement;foo_1 = [0] * foo_2;8;
2;conditional;fun_1(foo_1);9;
3;conditional;foo < foo;11;
4;statement;return fun_1(foo_1);15;
5;conditional;fun_1(foo_1);12;
6;conditional;foo_1[foo_2] > foo_3[foo_4] and foo_5[foo_6] < foo_7[foo_8] * foo_9[foo_10];13;
7;statement;foo_1[foo_2] = foo_3[foo_4] * foo_5[foo_6];14;
8;statement;foo_1[foo_2] = foo_3[foo_4];10;
9;exit;;
Edges
0;2;
1;3;8;
2;4;5;
3;9;
4;3;6;
5;5;7;
6;5;
7;2;
8;