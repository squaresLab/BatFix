Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3 + 1)];8;
2;conditional;fun_1(foo_1 + 1);9;
3;statement;return foo_1[foo_2];14;
4;conditional;foo_1 <= 2;10;
5;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + (foo_5 - 1) * foo_6[foo_7 - 2];13;
6;statement;foo_1[foo_2] = foo_3;11;
7;exit;;
Edges
0;2;
1;3;4;
2;7;
3;5;6;
4;2;
5;2;
6;
