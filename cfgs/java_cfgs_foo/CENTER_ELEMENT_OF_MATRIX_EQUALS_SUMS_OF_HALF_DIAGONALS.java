Nodes
1;special;;;
2;statement;int diag1_left = 0;14;
3;statement;int diag1_right = 0;14;
4;statement;int diag2_left = 0;15;
5;statement;int diag2_right = 0;15;
6;statement;int i = 0;16;
7;statement;int j = foo_1 - 1;16;
8;conditional;foo_1 < foo_2;17;
9;conditional;foo_1 < (foo_2 / 2);19;
10;statement;diag1_left += foo_1[foo_2][foo_3];20;
11;statement;diag2_left += foo_1[foo_2][foo_3];21;
12;conditional;foo_1 > (foo_2 / 2);23;
13;statement;diag1_right += foo_1[foo_2][foo_3];24;
14;statement;diag2_right += foo_1[foo_2][foo_3];25;
15;statement;i++;18;
16;statement;j--;18;
17;statement;return (((foo_1 == foo_2) && (foo_3 == foo_4)) && (foo_5 == foo_6)) && (foo_7 == foo_8[foo_9 / 2][foo_10 / 2]);28;
18;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;17;
8;10;12;
9;11;
10;15;
11;13;15;
12;14;
13;15;
14;16;
15;8;
16;18;
17;