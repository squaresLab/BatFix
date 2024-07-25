Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int cl = fun_1();15;
4;conditional;foo_1 < foo_2;16;
5;statement;return false;16;
6;exit;;;
7;statement;return fun_2(0, foo_2).fun_1(foo_3) && fun_4(foo_5 - foo_6, foo_7).fun_3(foo_8);17;
Edges
0;2;
1;3;
2;4;
3;5;7;
4;6;
5;
6;6;
