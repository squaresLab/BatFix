Nodes
1;special;;;
2;statement;String binary = "";12;
3;statement;int Integral = ((int) (foo_1));13;
4;statement;double fractional = foo_1 - foo_2;14;
5;conditional;foo_1 > 0;15;
6;statement;int rem = foo_1 % 2;16;
7;statement;binary += ((char) (foo_1 + '0'));17;
8;statement;Integral /= 2;18;
9;statement;binary = fun_1(foo_1);20;
10;statement;binary += '.';21;
11;conditional;(k_prec--) > 0;22;
12;statement;fractional *= 2;23;
13;statement;int fract_bit = ((int) (foo_1));24;
14;conditional;foo_1 == 1;25;
15;statement;fractional -= foo_1;26;
16;statement;binary += ((char) (1 + '0'));27;
17;statement;binary += ((char) (0 + '0'));30;
18;statement;return foo_1;33;
19;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;9;6;
5;7;
6;8;
7;5;
8;10;
9;11;
10;18;12;
11;13;
12;14;
13;15;17;
14;16;
15;11;
16;11;
17;19;
18;
