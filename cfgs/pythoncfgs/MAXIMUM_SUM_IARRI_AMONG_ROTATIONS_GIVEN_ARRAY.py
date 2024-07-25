Nodes
1;statement;foo_1 = -foo_2.maxsize;10;
2;conditional;foo < foo;11;
3;statement;return foo_1;17;
4;statement;foo_1 = 0;12;
5;conditional;foo < foo;13;
6;statement;foo_1 = fun_1(foo_2, foo_3);16;
7;statement;foo_1 = fun_1((foo_2 + foo_3) % foo_4);14;
8;statement;foo_1 += foo_2 * foo_3[foo_4];15;
9;exit;;
Edges
0;2;
1;3;4;
2;9;
3;5;
4;6;7;
5;2;
6;8;
7;5;
8;