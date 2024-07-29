Nodes
1;conditional;foo_1 <= 1;8;
2;conditional;foo_1 <= 3;10;
3;conditional;foo_1 % 2 == 0 or foo_2 % 3 == 0;12;
4;statement;foo_1 = 5;14;
5;conditional;foo_1 * foo_2 <= foo_3;15;
6;statement;return false;19;
7;conditional;foo_1 % foo_2 == 0 or foo_3 % (foo_4 + 2) == 0;16;
8;statement;foo_1 = foo_2 + 6;18;
9;statement;return true;17;
10;statement;return true;13;
11;statement;return false;11;
12;statement;return false;9;
13;exit;;
Edges
0;2;12;
1;3;11;
2;4;10;
3;5;
4;6;7;
5;13;
6;8;9;
7;5;
8;13;
9;13;
10;13;
11;13;
12;
