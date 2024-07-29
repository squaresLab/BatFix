Nodes
1;statement;foo_1 = [];8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;conditional;fun_1(foo_1);12;
5;conditional;fun_1(foo_1);16;
6;statement;return foo_1;19;
7;conditional;foo_1 < foo_2[foo_3];17;
8;statement;foo_1 = foo_2[foo_3];18;
9;conditional;fun_1(foo_1);13;
10;conditional;fun_1(foo_1[foo_2] - foo_3[foo_4]) <= 1 and foo_5[foo_6] < foo_7[foo_8] + 1;14;
11;statement;foo_1[foo_2] = foo_3[foo_4] + 1;15;
12;statement;fun_1(1);11;
13;exit;;
Edges
0;2;
1;3;
2;4;12;
3;5;9;
4;6;7;
5;13;
6;5;8;
7;5;
8;4;10;
9;9;11;
10;9;
11;3;
12;
