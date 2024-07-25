Nodes
1;special;;;
2;statement;int l = 0;14;
3;statement;int h = fun_1() - 1;15;
4;conditional;foo_1 > foo_2;16;
5;conditional;fun_1(l++) != fun_2(h--);16;
6;statement;return false;16;
7;exit;;;
8;statement;return true;17;
Edges
0;2;
1;3;
2;4;
3;8;5;
4;6;4;
5;7;
6;
7;7;
