Nodes
1;conditional;foo_1 == 0;8;
2;conditional;foo_1 == 0;10;
3;statement;foo_1 = 0;12;
4;conditional;(foo_1 | foo_2) & 1 == 0;13;
5;conditional;foo_1 & 1 == 0;17;
6;conditional;foo_1 != 0;19;
7;statement;return foo_1 << foo_2;27;
8;conditional;foo_1 & 1 == 0;20;
9;conditional;foo_1 > foo_2;22;
10;statement;foo_1 = foo_2 - foo_3;26;
11;statement;foo_1 = foo_2;23;
12;statement;foo_1 = foo_2;24;
13;statement;foo_1 = foo_2;25;
14;statement;foo_1 = foo_2 >> 1;21;
15;statement;foo_1 = foo_2 >> 1;18;
16;statement;foo_1 = foo_2 >> 1;14;
17;statement;foo_1 = foo_2 >> 1;15;
18;statement;foo_1 = foo_2 + 1;16;
19;statement;return foo_1;11;
20;statement;return foo_1;9;
21;exit;;
Edges
0;2;20;
1;3;19;
2;4;
3;5;16;
4;6;15;
5;7;8;
6;21;
7;9;14;
8;10;11;
9;6;
10;12;
11;13;
12;10;
13;8;
14;5;
15;17;
16;18;
17;4;
18;21;
19;21;
20;
