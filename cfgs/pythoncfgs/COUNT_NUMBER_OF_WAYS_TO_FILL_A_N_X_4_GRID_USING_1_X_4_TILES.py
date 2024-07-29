Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3 + 1)];8;
2;conditional;foo < foo;9;
3;statement;return foo_1[foo_2];16;
4;conditional;foo_1 <= 3;10;
5;conditional;foo_1 == 4;12;
6;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 4];15;
7;statement;foo_1[foo_2] = 2;13;
8;statement;foo_1[foo_2] = 1;11;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;5;8;
4;6;7;
5;2;
6;2;
7;2;
8;
