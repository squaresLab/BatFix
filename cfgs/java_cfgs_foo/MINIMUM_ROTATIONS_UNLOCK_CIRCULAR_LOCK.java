Nodes
1;special;;;
2;statement;int rotation = 0;14;
3;statement;int input_digit;15;
4;statement;int code_digit;15;
5;conditional;(foo_1 > 0) || (foo_2 > 0);16;
6;statement;input_digit = foo_1 % 10;17;
7;statement;code_digit = foo_1 % 10;18;
8;statement;rotation += fun_1(fun_2(foo_1 - foo_2), 10 - fun_3(foo_3 - foo_4));19;
9;statement;input /= 10;20;
10;statement;unlock_code /= 10;21;
11;statement;return foo_1;23;
12;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;11;6;
5;7;
6;8;
7;9;
8;10;
9;5;
10;12;
11;
