Nodes
1;special;;;
2;statement;int i = -1;14;
3;statement;int temp = 0;14;
4;statement;int j = 0;15;
5;conditional;foo_1 < foo_2;16;
6;conditional;foo_1[foo_2] < 0;18;
7;statement;i++;19;
8;statement;temp = foo_1[foo_2];20;
9;statement;foo_1[foo_2] = foo_3[foo_4];21;
10;statement;foo_1[foo_2] = foo_3;22;
11;statement;j++;17;
12;statement;int pos = foo_1 + 1;25;
13;statement;int neg = 0;25;
14;conditional;((foo_1 < foo_2) && (foo_3 < foo_4)) && (foo_5[foo_6] < 0);26;
15;statement;temp = foo_1[foo_2];27;
16;statement;foo_1[foo_2] = foo_3[foo_4];28;
17;statement;foo_1[foo_2] = foo_3;29;
18;statement;pos++;30;
19;statement;neg += 2;31;
20;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;12;
5;7;11;
6;8;
7;9;
8;10;
9;11;
10;5;
11;13;
12;14;
13;20;15;
14;16;
15;17;
16;18;
17;19;
18;14;
19;
