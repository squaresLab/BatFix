Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int minXor = Integer.MAX_VALUE;15;
4;statement;int val = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < (foo_2 - 1);18;
7;statement;val = foo_1[foo_2] ^ foo_3[foo_4 + 1];20;
8;statement;minXor = fun_1(foo_1, foo_2);21;
9;statement;i++;19;
10;statement;return foo_1;23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;10;
6;8;
7;9;
8;6;
9;11;
10;
