Nodes
1;special;;;
2;statement;HashMap<Integer, Integer> mp = new HashMap<>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;fun_1(foo_2[foo_3], fun_2(foo_5[foo_6]) == null ? 1 : fun_3(foo_8[foo_9]) + 1);17;
6;statement;i++;17;
7;statement;int res = 0;18;
8;statement;Map.Entry<Integer, Integer> entry;19;
9;conditional;fun_1();19;
10;statement;res = fun_1(foo_1, fun_2());19;
11;statement;return foo_1;20;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;
8;10;11;
9;9;
10;12;
11;