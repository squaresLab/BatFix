Nodes
1;special;;;
2;statement;HashMap<String, Integer> m = new HashMap<>();36;
3;statement;int i = 0;37;
4;conditional;foo_1 < foo_2;38;
5;conditional;fun_1(foo_2[foo_3]);40;
6;statement;int get = fun_1(foo_2[foo_3]);41;
7;statement;fun_1(foo_2[foo_3], foo_4 + 1);42;
8;statement;fun_1(foo_2[foo_3], 1);45;
9;statement;i++;39;
10;statement;int res = 0;48;
11;statement;Map.Entry<String, Integer> it;49;
12;conditional;fun_1();49;
13;conditional;fun_1() == 2;50;
14;statement;res++;50;
15;statement;return foo_1;52;
16;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;8;
5;7;
6;9;
7;9;
8;4;
9;11;
10;12;
11;13;15;
12;14;12;
13;12;
14;16;
15;