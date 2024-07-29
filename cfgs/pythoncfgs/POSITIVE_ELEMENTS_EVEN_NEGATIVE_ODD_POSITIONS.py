Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 1;9;
3;statement;true;10;
4;conditional;foo_1 < foo_2 and foo_3[foo_4] >= 0;11;
5;conditional;foo_1 < foo_2 and foo_3[foo_4] <= 0;13;
6;statement;foo_1 < foo_2 and foo_3 < foo_4;15;
7;statement;foo_1 = foo_2[foo_3];16;
8;statement;foo_1[foo_2] = foo_3[foo_4];17;
9;statement;foo_1[foo_2] = foo_3;18;
10;statement;foo_1 = foo_2 + 2;14;
11;statement;foo_1 = foo_2 + 2;12;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;10;
5;7;
6;8;
7;9;
8;3;
9;5;
10;4;
11;
