Nodes
1;special;;;
2;statement;Map<Integer, Integer> hp = new HashMap<>();13;
3;statement;int i = 0;14;
4;conditional;foo_1 < foo_2;15;
5;statement;int key = foo_1[foo_2];17;
6;conditional;fun_1(foo_2);18;
7;statement;int freq = fun_1(foo_2);19;
8;statement;freq++;20;
9;statement;fun_1(foo_2, foo_3);21;
10;statement;fun_1(foo_2, 1);24;
11;statement;i++;16;
12;statement;int max_count = 0;27;
13;statement;int res = -1;27;
14;statement;Entry<Integer, Integer> val;28;
15;conditional;fun_1();28;
16;conditional;foo_1 < fun_1();29;
17;statement;res = fun_1();30;
18;statement;max_count = fun_1();31;
19;statement;return foo_1;34;
20;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;12;
4;6;
5;7;10;
6;8;
7;9;
8;11;
9;11;
10;4;
11;13;
12;14;
13;15;
14;16;19;
15;17;15;
16;18;
17;15;
18;20;
19;
