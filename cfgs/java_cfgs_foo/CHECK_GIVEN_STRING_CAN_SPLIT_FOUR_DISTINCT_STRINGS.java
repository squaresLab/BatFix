Nodes
1;special;;;
2;statement;int seg_len = fun_1() - foo_2;13;
3;statement;int res = 0;15;
4;statement;int i = 0;17;
5;conditional;foo_1 < foo_2;17;
6;statement;res = (foo_1 * 10) + (fun_1(foo_3) - '0');18;
7;statement;i++;17;
8;statement;int seg_len_pow = ((int) (fun_1(10, foo_1 - 1)));20;
9;statement;int curr_val = foo_1;22;
10;statement;int i = 1;24;
11;conditional;foo_1 <= (fun_1() - foo_3);25;
12;statement;curr_val = foo_1 - ((fun_1(foo_3 - 1) - '0') * foo_4);27;
13;statement;curr_val = (foo_1 * 10) + (fun_1((foo_3 + foo_4) - 1) - '0');30;
14;statement;res = fun_1(foo_1, foo_2);33;
15;statement;i++;25;
16;statement;return foo_1;36;
17;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;8;
5;7;
6;5;
7;9;
8;10;
9;11;
10;12;16;
11;13;
12;14;
13;15;
14;11;
15;17;
16;
