Nodes
1;statement;foo_1 = false;8;
2;statement;foo_1 = 0;9;
3;statement;foo_1 = fun_1(foo_2);10;
4;conditional;foo_1 < foo_2;11;
5;statement;return true;20;
6;conditional;foo_1[foo_2] == foo_3;12;
7;statement;foo_1 = foo_2 + 1;19;
8;conditional;foo_1 == true;13;
9;conditional;foo_1 < foo_2 and foo_3[foo_4] == foo_5;15;
10;statement;foo_1 = true;17;
11;statement;foo_1 = foo_2 + 1;16;
12;statement;return false;14;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;8;
6;4;
7;9;12;
8;10;11;
9;4;
10;9;
11;13;
12;