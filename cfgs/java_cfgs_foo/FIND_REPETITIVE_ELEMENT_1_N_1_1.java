Nodes
1;special;;;
2;statement;HashSet<Integer> s = new HashSet<Integer>();14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;conditional;fun_1(foo_2[foo_3]);18;
6;statement;return foo_1[foo_2];18;
7;exit;;;
8;statement;fun_1(foo_2[foo_3]);19;
9;statement;i++;17;
10;statement;return -1;21;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;8;
5;7;
6;
7;9;
8;4;
9;7;
