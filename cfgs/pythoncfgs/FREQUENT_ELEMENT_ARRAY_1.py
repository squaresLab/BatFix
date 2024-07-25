Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;14;
4;statement;foo_1 = -1;15;
5;conditional;foo_1;16;
6;statement;return foo_1;20;
7;conditional;foo_1 < foo_2[foo_3];17;
8;statement;foo_1 = foo_2;18;
9;statement;foo_1 = foo_2[foo_3];19;
10;conditional;foo_1[foo_2] in fun_1();10;
11;statement;foo_1[foo_2[foo_3]] = 1;13;
12;statement;foo_1[foo_2[foo_3]] += 1;11;
13;exit;;
Edges
0;2;
1;3;10;
2;4;
3;5;
4;6;7;
5;13;
6;5;8;
7;9;
8;5;
9;11;12;
10;2;
11;2;
12;