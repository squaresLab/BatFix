Nodes
1;special;;;
2;statement;int max_idx = foo_1 - 1;14;
3;statement;int min_idx = 0;14;
4;statement;int max_elem = foo_1[foo_2 - 1] + 1;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;conditional;(foo_1 % 2) == 0;19;
8;statement;foo_1[foo_2] += (foo_3[foo_4] % foo_5) * foo_6;20;
9;statement;max_idx--;21;
10;statement;foo_1[foo_2] += (foo_3[foo_4] % foo_5) * foo_6;24;
11;statement;min_idx++;25;
12;statement;i++;18;
13;statement;int i = 0;28;
14;conditional;foo_1 < foo_2;29;
15;statement;foo_1[foo_2] = foo_3[foo_4] / foo_5;30;
16;statement;i++;30;
17;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;13;
6;8;10;
7;9;
8;12;
9;11;
10;12;
11;6;
12;14;
13;15;17;
14;16;
15;14;
16;
