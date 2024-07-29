Nodes
1;conditional;foo_1 < 0;8;
2;statement;(foo_1, foo_2) = (0, 1);10;
3;conditional;foo_1 <= foo_2;11;
4;statement;return false;16;
5;statement;foo_1 = foo_2 + foo_3;12;
6;conditional;foo_1 == foo_2;13;
7;statement;foo_1 += 1;15;
8;statement;return true;14;
9;statement;return false;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;5;
3;10;
4;6;
5;7;8;
6;3;
7;10;
8;10;
9;
