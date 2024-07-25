Nodes
1;statement;foo_1 = fun_1();8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1;10;
4;conditional;foo_1;18;
5;statement;return -1;21;
6;conditional;foo_1 in fun_1() and foo_2[foo_3] > 0;19;
7;statement;return foo_1;20;
8;conditional;foo_1 < 0;11;
9;statement;foo_1[foo_2] = fun_1(foo_3, 0) + 1;17;
10;conditional;fun_1(foo_1) not in fun_2();12;
11;statement;foo_1[fun_1(foo_2)] -= 1;15;
12;statement;foo_1[fun_1(foo_2)] = -1;13;
13;exit;;
Edges
0;2;
1;3;
2;4;8;
3;5;6;
4;13;
5;4;7;
6;13;
7;9;10;
8;3;
9;11;12;
10;3;
11;3;
12;