Nodes
1;statement;foo_1 = fun_1();10;
2;conditional;fun_1(foo_1);11;
3;statement;foo_1 = fun_1();13;
4;conditional;fun_1(foo_1);14;
5;statement;foo_1 = [];16;
6;conditional;not fun_1();17;
7;statement;return fun_1() and fun_2(foo_1) == 0;30;
8;statement;foo_1 = foo_2.queue[0];18;
9;statement;fun_1();19;
10;conditional;foo_1 == foo_2.queue[0];20;
11;statement;fun_1(foo_1);29;
12;statement;fun_1();21;
13;conditional;fun_1(foo_1) != 0;22;
14;conditional;foo_1[-1] == foo_2.queue[0];23;
15;statement;fun_1();24;
16;statement;fun_1();25;
17;statement;fun_1(foo_1[foo_2]);15;
18;statement;fun_1(foo_1[foo_2]);12;
19;exit;;
Edges
0;2;
1;3;18;
2;4;
3;5;17;
4;6;
5;7;8;
6;19;
7;9;
8;10;
9;11;12;
10;6;
11;13;
12;6;14;
13;6;15;
14;16;
15;13;
16;4;
17;2;
18;