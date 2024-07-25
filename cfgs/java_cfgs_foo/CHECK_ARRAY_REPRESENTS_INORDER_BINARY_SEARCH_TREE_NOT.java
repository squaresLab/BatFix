Nodes
1;special;;;
2;conditional;(foo_1 == 0) || (foo_2 == 1);14;
3;statement;return true;15;
4;exit;;;
5;statement;int i = 1;17;
6;conditional;foo_1 < foo_2;18;
7;conditional;foo_1[foo_2 - 1] > foo_3[foo_4];20;
8;statement;return false;21;
9;statement;i++;19;
10;statement;return true;24;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;10;
6;8;9;
7;4;
8;6;
9;4;
