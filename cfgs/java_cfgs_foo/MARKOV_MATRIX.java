Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < foo_2.length;15;
4;statement;double sum = 0;17;
5;statement;int j = 0;18;
6;conditional;foo_1 < foo_2[foo_3].length;19;
7;statement;sum = foo_1 + foo_2[foo_3][foo_4];20;
8;statement;j++;20;
9;conditional;foo_1 != 1;21;
10;statement;return false;21;
11;exit;;;
12;statement;i++;16;
13;statement;return true;23;
Edges
0;2;
1;3;
2;4;13;
3;5;
4;6;
5;7;9;
6;8;
7;6;
8;10;12;
9;11;
10;
11;3;
12;11;
