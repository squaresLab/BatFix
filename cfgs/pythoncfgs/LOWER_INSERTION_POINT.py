Nodes
1;conditional;foo_1 < foo_2[0];8;
2;conditional;foo_1 > foo_2[foo_3 - 1];10;
3;statement;foo_1 = 0;12;
4;statement;foo_1 = 1;13;
5;conditional;foo_1 < foo_2 and foo_3[foo_4] < foo_5;14;
6;conditional;foo_1 < foo_2 and foo_3[foo_4] < foo_5;17;
7;statement;return foo_1;19;
8;statement;foo_1 += 1;18;
9;statement;foo_1 = foo_2;15;
10;statement;foo_1 = foo_2 * 2;16;
11;statement;return foo_1;11;
12;statement;return 0;9;
13;exit;;
Edges
0;2;12;
1;3;11;
2;4;
3;5;
4;6;9;
5;7;8;
6;13;
7;6;
8;10;
9;5;
10;13;
11;13;
12;
