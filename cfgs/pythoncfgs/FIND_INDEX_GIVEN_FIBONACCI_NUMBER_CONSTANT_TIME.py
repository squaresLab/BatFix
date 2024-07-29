Nodes
1;conditional;foo_1 <= 1;8;
2;statement;foo_1 = 0;10;
3;statement;foo_1 = 1;11;
4;statement;foo_1 = 1;12;
5;statement;foo_1 = 1;13;
6;conditional;foo_1 < foo_2;14;
7;statement;return foo_1;19;
8;statement;foo_1 = foo_2 + foo_3;15;
9;statement;foo_1 = foo_2 + 1;16;
10;statement;foo_1 = foo_2;17;
11;statement;foo_1 = foo_2;18;
12;statement;return foo_1;9;
13;exit;;
Edges
0;2;12;
1;3;
2;4;
3;5;
4;6;
5;7;8;
6;13;
7;9;
8;10;
9;11;
10;6;
11;13;
12;
