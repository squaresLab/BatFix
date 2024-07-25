Nodes
1;statement;fun_1();8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;9;
4;statement;foo_1 = foo_2;9;
5;conditional;foo < foo;10;
6;statement;return foo_1 - foo_2;18;
7;conditional;foo_1[foo_2] == foo_3[foo_4 + 1];11;
8;statement;foo_1 = fun_1(foo_2, foo_3);15;
9;statement;foo_1 = fun_1(foo_2, foo_3);16;
10;statement;foo_1 = 0;17;
11;statement;foo_1 += 1;12;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;12;
6;8;11;
7;9;
8;10;
9;5;
10;5;
11;