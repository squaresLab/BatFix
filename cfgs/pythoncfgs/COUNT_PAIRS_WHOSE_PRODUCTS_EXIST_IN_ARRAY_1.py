Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1();9;
3;conditional;fun_1(foo_1);10;
4;conditional;fun_1(foo_1);12;
5;statement;return foo_1;17;
6;conditional;foo < foo;13;
7;statement;foo_1 = foo_2[foo_3] * foo_4[foo_5];14;
8;conditional;foo_1 in foo_2;15;
9;statement;foo_1 += 1;16;
10;statement;fun_1(foo_1[foo_2]);11;
11;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;6;
4;11;
5;4;7;
6;8;
7;6;9;
8;6;
9;3;
10;
