Nodes
1;statement;fun_1(reverse=true);8;
2;statement;foo_1 = [0, 0];9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 = 0;11;
5;conditional;foo_1 < foo_2 - 1 and foo_3 < 2;12;
6;statement;return foo_1[0] * foo_2[1];18;
7;conditional;foo_1[foo_2] == foo_3[foo_4 + 1];13;
8;statement;foo_1 += 1;17;
9;statement;foo_1[foo_2] = foo_3[foo_4];14;
10;statement;foo_1 += 1;15;
11;statement;foo_1 += 1;16;
12;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;7;
5;12;
6;8;9;
7;5;
8;10;
9;11;
10;8;
11;