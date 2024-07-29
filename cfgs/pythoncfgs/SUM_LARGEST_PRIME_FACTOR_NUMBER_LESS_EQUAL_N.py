Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = fun_1(foo_2 / 2);10;
4;conditional;foo < foo;11;
5;conditional;foo < foo;15;
6;statement;return foo_1;20;
7;conditional;foo_1[foo_2];16;
8;statement;foo_1 += foo_2;19;
9;statement;foo_1 += foo_2[foo_3];17;
10;conditional;foo_1[foo_2] == 0;12;
11;conditional;fun_1(foo_1 * 2, foo_2 + 1, foo_3);13;
12;statement;foo_1[foo_2] = foo_3;14;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;7;
5;13;
6;8;9;
7;5;
8;5;
9;4;11;
10;4;12;
11;11;
12;
