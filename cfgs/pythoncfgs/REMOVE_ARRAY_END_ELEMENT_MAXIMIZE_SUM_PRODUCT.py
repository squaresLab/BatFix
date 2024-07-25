Nodes
1;conditional;foo_1 == foo_2;8;
2;conditional;foo_1[foo_2][foo_3] != 0;10;
3;statement;foo_1[foo_2][foo_3] = fun_3(foo_4[foo_5] * foo_6 + fun_2(foo_7, foo_8, foo_9 + 1, foo_10, foo_11 + 1), foo_12[foo_13] * foo_14 + fun_3(foo_15, foo_16, foo_17, foo_18 - 1, foo_19 + 1));12;
4;statement;return foo_1[foo_2][foo_3];13;
5;statement;return foo_1[foo_2][foo_3];11;
6;statement;return foo_1[foo_2] * foo_3;9;
7;exit;;
Edges
0;2;6;
1;3;5;
2;4;
3;7;
4;7;
5;7;
6;