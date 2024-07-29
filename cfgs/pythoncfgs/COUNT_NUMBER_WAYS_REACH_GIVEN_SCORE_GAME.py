Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3 + 1)];8;
2;statement;foo_1[0] = 1;9;
3;conditional;foo < foo;10;
4;conditional;foo < foo;12;
5;conditional;foo < foo;14;
6;statement;return foo_1[foo_2];16;
7;statement;foo_1[foo_2] += foo_3[foo_4 - 10];15;
8;statement;foo_1[foo_2] += foo_3[foo_4 - 5];13;
9;statement;foo_1[foo_2] += foo_3[foo_4 - 3];11;
10;exit;;
Edges
0;2;
1;3;
2;4;9;
3;5;8;
4;6;7;
5;10;
6;5;
7;4;
8;3;
9;
