Nodes
1;special;;;
2;statement;int[] profit = new int[foo_1];14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;foo_1[foo_2] = 0;17;
6;statement;i++;17;
7;statement;int max_price = foo_1[foo_2 - 1];18;
8;statement;int i = foo_1 - 2;19;
9;conditional;foo_1 >= 0;20;
10;conditional;foo_1[foo_2] > foo_3;22;
11;statement;max_price = foo_1[foo_2];22;
12;statement;foo_1[foo_2] = fun_1(foo_3[foo_4 + 1], foo_5 - foo_6[foo_7]);23;
13;statement;i--;21;
14;statement;int min_price = foo_1[0];25;
15;statement;int i = 1;26;
16;conditional;foo_1 < foo_2;27;
17;conditional;foo_1[foo_2] < foo_3;29;
18;statement;min_price = foo_1[foo_2];29;
19;statement;foo_1[foo_2] = fun_1(foo_3[foo_4 - 1], foo_5[foo_6] + (foo_7[foo_8] - foo_9));30;
20;statement;i++;28;
21;statement;int result = foo_1[foo_2 - 1];32;
22;statement;return foo_1;33;
23;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;
8;10;14;
9;11;12;
10;12;
11;13;
12;9;
13;15;
14;16;
15;17;21;
16;18;19;
17;19;
18;20;
19;16;
20;22;
21;23;
22;