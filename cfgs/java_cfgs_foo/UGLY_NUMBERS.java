Nodes
1;special;;;
2;statement;int[] ugly = new int[foo_1];14;
3;statement;int i2 = 0;15;
4;statement;int i3 = 0;15;
5;statement;int i5 = 0;15;
6;statement;int next_multiple_of_2 = 2;16;
7;statement;int next_multiple_of_3 = 3;17;
8;statement;int next_multiple_of_5 = 5;18;
9;statement;int next_ugly_no = 1;19;
10;statement;foo_1[0] = 1;20;
11;statement;int i = 1;21;
12;conditional;foo_1 < foo_2;22;
13;statement;next_ugly_no = fun_1(foo_1, fun_2(foo_2, foo_3));24;
14;statement;foo_1[foo_2] = foo_3;25;
15;conditional;foo_1 == foo_2;26;
16;statement;i2 = foo_1 + 1;27;
17;statement;next_multiple_of_2 = foo_1[foo_2] * 2;28;
18;conditional;foo_1 == foo_2;30;
19;statement;i3 = foo_1 + 1;31;
20;statement;next_multiple_of_3 = foo_1[foo_2] * 3;32;
21;conditional;foo_1 == foo_2;34;
22;statement;i5 = foo_1 + 1;35;
23;statement;next_multiple_of_5 = foo_1[foo_2] * 5;36;
24;statement;i++;23;
25;statement;return foo_1;39;
26;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;
8;10;
9;11;
10;12;
11;13;25;
12;14;
13;15;
14;16;18;
15;17;
16;18;
17;19;21;
18;20;
19;21;
20;22;24;
21;23;
22;24;
23;12;
24;26;
25;
