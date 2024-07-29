Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;statement;return foo_1;19;
4;statement;foo_1 = 0;10;
5;conditional;foo < foo;11;
6;statement;foo_1 = 0;14;
7;conditional;fun_1(foo_1 - 1, -1, -1);15;
8;statement;foo_1 += foo_2 * foo_3;18;
9;conditional;foo_1[foo_2] < foo_3[foo_4];16;
10;statement;foo_1 += 1;17;
11;conditional;foo_1[foo_2] > foo_3[foo_4];12;
12;statement;foo_1 += 1;13;
13;exit;;
Edges
0;2;
1;3;4;
2;13;
3;5;
4;6;11;
5;7;
6;8;9;
7;2;
8;7;10;
9;7;
10;5;12;
11;5;
12;
