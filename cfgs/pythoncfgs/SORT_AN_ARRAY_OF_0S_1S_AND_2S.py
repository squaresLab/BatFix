Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = foo_2 - 1;9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 <= foo_2;11;
5;conditional;foo_1[foo_2] == 0;12;
6;conditional;foo_1[foo_2] == 1;16;
7;statement;(foo_1[foo_2], foo_3[foo_4]) = (foo_5[foo_6], foo_7[foo_8]);19;
8;statement;foo_1 = foo_2 - 1;20;
9;statement;foo_1 = foo_2 + 1;17;
10;statement;(foo_1[foo_2], foo_3[foo_4]) = (foo_5[foo_6], foo_7[foo_8]);13;
11;statement;foo_1 = foo_2 + 1;14;
12;statement;foo_1 = foo_2 + 1;15;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;9;
6;8;
7;4;
8;4;
9;11;
10;12;
11;4;
12;
