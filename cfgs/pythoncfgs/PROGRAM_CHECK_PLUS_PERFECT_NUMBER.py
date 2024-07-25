Nodes
1;statement;foo_1 = foo_2;10;
2;statement;foo_1 = 0;11;
3;conditional;foo_1 != 0;12;
4;statement;foo_1 = foo_2;15;
5;statement;foo_1 = 0;16;
6;conditional;foo_1 != 0;17;
7;statement;return foo_1 == foo_2;20;
8;statement;foo_1 = foo_2 + fun_2(fun_2(foo_3 % 10, foo_4));18;
9;statement;foo_1 = foo_2 // 10;19;
10;statement;foo_1 = foo_2 // 10;13;
11;statement;foo_1 = foo_2 + 1;14;
12;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;
4;6;
5;7;8;
6;12;
7;9;
8;6;
9;11;
10;3;
11;