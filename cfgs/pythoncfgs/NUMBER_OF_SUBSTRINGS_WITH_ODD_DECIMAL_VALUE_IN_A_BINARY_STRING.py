Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [0 for foo_2 in fun_1(foo_3)];9;
3;conditional;foo_1[0] == '1';10;
4;conditional;foo < foo;12;
5;statement;foo_1 = 0;17;
6;conditional;fun_1(foo_1 - 1, -1, -1);18;
7;statement;return foo_1;21;
8;conditional;foo_1[foo_2] == '1';19;
9;statement;foo_1 += foo_2[foo_3];20;
10;conditional;foo_1[foo_2] == '1';13;
11;statement;foo_1[foo_2] = foo_3[foo_4 - 1];16;
12;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + 1;14;
13;statement;foo_1[0] = 1;11;
14;exit;;
Edges
0;2;
1;3;
2;4;13;
3;5;10;
4;6;
5;7;8;
6;14;
7;6;9;
8;6;
9;11;12;
10;4;
11;4;
12;4;
13;
