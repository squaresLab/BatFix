Nodes
1;special;;;
2;statement;int sum = 0;14;
3;statement;HashSet<Integer> s = new HashSet<Integer>();15;
4;statement;int i = 0;16;
5;conditional;foo_1 < foo_2;17;
6;conditional;!fun_1(foo_2[foo_3]);19;
7;statement;sum += foo_1[foo_2];20;
8;statement;fun_1(foo_2[foo_3]);21;
9;statement;i++;18;
10;statement;return foo_1;24;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;9;
6;8;
7;9;
8;5;
9;11;
10;
