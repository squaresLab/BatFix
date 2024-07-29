Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 != 0;10;
4;statement;return foo_1;16;
5;statement;foo_1 = foo_2 % 2;11;
6;statement;foo_1 = fun_1(10, foo_2);12;
7;statement;foo_1 += foo_2 * foo_3;13;
8;statement;foo_1 //= 2;14;
9;statement;foo_1 += 1;15;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;6;
5;7;
6;8;
7;9;
8;3;
9;
