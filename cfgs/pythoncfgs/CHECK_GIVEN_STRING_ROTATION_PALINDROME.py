Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = fun_1(foo_2) - 1;9;
3;conditional;foo_1 > foo_2;10;
4;statement;return true;15;
5;statement;foo_1 += 1;11;
6;statement;foo_1 -= 1;12;
7;conditional;foo_1[foo_2 - 1] != foo_3[foo_4 + 1];13;
8;statement;return false;14;
9;exit;;
Edges
0;2;
1;3;
2;4;5;
3;9;
4;6;
5;7;
6;3;8;
7;9;
8;