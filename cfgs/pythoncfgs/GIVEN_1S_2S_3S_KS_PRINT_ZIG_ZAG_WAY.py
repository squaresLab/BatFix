Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = [[0 for foo_2 in fun_1(foo_3)] for foo_4 in fun_2(foo_5)];9;
3;conditional;fun_1(foo_1);10;
4;statement;foo_1;27;
5;conditional;foo_1;28;
6;statement;fun_1();30;
7;statement;fun_1(foo_1, end=' ');29;
8;conditional;foo_1 % 2 == 0;11;
9;statement;foo_1 = foo_2 - 1;20;
10;conditional;foo_1 >= 0 and foo_2[foo_3] > 0;21;
11;statement;foo_1[foo_2][foo_3] = foo_4 + 1;22;
12;statement;foo_1[foo_2] -= 1;23;
13;conditional;foo_1[foo_2] == 0;24;
14;statement;foo_1 -= 1;26;
15;statement;foo_1 += 1;25;
16;statement;foo_1 = 0;12;
17;conditional;foo_1 < foo_2 and foo_3[foo_4] > 0;13;
18;statement;foo_1[foo_2][foo_3] = foo_4 + 1;14;
19;statement;foo_1[foo_2] -= 1;15;
20;conditional;foo_1[foo_2] == 0;16;
21;statement;foo_1 += 1;18;
22;statement;foo_1 += 1;17;
23;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;
4;6;7;
5;4;
6;5;
7;9;16;
8;10;
9;3;11;
10;12;
11;13;
12;14;15;
13;10;
14;14;
15;17;
16;3;18;
17;19;
18;20;
19;21;22;
20;17;
21;21;
22;