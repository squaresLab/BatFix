Nodes
1;special;;;
2;statement;Map<Integer, Integer> m = new HashMap<>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;fun_1(foo_2[foo_3]);18;
6;statement;fun_1(foo_2[foo_3], fun_2(foo_5[foo_6]) + 1);19;
7;statement;fun_1(foo_2[foo_3], 1);22;
8;statement;i++;17;
9;statement;int i = 0;25;
10;conditional;foo_1 < foo_2;26;
11;conditional;fun_1(foo_2[foo_3]) == 1;27;
12;statement;return foo_1[foo_2];27;
13;exit;;;
14;statement;i++;27;
15;statement;return -1;28;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;7;
5;8;
6;8;
7;4;
8;10;
9;11;15;
10;12;14;
11;13;
12;
13;10;
14;13;
