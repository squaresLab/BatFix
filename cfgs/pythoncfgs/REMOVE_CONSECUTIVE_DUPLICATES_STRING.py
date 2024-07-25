Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;conditional;foo_1 < 2;9;
3;statement;foo_1 = 0;11;
4;conditional;fun_1(foo_1);12;
5;statement;foo_1 += 1;16;
6;statement;foo_1 = foo_2[:foo_3];17;
7;statement;return foo_1;18;
8;conditional;foo_1[foo_2] != foo_3[foo_4];13;
9;statement;foo_1 += 1;14;
10;statement;foo_1[foo_2] = foo_3[foo_4];15;
11;statement;return;10;
12;exit;;
Edges
0;2;
1;3;11;
2;4;
3;5;8;
4;6;
5;7;
6;12;
7;4;9;
8;10;
9;4;
10;12;
11;