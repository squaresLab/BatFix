Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 < (foo_2 - 1);15;
4;conditional;foo_1[foo_2] > foo_3[foo_4 + 1];17;
5;conditional;(foo_1[foo_2] - foo_3[foo_4 + 1]) == 1;18;
6;statement;int temp = foo_1[foo_2];19;
7;statement;foo_1[foo_2] = foo_3[foo_4 + 1];20;
8;statement;foo_1[foo_2 + 1] = foo_3;21;
9;statement;return false;23;
10;exit;;;
11;statement;i++;16;
12;statement;return true;26;
Edges
0;2;
1;3;
2;4;12;
3;5;11;
4;6;9;
5;7;
6;8;
7;11;
8;10;
9;
10;3;
11;10;
