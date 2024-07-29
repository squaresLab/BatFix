Nodes
1;statement;foo_1 = 1;8;
2;conditional;foo_1 & foo_2;9;
3;statement;foo_1 = foo_2 ^ foo_3;12;
4;statement;return foo_1;13;
5;statement;foo_1 = foo_2 ^ foo_3;10;
6;statement;foo_1 <<= 1;11;
7;exit;;
Edges
0;2;
1;3;5;
2;4;
3;7;
4;6;
5;2;
6;
