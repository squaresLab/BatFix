Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = foo_2[0];10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1;20;
6;statement;foo_1 = 1;12;
7;conditional;foo < foo;13;
8;conditional;foo_1 > foo_2;17;
9;statement;foo_1 = foo_2;18;
10;statement;foo_1 = foo_2[foo_3];19;
11;conditional;foo_1[foo_2] != foo_3[foo_4];14;
12;statement;foo_1 += 1;16;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;
6;8;11;
7;4;9;
8;10;
9;4;
10;8;12;
11;7;
12;
