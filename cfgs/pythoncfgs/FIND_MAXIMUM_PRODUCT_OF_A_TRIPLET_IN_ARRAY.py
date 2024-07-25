Nodes
1;conditional;foo_1 < 3;10;
2;statement;foo_1 = -(foo_2.maxsize - 1);12;
3;conditional;foo < foo;13;
4;statement;return foo_1;17;
5;conditional;foo < foo;14;
6;conditional;foo < foo;15;
7;statement;foo_1 = fun_1(foo_2, foo_3[foo_4] * foo_5[foo_6] * foo_7[foo_8]);16;
8;statement;return -1;11;
9;exit;;
Edges
0;2;8;
1;3;
2;4;5;
3;9;
4;3;6;
5;5;7;
6;6;
7;9;
8;