Nodes
1;special;;;
2;statement;int[] C = new int[foo_1 + 1];14;
3;statement;fun_1(foo_1, 0);15;
4;statement;foo_1[0] = 1;16;
5;statement;int i = 1;17;
6;conditional;foo_1 <= foo_2;18;
7;statement;int j = fun_1(foo_1, foo_2);20;
8;conditional;foo_1 > 0;21;
9;statement;foo_1[foo_2] = (foo_3[foo_4] + foo_5[foo_6 - 1]) % foo_7;22;
10;statement;j--;22;
11;statement;i++;19;
12;statement;return foo_1[foo_2];24;
13;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;12;
6;8;
7;9;11;
8;10;
9;8;
10;6;
11;13;
12;
