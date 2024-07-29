Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = fun_1(foo_2);10;
4;conditional;fun_1(0, foo_1, 1);11;
5;conditional;foo_1 % 2 == 0;16;
6;statement;return foo_1;18;
7;statement;return foo_1;17;
8;conditional;foo_1[foo_2] == '1';12;
9;statement;foo_1 += 1;15;
10;statement;foo_1 += 1;13;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;8;
4;6;7;
5;11;
6;11;
7;9;10;
8;4;
9;4;
10;
