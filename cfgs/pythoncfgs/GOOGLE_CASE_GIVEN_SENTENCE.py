Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = '';9;
3;statement;foo_1 = foo_2 + fun_1();10;
4;statement;foo_1 = 1;11;
5;conditional;foo_1 < foo_2;12;
6;statement;return foo_1;19;
7;conditional;foo_1[foo_2] == ' ' and foo_3 <= foo_4;13;
8;statement;foo_1 = foo_2 + fun_1();17;
9;statement;foo_1 = foo_2 + 1;18;
10;statement;foo_1 = foo_2 + ' ' + fun_1();14;
11;statement;foo_1 = foo_2 + 1;15;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;12;
6;8;10;
7;9;
8;5;
9;11;
10;9;
11;