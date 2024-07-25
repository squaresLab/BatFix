Nodes
1;special;;;
2;statement;double checkNumber = fun_1(2, foo_1) - 1;14;
3;statement;double nextval = 4 % foo_1;15;
4;statement;int i = 1;16;
5;conditional;foo_1 < (foo_2 - 1);17;
6;statement;nextval = ((foo_1 * foo_2) - 2) % foo_3;18;
7;statement;i++;18;
8;statement;return foo_1 == 0;19;
9;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;
