Nodes
1;conditional;foo_1 <= 0;8;
2;statement;foo_1 = [0] * (foo_2 + 1);10;
3;statement;foo_1[1] = 1;11;
4;statement;foo_1 = foo_2[0] + foo_3[1];12;
5;conditional;foo < foo;13;
6;statement;return foo_1;16;
7;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 2];14;
8;statement;foo_1 = foo_2 + foo_3[foo_4];15;
9;statement;return 0;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;
3;5;
4;6;7;
5;10;
6;8;
7;5;
8;10;
9;
