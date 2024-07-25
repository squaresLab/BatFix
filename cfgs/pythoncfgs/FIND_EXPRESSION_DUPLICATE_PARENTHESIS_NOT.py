Nodes
1;statement;foo_1 = [];8;
2;conditional;foo_1;9;
3;statement;return false;20;
4;conditional;foo_1 == ')';10;
5;statement;fun_1(foo_1);19;
6;statement;foo_1 = fun_1();11;
7;statement;foo_1 = 0;12;
8;conditional;foo_1 != '(';13;
9;conditional;foo_1 < 1;16;
10;statement;return true;17;
11;statement;foo_1 += 1;14;
12;statement;foo_1 = fun_1();15;
13;exit;;
Edges
0;2;
1;3;4;
2;13;
3;5;6;
4;2;
5;7;
6;8;
7;9;11;
8;2;10;
9;13;
10;12;
11;8;
12;