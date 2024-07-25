Nodes
1;special;;;
2;statement;int l = fun_1();14;
3;statement;int i = 0;15;
4;statement;int j = foo_1 - 1;15;
5;conditional;foo_1 <= foo_2;16;
6;conditional;fun_1(foo_2) != fun_2(foo_4);18;
7;statement;return false;19;
8;exit;;;
9;statement;i++;17;
10;statement;j--;17;
11;statement;return true;22;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;11;
5;7;9;
6;8;
7;
8;10;
9;5;
10;8;
