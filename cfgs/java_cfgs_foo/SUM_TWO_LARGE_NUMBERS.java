Nodes
1;special;;;
2;conditional;fun_1() > fun_2();14;
3;statement;String t = foo_1;15;
4;statement;str1 = foo_1;16;
5;statement;str2 = foo_1;17;
6;statement;String str = "";19;
7;statement;int n1 = fun_1();20;
8;statement;int n2 = fun_1();20;
9;statement;str1 = new StringBuilder(foo_1).fun_2().fun_1();21;
10;statement;str2 = new StringBuilder(foo_1).fun_2().fun_1();22;
11;statement;int carry = 0;23;
12;statement;int i = 0;24;
13;conditional;foo_1 < foo_2;25;
14;statement;int sum = (((int) (fun_1(foo_2) - '0')) + ((int) (fun_2(foo_4) - '0'))) + foo_5;27;
15;statement;str += ((char) ((foo_1 % 10) + '0'));28;
16;statement;carry = foo_1 / 10;29;
17;statement;i++;26;
18;statement;int i = foo_1;31;
19;conditional;foo_1 < foo_2;32;
20;statement;int sum = ((int) (fun_1(foo_2) - '0')) + foo_3;34;
21;statement;str += ((char) ((foo_1 % 10) + '0'));35;
22;statement;carry = foo_1 / 10;36;
23;statement;i++;33;
24;conditional;foo_1 > 0;38;
25;statement;str += ((char) (foo_1 + '0'));38;
26;statement;str = new StringBuilder(foo_1).fun_2().fun_1();39;
27;statement;return foo_1;40;
28;exit;;;
Edges
0;2;
1;3;6;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;
8;10;
9;11;
10;12;
11;13;
12;14;18;
13;15;
14;16;
15;17;
16;13;
17;19;
18;20;24;
19;21;
20;22;
21;23;
22;19;
23;25;26;
24;26;
25;27;
26;28;
27;
