Nodes
1;special;;;
2;statement;Map<Integer, Integer> um = new HashMap<>();14;
3;statement;int curr_sum = 0;15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;curr_sum += (foo_1[foo_2] == 0) ? -1 : foo_3[foo_4];19;
7;statement;fun_1(foo_2, fun_2(foo_4) == null ? 1 : fun_3(foo_6) + 1);20;
8;statement;i++;18;
9;statement;int count = 0;22;
10;statement;Map.Entry<Integer, Integer> itr;23;
11;conditional;fun_1();23;
12;conditional;fun_1() > 1;24;
13;statement;count += (fun_1() * (fun_2() - 1)) / 2;24;
14;conditional;fun_1(0);26;
15;statement;count += fun_1(0);26;
16;statement;return foo_1;27;
17;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;5;
8;10;
9;11;
10;12;14;
11;13;11;
12;11;
13;15;16;
14;16;
15;17;
16;