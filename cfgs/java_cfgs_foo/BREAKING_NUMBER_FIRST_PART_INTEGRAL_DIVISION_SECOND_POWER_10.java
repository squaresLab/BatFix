Nodes
1;special;;;
2;statement;int len = fun_1();14;
3;statement;int l = foo_1 / 2;15;
4;statement;int count = 0;16;
5;statement;int i = 1;17;
6;conditional;foo_1 <= foo_2;18;
7;statement;String s = fun_1(0, foo_2);20;
8;statement;int l1 = fun_1();21;
9;statement;String t = fun_1(foo_2, foo_3 + foo_4);22;
10;conditional;(fun_1(0) == '0') || (fun_2(0) == '0');23;
11;statement;continue;23;
12;conditional;fun_1(foo_2) == 0;24;
13;statement;count++;24;
14;statement;i++;19;
15;statement;return foo_1;26;
16;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;15;
6;8;
7;9;
8;10;
9;11;12;
10;6;
11;13;14;
12;14;
13;6;
14;16;
15;