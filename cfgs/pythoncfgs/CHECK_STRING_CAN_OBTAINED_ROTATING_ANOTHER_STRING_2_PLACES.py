Nodes
1;conditional;fun_1(foo_1) != fun_2(foo_2);8;
2;statement;foo_1 = '';10;
3;statement;foo_1 = '';11;
4;statement;foo_1 = fun_1(foo_2);12;
5;statement;foo_1 = foo_2 + foo_3[foo_4 - 2:] + foo_5[0:foo_6 - 2];13;
6;statement;foo_1 = foo_2 + foo_3[2:] + foo_4[0:2];14;
7;statement;return foo_1 == foo_2 or foo_3 == foo_4;15;
8;statement;return false;9;
9;exit;;
Edges
0;2;8;
1;3;
2;4;
3;5;
4;6;
5;7;
6;9;
7;9;
8;