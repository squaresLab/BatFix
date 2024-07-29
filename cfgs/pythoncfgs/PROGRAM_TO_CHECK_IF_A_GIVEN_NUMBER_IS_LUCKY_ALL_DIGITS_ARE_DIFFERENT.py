Nodes
1;statement;foo_1 = [0] * 10;10;
2;conditional;foo_1 > 0;11;
3;statement;return 1;17;
4;statement;foo_1 = fun_1(foo_2 % 10);12;
5;conditional;foo_1[foo_2];13;
6;statement;foo_1[foo_2] = 1;15;
7;statement;foo_1 = foo_2 / 10;16;
8;statement;return 0;14;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;5;
4;6;8;
5;7;
6;2;
7;9;
8;
