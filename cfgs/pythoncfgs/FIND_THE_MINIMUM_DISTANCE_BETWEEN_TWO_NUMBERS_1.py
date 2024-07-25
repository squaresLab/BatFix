Nodes
1;statement;foo_1 = foo_2.maxsize;10;
2;conditional;fun_1(foo_1);11;
3;conditional;foo_1 < foo_2;15;
4;statement;return foo_1;23;
5;conditional;foo_1[foo_2] == foo_3 or foo_4[foo_5] == foo_6;16;
6;statement;foo_1 += 1;22;
7;conditional;foo_1[foo_2] != foo_3[foo_4] and foo_5 - foo_6 < foo_7;17;
8;statement;foo_1 = foo_2;21;
9;statement;foo_1 = foo_2 - foo_3;18;
10;statement;foo_1 = foo_2;19;
11;conditional;foo_1[foo_2] == foo_3 or foo_4[foo_5] == foo_6;12;
12;statement;foo_1 = foo_2;13;
13;exit;;
Edges
0;2;
1;3;11;
2;4;5;
3;13;
4;6;7;
5;3;
6;8;9;
7;6;
8;10;
9;6;
10;2;12;
11;3;
12;