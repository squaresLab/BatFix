Nodes
1;special;;;
2;statement;int num = foo_1;14;
3;statement;int dec_value = 0;15;
4;statement;int base = 1;16;
5;statement;int temp = foo_1;17;
6;conditional;foo_1 > 0;18;
7;statement;int last_digit = foo_1 % 10;19;
8;statement;temp = foo_1 / 10;20;
9;statement;dec_value += foo_1 * foo_2;21;
10;statement;base = foo_1 * 2;22;
11;statement;return foo_1;24;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;11;7;
6;8;
7;9;
8;10;
9;6;
10;12;
11;
