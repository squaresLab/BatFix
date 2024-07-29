Nodes
1;conditional;foo_1 == 0;8;
2;conditional;foo_1 < 0 or foo_2 < 0;10;
3;conditional;foo_1[foo_2][foo_3][foo_4] != -1;12;
4;statement;foo_1 = fun_1(foo_2[foo_3]) - fun_2('a') ^ fun_3(foo_4[foo_5]) - fun_4('a');14;
5;statement;foo_1[foo_2][foo_3][foo_4] = fun_4([foo_5 + fun_2(foo_6, foo_7, foo_8 - 1, foo_9 - 1, foo_10 - 1, foo_11), fun_3(foo_12, foo_13, foo_14 - 1, foo_15, foo_16, foo_17), fun_4(foo_18, foo_19, foo_20, foo_21 - 1, foo_22, foo_23)]);15;
6;statement;return foo_1[foo_2][foo_3][foo_4];16;
7;statement;return foo_1[foo_2][foo_3][foo_4];13;
8;statement;return 1000000000;11;
9;statement;return 0;9;
10;exit;;
Edges
0;2;9;
1;3;8;
2;4;7;
3;5;
4;6;
5;10;
6;10;
7;10;
8;10;
9;
