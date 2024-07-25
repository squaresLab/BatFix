Nodes
1;conditional;foo_1 <= foo_2[foo_3];8;
2;statement;foo_1 = foo_2;10;
3;conditional;fun_1(foo_1);11;
4;statement;return -1;16;
5;conditional;foo_1[foo_2] == foo_3;12;
6;conditional;foo_1[foo_2] < foo_3 and foo_4[foo_5 + 1] >= foo_6;14;
7;statement;return foo_1 + 1;15;
8;statement;return foo_1;13;
9;statement;return foo_1;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;5;
3;10;
4;6;8;
5;3;7;
6;10;
7;10;
8;10;
9;