Nodes
1;conditional;foo_1 < 1;8;
2;statement;foo_1 = fun_1(foo_2);10;
3;statement;foo_1 = fun_1(foo_2);11;
4;conditional;foo_1 - foo_2 + 1 == foo_3;12;
5;statement;return false;19;
6;statement;foo_1 = [false for foo_2 in fun_1(foo_3)];13;
7;conditional;fun_1(foo_1);14;
8;statement;return true;18;
9;conditional;foo_1[foo_2[foo_3] - foo_4] != false;15;
10;statement;foo_1[foo_2[foo_3] - foo_4] = true;17;
11;statement;return false;16;
12;statement;return false;9;
13;exit;;
Edges
0;2;12;
1;3;
2;4;
3;5;6;
4;13;
5;7;
6;8;9;
7;13;
8;10;11;
9;7;
10;13;
11;13;
12;
