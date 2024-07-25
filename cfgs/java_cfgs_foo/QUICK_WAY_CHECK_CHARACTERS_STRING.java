Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int i = 1;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;fun_1(foo_2) != fun_2(0);17;
6;statement;return false;17;
7;exit;;;
8;statement;i++;17;
9;statement;return true;18;
Edges
0;2;
1;3;
2;4;
3;5;9;
4;6;8;
5;7;
6;
7;4;
8;7;
