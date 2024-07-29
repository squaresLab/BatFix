Nodes
1;statement;foo_1 = [0 for foo_2 in fun_1(foo_3 + 1)];8;
2;statement;foo_1[0] = false;9;
3;statement;foo_1[1] = true;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2];20;
6;conditional;foo_1 - 1 >= 0 and (not foo_2[foo_3 - 1]);12;
7;conditional;foo_1 - foo_2 >= 0 and (not foo_3[foo_4 - foo_5]);14;
8;conditional;foo_1 - foo_2 >= 0 and (not foo_3[foo_4 - foo_5]);16;
9;statement;foo_1[foo_2] = false;19;
10;statement;foo_1[foo_2] = true;17;
11;statement;foo_1[foo_2] = true;15;
12;statement;foo_1[foo_2] = true;13;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;12;
6;8;11;
7;9;10;
8;4;
9;4;
10;4;
11;4;
12;
