Nodes
1;special;;;
2;statement;int B_Number = 0;14;
3;statement;int cnt = 0;15;
4;conditional;foo_1 != 0;16;
5;statement;int rem = foo_1 % 2;17;
6;statement;double c = fun_1(10, foo_1);18;
7;statement;B_Number += foo_1 * foo_2;19;
8;statement;N /= 2;20;
9;statement;cnt++;21;
10;statement;return foo_1;23;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;10;5;
4;6;
5;7;
6;8;
7;9;
8;4;
9;11;
10;
