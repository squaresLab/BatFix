Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = fun_1(foo_2 / 2);9;
3;statement;foo_1 = 0;10;
4;conditional;fun_1(foo_1 + 1);11;
5;statement;return foo_1;22;
6;statement;foo_1 = foo_2[0:0 + foo_3];12;
7;statement;foo_1 = fun_1(foo_2);13;
8;statement;foo_1 = foo_2[foo_3:foo_4 + foo_5];14;
9;conditional;foo_1[0] == '0' or foo_2[0] == '0';16;
10;conditional;foo_1 == foo_2;20;
11;statement;foo_1 += 1;21;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;12;
5;7;
6;8;
7;9;
8;4;10;
9;4;11;4;
10;4;
11;
