Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;fun_1(foo_1);15;
4;statement;int result = 0;16;
5;statement;int i = 0;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;foo_1[foo_2] > foo_3[foo_4];20;
8;statement;result = foo_1 + fun_1(foo_2[foo_3] - foo_4[foo_5]);20;
9;conditional;foo_1[foo_2] < foo_3[foo_4];21;
10;statement;result = foo_1 + fun_1(foo_2[foo_3] - foo_4[foo_5]);21;
11;statement;++i;19;
12;statement;return foo_1;23;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;9;
7;11;
8;10;11;
9;11;
10;6;
11;13;
12;
