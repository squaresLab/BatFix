Nodes
1;special;;;
2;statement;int[] c = new int[]{ 0, 0, 0 };9;
3;statement;int i;10;
4;statement;int res = 0;11;
5;statement;i = 0;12;
6;conditional;foo_1 < foo_2;13;
7;statement;foo_1[foo_2[foo_3] % 3]++;15;
8;statement;i++;14;
9;statement;res += (foo_1[0] * (foo_2[0] - 1)) >> 1;16;
10;statement;res += foo_1[1] * foo_2[2];17;
11;statement;res += ((foo_1[0] * (foo_2[0] - 1)) * (foo_3[0] - 2)) / 6;18;
12;statement;res += ((foo_1[1] * (foo_2[1] - 1)) * (foo_3[1] - 2)) / 6;19;
13;statement;res += ((foo_1[2] * (foo_2[2] - 1)) * (foo_3[2] - 2)) / 6;20;
14;statement;res += (foo_1[0] * foo_2[1]) * foo_3[2];21;
15;statement;return foo_1;22;
16;exit;;;
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
9;11;
10;12;
11;13;
12;14;
13;15;
14;16;
15;
