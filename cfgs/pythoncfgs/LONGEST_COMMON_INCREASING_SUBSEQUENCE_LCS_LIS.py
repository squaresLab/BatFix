Nodes
1;statement;foo_1 = [0] * foo_2;8;
2;conditional;fun_1(foo_1);9;
3;conditional;fun_1(foo_1);11;
4;statement;foo_1 = 0;20;
5;conditional;fun_1(foo_1);21;
6;statement;return foo_1;24;
7;conditional;foo_1[foo_2] > foo_3;22;
8;statement;foo_1 = foo_2[foo_3];23;
9;statement;foo_1 = 0;12;
10;conditional;fun_1(foo_1);13;
11;conditional;foo_1[foo_2] == foo_3[foo_4];14;
12;conditional;foo_1[foo_2] > foo_3[foo_4];17;
13;conditional;foo_1[foo_2] > foo_3;18;
14;statement;foo_1 = foo_2[foo_3];19;
15;conditional;foo_1 + 1 > foo_2[foo_3];15;
16;statement;foo_1[foo_2] = foo_3 + 1;16;
17;statement;foo_1[foo_2] = 0;10;
18;exit;;
Edges
0;2;
1;3;17;
2;4;9;
3;5;
4;6;7;
5;18;
6;5;8;
7;5;
8;10;
9;3;11;
10;12;15;
11;10;13;
12;10;14;
13;10;
14;12;16;
15;12;
16;2;
17;