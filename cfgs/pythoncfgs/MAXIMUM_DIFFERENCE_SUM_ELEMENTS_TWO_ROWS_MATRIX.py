Nodes
1;statement;foo_1 = [0] * foo_2;8;
2;conditional;foo < foo;9;
3;statement;foo_1 = foo_2[1] - foo_3[0];14;
4;statement;foo_1 = foo_2[0];15;
5;conditional;foo < foo;16;
6;statement;return foo_1;21;
7;conditional;foo_1[foo_2] - foo_3 > foo_4;17;
8;conditional;foo_1[foo_2] < foo_3;19;
9;statement;foo_1 = foo_2[foo_3];20;
10;statement;foo_1 = foo_2[foo_3] - foo_4;18;
11;statement;foo_1 = 0;10;
12;conditional;foo < foo;11;
13;statement;foo_1[foo_2] = foo_3;13;
14;statement;foo_1 += foo_2[foo_3][foo_4];12;
15;exit;;
Edges
0;2;
1;3;11;
2;4;
3;5;
4;6;7;
5;15;
6;8;10;
7;5;9;
8;5;
9;8;
10;12;
11;13;14;
12;2;
13;12;
14;
