Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = foo_2 + 1;9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 = 0;11;
5;conditional;foo_1 < foo_2;12;
6;statement;return foo_1;21;
7;conditional;foo_1 <= foo_2 and foo_3 < foo_4;13;
8;conditional;foo_1 > foo_2 and foo_3 < foo_4;16;
9;conditional;foo_1 - foo_2 < foo_3;17;
10;statement;foo_1 -= foo_2[foo_3];19;
11;statement;foo_1 += 1;20;
12;statement;foo_1 = foo_2 - foo_3;18;
13;statement;foo_1 += foo_2[foo_3];14;
14;statement;foo_1 += 1;15;
15;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;15;
6;8;13;
7;5;9;
8;10;12;
9;11;
10;8;
11;10;
12;14;
13;7;
14;
