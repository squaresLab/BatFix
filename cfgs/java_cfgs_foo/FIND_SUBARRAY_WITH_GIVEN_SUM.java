Nodes
1;special;;;
2;statement;int curr_sum;14;
3;statement;int i;14;
4;statement;int j;14;
5;statement;i = 0;15;
6;conditional;foo_1 < foo_2;16;
7;statement;curr_sum = foo_1[foo_2];18;
8;statement;j = foo_1 + 1;19;
9;conditional;foo_1 <= foo_2;20;
10;conditional;foo_1 == foo_2;22;
11;statement;int p = foo_1 - 1;23;
12;statement;System.fun_1((("Sum found between indexes " + foo_1) + " and ") + foo_2);24;
13;statement;return 1;25;
14;exit;;;
15;conditional;(foo_1 > foo_2) || (foo_3 == foo_4);27;
16;statement;break;27;
17;statement;curr_sum = foo_1 + foo_2[foo_3];28;
18;statement;j++;21;
19;statement;i++;17;
20;statement;System.fun_1("No subarray found");31;
21;statement;return 0;32;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;20;
6;8;
7;9;
8;10;19;
9;11;15;
10;12;
11;13;
12;14;
13;
14;16;17;
15;19;
16;18;
17;9;
18;6;
19;21;
20;14;