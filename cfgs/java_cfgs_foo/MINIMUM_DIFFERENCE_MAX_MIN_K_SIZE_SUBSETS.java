Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int res = 2147483647;15;
4;statement;int i = 0;16;
5;conditional;foo_1 <= (foo_2 - foo_3);17;
6;statement;int curSeqDiff = foo_1[(foo_2 + foo_3) - 1] - foo_4[foo_5];19;
7;statement;res = fun_1(foo_1, foo_2);20;
8;statement;i++;18;
9;statement;return foo_1;22;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;5;
8;10;
9;
