Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;conditional;foo < foo;11;
4;statement;return fun_1(foo_1);13;
5;statement;foo_1 = foo_2 ^ fun_1(foo_3[foo_4]);12;
6;statement;foo_1 = foo_2 ^ fun_1(foo_3[foo_4]);10;
7;exit;;
Edges
0;2;
1;3;6;
2;4;5;
3;7;
4;3;
5;2;
6;
