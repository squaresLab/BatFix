Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 += 1;10;
4;conditional;foo_1 == 1;11;
5;statement;foo_1 = fun_1(foo_2);14;
6;conditional;foo_1 == foo_2 - 1;15;
7;statement;return foo_1;17;
8;statement;foo_1 = foo_2;16;
9;statement;foo_1 = foo_2;12;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;
5;7;8;
6;10;
7;7;
8;7;
9;