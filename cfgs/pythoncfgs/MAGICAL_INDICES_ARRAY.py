Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = [None] * (foo_2 + 1);9;
3;statement;foo_1 = [None] * (foo_2 + 1);10;
4;conditional;foo < foo;11;
5;conditional;foo < foo;14;
6;statement;return foo_1;25;
7;statement;foo_1 = foo_2;15;
8;conditional;foo_1[foo_2] == -1;16;
9;conditional;foo_1[foo_2] == -1;17;
10;conditional;foo_1[foo_2] == foo_3;20;
11;conditional;foo_1[foo_2] == 0;21;
12;statement;foo_1[foo_2] = 1;22;
13;statement;foo_1 = foo_2 + 1;23;
14;statement;foo_1 = (foo_2 + foo_3[foo_4] + 1) % foo_5;24;
15;statement;foo_1[foo_2] = foo_3;18;
16;statement;foo_1 = (foo_2 + foo_3[foo_4] + 1) % foo_5;19;
17;statement;foo_1[foo_2] = -1;12;
18;statement;foo_1[foo_2] = 0;13;
19;exit;;
Edges
0;2;
1;3;
2;4;
3;5;17;
4;6;7;
5;19;
6;8;
7;5;9;
8;10;15;
9;5;11;
10;5;12;
11;13;
12;14;
13;11;
14;16;
15;9;
16;18;
17;4;
18;