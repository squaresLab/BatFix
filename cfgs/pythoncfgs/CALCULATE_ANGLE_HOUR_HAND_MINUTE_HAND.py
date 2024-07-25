Nodes
1;conditional;foo_1 < 0 or foo_2 < 0 or foo_3 > 12 or (foo_4 > 60);8;
2;conditional;foo_1 == 12;10;
3;conditional;foo_1 == 60;12;
4;statement;foo_1 = 0.5 * (foo_2 * 60 + foo_3);14;
5;statement;foo_1 = 6 * foo_2;15;
6;statement;foo_1 = fun_1(foo_2 - foo_3);16;
7;statement;foo_1 = fun_1(360 - foo_2, foo_3);17;
8;statement;return foo_1;18;
9;statement;foo_1 = 0;13;
10;statement;foo_1 = 0;11;
11;statement;fun_1('Wrong input');9;
12;exit;;
Edges
0;2;11;
1;3;10;
2;4;9;
3;5;
4;6;
5;7;
6;8;
7;12;
8;4;
9;3;
10;2;
11;