Nodes
1;statement;foo_1 = [];8;
2;statement;fun_1(['@', -1]);9;
3;statement;foo_1 = 0;10;
4;conditional;fun_2(fun_2(foo_1));11;
5;statement;return foo_1;19;
6;statement;fun_1([foo_1[foo_2], foo_3]);12;
7;conditional;fun_1(foo_1) >= 3 and foo_2[fun_2(foo_3) - 3][0] == '1' and (foo_4[fun_3(foo_5) - 2][0] == '0') and (foo_6[fun_4(foo_7) - 1][0] == '0');13;
8;statement;foo_1 = foo_2[-1];17;
9;statement;foo_1 = fun_1(foo_2, foo_3 - foo_4[1]);18;
10;statement;fun_1();14;
11;statement;fun_1();15;
12;statement;fun_1();16;
13;exit;;
Edges
0;2;
1;3;
2;4;
3;5;6;
4;13;
5;7;
6;8;10;
7;9;
8;4;
9;11;
10;12;
11;7;
12;
