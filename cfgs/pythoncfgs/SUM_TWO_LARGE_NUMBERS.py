Nodes
1;conditional;fun_1(foo_1) > fun_2(foo_2);8;
2;statement;foo_1 = '';12;
3;statement;foo_1 = fun_1(foo_2);13;
4;statement;foo_1 = fun_1(foo_2);14;
5;statement;foo_1 = foo_2[::-1];15;
6;statement;foo_1 = foo_2[::-1];16;
7;statement;foo_1 = 0;17;
8;conditional;fun_1(foo_1);18;
9;conditional;foo < foo;22;
10;conditional;foo_1;26;
11;statement;foo_1 = foo_2[::-1];28;
12;statement;return foo_1;29;
13;statement;foo_1 += fun_1(foo_2 + 48);27;
14;statement;foo_1 = fun_1(foo_2[foo_3]) - 48 + foo_4;23;
15;statement;foo_1 += fun_1(foo_2 % 10 + 48);24;
16;statement;foo_1 = fun_1(foo_2 / 10);25;
17;statement;foo_1 = fun_1(foo_2[foo_3]) - 48 + (fun_2(foo_4[foo_5]) - 48 + foo_6);19;
18;statement;foo_1 += fun_1(foo_2 % 10 + 48);20;
19;statement;foo_1 = fun_1(foo_2 / 10);21;
20;statement;foo_1 = foo_2;9;
21;statement;foo_1 = foo_2;10;
22;statement;foo_1 = foo_2;11;
23;exit;;
Edges
0;2;20;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;17;
8;10;14;
9;11;13;
10;12;
11;23;
12;11;
13;15;
14;16;
15;9;
16;18;
17;19;
18;8;
19;21;
20;22;
21;2;
22;
