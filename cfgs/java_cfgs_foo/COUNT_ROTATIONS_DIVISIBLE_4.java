Nodes
1;special;;;
2;statement;int len = fun_1();14;
3;conditional;foo_1 == 1;15;
4;statement;int oneDigit = fun_1(0) - '0';16;
5;conditional;(foo_1 % 4) == 0;17;
6;statement;return 1;17;
7;exit;;;
8;statement;return 0;18;
9;statement;int twoDigit;20;
10;statement;int count = 0;20;
11;statement;int i = 0;21;
12;conditional;foo_1 < (foo_2 - 1);22;
13;statement;twoDigit = ((fun_1(foo_2) - '0') * 10) + (fun_2(foo_4 + 1) - '0');24;
14;conditional;(foo_1 % 4) == 0;25;
15;statement;count++;25;
16;statement;i++;23;
17;statement;twoDigit = ((fun_1(foo_2 - 1) - '0') * 10) + (fun_2(0) - '0');27;
18;conditional;(foo_1 % 4) == 0;28;
19;statement;count++;28;
20;statement;return foo_1;29;
Edges
0;2;
1;3;
2;4;9;
3;5;
4;6;8;
5;7;
6;
7;7;
8;10;
9;11;
10;12;
11;13;17;
12;14;
13;15;16;
14;16;
15;12;
16;18;
17;19;20;
18;20;
19;7;
