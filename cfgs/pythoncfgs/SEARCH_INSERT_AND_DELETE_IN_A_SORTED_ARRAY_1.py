Nodes
1;conditional;foo_1 >= foo_2;8;
2;statement;foo_1 = foo_2 - 1;10;
3;conditional;foo_1 >= 0 and foo_2[foo_3] > foo_4;11;
4;statement;foo_1[foo_2 + 1] = foo_3;14;
5;statement;return foo_1 + 1;15;
6;statement;foo_1[foo_2 + 1] = foo_3[foo_4];12;
7;statement;foo_1 -= 1;13;
8;statement;return foo_1;9;
9;exit;;
Edges
0;2;8;
1;3;
2;4;6;
3;5;
4;9;
5;7;
6;3;
7;9;
8;