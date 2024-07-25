Nodes
1;special;;;
2;statement;int i = 0;14;
3;conditional;foo_1 <= ((foo_2 - 2) / 2);15;
4;conditional;foo_1[(2 * foo_2) + 1] > foo_3[foo_4];17;
5;statement;return false;18;
6;exit;;;
7;conditional;(((2 * foo_1) + 2) < foo_2) && (foo_3[(2 * foo_4) + 2] > foo_5[foo_6]);20;
8;statement;return false;21;
9;statement;i++;16;
10;statement;return true;24;
Edges
0;2;
1;3;
2;4;10;
3;5;7;
4;6;
5;
6;8;9;
7;6;
8;3;
9;6;
