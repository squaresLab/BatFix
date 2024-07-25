Nodes
1;statement;foo_1 = foo_2;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 1;10;
4;statement;foo_1 = fun_1(foo_2);11;
5;conditional;fun_1(foo_1 - 1, -1, -1);12;
6;statement;return foo_1;16;
7;conditional;foo_1[foo_2] == '1';13;
8;statement;foo_1 = foo_2 * 2;15;
9;statement;foo_1 += foo_2;14;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;10;
6;8;9;
7;5;
8;8;
9;