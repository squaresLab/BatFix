Nodes
1;statement;foo_1 = {};8;
2;statement;foo_1 = [];9;
3;conditional;fun_1(foo_1);10;
4;conditional;fun_1(foo_1);15;
5;statement;return -1;22;
6;conditional;foo_1[foo_2[foo_3]] > 1;16;
7;statement;foo_1 = foo_2 - 1;19;
8;conditional;foo_1 == 0;20;
9;statement;return foo_1[foo_2];21;
10;conditional;foo_1[foo_2] in foo_3;11;
11;statement;foo_1[foo_2[foo_3]] = 1;14;
12;statement;foo_1[foo_2[foo_3]] = foo_4[foo_5[foo_6]] + 1;12;
13;exit;;
Edges
0;2;
1;3;
2;4;10;
3;5;6;
4;13;
5;4;7;
6;8;
7;4;9;
8;13;
9;11;12;
10;3;
11;3;
12;