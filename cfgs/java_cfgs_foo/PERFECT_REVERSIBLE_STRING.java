Nodes
1;special;;;
2;statement;int i = 0;14;
3;statement;int j = fun_1() - 1;14;
4;conditional;foo_1 < foo_2;15;
5;conditional;fun_1(foo_2) != fun_2(foo_4);16;
6;statement;return false;16;
7;exit;;;
8;statement;i++;17;
9;statement;j--;18;
10;statement;return true;20;
Edges
0;2;
1;3;
2;4;
3;10;5;
4;6;8;
5;7;
6;
7;9;
8;4;
9;7;
