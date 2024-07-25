Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;statement;foo_1 = [0] * (foo_2 + 1);9;
3;statement;foo_1[0] = 1;10;
4;statement;foo_1[1] = 0;11;
5;statement;foo_1[0] = 0;12;
6;statement;foo_1[1] = 1;13;
7;conditional;foo < foo;14;
8;statement;return foo_1[foo_2];17;
9;statement;foo_1[foo_2] = foo_3[foo_4 - 2] + 2 * foo_5[foo_6 - 1];15;
10;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 2];16;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;9;
7;11;
8;10;
9;7;
10;