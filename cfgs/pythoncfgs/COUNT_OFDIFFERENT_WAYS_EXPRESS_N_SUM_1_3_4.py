Nodes
1;statement;foo_1 = [0 for foo_2 in foo < foo];8;
2;statement;foo_1[0] = foo_2[1] = foo_3[2] = 1;9;
3;statement;foo_1[3] = 2;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2];13;
6;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 3] + foo_7[foo_8 - 4];12;
7;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;7;
5;4;
6;
