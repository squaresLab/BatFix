Nodes
1;statement;foo_1 = [];8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1;17;
6;conditional;foo_1 < foo_2 and foo_3[foo_4] not in foo_5;12;
7;statement;foo_1 += (foo_2 - foo_3) * (foo_4 - foo_5 + 1) // 2;15;
8;statement;fun_1(foo_1[foo_2]);16;
9;statement;fun_1(foo_1[foo_2]);13;
10;statement;foo_1 += 1;14;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;11;
5;7;9;
6;8;
7;4;
8;10;
9;6;
10;