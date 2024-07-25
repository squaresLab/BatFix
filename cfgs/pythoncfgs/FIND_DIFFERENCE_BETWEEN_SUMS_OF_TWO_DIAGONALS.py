Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;return fun_1(foo_1 - foo_2);16;
5;conditional;foo < foo;11;
6;conditional;foo_1 == foo_2;12;
7;conditional;foo_1 == foo_2 - foo_3 - 1;14;
8;statement;foo_1 += foo_2[foo_3][foo_4];15;
9;statement;foo_1 += foo_2[foo_3][foo_4];13;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;3;6;
5;7;9;
6;5;8;
7;5;
8;7;
9;