Nodes
1;statement;foo_1 = 0;10;
2;conditional;fun_1();11;
3;statement;return -1;21;
4;statement;foo_1 = 0;12;
5;statement;foo_1 = foo_2;13;
6;conditional;foo_1;14;
7;conditional;foo_1 == 10;17;
8;conditional;foo_1 == foo_2;19;
9;statement;return foo_1;20;
10;statement;foo_1 = foo_2 + 1;18;
11;statement;foo_1 = foo_2 + foo_3 % 10;15;
12;statement;foo_1 = foo_2 // 10;16;
13;exit;;
Edges
0;2;
1;3;4;
2;13;
3;5;
4;6;
5;7;11;
6;8;10;
7;2;9;
8;13;
9;8;
10;12;
11;6;
12;