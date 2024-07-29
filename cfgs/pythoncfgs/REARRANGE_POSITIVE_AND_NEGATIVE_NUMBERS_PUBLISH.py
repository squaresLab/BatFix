Nodes
1;statement;foo_1 = -1;8;
2;conditional;fun_1(foo_1);9;
3;statement;(foo_1, foo_2) = (foo_3 + 1, 0);13;
4;statement;foo_1 < foo_2 and foo_3 < foo_4 and (foo_5[foo_6] < 0);14;
5;statement;(foo_1[foo_2], foo_3[foo_4]) = (foo_5[foo_6], foo_7[foo_8]);15;
6;statement;foo_1 += 1;16;
7;statement;foo_1 += 2;17;
8;conditional;foo_1[foo_2] < 0;10;
9;statement;foo_1 += 1;11;
10;statement;(foo_1[foo_2], foo_3[foo_4]) = (foo_5[foo_6], foo_7[foo_8]);12;
11;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;
4;6;
5;7;
6;4;
7;2;9;
8;10;
9;2;
10;
