Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int[] lps = new int[foo_1];15;
4;statement;foo_1[0] = 0;16;
5;statement;int len = 0;17;
6;statement;int i = 1;18;
7;conditional;foo_1 < foo_2;19;
8;conditional;fun_1(foo_2) == fun_2(foo_4);20;
9;statement;len++;21;
10;statement;foo_1[foo_2] = foo_3;22;
11;statement;i++;23;
12;conditional;foo_1 != 0;26;
13;statement;len = foo_1[foo_2 - 1];27;
14;statement;foo_1[foo_2] = 0;30;
15;statement;i++;31;
16;statement;int res = foo_1[foo_2 - 1];35;
17;statement;return foo_1 > (foo_2 / 2) ? foo_3 / 2 : foo_4;36;
18;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;16;8;
7;9;12;
8;10;
9;11;
10;7;
11;13;14;
12;7;
13;15;
14;7;
15;17;
16;18;
17;