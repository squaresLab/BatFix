Nodes
1;statement;foo_1 = {};8;
2;conditional;foo < foo;9;
3;conditional;foo < foo;15;
4;statement;return -1;19;
5;conditional;foo_1[foo_2[foo_3]] == foo_4;16;
6;statement;foo_1 += 1;18;
7;statement;return foo_1[foo_2];17;
8;conditional;foo_1[foo_2] in fun_1();10;
9;statement;foo_1[foo_2[foo_3]] = 1;13;
10;statement;foo_1 += 1;14;
11;statement;foo_1[foo_2[foo_3]] += 1;11;
12;exit;;
Edges
0;2;
1;3;8;
2;4;5;
3;12;
4;6;7;
5;3;
6;12;
7;9;11;
8;10;
9;2;
10;10;
11;