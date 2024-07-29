Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2 - 1;10;
4;conditional;foo_1 >= 0 and foo_2 < foo_3;11;
5;statement;return foo_1;17;
6;conditional;foo_1[foo_2][foo_3] < 0;12;
7;statement;foo_1 -= 1;16;
8;statement;foo_1 += foo_2 + 1;13;
9;statement;foo_1 += 1;14;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;10;
5;7;8;
6;4;
7;9;
8;4;
9;
