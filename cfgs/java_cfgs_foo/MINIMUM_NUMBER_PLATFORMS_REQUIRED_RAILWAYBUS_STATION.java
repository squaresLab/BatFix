Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;fun_1(foo_1);15;
4;statement;int plat_needed = 1;16;
5;statement;int result = 1;16;
6;statement;int i = 1;17;
7;statement;int j = 0;17;
8;conditional;(foo_1 < foo_2) && (foo_3 < foo_4);18;
9;conditional;foo_1[foo_2] <= foo_3[foo_4];19;
10;statement;plat_needed++;20;
11;statement;i++;21;
12;conditional;foo_1 > foo_2;22;
13;statement;result = foo_1;22;
14;statement;plat_needed--;25;
15;statement;j++;26;
16;statement;return foo_1;29;
17;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;16;9;
8;10;14;
9;11;
10;12;
11;13;8;
12;8;
13;15;
14;8;
15;17;
16;