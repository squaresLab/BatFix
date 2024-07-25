Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;conditional;foo_1 >= 9;9;
3;statement;foo_1 = [None] * (foo_2 + 1);11;
4;statement;foo_1 = 1;12;
5;conditional;fun_1(foo_1 + 1);13;
6;statement;return foo_1;20;
7;conditional;foo_1 == foo_2 or foo_3[foo_4] == 'I';14;
8;conditional;fun_1(foo_1 - 1, -2, -1);15;
9;statement;foo_1[foo_2 + 1] = fun_2('0' + fun_2(foo_3));16;
10;statement;foo_1 += 1;17;
11;conditional;foo_1 >= 0 and foo_2[foo_3] == 'I';18;
12;statement;return '-1';10;
13;exit;;
Edges
0;2;
1;3;12;
2;4;
3;5;
4;6;7;
5;13;
6;5;8;
7;5;9;
8;10;
9;11;
10;8;5;
11;13;
12;