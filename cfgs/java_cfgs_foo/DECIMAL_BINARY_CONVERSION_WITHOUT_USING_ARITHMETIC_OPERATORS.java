Nodes
1;special;;;
2;conditional;foo_1 == 0;14;
3;statement;return "0";14;
4;exit;;;
5;statement;String bin = "";15;
6;conditional;foo_1 > 0;16;
7;statement;bin = ((foo_1 & 1) == 0 ? '0' : '1') + foo_2;17;
8;statement;n >>= 1;18;
9;statement;return foo_1;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;9;7;
6;8;
7;6;
8;4;
