Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 < foo_2;10;
4;conditional;foo_1 > 0;12;
5;statement;return foo_1;17;
6;statement;foo_1 += fun_1(foo_2 / foo_3);13;
7;statement;foo_1 = fun_1(foo_2 % foo_3);14;
8;statement;foo_1 = foo_2;15;
9;statement;foo_1 = foo_2;16;
10;statement;(foo_1, foo_2) = (foo_3, foo_4);11;
11;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;6;
4;11;
5;7;
6;8;
7;9;
8;4;
9;4;
10;