Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 360;10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1;18;
6;statement;foo_1 += foo_2[foo_3];12;
7;conditional;foo_1 >= 180;13;
8;statement;foo_1 = fun_2(foo_2, 2 * fun_2(180 - foo_3));17;
9;statement;foo_1 = fun_2(foo_2, 2 * fun_2(180 - foo_3));14;
10;statement;foo_1 -= foo_2[foo_3];15;
11;statement;foo_1 += 1;16;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;12;
5;7;
6;8;9;
7;4;
8;10;
9;11;
10;7;
11;
