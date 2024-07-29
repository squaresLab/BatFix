Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 1;10;
4;conditional;foo_1 < foo_2;11;
5;statement;return foo_1;16;
6;statement;foo_1 = foo_2[foo_3];12;
7;conditional;foo_1 == '0';13;
8;statement;foo_1 = foo_2 + 1;15;
9;statement;foo_1 = foo_2 + 1;14;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;10;
5;7;
6;8;9;
7;4;
8;8;
9;
