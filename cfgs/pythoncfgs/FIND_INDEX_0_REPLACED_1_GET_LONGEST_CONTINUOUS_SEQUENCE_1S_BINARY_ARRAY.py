Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = -1;10;
4;statement;foo_1 = -1;11;
5;conditional;fun_1(foo_1);12;
6;conditional;foo_1 - foo_2 > foo_3;19;
7;statement;return foo_1;21;
8;statement;foo_1 = foo_2;20;
9;conditional;foo_1[foo_2] == 0;13;
10;conditional;foo_1 - foo_2 > foo_3;14;
11;statement;foo_1 = foo_2;17;
12;statement;foo_1 = foo_2;18;
13;statement;foo_1 = foo_2 - foo_3;15;
14;statement;foo_1 = foo_2;16;
15;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;8;
6;15;
7;7;
8;5;10;
9;11;13;
10;12;
11;5;
12;14;
13;11;
14;