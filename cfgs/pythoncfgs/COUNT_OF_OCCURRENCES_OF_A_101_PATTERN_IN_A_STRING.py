Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = false;9;
3;statement;foo_1 = 0;10;
4;conditional;fun_1(foo_1);11;
5;statement;return foo_1;19;
6;conditional;foo_1[foo_2] == '1' and foo_3;12;
7;conditional;foo_1[foo_2] == '1' and foo_3 == 0;15;
8;conditional;foo_1[foo_2] != '0' and foo_3[foo_4] != '1';17;
9;statement;foo_1 = false;18;
10;statement;foo_1 = true;16;
11;conditional;foo_1[foo_2 - 1] == '0';13;
12;statement;foo_1 += 1;14;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;11;
6;8;10;
7;4;9;
8;4;
9;8;
10;7;12;
11;7;
12;