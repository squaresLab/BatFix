Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = fun_1(foo_2);9;
3;conditional;foo_1 != foo_2;10;
4;statement;foo_1 = fun_1(foo_2);12;
5;statement;foo_1 = fun_1(foo_2);13;
6;conditional;foo < foo;14;
7;statement;return 1;17;
8;conditional;foo_1[foo_2] != foo_3[foo_4];15;
9;statement;return 0;16;
10;statement;return 0;11;
11;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;
4;6;
5;7;8;
6;11;
7;6;9;
8;11;
9;11;
10;