Nodes
1;special;;;
2;statement;int diff = 0;14;
3;statement;int res = 0;14;
4;statement;int temp = 0;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;statement;int pro = foo_1[foo_2] * foo_3[foo_4];19;
8;statement;res = foo_1 + foo_2;20;
9;conditional;(foo_1 < 0) && (foo_2[foo_3] < 0);21;
10;statement;temp = (foo_1[foo_2] + (2 * foo_3)) * foo_4[foo_5];21;
11;conditional;(foo_1 < 0) && (foo_2[foo_3] < 0);22;
12;statement;temp = (foo_1[foo_2] - (2 * foo_3)) * foo_4[foo_5];22;
13;conditional;(foo_1 > 0) && (foo_2[foo_3] < 0);23;
14;statement;temp = (foo_1[foo_2] + (2 * foo_3)) * foo_4[foo_5];23;
15;conditional;(foo_1 > 0) && (foo_2[foo_3] > 0);24;
16;statement;temp = (foo_1[foo_2] - (2 * foo_3)) * foo_4[foo_5];24;
17;statement;int d = fun_1(foo_1 - foo_2);25;
18;conditional;foo_1 > foo_2;26;
19;statement;diff = foo_1;26;
20;statement;i++;18;
21;statement;return foo_1 - foo_2;28;
22;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;21;
6;8;
7;9;
8;10;11;
9;17;
10;12;13;
11;17;
12;14;15;
13;17;
14;16;17;
15;17;
16;18;
17;19;20;
18;20;
19;6;
20;22;
21;