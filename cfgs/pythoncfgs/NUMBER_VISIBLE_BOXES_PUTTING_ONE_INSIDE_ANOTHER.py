Nodes
1;statement;foo_1 = fun_1([]);10;
2;statement;fun_1();11;
3;statement;fun_1(foo_1[0]);12;
4;conditional;foo < foo;13;
5;statement;return fun_1(foo_1);18;
6;statement;foo_1 = foo_2[0];14;
7;conditional;foo_1[foo_2] >= 2 * foo_3;15;
8;statement;fun_1(foo_1[foo_2]);17;
9;statement;fun_1();16;
10;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;10;
5;7;
6;8;9;
7;4;
8;8;
9;
