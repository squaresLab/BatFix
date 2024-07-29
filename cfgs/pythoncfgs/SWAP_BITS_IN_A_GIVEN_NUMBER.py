Nodes
1;statement;foo_1 = foo_2 >> foo_3 & (1 << foo_4) - 1;8;
2;statement;foo_1 = foo_2 >> foo_3 & (1 << foo_4) - 1;9;
3;statement;foo_1 = foo_2 ^ foo_3;10;
4;statement;foo_1 = foo_2 << foo_3 | foo_4 << foo_5;11;
5;statement;foo_1 = foo_2 ^ foo_3;12;
6;statement;return foo_1;13;
7;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;
