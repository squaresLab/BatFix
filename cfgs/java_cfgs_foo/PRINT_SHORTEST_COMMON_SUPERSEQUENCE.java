Nodes
1;special;;;
2;statement;int m = fun_1();12;
3;statement;int n = fun_1();13;
4;statement;int[][] dp = new int[foo_1 + 1][foo_2 + 1];15;
5;statement;int i = 0;17;
6;conditional;foo_1 <= foo_2;17;
7;statement;int j = 0;18;
8;conditional;foo_1 <= foo_2;18;
9;conditional;foo_1 == 0;20;
10;statement;foo_1[foo_2][foo_3] = foo_4;21;
11;conditional;foo_1 == 0;22;
12;statement;foo_1[foo_2][foo_3] = foo_4;23;
13;conditional;fun_1(foo_2 - 1) == fun_2(foo_4 - 1);24;
14;statement;foo_1[foo_2][foo_3] = 1 + foo_4[foo_5 - 1][foo_6 - 1];25;
15;statement;foo_1[foo_2][foo_3] = 1 + fun_1(foo_4[foo_5 - 1][foo_6], foo_7[foo_8][foo_9 - 1]);27;
16;statement;j++;18;
17;statement;i++;17;
18;statement;String str = "";33;
19;statement;int i = foo_1;35;
20;statement;int j = foo_1;35;
21;conditional;(foo_1 > 0) && (foo_2 > 0);36;
22;conditional;fun_1(foo_2 - 1) == fun_2(foo_4 - 1);37;
23;statement;str += fun_1(foo_2 - 1);38;
24;statement;i--;40;
25;statement;j--;41;
26;conditional;foo_1[foo_2 - 1][foo_3] > foo_4[foo_5][foo_6 - 1];42;
27;statement;str += fun_1(foo_2 - 1);44;
28;statement;j--;46;
29;statement;str += fun_1(foo_2 - 1);49;
30;statement;i--;51;
31;conditional;foo_1 > 0;55;
32;statement;str += fun_1(foo_2 - 1);56;
33;statement;i--;57;
34;conditional;foo_1 > 0;60;
35;statement;str += fun_1(foo_2 - 1);61;
36;statement;j--;62;
37;statement;str = fun_1(foo_1);65;
38;statement;return foo_1;66;
39;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;18;
6;8;
7;9;17;
8;10;11;
9;16;
10;12;13;
11;16;
12;14;15;
13;16;
14;16;
15;8;
16;6;
17;19;
18;20;
19;21;
20;31;22;
21;23;26;
22;24;
23;25;
24;21;
25;27;29;
26;28;
27;21;
28;30;
29;21;
30;34;32;
31;33;
32;31;
33;37;35;
34;36;
35;34;
36;38;
37;39;
38;
