Nodes
1;conditional;foo_1 == 0;8;
2;conditional;foo_1 == 1;10;
3;statement;foo_1 = [0] * (foo_2 + 1);12;
4;conditional;foo < foo;13;
5;statement;return foo_1[foo_2];18;
6;conditional;foo_1 % 2 == 0;14;
7;statement;foo_1[foo_2] = fun_1(foo_3[foo_4 - 1] + foo_5, foo_6[(foo_7 + 1) // 2] + foo_8 + foo_9);17;
8;statement;foo_1[foo_2] = fun_1(foo_3[foo_4 - 1] + foo_5, foo_6[foo_7 // 2] + foo_8);15;
9;statement;return foo_1;11;
10;statement;return 0;9;
11;exit;;
Edges
0;2;10;
1;3;9;
2;4;
3;5;6;
4;11;
5;7;8;
6;4;
7;4;
8;11;
9;11;
10;
