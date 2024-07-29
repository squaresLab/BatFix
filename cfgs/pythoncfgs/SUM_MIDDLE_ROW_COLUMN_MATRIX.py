Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;statement;fun_1('Sum of middle row = ', foo_1);12;
5;conditional;fun_1(foo_1);13;
6;statement;fun_1('Sum of middle column = ', foo_1);15;
7;statement;foo_1 += foo_2[foo_3][foo_4 // 2];14;
8;statement;foo_1 += foo_2[foo_3 // 2][foo_4];11;
9;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;
4;6;7;
5;9;
6;5;
7;3;
8;
