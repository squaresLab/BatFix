Nodes
1;conditional;foo_1 % 2 == 0;10;
2;statement;foo_1 = 3;15;
3;conditional;foo_1 <= fun_1(foo_2);16;
4;conditional;foo_1 > 2 and foo_2 == 1;23;
5;statement;return -1;25;
6;statement;return foo_1;24;
7;conditional;foo_1 % foo_2 == 0;17;
8;statement;foo_1 = foo_2 + 2;22;
9;conditional;foo_1 == 1;18;
10;statement;foo_1 = foo_2 - 1;20;
11;statement;foo_1 = foo_2 / foo_3;21;
12;statement;return foo_1;19;
13;statement;foo_1 = foo_2 - 1;11;
14;statement;foo_1 = foo_2 / 2;12;
15;conditional;foo_1 == 0;13;
16;statement;return 2;14;
17;exit;;
Edges
0;2;13;
1;3;
2;4;7;
3;5;6;
4;17;
5;17;
6;8;9;
7;3;
8;10;12;
9;11;
10;7;
11;17;
12;14;
13;15;
14;1;16;
15;17;
16;