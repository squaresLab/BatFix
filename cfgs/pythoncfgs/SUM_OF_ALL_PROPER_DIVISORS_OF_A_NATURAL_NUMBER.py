Nodes
1;statement;foo_1 = 0;10;
2;statement;foo_1 = 2;11;
3;conditional;foo_1 <= fun_1(foo_2);12;
4;statement;return foo_1 + 1;19;
5;conditional;foo_1 % foo_2 == 0;13;
6;statement;foo_1 = foo_2 + 1;18;
7;conditional;foo_1 == foo_2 / foo_3;14;
8;statement;foo_1 = foo_2 + (foo_3 + foo_4 / foo_5);17;
9;statement;foo_1 = foo_2 + foo_3;15;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;6;7;
5;3;
6;8;9;
7;6;
8;6;
9;