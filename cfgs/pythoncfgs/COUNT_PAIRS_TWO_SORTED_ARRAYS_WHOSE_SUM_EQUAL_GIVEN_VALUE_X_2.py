Nodes
1;statement;(foo_1, foo_2, foo_3) = (0, 0, foo_4 - 1);8;
2;conditional;foo_1 < foo_2 and foo_3 >= 0;9;
3;statement;return foo_1;18;
4;conditional;foo_1[foo_2] + foo_3[foo_4] == foo_5;10;
5;conditional;foo_1[foo_2] + foo_3[foo_4] < foo_5;14;
6;statement;foo_1 -= 1;17;
7;statement;foo_1 += 1;15;
8;statement;foo_1 += 1;11;
9;statement;foo_1 -= 1;12;
10;statement;foo_1 += 1;13;
11;exit;;
Edges
0;2;
1;3;4;
2;11;
3;5;8;
4;6;7;
5;2;
6;2;
7;9;
8;10;
9;2;
10;
