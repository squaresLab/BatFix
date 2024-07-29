Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;return foo_1;16;
5;conditional;foo < foo;11;
6;conditional;foo < foo;12;
7;statement;foo_1 = foo_2[foo_3] + foo_4[foo_5] + foo_6[foo_7];13;
8;conditional;foo_1 % foo_2 == 0;14;
9;statement;foo_1 = foo_2 + 1;15;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;3;6;
5;5;7;
6;8;
7;6;9;
8;6;
9;
