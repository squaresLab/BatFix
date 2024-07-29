Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;conditional;fun_1(foo_1 + 1);9;
3;conditional;fun_1(foo_1, 0, -1);11;
4;statement;return foo_1[1];16;
5;conditional;not foo_1 % 2;12;
6;conditional;not foo_1 % 3;14;
7;statement;foo_1[foo_2 // 3] = fun_1(foo_3[foo_4] + 1, foo_5[foo_6 // 3]);15;
8;statement;foo_1[foo_2 // 2] = fun_1(foo_3[foo_4] + 1, foo_5[foo_6 // 2]);13;
9;statement;foo_1[foo_2] = foo_3 - foo_4;10;
10;exit;;
Edges
0;2;
1;3;9;
2;4;5;
3;10;
4;6;8;
5;3;7;
6;3;
7;6;
8;2;
9;
