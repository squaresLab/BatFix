Nodes
1;special;;;
2;statement;int[][] dp = new int[foo_1][foo_2];36;
3;statement;int i = 0;37;
4;conditional;foo_1 < (foo_2 - 1);38;
5;conditional;(fun_1(foo_2) == '(') && (fun_2(foo_4 + 1) == ')');39;
6;statement;foo_1[foo_2][foo_3 + 1] = 2;39;
7;statement;i++;39;
8;statement;int l = 2;40;
9;conditional;foo_1 < foo_2;41;
10;statement;int i = 0;43;
11;statement;int j = foo_1;43;
12;conditional;foo_1 < foo_2;44;
13;conditional;(fun_1(foo_2) == '(') && (fun_2(foo_4) == ')');46;
14;statement;foo_1[foo_2][foo_3] = 2 + foo_4[foo_5 + 1][foo_6 - 1];46;
15;statement;int k = foo_1;47;
16;conditional;foo_1 < foo_2;48;
17;statement;foo_1[foo_2][foo_3] = fun_1(foo_4[foo_5][foo_6], foo_7[foo_8][foo_9] + foo_10[foo_11 + 1][foo_12]);49;
18;statement;k++;49;
19;statement;i++;45;
20;statement;j++;45;
21;statement;l++;42;
22;statement;return foo_1[0][foo_2 - 1];52;
23;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;7;
6;4;
7;9;
8;10;22;
9;11;
10;12;
11;13;21;
12;14;15;
13;15;
14;16;
15;17;19;
16;18;
17;16;
18;20;
19;12;
20;9;
21;23;
22;
