Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;statement;foo_1[0] = 1;9;
3;statement;foo_1[1] = 1;10;
4;statement;foo_1[2] = 2;11;
5;conditional;foo < foo;12;
6;statement;return foo_1[foo_2];14;
7;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 2] + foo_7[foo_8 - 3];13;
8;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;8;
6;5;
7;
