Nodes
1;statement;foo_1 = [0, 0, 0];8;
2;statement;foo_1 = 0;9;
3;conditional;foo < foo;10;
4;statement;foo_1 += foo_2[0] * (foo_3[0] - 1) >> 1;12;
5;statement;foo_1 += foo_2[1] * foo_3[2];13;
6;statement;foo_1 += foo_2[0] * (foo_3[0] - 1) * (foo_4[0] - 2) / 6;14;
7;statement;foo_1 += foo_2[1] * (foo_3[1] - 1) * (foo_4[1] - 2) / 6;15;
8;statement;foo_1 += foo_2[2] * (foo_3[2] - 1) * (foo_4[2] - 2) / 6;16;
9;statement;foo_1 += foo_2[0] * foo_3[1] * foo_4[2];17;
10;statement;return foo_1;18;
11;statement;foo_1[foo_2[foo_3] % 3] += 1;11;
12;exit;;
Edges
0;2;
1;3;
2;4;11;
3;5;
4;6;
5;7;
6;8;
7;9;
8;10;
9;12;
10;3;
11;
