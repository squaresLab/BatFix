Nodes
1;special;;;
2;statement;int[] dis = new int[foo_1];26;
3;statement;int i = 0;27;
4;conditional;foo_1 < foo_2;28;
5;statement;foo_1[foo_2] = (foo_3[foo_4] * foo_5[foo_6]) + (foo_7[foo_8] * foo_9[foo_10]);30;
6;statement;i++;29;
7;statement;fun_1(foo_1);31;
8;statement;return foo_1[foo_2 - 1];32;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;
8;
