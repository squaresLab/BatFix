Nodes
1;special;;;
2;statement;int count = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < fun_1();16;
5;conditional;foo_1 == fun_1();18;
6;statement;break;18;
7;conditional;fun_1(foo_2) == fun_2(foo_4);19;
8;statement;count++;19;
9;statement;i++;17;
10;statement;return foo_1;21;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;7;
5;10;
6;8;9;
7;9;
8;4;
9;11;
10;
