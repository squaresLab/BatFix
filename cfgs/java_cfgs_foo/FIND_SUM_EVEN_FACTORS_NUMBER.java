Nodes
1;special;;;
2;conditional;(foo_1 % 2) != 0;14;
3;statement;return 0;14;
4;exit;;;
5;statement;int res = 1;15;
6;statement;int i = 2;16;
7;conditional;foo_1 <= fun_1(foo_2);17;
8;statement;int count = 0;19;
9;statement;int curr_sum = 1;19;
10;statement;int curr_term = 1;20;
11;conditional;(foo_1 % foo_2) == 0;21;
12;statement;count++;22;
13;statement;n = foo_1 / foo_2;23;
14;conditional;(foo_1 == 2) && (foo_2 == 1);24;
15;statement;curr_sum = 0;24;
16;statement;curr_term *= foo_1;25;
17;statement;curr_sum += foo_1;26;
18;statement;res *= foo_1;28;
19;statement;i++;18;
20;conditional;foo_1 >= 2;30;
21;statement;res *= 1 + foo_1;30;
22;statement;return foo_1;31;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;20;
7;9;
8;10;
9;11;
10;18;12;
11;13;
12;14;
13;15;16;
14;16;
15;17;
16;11;
17;19;
18;7;
19;21;22;
20;22;
21;4;