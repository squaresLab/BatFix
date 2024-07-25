Nodes
1;special;;;
2;statement;int distSq = ((foo_1 - foo_2) * (foo_3 - foo_4)) + ((foo_5 - foo_6) * (foo_7 - foo_8));14;
3;statement;int radSumSq = (foo_1 + foo_2) * (foo_3 + foo_4);15;
4;conditional;foo_1 == foo_2;16;
5;statement;return 1;16;
6;exit;;;
7;conditional;foo_1 > foo_2;17;
8;statement;return -1;17;
9;statement;return 0;18;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;
6;8;9;
7;6;
8;6;
