Nodes
1;special;;;
2;statement;int curr_sum = foo_1[0];14;
3;statement;int start = 0;14;
4;statement;int i;14;
5;statement;i = 1;15;
6;conditional;foo_1 <= foo_2;16;
7;conditional;(foo_1 > foo_2) && (foo_3 < (foo_4 - 1));18;
8;statement;curr_sum = foo_1 - foo_2[foo_3];19;
9;statement;start++;20;
10;conditional;foo_1 == foo_2;22;
11;statement;int p = foo_1 - 1;23;
12;statement;System.fun_1((("Sum found between indexes " + foo_1) + " and ") + foo_2);24;
13;statement;return 1;25;
14;exit;;;
15;conditional;foo_1 < foo_2;27;
16;statement;curr_sum = foo_1 + foo_2[foo_3];27;
17;statement;i++;17;
18;statement;System.fun_1("No subarray found");29;
19;statement;return 0;30;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;18;
6;10;8;
7;9;
8;7;
9;11;15;
10;12;
11;13;
12;14;
13;
14;16;17;
15;17;
16;6;
17;19;
18;14;
