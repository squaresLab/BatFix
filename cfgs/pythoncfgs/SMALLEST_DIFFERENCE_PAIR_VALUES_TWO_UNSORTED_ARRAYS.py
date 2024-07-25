Nodes
1;statement;fun_1();10;
2;statement;fun_1();11;
3;statement;foo_1 = 0;12;
4;statement;foo_1 = 0;13;
5;statement;foo_1 = foo_2.maxsize;14;
6;conditional;foo_1 < foo_2 and foo_3 < foo_4;15;
7;statement;return foo_1;22;
8;conditional;fun_1(foo_1[foo_2] - foo_3[foo_4]) < foo_5;16;
9;conditional;foo_1[foo_2] < foo_3[foo_4];18;
10;statement;foo_1 += 1;21;
11;statement;foo_1 += 1;19;
12;statement;foo_1 = fun_1(foo_2[foo_3] - foo_4[foo_5]);17;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;8;
6;13;
7;9;12;
8;10;11;
9;6;
10;6;
11;9;
12;