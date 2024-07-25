Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [0] * foo_2;9;
3;statement;foo_1 = foo_2 + foo_3;10;
4;conditional;fun_1(foo_1);11;
5;statement;fun_1();13;
6;statement;return foo_1[0];14;
7;statement;foo_1[foo_2] = foo_3[foo_4:foo_5 + foo_6];12;
8;exit;;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;8;
6;4;
7;