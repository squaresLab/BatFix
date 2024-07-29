Nodes
1;statement;foo_1 = -2147483648;8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1 * foo_2);10;
4;statement;return foo_1;16;
5;statement;foo_1 = foo_2 + foo_3[foo_4 % foo_5];11;
6;conditional;foo_1 < foo_2;12;
7;conditional;foo_1 < 0;14;
8;statement;foo_1 = 0;15;
9;statement;foo_1 = foo_2;13;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;6;
5;7;9;
6;3;8;
7;3;
8;7;
9;
