Nodes
1;conditional;foo_1 != 0;8;
2;statement;return foo_1;12;
3;statement;foo_1 = foo_2 & foo_3;9;
4;statement;foo_1 = foo_2 ^ foo_3;10;
5;statement;foo_1 = foo_2 << 1;11;
6;exit;;
Edges
0;2;3;
1;6;
2;4;
3;5;
4;1;
5;
