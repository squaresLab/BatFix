Nodes
1;conditional;foo_1 < 10;10;
2;statement;foo_1 = fun_2(fun_2(foo_2));12;
3;statement;foo_1 = [0] * (foo_2 + 1);13;
4;statement;foo_1[0] = 0;14;
5;statement;foo_1[1] = 45;15;
6;conditional;foo < foo;16;
7;statement;foo_1 = fun_3(fun_3(fun_3(10, foo_2)));18;
8;statement;foo_1 = foo_2 // foo_3;19;
9;statement;return fun_2(foo_1 * foo_2[foo_3] + foo_4 * (foo_5 - 1) // 2 * foo_6 + foo_7 * (1 + foo_8 % foo_9) + fun_2(foo_10 % foo_11));20;
10;statement;foo_1[foo_2] = foo_3[foo_4 - 1] * 10 + 45 * fun_3(fun_3(fun_3(10, foo_5 - 1)));17;
11;statement;return foo_1 * (foo_2 + 1) / 2;11;
12;exit;;
Edges
0;2;11;
1;3;
2;4;
3;5;
4;6;
5;7;10;
6;8;
7;9;
8;12;
9;6;
10;12;
11;