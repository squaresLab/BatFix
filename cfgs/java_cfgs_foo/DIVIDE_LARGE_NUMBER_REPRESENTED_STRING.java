Nodes
1;special;;;
2;statement;String ans = "";15;
3;statement;int idx = 0;16;
4;statement;char[] num = fun_1();17;
5;statement;int temp = foo_1[foo_2] - '0';18;
6;conditional;foo_1 < foo_2;19;
7;statement;temp = (foo_1 * 10) + (foo_2[++idx] - '0');19;
8;statement;idx += 1;20;
9;conditional;foo_1.length > foo_2;21;
10;statement;ans += foo_1 / foo_2;22;
11;statement;temp = (((foo_1 % foo_2) * 10) + foo_3[idx++]) - '0';23;
12;conditional;fun_1() == 0;25;
13;statement;return "0";25;
14;exit;;;
15;statement;return foo_1;26;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;8;7;
6;6;
7;9;
8;12;10;
9;11;
10;9;
11;13;15;
12;14;
13;
14;14;
