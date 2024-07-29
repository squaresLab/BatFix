Nodes
1;statement;foo_1 = {};8;
2;statement;foo_1 = 0;9;
3;conditional;fun_1(foo_1);10;
4;statement;return foo_1;15;
5;conditional;foo_1[foo_2] not in fun_1();11;
6;statement;foo_1 = fun_1(foo_2, foo_3 - foo_4[foo_5[foo_6]]);14;
7;statement;foo_1[foo_2[foo_3]] = foo_4;12;
8;exit;;
Edges
0;2;
1;3;
2;4;5;
3;8;
4;6;7;
5;3;
6;3;
7;
