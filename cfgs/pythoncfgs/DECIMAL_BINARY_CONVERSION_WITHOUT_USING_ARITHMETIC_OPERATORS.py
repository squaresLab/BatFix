Nodes
1;conditional;foo_1 == 0;8;
2;statement;foo_1 = '';10;
3;conditional;foo_1 > 0;11;
4;statement;return foo_1;17;
5;conditional;foo_1 & 1 == 0;12;
6;statement;foo_1 = '1' + foo_2;15;
7;statement;foo_1 = foo_2 >> 1;16;
8;statement;foo_1 = '0' + foo_2;13;
9;statement;return '0';9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;5;
3;10;
4;6;8;
5;7;
6;3;
7;7;
8;10;
9;