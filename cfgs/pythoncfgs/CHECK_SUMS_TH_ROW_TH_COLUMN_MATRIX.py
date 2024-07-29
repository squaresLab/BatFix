Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;return 0;18;
5;statement;foo_1 = 0;11;
6;statement;foo_1 = 0;12;
7;conditional;foo < foo;13;
8;conditional;foo_1 == foo_2;16;
9;statement;return 1;17;
10;statement;foo_1 += foo_2[foo_3][foo_4];14;
11;statement;foo_1 += foo_2[foo_3][foo_4];15;
12;exit;;
Edges
0;2;
1;3;
2;4;5;
3;12;
4;6;
5;7;
6;8;10;
7;3;9;
8;12;
9;11;
10;7;
11;
