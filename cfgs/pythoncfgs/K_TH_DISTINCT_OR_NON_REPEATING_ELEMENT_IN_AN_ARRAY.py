Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return -1;19;
4;statement;foo_1 = 0;10;
5;conditional;foo_1 < foo_2;11;
6;conditional;foo_1 == foo_2;15;
7;conditional;foo_1 == foo_2;17;
8;statement;return foo_1[foo_2];18;
9;statement;foo_1 += 1;16;
10;conditional;foo_1 != foo_2 and foo_3[foo_4] == foo_5[foo_6];12;
11;statement;foo_1 += 1;14;
12;exit;;
Edges
0;2;
1;3;4;
2;12;
3;5;
4;6;10;
5;7;9;
6;2;8;
7;12;
8;7;
9;6;11;
10;5;
11;
