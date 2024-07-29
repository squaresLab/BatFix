Nodes
1;statement;foo_1 = false;8;
2;conditional;foo_1 > 0;9;
3;statement;return true;18;
4;statement;foo_1 = foo_2 % foo_3;10;
5;conditional;foo_1 > 1;11;
6;conditional;foo_1 == 1;13;
7;statement;foo_1 //= foo_2;17;
8;conditional;foo_1;14;
9;statement;foo_1 = true;16;
10;statement;return false;15;
11;statement;return false;12;
12;exit;;
Edges
0;2;
1;3;4;
2;12;
3;5;
4;6;11;
5;7;8;
6;2;
7;9;10;
8;7;
9;12;
10;12;
11;
