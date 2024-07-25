Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];8;
2;conditional;foo_1 == 0 or foo_2[0] == 0;9;
3;statement;foo_1[0] = 0;11;
4;conditional;foo < foo;12;
5;statement;return foo_1[foo_2 - 1];18;
6;statement;foo_1[foo_2] = fun_1('inf');13;
7;conditional;fun_1(foo_1);14;
8;conditional;foo_1 <= foo_2 + foo_3[foo_4] and foo_5[foo_6] != fun_1('inf');15;
9;statement;foo_1[foo_2] = fun_1(foo_3[foo_4], foo_5[foo_6] + 1);16;
10;statement;return fun_1('inf');10;
11;exit;;
Edges
0;2;
1;3;10;
2;4;
3;5;6;
4;11;
5;7;
6;4;8;
7;7;9;
8;4;
9;11;
10;