Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;conditional;foo_1 == 1;11;
4;conditional;foo_1 % foo_2 != 0;13;
5;statement;foo_1 = foo_2 // foo_3;15;
6;conditional;foo < foo;16;
7;conditional;foo < foo;41;
8;statement;return foo_1;44;
9;conditional;foo_1[foo_2] != 0;42;
10;statement;return -1;43;
11;conditional;foo_1[foo_2] > foo_3;17;
12;conditional;foo_1 > 0;19;
13;conditional;foo_1[foo_2] == foo_3;22;
14;statement;foo_1 = foo_2[foo_3] + foo_4[foo_5];24;
15;conditional;foo_1 + 1 < foo_2;25;
16;conditional;foo_1 == foo_2;27;
17;conditional;foo_1[foo_2] + foo_3[foo_4] == foo_5;32;
18;conditional;foo_1 + 1 < foo_2 and foo_3[foo_4] + foo_5[foo_6 + 1] == foo_7;36;
19;statement;return -1;40;
20;statement;foo_1[foo_2] += foo_3[foo_4 + 1];37;
21;statement;foo_1[foo_2 + 1] = 0;38;
22;statement;foo_1[foo_2] += foo_3[foo_4];33;
23;statement;foo_1[foo_2] = 0;34;
24;statement;foo_1[foo_2] = foo_3;28;
25;statement;foo_1[foo_2] = 0;29;
26;conditional;foo_1 + 1 < foo_2;30;
27;statement;foo_1[foo_2 + 1] = 0;30;
28;statement;foo_1 += foo_2[foo_3 + 1];26;
29;statement;foo_1[foo_2] += foo_3[foo_4 - 1];20;
30;statement;foo_1[foo_2 - 1] = 0;21;
31;statement;return -1;18;
32;statement;return -1;14;
33;statement;return foo_1[0] + foo_2[0];12;
34;statement;foo_1 += foo_2[foo_3] + foo_4[foo_5];10;
35;exit;;
Edges
0;2;
1;3;34;
2;4;33;
3;5;32;
4;6;
5;7;11;
6;8;9;
7;35;
8;7;10;
9;35;
10;12;31;
11;13;29;
12;6;14;
13;15;
14;16;28;
15;17;24;
16;18;22;
17;19;20;
18;35;
19;21;
20;6;
21;23;
22;6;
23;25;
24;26;
25;6;27;
26;6;
27;16;
28;30;
29;13;
30;35;
31;35;
32;35;
33;2;
34;