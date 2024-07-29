Nodes
1;statement;foo_1 = '';8;
2;conditional;fun_1(foo_1);9;
3;statement;foo_1 = 0;11;
4;conditional;fun_1(foo_1 - foo_2);12;
5;statement;return foo_1;17;
6;statement;foo_1 = foo_2 + fun_2(fun_2('a') + foo_3);13;
7;statement;foo_1 += 1;14;
8;conditional;foo_1 == foo_2;15;
9;statement;foo_1 = 0;16;
10;statement;foo_1 = foo_2 + fun_2(fun_2('a') + foo_3);10;
11;exit;;
Edges
0;2;
1;3;10;
2;4;
3;5;6;
4;11;
5;7;
6;8;
7;4;9;
8;4;
9;2;
10;
