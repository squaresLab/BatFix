Nodes
1;conditional;foo_1 <= 4;8;
2;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];10;
3;statement;foo_1[0] = foo_2[0];11;
4;statement;foo_1[1] = foo_2[1];12;
5;statement;foo_1[2] = foo_2[2];13;
6;statement;foo_1[3] = foo_2[3];14;
7;conditional;foo < foo;15;
8;statement;return fun_1(foo_1[foo_2 - 4:foo_3]);17;
9;statement;foo_1[foo_2] = foo_3[foo_4] + fun_1(foo_5[foo_6 - 4:foo_7]);16;
10;statement;return fun_1(foo_1);9;
11;exit;;
Edges
0;2;10;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;9;
7;11;
8;7;
9;11;
10;