Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 = 0;11;
5;statement;foo_1 = 'zyxwvutsrqponmlkjihgfedcba';12;
6;statement;foo_1;13;
7;statement;foo_1 = 0;14;
8;conditional;foo < foo;15;
9;conditional;foo_1 >= foo_2;18;
10;conditional;foo < foo;19;
11;statement;foo_1 = foo_2;24;
12;conditional;foo_1[foo_2] == foo_3;20;
13;statement;foo_1[foo_2] = foo_3;21;
14;statement;foo_1 = foo_2;22;
15;statement;foo_1 += 1;23;
16;conditional;foo_1[foo_2] == foo_3;16;
17;statement;foo_1 += 1;17;
18;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;16;
8;6;10;
9;11;12;
10;6;
11;10;13;
12;14;
13;15;
14;10;
15;8;17;
16;8;
17;
