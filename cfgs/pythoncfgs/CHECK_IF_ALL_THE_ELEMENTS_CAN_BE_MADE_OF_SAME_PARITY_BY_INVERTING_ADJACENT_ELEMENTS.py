Nodes
1;statement;foo_1 = 0;8;
2;statement;foo_1 = 0;8;
3;conditional;fun_1(foo_1);9;
4;conditional;foo_1 % 2 and foo_2 % 2;14;
5;statement;return true;17;
6;statement;return false;15;
7;conditional;foo_1[foo_2] & 1;10;
8;statement;foo_1 += 1;13;
9;statement;foo_1 += 1;11;
10;exit;;
Edges
0;2;
1;3;
2;4;7;
3;5;6;
4;10;
5;10;
6;8;9;
7;3;
8;3;
9;