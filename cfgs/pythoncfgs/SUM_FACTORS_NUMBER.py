Nodes
1;statement;foo_1 = 0;10;
2;conditional;foo < foo;11;
3;statement;return foo_1 + foo_2 + 1;17;
4;conditional;foo_1 % foo_2 == 0;12;
5;conditional;foo_1 == foo_2 / foo_3;13;
6;statement;foo_1 = foo_2 + (foo_3 + foo_4 // foo_5);16;
7;statement;foo_1 = foo_2 + foo_3;14;
8;exit;;
Edges
0;2;
1;3;4;
2;8;
3;2;5;
4;6;7;
5;2;
6;2;
7;
