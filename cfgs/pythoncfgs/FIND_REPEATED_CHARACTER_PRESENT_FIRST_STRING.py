Nodes
1;statement;foo_1 = -1;8;
2;conditional;fun_2(fun_2(foo_1));9;
3;statement;return foo_1;16;
4;conditional;foo < foo;10;
5;conditional;foo_1 != -1;14;
6;conditional;foo_1[foo_2] == foo_3[foo_4];11;
7;statement;foo_1 = foo_2;12;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;5;6;
4;2;3;
5;4;7;
6;5;
7;
