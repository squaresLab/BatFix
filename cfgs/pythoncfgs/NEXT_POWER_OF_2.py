Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 and (not foo_2 & foo_3 - 1);9;
3;conditional;foo_1 != 0;11;
4;statement;return 1 << foo_1;14;
5;statement;foo_1 >>= 1;12;
6;statement;foo_1 += 1;13;
7;statement;return foo_1;10;
8;exit;;
Edges
0;2;
1;3;7;
2;4;5;
3;8;
4;6;
5;3;
6;8;
7;
