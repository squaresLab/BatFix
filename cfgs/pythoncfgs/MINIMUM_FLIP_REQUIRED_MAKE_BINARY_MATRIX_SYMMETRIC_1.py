Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return foo_1;13;
4;conditional;fun_1(foo_1);10;
5;conditional;foo_1[foo_2][foo_3] != foo_4[foo_5][foo_6];11;
6;statement;foo_1 += 1;12;
7;exit;;
Edges
0;2;
1;3;4;
2;7;
3;2;5;
4;4;6;
5;4;
6;