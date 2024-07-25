Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo_1 > 0;9;
3;conditional;foo_1 == 1;12;
4;statement;return foo_1;14;
5;statement;return 10;13;
6;statement;foo_1 += foo_2 % 10;10;
7;statement;foo_1 //= 10;11;
8;exit;;
Edges
0;2;
1;3;6;
2;4;5;
3;8;
4;8;
5;7;
6;2;
7;