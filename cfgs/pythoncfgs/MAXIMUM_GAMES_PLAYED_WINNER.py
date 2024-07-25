Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];8;
2;statement;foo_1[0] = 1;9;
3;statement;foo_1[1] = 2;10;
4;statement;foo_1 = 1;11;
5;conditional;foo_1[foo_2] <= foo_3;12;
6;statement;return foo_1 - 1;15;
7;statement;foo_1 = foo_2 + 1;13;
8;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 2];14;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;9;
6;8;
7;5;
8;