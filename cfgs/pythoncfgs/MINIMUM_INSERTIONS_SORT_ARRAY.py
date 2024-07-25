Nodes
1;statement;foo_1 = [0] * foo_2;8;
2;conditional;fun_1(foo_1);9;
3;conditional;foo < foo;11;
4;statement;foo_1 = 0;15;
5;conditional;fun_1(foo_1);16;
6;statement;return foo_1 - foo_2;19;
7;conditional;foo_1 < foo_2[foo_3];17;
8;statement;foo_1 = foo_2[foo_3];18;
9;conditional;fun_1(foo_1);12;
10;conditional;foo_1[foo_2] >= foo_3[foo_4] and foo_5[foo_6] < foo_7[foo_8] + 1;13;
11;statement;foo_1[foo_2] = foo_3[foo_4] + 1;14;
12;statement;foo_1[foo_2] = 1;10;
13;exit;;
Edges
0;2;
1;3;12;
2;4;9;
3;5;
4;6;7;
5;13;
6;5;8;
7;5;
8;3;10;
9;9;11;
10;9;
11;2;
12;