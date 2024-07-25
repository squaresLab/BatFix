Nodes
1;statement;foo_1 = [1 for foo_2 in fun_1(foo_3)];8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 1;13;
4;conditional;fun_1(foo_1);14;
5;statement;return foo_1;17;
6;conditional;foo_1 < foo_2[foo_3];15;
7;statement;foo_1 = foo_2[foo_3];16;
8;conditional;fun_1(foo_1);10;
9;conditional;foo_1[foo_2] == foo_3[foo_4] + 1 or foo_5[foo_6] == foo_7[foo_8] - 1;11;
10;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6] + 1);12;
11;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;6;
4;11;
5;4;7;
6;4;
7;2;9;
8;8;10;
9;8;
10;