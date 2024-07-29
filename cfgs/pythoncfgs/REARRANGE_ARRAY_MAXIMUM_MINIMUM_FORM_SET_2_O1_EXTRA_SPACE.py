Nodes
1;statement;foo_1 = foo_2 - 1;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2[foo_3 - 1] + 1;10;
4;conditional;foo < foo;11;
5;statement;foo < foo;18;
6;statement;foo_1[foo_2] = foo_3[foo_4] / foo_5;19;
7;conditional;foo_1 % 2 == 0;12;
8;statement;foo_1[foo_2] += foo_3[foo_4] % foo_5 * foo_6;16;
9;statement;foo_1 += 1;17;
10;statement;foo_1[foo_2] += foo_3[foo_4] % foo_5 * foo_6;13;
11;statement;foo_1 -= 1;14;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;5;
6;8;10;
7;9;
8;4;
9;11;
10;4;
11;
