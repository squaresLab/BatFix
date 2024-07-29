Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 and (not foo_2 & foo_3 - 1);9;
3;conditional;foo_1 > 1;10;
4;conditional;foo_1 % 2 == 0;13;
5;statement;return false;16;
6;statement;return true;14;
7;statement;foo_1 >>= 1;11;
8;statement;foo_1 += 1;12;
9;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;9;
5;9;
6;8;
7;3;
8;
