Nodes
1;statement;foo_1 = [None] * (foo_2 + 1);8;
2;statement;foo_1[0] = 1;9;
3;statement;foo_1 = 1;10;
4;conditional;foo_1 <= foo_2;11;
5;statement;return foo_1[foo_2];14;
6;statement;foo_1[foo_2] = foo_3[foo_4 - 1] * 3 + 2;12;
7;statement;foo_1 = foo_2 + 1;13;
8;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;8;
5;7;
6;4;
7;