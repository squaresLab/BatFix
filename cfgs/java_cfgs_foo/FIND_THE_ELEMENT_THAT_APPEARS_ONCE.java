Nodes
1;special;;;
2;statement;int ones = 0;14;
3;statement;int twos = 0;14;
4;statement;int common_bit_mask;15;
5;statement;int i = 0;16;
6;conditional;foo_1 < foo_2;17;
7;statement;twos = foo_1 | (foo_2 & foo_3[foo_4]);19;
8;statement;ones = foo_1 ^ foo_2[foo_3];20;
9;statement;common_bit_mask = ~(foo_1 & foo_2);21;
10;statement;ones &= foo_1;22;
11;statement;twos &= foo_1;23;
12;statement;i++;18;
13;statement;return foo_1;25;
14;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;13;
6;8;
7;9;
8;10;
9;11;
10;12;
11;6;
12;14;
13;