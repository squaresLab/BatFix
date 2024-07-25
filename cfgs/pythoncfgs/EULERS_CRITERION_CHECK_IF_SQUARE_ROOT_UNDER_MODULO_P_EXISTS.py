Nodes
1;statement;foo_1 = foo_2 % foo_3;8;
2;conditional;fun_1(2, foo_1, 1);9;
3;statement;return false;12;
4;conditional;foo_1 * foo_2 % foo_3 == foo_4;10;
5;statement;return true;11;
6;exit;;
Edges
0;2;
1;3;4;
2;6;
3;2;5;
4;6;
5;