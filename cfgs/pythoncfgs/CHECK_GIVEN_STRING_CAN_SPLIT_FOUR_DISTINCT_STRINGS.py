Nodes
1;conditional;fun_1(foo_1) >= 10;8;
2;conditional;foo < foo;10;
3;statement;return false;19;
4;conditional;foo < foo;11;
5;conditional;foo < foo;12;
6;statement;foo_1 = foo_2[0:foo_3];13;
7;statement;foo_1 = foo_2[foo_3:foo_4 - foo_5];14;
8;statement;foo_1 = foo_2[foo_3:foo_4 - foo_5];15;
9;statement;foo_1 = foo_2[foo_3:fun_1(foo_4) - foo_5];16;
10;conditional;foo_1 != foo_2 and foo_3 != foo_4 and (foo_5 != foo_6) and (foo_7 != foo_8) and (foo_9 != foo_10) and (foo_11 != foo_12);17;
11;statement;return true;18;
12;statement;return true;9;
13;exit;;
Edges
0;2;12;
1;3;4;
2;13;
3;2;5;
4;4;6;
5;7;
6;8;
7;9;
8;10;
9;5;11;
10;13;
11;13;
12;