Nodes
1;special;;;
2;statement;int k = 0;14;
3;statement;int pos = 0;14;
4;statement;int i = 0;14;
5;conditional;foo_1 != fun_1();15;
6;conditional;fun_1(foo_2);16;
7;statement;'4';17;
8;statement;pos = (foo_1 * 2) + 1;17;
9;statement;break;18;
10;statement;'7';19;
11;statement;pos = (foo_1 * 2) + 2;19;
12;statement;break;20;
13;statement;i++;22;
14;statement;k++;23;
15;statement;return foo_1;25;
16;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;15;6;
5;7;10;
6;8;
7;9;
8;13;
9;11;
10;12;
11;13;
12;14;
13;5;
14;16;
15;
