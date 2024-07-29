Nodes
1;statement;foo_1 = 2 * foo_2;8;
2;statement;foo_1 = [0] * (foo_2 + 1);9;
3;statement;foo_1[0] = 1;10;
4;statement;foo_1[2] = 1;11;
5;conditional;fun_1(4, foo_1 + 1, 2);12;
6;statement;return fun_1(foo_1[foo_2]);15;
7;conditional;fun_1(0, foo_1 - 1, 2);13;
8;statement;foo_1[foo_2] += foo_3[foo_4] * foo_5[foo_6 - 2 - foo_7];14;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;9;
6;5;8;
7;7;
8;
