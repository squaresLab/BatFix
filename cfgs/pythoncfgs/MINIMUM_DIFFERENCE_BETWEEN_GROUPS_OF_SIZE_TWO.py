Nodes
1;statement;fun_1();8;
2;statement;foo_1 = [];9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 = foo_2 - 1;11;
5;conditional;foo_1 < foo_2;12;
6;statement;foo_1 = fun_1(foo_2);16;
7;statement;foo_1 = fun_1(foo_2);17;
8;statement;return fun_1(foo_1 - foo_2);18;
9;statement;fun_1(foo_1[foo_2] + foo_3[foo_4]);13;
10;statement;foo_1 += 1;14;
11;statement;foo_1 -= 1;15;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;9;
5;7;
6;8;
7;12;
8;10;
9;11;
10;5;
11;
