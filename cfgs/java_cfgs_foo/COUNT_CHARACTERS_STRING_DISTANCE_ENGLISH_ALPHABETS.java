Nodes
1;special;;;
2;statement;int result = 0;14;
3;statement;int n = fun_1();15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;statement;int j = foo_1 + 1;18;
7;conditional;foo_1 < foo_2;19;
8;conditional;fun_1(fun_2(foo_2) - fun_3(foo_4)) == fun_4(foo_5 - foo_6);20;
9;statement;result++;20;
10;statement;j++;20;
11;statement;i++;18;
12;statement;return foo_1;21;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;12;
5;7;
6;8;11;
7;9;10;
8;10;
9;7;
10;5;
11;13;
12;
