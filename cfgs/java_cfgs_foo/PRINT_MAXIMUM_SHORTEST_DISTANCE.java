Nodes
1;special;;;
2;statement;HashMap<Integer, Integer> b = new HashMap<Integer, Integer>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;int x = foo_1[foo_2];18;
6;statement;int d = fun_1(1 + foo_1, foo_2 - foo_3);19;
7;conditional;!fun_1(foo_2);20;
8;statement;fun_1(foo_2, foo_3);20;
9;statement;fun_1(foo_2, fun_2(foo_3, fun_3(foo_5)));22;
10;statement;i++;17;
11;statement;int ans = Integer.MAX_VALUE;25;
12;statement;int i = 0;26;
13;conditional;foo_1 < foo_2;27;
14;statement;int x = foo_1[foo_2];29;
15;conditional;(foo_1 != (foo_2 - foo_3)) && fun_1(foo_5 - foo_6);30;
16;statement;ans = fun_1(fun_2(fun_3(foo_2), fun_4(foo_4 - foo_5)), foo_6);30;
17;statement;i++;28;
18;statement;return foo_1;32;
19;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;11;
4;6;
5;7;
6;8;9;
7;10;
8;10;
9;4;
10;12;
11;13;
12;14;18;
13;15;
14;16;17;
15;17;
16;13;
17;19;
18;