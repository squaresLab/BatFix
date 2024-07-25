Nodes
1;special;;;
2;conditional;foo_1 <= ((foo_2 - foo_3) + 1);14;
3;statement;return (foo_1 + foo_2) - 1;14;
4;exit;;;
5;statement;m = foo_1 - ((foo_2 - foo_3) + 1);15;
6;statement;return (foo_1 % foo_2) == 0 ? foo_3 : foo_4 % foo_5;16;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;4;
