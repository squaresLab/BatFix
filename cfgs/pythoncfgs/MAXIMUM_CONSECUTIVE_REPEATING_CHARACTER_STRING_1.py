Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2[0];10;
4;statement;foo_1 = 1;11;
5;conditional;fun_1(foo_1);12;
6;statement;return foo_1;20;
7;conditional;foo_1 < foo_2 - 1 and foo_3[foo_4] == foo_5[foo_6 + 1];13;
8;conditional;foo_1 > foo_2;16;
9;statement;foo_1 = 1;19;
10;statement;foo_1 = foo_2;17;
11;statement;foo_1 = foo_2[foo_3];18;
12;statement;foo_1 += 1;14;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;13;
6;8;12;
7;9;10;
8;5;
9;11;
10;9;
11;5;
12;
