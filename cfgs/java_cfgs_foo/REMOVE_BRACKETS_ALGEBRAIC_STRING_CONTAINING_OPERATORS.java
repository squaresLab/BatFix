Nodes
1;special;;;
2;statement;int len = fun_1();14;
3;statement;char[] res = new char[foo_1];15;
4;statement;int index = 0;16;
5;statement;int i = 0;16;
6;statement;Stack<Integer> s = new Stack<Integer>();17;
7;statement;fun_1(0);18;
8;conditional;foo_1 < foo_2;19;
9;conditional;fun_1(foo_2) == '+';20;
10;conditional;fun_1() == 1;21;
11;statement;foo_1[index++] = '-';21;
12;conditional;fun_1() == 0;22;
13;statement;foo_1[index++] = '+';22;
14;conditional;fun_1(foo_2) == '-';24;
15;conditional;fun_1() == 1;25;
16;statement;foo_1[index++] = '+';25;
17;conditional;fun_1() == 0;26;
18;statement;foo_1[index++] = '-';26;
19;conditional;(fun_1(foo_2) == '(') && (foo_3 > 0);28;
20;conditional;fun_1(foo_2 - 1) == '-';29;
21;conditional;int x = (fun_1() == 1) ? 0 : 1;30;
22;statement;0;30;
23;statement;1;30;
24;statement;fun_1(foo_2);31;
25;conditional;fun_1(foo_2 - 1) == '+';33;
26;statement;fun_1(fun_2());33;
27;conditional;fun_1(foo_2) == ')';35;
28;statement;fun_1();35;
29;statement;foo_1[index++] = fun_1(foo_3);36;
30;statement;i++;37;
31;statement;return new String(foo_1);39;
32;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;31;9;
8;10;14;
9;11;12;
10;12;
11;13;30;
12;30;
13;15;19;
14;16;17;
15;30;
16;18;30;
17;30;
18;20;27;
19;21;25;
20;22;23;
21;24;
22;24;
23;30;
24;26;30;
25;30;
26;28;29;
27;30;
28;30;
29;8;
30;32;
31;