Nodes
1;statement;foo_1 -= 1;8;
2;statement;foo_1 |= foo_2 >> 1;9;
3;statement;foo_1 |= foo_2 >> 2;10;
4;statement;foo_1 |= foo_2 >> 4;11;
5;statement;foo_1 |= foo_2 >> 8;12;
6;statement;foo_1 |= foo_2 >> 16;13;
7;statement;foo_1 += 1;14;
8;statement;return foo_1;15;
9;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;
8;