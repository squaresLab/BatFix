Nodes
1;statement;foo_1 = 0;8;
2;statement;fun_1(reverse=true);9;
3;statement;fun_1(reverse=true);10;
4;statement;foo_1 = 1;11;
5;statement;foo_1 = 1;11;
6;statement;foo_1 = 0;12;
7;statement;foo_1 = 0;12;
8;conditional;foo_1 < foo_2 and foo_3 < foo_4;13;
9;statement;foo_1 = 0;22;
10;conditional;foo_1 < foo_2;23;
11;statement;foo_1 += foo_2 * foo_3;26;
12;statement;foo_1 = 0;27;
13;conditional;foo_1 < foo_2;28;
14;statement;foo_1 += foo_2 * foo_3;31;
15;statement;return foo_1;32;
16;statement;foo_1 += foo_2[foo_3];29;
17;statement;foo_1 += 1;30;
18;statement;foo_1 += foo_2[foo_3];24;
19;statement;foo_1 += 1;25;
20;conditional;foo_1[foo_2] > foo_3[foo_4];14;
21;statement;foo_1 += foo_2[foo_3] * foo_4;19;
22;statement;foo_1 += 1;20;
23;statement;foo_1 += 1;21;
24;statement;foo_1 += foo_2[foo_3] * foo_4;15;
25;statement;foo_1 += 1;16;
26;statement;foo_1 += 1;17;
27;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;20;
8;10;
9;11;18;
10;12;
11;13;
12;14;16;
13;15;
14;27;
15;17;
16;13;
17;19;
18;10;
19;21;24;
20;22;
21;23;
22;8;
23;25;
24;26;
25;8;
26;