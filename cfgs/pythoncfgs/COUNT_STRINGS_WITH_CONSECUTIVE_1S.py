Nodes
1;statement;foo_1 = [0] * foo_2;8;
2;statement;foo_1 = [0] * foo_2;9;
3;statement;foo_1[0] = foo_2[0] = 1;10;
4;conditional;foo < foo;11;
5;statement;return (1 << foo_1) - foo_2[foo_3 - 1] - foo_4[foo_5 - 1];14;
6;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6 - 1];12;
7;statement;foo_1[foo_2] = foo_3[foo_4 - 1];13;
8;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;8;
5;7;
6;4;
7;