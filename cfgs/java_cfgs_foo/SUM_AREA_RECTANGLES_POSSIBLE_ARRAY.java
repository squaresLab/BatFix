Nodes
1;special;;;
2;statement;fun_1(foo_1);14;
3;statement;int sum = 0;15;
4;statement;boolean flag = false;16;
5;statement;int len = 0;17;
6;statement;int i = 0;18;
7;conditional;foo_1 < foo_2;19;
8;conditional;((foo_1[foo_2] == foo_3[foo_4 + 1]) || ((foo_5[foo_6] - foo_7[foo_8 + 1]) == 1)) && (!foo_9);21;
9;statement;flag = true;22;
10;statement;len = foo_1[foo_2 + 1];23;
11;statement;i++;24;
12;conditional;((foo_1[foo_2] == foo_3[foo_4 + 1]) || ((foo_5[foo_6] - foo_7[foo_8 + 1]) == 1)) && foo_9;26;
13;statement;sum = foo_1 + (foo_2[foo_3 + 1] * foo_4);27;
14;statement;flag = false;28;
15;statement;i++;29;
16;statement;i++;20;
17;statement;return foo_1;32;
18;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;17;
7;9;12;
8;10;
9;11;
10;16;
11;13;16;
12;14;
13;15;
14;16;
15;7;
16;18;
17;
