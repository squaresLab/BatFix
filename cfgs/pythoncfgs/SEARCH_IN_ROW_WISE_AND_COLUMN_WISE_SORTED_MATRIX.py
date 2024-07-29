Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = foo_2 - 1;9;
3;conditional;foo_1 < foo_2 and foo_3 >= 0;10;
4;statement;fun_1('Element not found');18;
5;statement;return 0;19;
6;conditional;foo_1[foo_2][foo_3] == foo_4;11;
7;conditional;foo_1[foo_2][foo_3] > foo_4;14;
8;statement;foo_1 += 1;17;
9;statement;foo_1 -= 1;15;
10;statement;fun_1('n Found at ', foo_1, ', ', foo_2);12;
11;statement;return 1;13;
12;exit;;
Edges
0;2;
1;3;
2;4;6;
3;5;
4;12;
5;7;10;
6;8;9;
7;3;
8;3;
9;11;
10;12;
11;
