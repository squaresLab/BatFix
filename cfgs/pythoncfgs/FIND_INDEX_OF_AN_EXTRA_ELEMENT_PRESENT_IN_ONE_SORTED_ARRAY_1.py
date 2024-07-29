Nodes
1;statement;foo_1 = foo_2;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2 - 1;10;
4;conditional;foo_1 <= foo_2;11;
5;statement;return foo_1;18;
6;statement;foo_1 = fun_1((foo_2 + foo_3) / 2);12;
7;conditional;foo_1[foo_2] == foo_3[foo_4];13;
8;statement;foo_1 = foo_2;16;
9;statement;foo_1 = foo_2 - 1;17;
10;statement;foo_1 = foo_2 + 1;14;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;11;
5;7;
6;8;10;
7;9;
8;4;
9;4;
10;
