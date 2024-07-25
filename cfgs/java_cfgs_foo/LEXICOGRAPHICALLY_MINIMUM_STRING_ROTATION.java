Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;String[] arr = new String[foo_1];15;
4;statement;String concat = foo_1 + foo_2;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < foo_2;18;
7;statement;foo_1[foo_2] = fun_1(foo_4, foo_5 + foo_6);20;
8;statement;i++;19;
9;statement;fun_1(foo_1);22;
10;statement;return foo_1[0];23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;
9;11;
10;
