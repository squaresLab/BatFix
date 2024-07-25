Nodes
1;statement;fun_1('Point inside the viewing pane:');8;
2;conditional;fun_1(foo_1);9;
3;statement;fun_1('\n\nPoint outside the viewing pane:');13;
4;statement;fun_1(foo_1);14;
5;conditional;foo_1[foo_2][0] < foo_3 or foo_4[foo_5][0] > foo_6;15;
6;conditional;foo_1[foo_2][1] < foo_3 or foo_4[foo_5][1] > foo_6;17;
7;statement;fun_1('[', foo_1[foo_2][0], ', ', foo_3[foo_4][1], ']', sep='', end='');18;
8;statement;fun_1('[', foo_1[foo_2][0], ', ', foo_3[foo_4][1], ']', sep='', end='');16;
9;conditional;foo_1[foo_2][0] >= foo_3 and foo_4[foo_5][0] <= foo_6;10;
10;conditional;foo_1[foo_2][1] >= foo_3 and foo_4[foo_5][1] <= foo_6;11;
11;statement;fun_1('[', foo_1[foo_2][0], ', ', foo_3[foo_4][1], ']', sep='', end='');12;
12;exit;;
Edges
0;2;
1;3;9;
2;4;
3;5;
4;6;8;
5;4;7;
6;4;
7;6;
8;2;10;
9;2;11;
10;2;
11;