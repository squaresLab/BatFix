Nodes
1;statement;foo_1 = '';8;
2;statement;foo_1 = true;9;
3;conditional;fun_2(fun_2(foo_1));10;
4;statement;return foo_1;16;
5;conditional;foo_1[foo_2] == ' ';11;
6;conditional;foo_1[foo_2] != ' ' and foo_3 == true;13;
7;statement;foo_1 += foo_2[foo_3];14;
8;statement;foo_1 = false;15;
9;statement;foo_1 = true;12;
10;exit;;
Edges
0;2;
1;3;
2;4;5;
3;10;
4;6;9;
5;3;7;
6;8;
7;3;
8;3;
9;