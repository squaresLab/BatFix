Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = [0] * foo_2;9;
3;conditional;foo < foo;10;
4;statement;return false;19;
5;conditional;foo < foo;11;
6;conditional;foo < foo;12;
7;conditional;foo_1[foo_2] % 8 == 0;13;
8;conditional;(foo_1[foo_2] * 10 + foo_3[foo_4]) % 8 == 0 and foo_5 != foo_6;15;
9;conditional;(foo_1[foo_2] * 100 + foo_3[foo_4] * 10 + foo_5[foo_6]) % 8 == 0 and foo_7 != foo_8 and (foo_9 != foo_10) and (foo_11 != foo_12);17;
10;statement;return true;18;
11;statement;return true;16;
12;statement;return true;14;
13;exit;;
Edges
0;2;
1;3;
2;4;5;
3;13;
4;3;6;
5;5;7;
6;8;12;
7;9;11;
8;6;10;
9;13;
10;13;
11;13;
12;