Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return foo_1;23;
4;statement;foo_1 = 0;10;
5;statement;foo_1 = 0;11;
6;conditional;fun_1(foo_1 - 1, -1, -1);12;
7;conditional;foo < foo;17;
8;statement;foo_1 += fun_1(foo_2, foo_3) + 1;22;
9;conditional;foo_1[foo_2] < foo_3[foo_4 - 1];18;
10;statement;foo_1 += 1;19;
11;conditional;foo_1[foo_2] < foo_3[foo_4 + 1];13;
12;statement;foo_1 += 1;14;
13;exit;;
Edges
0;2;
1;3;4;
2;13;
3;5;
4;6;
5;7;11;
6;8;9;
7;2;
8;8;10;
9;7;
10;7;12;
11;6;
12;