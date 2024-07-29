Nodes
1;conditional;foo_1 <= 6;8;
2;statement;foo_1 = [0] * foo_2;10;
3;conditional;foo < foo;11;
4;conditional;foo < foo;13;
5;statement;return foo_1[foo_2 - 1];15;
6;statement;foo_1[foo_2 - 1] = fun_2(2 * foo_3[foo_4 - 4], fun_2(3 * foo_5[foo_6 - 5], 4 * foo_7[foo_8 - 6]));14;
7;statement;foo_1[foo_2 - 1] = foo_3;12;
8;statement;return foo_1;9;
9;exit;;
Edges
0;2;8;
1;3;
2;4;7;
3;5;6;
4;9;
5;4;
6;3;
7;9;
8;
