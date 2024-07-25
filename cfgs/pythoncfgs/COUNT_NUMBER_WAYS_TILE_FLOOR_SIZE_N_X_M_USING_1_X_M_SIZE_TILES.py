Nodes
1;statement;foo_1 = [];8;
2;conditional;fun_1(foo_1 + 2);9;
3;statement;foo_1[0] = 0;11;
4;conditional;foo < foo;12;
5;statement;return foo_1[foo_2];19;
6;conditional;foo_1 > foo_2;13;
7;conditional;foo_1 < foo_2;15;
8;statement;foo_1[foo_2] = 2;18;
9;statement;foo_1[foo_2] = 1;16;
10;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - foo_7];14;
11;statement;fun_1(0);10;
12;exit;;
Edges
0;2;
1;3;11;
2;4;
3;5;6;
4;12;
5;7;10;
6;8;9;
7;4;
8;4;
9;4;
10;2;
11;