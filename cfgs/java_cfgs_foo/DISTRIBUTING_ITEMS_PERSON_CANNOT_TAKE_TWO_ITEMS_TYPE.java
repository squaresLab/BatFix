Nodes
1;special;;;
2;statement;int count;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;count = 0;18;
6;statement;int j = 0;19;
7;conditional;foo_1 < foo_2;20;
8;conditional;foo_1[foo_2] == foo_3[foo_4];22;
9;statement;count++;22;
10;conditional;foo_1 > (2 * foo_2);23;
11;statement;return false;23;
12;exit;;;
13;statement;j++;21;
14;statement;i++;17;
15;statement;return true;26;
Edges
0;2;
1;3;
2;4;
3;5;15;
4;6;
5;7;
6;8;14;
7;9;10;
8;10;
9;11;13;
10;12;
11;
12;7;
13;4;
14;12;
