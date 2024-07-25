Nodes
1;special;;;
2;statement;int[] count = new int[foo_1 + 1];14;
3;statement;foo_1[0] = 1;15;
4;statement;foo_1[1] = 1;16;
5;statement;foo_1[2] = 2;17;
6;statement;int i = 3;18;
7;conditional;foo_1 <= foo_2;19;
8;statement;foo_1[foo_2] = (foo_3[foo_4 - 1] + foo_5[foo_6 - 2]) + foo_7[foo_8 - 3];20;
9;statement;i++;20;
10;statement;return foo_1[foo_2];21;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;10;
7;9;
8;7;
9;11;
10;
