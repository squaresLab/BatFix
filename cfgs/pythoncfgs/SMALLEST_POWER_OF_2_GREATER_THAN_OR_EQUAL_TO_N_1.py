Nodes
1;statement;foo_1 = 1;8;
2;conditional;foo_1 and (not foo_2 & foo_3 - 1);9;
3;conditional;foo_1 < foo_2;11;
4;statement;return foo_1;13;
5;statement;foo_1 <<= 1;12;
6;statement;return foo_1;10;
7;exit;;
Edges
0;2;
1;3;6;
2;4;5;
3;7;
4;3;
5;7;
6;
