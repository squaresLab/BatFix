Nodes
1;special;;;
2;statement;int high = 0;15;
3;statement;int i = 0;16;
4;conditional;foo_1 < foo_2;17;
5;statement;high = fun_1(foo_1, foo_2[foo_3]);19;
6;statement;i++;18;
7;statement;int[] divisors = new int[foo_1 + 1];20;
8;statement;int i = 0;21;
9;conditional;foo_1 < foo_2;22;
10;statement;int j = 1;24;
11;conditional;foo_1 <= fun_1(foo_2[foo_3]);25;
12;conditional;(foo_1[foo_2] % foo_3) == 0;27;
13;statement;foo_1[foo_2]++;28;
14;conditional;foo_1 != (foo_2[foo_3] / foo_4);29;
15;statement;foo_1[foo_2[foo_3] / foo_4]++;30;
16;statement;j++;26;
17;statement;i++;23;
18;statement;int i = foo_1;34;
19;conditional;foo_1 >= 1;35;
20;conditional;foo_1[foo_2] > 1;37;
21;statement;return foo_1;38;
22;exit;;;
23;statement;i--;36;
24;statement;return 1;39;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;
8;10;18;
9;11;
10;12;17;
11;13;16;
12;14;
13;15;16;
14;16;
15;11;
16;9;
17;19;
18;20;24;
19;21;23;
20;22;
21;
22;19;
23;22;
