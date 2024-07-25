Nodes
1;statement;fun_1();8;
2;conditional;foo < foo;9;
3;statement;return false;20;
4;statement;foo_1 = foo_2 + 1;10;
5;statement;foo_1 = foo_2 - 1;11;
6;conditional;foo_1 < foo_2;12;
7;conditional;foo_1[foo_2] + foo_3[foo_4] + foo_5[foo_6] == foo_7;13;
8;conditional;foo_1[foo_2] + foo_3[foo_4] + foo_5[foo_6] < foo_7;16;
9;statement;foo_1 -= 1;19;
10;statement;foo_1 += 1;17;
11;statement;fun_1('Triplet is', foo_1[foo_2], ', ', foo_3[foo_4], ', ', foo_5[foo_6]);14;
12;statement;return true;15;
13;exit;;
Edges
0;2;
1;3;4;
2;13;
3;5;
4;6;
5;2;7;
6;8;11;
7;9;10;
8;6;
9;6;
10;12;
11;13;
12;