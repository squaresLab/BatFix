Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [[0] * (foo_2 + 1)] * (foo_3 + 1);9;
3;conditional;foo < foo;10;
4;statement;return foo_1[foo_2][foo_3];16;
5;conditional;foo < foo;11;
6;conditional;foo_1[foo_2 - 1] == foo_3[foo_4 - 1] and foo_5 != foo_6;12;
7;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5][foo_6 - 1], foo_7[foo_8 - 1][foo_9]);15;
8;statement;foo_1[foo_2][foo_3] = 1 + foo_4[foo_5 - 1][foo_6 - 1];13;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;3;6;
5;7;8;
6;5;
7;5;
8;