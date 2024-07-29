Nodes
1;statement;foo_1 = [];8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1 * foo_2;20;
6;conditional;foo_1[foo_2] not in foo_3;12;
7;conditional;foo_1[foo_2] > foo_3;15;
8;conditional;foo_1[foo_2] > foo_3;18;
9;statement;foo_1 = foo_2[foo_3];19;
10;statement;foo_1 = foo_2;16;
11;statement;foo_1 = foo_2[foo_3];17;
12;statement;fun_1(foo_1[foo_2]);13;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;12;
6;8;10;
7;4;9;
8;4;
9;11;
10;4;
11;4;
12;
