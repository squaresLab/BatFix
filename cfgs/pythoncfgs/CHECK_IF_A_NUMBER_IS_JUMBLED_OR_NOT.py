Nodes
1;conditional;foo_1 // 10 == 0;8;
2;conditional;foo_1 != 0;10;
3;statement;return true;18;
4;conditional;foo_1 // 10 == 0;11;
5;statement;foo_1 = foo_2 % 10;13;
6;statement;foo_1 = foo_2 // 10 % 10;14;
7;conditional;fun_1(foo_1 - foo_2) > 1;15;
8;statement;foo_1 = foo_2 // 10;17;
9;statement;return false;16;
10;statement;return true;12;
11;statement;return true;9;
12;exit;;
Edges
0;2;11;
1;3;4;
2;12;
3;5;10;
4;6;
5;7;
6;8;9;
7;2;
8;12;
9;12;
10;12;
11;
