Nodes
1;special;;;
2;statement;int[] dp = new int[109];14;
3;statement;foo_1[0] = 0;15;
4;statement;foo_1[1] = 1;16;
5;statement;int i = 2;17;
6;conditional;foo_1 < foo_2;18;
7;statement;foo_1[foo_2] = ((foo_3 - 2) * foo_4[foo_5 - 1]) + ((foo_6 - 1) * foo_7[foo_8 - 2]);19;
8;statement;i++;19;
9;statement;return foo_1 == 1 ? (foo_2 - 1) * foo_3[foo_4 - 2] : foo_5[foo_6 - 1];20;
10;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;
9;