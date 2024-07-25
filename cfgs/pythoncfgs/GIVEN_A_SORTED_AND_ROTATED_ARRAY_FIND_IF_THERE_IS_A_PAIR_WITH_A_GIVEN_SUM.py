Nodes
1;conditional;foo < foo;8;
2;statement;foo_1 = (foo_2 + 1) % foo_3;11;
3;statement;foo_1 = foo_2;12;
4;conditional;foo_1 != foo_2;13;
5;statement;return false;20;
6;conditional;foo_1[foo_2] + foo_3[foo_4] == foo_5;14;
7;conditional;foo_1[foo_2] + foo_3[foo_4] < foo_5;16;
8;statement;foo_1 = (foo_2 + foo_3 - 1) % foo_4;19;
9;statement;foo_1 = (foo_2 + 1) % foo_3;17;
10;statement;return true;15;
11;conditional;foo_1[foo_2] > foo_3[foo_4 + 1];9;
12;exit;;
Edges
0;2;11;
1;3;
2;4;
3;5;6;
4;12;
5;7;10;
6;8;9;
7;4;
8;4;
9;12;
10;1;2;
11;