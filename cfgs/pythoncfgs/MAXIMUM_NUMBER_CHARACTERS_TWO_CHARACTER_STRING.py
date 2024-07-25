Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = -1;9;
3;conditional;foo < foo;10;
4;statement;return foo_1;14;
5;conditional;foo < foo;11;
6;conditional;foo_1[foo_2] == foo_3[foo_4];12;
7;statement;foo_1 = fun_2(foo_2, fun_2(foo_3 - foo_4 - 1));13;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;3;6;
5;5;7;
6;5;
7;