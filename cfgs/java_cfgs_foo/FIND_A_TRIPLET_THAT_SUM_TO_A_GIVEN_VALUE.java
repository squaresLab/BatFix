Nodes
1;special;;;
2;statement;int l;14;
3;statement;int r;14;
4;statement;int i = 0;15;
5;conditional;foo_1 < (foo_2 - 2);16;
6;statement;int j = foo_1 + 1;18;
7;conditional;foo_1 < (foo_2 - 1);19;
8;statement;int k = foo_1 + 1;21;
9;conditional;foo_1 < foo_2;22;
10;conditional;((foo_1[foo_2] + foo_3[foo_4]) + foo_5[foo_6]) == foo_7;24;
11;statement;System.fun_1((((("Triplet is " + foo_1[foo_2]) + ", ") + foo_3[foo_4]) + ", ") + foo_5[foo_6]);25;
12;statement;return true;26;
13;exit;;;
14;statement;k++;23;
15;statement;j++;20;
16;statement;i++;17;
17;statement;return false;31;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;17;
5;7;
6;8;16;
7;9;
8;10;15;
9;11;14;
10;12;
11;13;
12;
13;9;
14;7;
15;5;
16;13;