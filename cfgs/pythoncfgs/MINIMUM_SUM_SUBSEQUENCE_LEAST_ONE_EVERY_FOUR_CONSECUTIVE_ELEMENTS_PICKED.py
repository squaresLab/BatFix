Nodes
1;statement;foo_1 = [0] * foo_2;8;
2;conditional;foo_1 == 1;9;
3;conditional;foo_1 == 2;11;
4;conditional;foo_1 == 3;13;
5;conditional;foo_1 == 4;15;
6;statement;foo_1[0] = foo_2[0];17;
7;statement;foo_1[1] = foo_2[1];18;
8;statement;foo_1[2] = foo_2[2];19;
9;statement;foo_1[3] = foo_2[3];20;
10;conditional;foo < foo;21;
11;statement;return fun_3(fun_2(foo_1[foo_2 - 1], foo_3[foo_4 - 2]), fun_3(foo_5[foo_6 - 4], foo_7[foo_8 - 3]));23;
12;statement;foo_1[foo_2] = foo_3[foo_4] + fun_3(fun_2(foo_5[foo_6 - 1], foo_7[foo_8 - 2]), fun_3(foo_9[foo_10 - 3], foo_11[foo_12 - 4]));22;
13;statement;return fun_3(fun_2(foo_1[0], foo_2[1]), fun_3(foo_3[2], foo_4[3]));16;
14;statement;return fun_2(foo_1[0], fun_2(foo_2[1], foo_3[2]));14;
15;statement;return fun_1(foo_1[0], foo_2[1]);12;
16;statement;return foo_1[0];10;
17;exit;;
Edges
0;2;
1;3;16;
2;4;15;
3;5;14;
4;6;13;
5;7;
6;8;
7;9;
8;10;
9;11;12;
10;17;
11;10;
12;17;
13;17;
14;17;
15;17;
16;
