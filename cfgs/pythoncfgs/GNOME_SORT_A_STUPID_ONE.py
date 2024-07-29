Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 < foo_2;9;
3;statement;return foo_1;17;
4;conditional;foo_1 == 0;10;
5;conditional;foo_1[foo_2] >= foo_3[foo_4 - 1];12;
6;statement;(foo_1[foo_2], foo_3[foo_4 - 1]) = (foo_5[foo_6 - 1], foo_7[foo_8]);15;
7;statement;foo_1 = foo_2 - 1;16;
8;statement;foo_1 = foo_2 + 1;13;
9;statement;foo_1 = foo_2 + 1;11;
10;exit;;
Edges
0;2;
1;3;4;
2;10;
3;5;9;
4;6;8;
5;7;
6;2;
7;2;
8;5;
9;
