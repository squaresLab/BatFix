Nodes
1;special;;;
2;statement;int[] MS = new int[foo_1];14;
3;statement;foo_1[foo_2 - 1] = foo_3[foo_4 - 1];15;
4;statement;int i = foo_1 - 2;16;
5;conditional;foo_1 >= 0;17;
6;conditional;((foo_1 + foo_2) + 1) >= foo_3;19;
7;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6 + 1]);19;
8;statement;foo_1[foo_2] = fun_1(foo_3[foo_4] + foo_5[(foo_6 + foo_7) + 1], foo_8[foo_9 + 1]);20;
9;statement;i--;18;
10;statement;return foo_1[0];22;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;8;
6;9;
7;9;
8;5;
9;11;
10;
