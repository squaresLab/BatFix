Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int[][] LCSRe = new int[foo_1 + 1][foo_2 + 1];15;
4;statement;String res = "";16;
5;statement;int res_length = 0;17;
6;statement;int i;18;
7;statement;int index = 0;18;
8;statement;i = 1;19;
9;conditional;foo_1 <= foo_2;20;
10;statement;int j = foo_1 + 1;22;
11;conditional;foo_1 <= foo_2;23;
12;conditional;(fun_1(foo_2 - 1) == fun_2(foo_4 - 1)) && (foo_5[foo_6 - 1][foo_7 - 1] < (foo_8 - foo_9));25;
13;statement;foo_1[foo_2][foo_3] = foo_4[foo_5 - 1][foo_6 - 1] + 1;26;
14;conditional;foo_1[foo_2][foo_3] > foo_4;27;
15;statement;res_length = foo_1[foo_2][foo_3];28;
16;statement;index = fun_1(foo_1, foo_2);29;
17;statement;foo_1[foo_2][foo_3] = 0;33;
18;statement;j++;24;
19;statement;i++;21;
20;conditional;foo_1 > 0;37;
21;statement;i = (foo_1 - foo_2) + 1;38;
22;conditional;foo_1 <= foo_2;39;
23;statement;res += fun_1(foo_2 - 1);41;
24;statement;i++;40;
25;statement;return foo_1;44;
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
8;10;20;
9;11;
10;12;19;
11;13;17;
12;14;
13;15;18;
14;16;
15;18;
16;18;
17;11;
18;9;
19;21;25;
20;22;
21;23;25;
22;24;
23;22;
24;26;
25;
