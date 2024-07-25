Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;statement;foo_1 = fun_1(foo_2);9;
3;conditional;foo_1 < foo_2;10;
4;statement;return foo_1[:foo_2] == foo_3 and foo_4[foo_5 - foo_6:] == foo_7;12;
5;statement;return false;11;
6;exit;;
Edges
0;2;
1;3;
2;4;5;
3;6;
4;6;
5;