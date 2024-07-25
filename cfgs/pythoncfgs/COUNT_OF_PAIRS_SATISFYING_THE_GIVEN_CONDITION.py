Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 0;9;
3;conditional;foo_1 < fun_1(foo_2);10;
4;statement;foo_1 = 0;14;
5;conditional;foo_1 == fun_1(foo_2);15;
6;statement;foo_1 = foo_2 * (fun_1(foo_3) - 1);18;
7;statement;return foo_1;19;
8;statement;foo_1 = foo_2 * fun_1(foo_3);16;
9;conditional;foo_1[foo_2] != '9';11;
10;statement;foo_1 += 1;13;
11;exit;;
Edges
0;2;
1;3;
2;4;9;
3;5;
4;6;8;
5;7;
6;11;
7;7;
8;4;10;
9;3;
10;