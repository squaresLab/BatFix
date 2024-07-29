Nodes
1;statement;foo_1 = [0] * (foo_2 + 1);8;
2;statement;foo_1[0] = 1;9;
3;statement;foo_1[1] = 1;10;
4;conditional;foo < foo;11;
5;statement;return foo_1[foo_2];17;
6;statement;foo_1[foo_2] = 0;12;
7;conditional;foo_1[foo_2 - 1] > '0';13;
8;conditional;foo_1[foo_2 - 2] == '1' or (foo_3[foo_4 - 2] == '2' and foo_5[foo_6 - 1] < '7');15;
9;statement;foo_1[foo_2] += foo_3[foo_4 - 2];16;
10;statement;foo_1[foo_2] = foo_3[foo_4 - 1];14;
11;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;11;
5;7;
6;8;10;
7;4;9;
8;4;
9;8;
10;
