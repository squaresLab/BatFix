Nodes
1;special;;;
2;statement;int[][] dp = new int[10][foo_1 + 1];39;
3;statement;int i = 0;40;
4;conditional;foo_1 < 10;41;
5;statement;foo_1[foo_2][1] = 1;42;
6;statement;i++;42;
7;statement;int digit = 0;43;
8;conditional;foo_1 <= 9;44;
9;statement;int len = 2;46;
10;conditional;foo_1 <= foo_2;47;
11;statement;int x = 0;49;
12;conditional;foo_1 <= foo_2;50;
13;statement;foo_1[foo_2][foo_3] += foo_4[foo_5][foo_6 - 1];51;
14;statement;x++;51;
15;statement;len++;48;
16;statement;digit++;45;
17;statement;int count = 0;54;
18;statement;int i = 0;55;
19;conditional;foo_1 < 10;56;
20;statement;count += foo_1[foo_2][foo_3];57;
21;statement;i++;57;
22;statement;return foo_1;58;
23;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;4;
6;8;
7;9;17;
8;10;
9;11;16;
10;12;
11;13;15;
12;14;
13;12;
14;10;
15;8;
16;18;
17;19;
18;20;22;
19;21;
20;19;
21;23;
22;
