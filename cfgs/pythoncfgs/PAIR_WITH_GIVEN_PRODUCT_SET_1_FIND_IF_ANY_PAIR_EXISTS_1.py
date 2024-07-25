Nodes
1;conditional;foo_1 < 2;8;
2;statement;foo_1 = fun_1();10;
3;conditional;foo < foo;11;
4;statement;return false;21;
5;conditional;foo_1[foo_2] == 0;12;
6;conditional;foo_1 % foo_2[foo_3] == 0;17;
7;conditional;foo_1 // foo_2[foo_3] in foo_4;18;
8;statement;fun_1(foo_1[foo_2]);20;
9;statement;return true;19;
10;conditional;foo_1 == 0;13;
11;statement;return true;14;
12;statement;return false;9;
13;exit;;
Edges
0;2;12;
1;3;
2;4;5;
3;13;
4;6;10;
5;3;7;
6;8;9;
7;3;
8;13;
9;3;11;
10;13;
11;13;
12;