Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = fun_1(foo_2);9;
3;statement;foo_1 = foo_2 - foo_3 + 1;10;
4;conditional;foo_1 > foo_2;11;
5;statement;foo_1 = [0] * foo_2;13;
6;conditional;foo < foo;14;
7;conditional;foo < foo;16;
8;statement;return true;19;
9;conditional;foo_1[foo_2] == false;17;
10;statement;return false;18;
11;statement;foo_1[foo_2[foo_3] - foo_4] = true;15;
12;statement;return false;12;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;12;
4;6;
5;7;11;
6;8;9;
7;13;
8;7;10;
9;13;
10;6;
11;13;
12;
