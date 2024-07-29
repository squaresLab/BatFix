Nodes
1;conditional;foo_1 < 0;8;
2;conditional;foo_1 == 0 or foo_2 == 7;10;
3;conditional;foo_1 < 10;12;
4;statement;return fun_1(foo_1 / 10 - 2 * (foo_2 - foo_3 / 10 * 10));14;
5;statement;return false;13;
6;statement;return true;11;
7;statement;return fun_1(-foo_1);9;
8;exit;;
Edges
0;2;7;
1;3;6;
2;4;5;
3;8;
4;8;
5;8;
6;8;
7;
