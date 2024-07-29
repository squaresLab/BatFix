Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1(foo_2) - 1;8;
3;conditional;foo_1 < foo_2;9;
4;statement;return true;14;
5;conditional;foo_1[foo_2] != foo_3[foo_4];10;
6;statement;foo_1 += 1;12;
7;statement;foo_1 -= 1;13;
8;statement;return false;11;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;8;
5;7;
6;3;
7;9;
8;
