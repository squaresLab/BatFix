Nodes
1;statement;foo_1 = 0;10;
2;statement;foo_1 = -foo_2.inf;11;
3;statement;foo_1 = [];12;
4;statement;fun_1(foo_1[0]);13;
5;conditional;foo < foo;14;
6;conditional;fun_1(foo_1);16;
7;statement;return foo_1;19;
8;statement;foo_1 = fun_1(foo_2, foo_3[foo_4] - foo_5);17;
9;statement;foo_1 = fun_1(foo_2, foo_3[foo_4]);18;
10;statement;fun_1(foo_1[foo_2 - 1] + foo_3[foo_4]);15;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;10;
5;7;8;
6;11;
7;9;
8;6;
9;5;
10;
