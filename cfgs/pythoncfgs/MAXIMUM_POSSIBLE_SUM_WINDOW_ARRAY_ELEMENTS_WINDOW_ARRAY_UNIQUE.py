Nodes
1;statement;foo_1 = fun_1();8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2 = 0;10;
4;conditional;foo < foo;11;
5;statement;return foo_1;19;
6;conditional;foo_1[foo_2] in foo_3;12;
7;statement;fun_1(foo_1[foo_2]);16;
8;statement;foo_1 += foo_2[foo_3];17;
9;statement;foo_1 = fun_1(foo_2, foo_3);18;
10;statement;fun_1(foo_1[foo_2]);13;
11;statement;foo_1 -= foo_2[foo_3];14;
12;statement;foo_1 += 1;15;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;10;
6;8;
7;9;
8;4;
9;11;
10;12;
11;6;
12;
