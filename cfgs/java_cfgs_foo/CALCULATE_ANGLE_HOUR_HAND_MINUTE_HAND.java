Nodes
1;special;;;
2;conditional;(((foo_1 < 0) || (foo_2 < 0)) || (foo_3 > 12)) || (foo_4 > 60);14;
3;statement;System.fun_1("Wrong input");14;
4;conditional;foo_1 == 12;15;
5;statement;h = 0;15;
6;conditional;foo_1 == 60;16;
7;statement;m = 0;16;
8;statement;int hour_angle = ((int) (0.5 * ((foo_1 * 60) + foo_2)));17;
9;statement;int minute_angle = ((int) (6 * foo_1));18;
10;statement;int angle = fun_1(foo_1 - foo_2);19;
11;statement;angle = fun_1(360 - foo_1, foo_2);20;
12;statement;return foo_1;21;
13;exit;;;
Edges
0;2;
1;3;4;
2;4;
3;5;6;
4;6;
5;7;8;
6;8;
7;9;
8;10;
9;11;
10;12;
11;13;
12;
