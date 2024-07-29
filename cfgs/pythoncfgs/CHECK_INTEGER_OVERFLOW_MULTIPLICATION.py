Nodes
1;conditional;foo_1 == 0 or foo_2 == 0;8;
2;statement;foo_1 = foo_2 * foo_3;10;
3;conditional;foo_1 >= 9223372036854775807 or foo_2 <= -9223372036854775808;11;
4;conditional;foo_1 == foo_2 // foo_3;13;
5;statement;return true;17;
6;statement;fun_1(foo_1 // foo_2);14;
7;statement;return false;15;
8;statement;foo_1 = 0;12;
9;statement;return false;9;
10;exit;;
Edges
0;2;9;
1;3;
2;4;8;
3;5;6;
4;10;
5;7;
6;10;
7;4;
8;10;
9;
