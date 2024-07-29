Nodes
1;statement;foo_1 = fun_1();8;
2;conditional;foo < foo;9;
3;statement;foo_1 = 0;14;
4;conditional;foo_1;15;
5;statement;return foo_1;18;
6;conditional;foo_1 == foo_2[foo_3];16;
7;statement;foo_1 += 1;17;
8;conditional;foo_1[foo_2] in fun_1();10;
9;statement;foo_1[foo_2[foo_3]] = 1;13;
10;statement;foo_1[foo_2[foo_3]] += 1;11;
11;exit;;
Edges
0;2;
1;3;8;
2;4;
3;5;6;
4;11;
5;4;7;
6;4;
7;9;10;
8;2;
9;2;
10;
