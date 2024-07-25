Nodes
1;conditional;foo < foo;8;
2;statement;return true;14;
3;conditional;foo_1[foo_2] > foo_3[foo_4 + 1];9;
4;conditional;foo_1[foo_2] - foo_3[foo_4 + 1] == 1;10;
5;statement;return false;13;
6;statement;(foo_1[foo_2], foo_3[foo_4 + 1]) = (foo_5[foo_6 + 1], foo_7[foo_8]);11;
7;exit;;
Edges
0;2;3;
1;7;
2;1;4;
3;5;6;
4;7;
5;1;
6;