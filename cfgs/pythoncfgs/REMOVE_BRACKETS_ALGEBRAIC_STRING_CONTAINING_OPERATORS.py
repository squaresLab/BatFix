Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [None] * foo_2;9;
3;statement;foo_1 = 0;10;
4;statement;foo_1 = 0;11;
5;statement;foo_1 = [];12;
6;statement;fun_1(0);13;
7;conditional;foo_1 < foo_2;14;
8;statement;return foo_1;41;
9;conditional;foo_1[foo_2] == '+';15;
10;conditional;foo_1[foo_2] == '-';22;
11;conditional;foo_1[foo_2] == '(' and foo_3 > 0;29;
12;conditional;foo_1[foo_2] == ')';35;
13;statement;foo_1[foo_2] = foo_3[foo_4];38;
14;statement;foo_1 += 1;39;
15;statement;foo_1 += 1;40;
16;statement;fun_1();36;
17;conditional;foo_1[foo_2 - 1] == '-';30;
18;conditional;foo_1[foo_2 - 1] == '+';33;
19;statement;fun_1(foo_1[-1]);34;
20;statement;foo_1 = 0 if foo_2[-1] == 1 else 1;31;
21;statement;fun_1(foo_1);32;
22;conditional;foo_1[-1] == 1;23;
23;conditional;foo_1[-1] == 0;26;
24;statement;foo_1[foo_2] = '-';27;
25;statement;foo_1 += 1;28;
26;statement;foo_1[foo_2] = '+';24;
27;statement;foo_1 += 1;25;
28;conditional;foo_1[-1] == 1;16;
29;conditional;foo_1[-1] == 0;19;
30;statement;foo_1[foo_2] = '+';20;
31;statement;foo_1 += 1;21;
32;statement;foo_1[foo_2] = '-';17;
33;statement;foo_1 += 1;18;
34;exit;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;9;
7;34;
8;10;28;
9;11;22;
10;12;17;
11;13;16;
12;14;
13;15;
14;7;
15;15;
16;18;20;
17;15;19;
18;15;
19;21;
20;15;
21;23;26;
22;15;24;
23;25;
24;15;
25;27;
26;15;
27;29;32;
28;15;30;
29;31;
30;15;
31;33;
32;29;
33;