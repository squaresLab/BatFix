Nodes
1;conditional;fun_1(foo_1) == 0 and fun_2(foo_2) == 0;8;
2;conditional;fun_1(foo_1) > 1 and foo_2[0] == '*' and (fun_2(foo_3) == 0);10;
3;conditional;fun_1(foo_1) > 1 and foo_2[0] == '?' or (fun_2(foo_3) != 0 and fun_3(foo_4) != 0 and (foo_5[0] == foo_6[0]));12;
4;conditional;fun_1(foo_1) != 0 and foo_2[0] == '*';14;
5;statement;return false;16;
6;statement;return fun_1(foo_1[1:], foo_2) or fun_2(foo_3, foo_4[1:]);15;
7;statement;return fun_1(foo_1[1:], foo_2[1:]);13;
8;statement;return false;11;
9;statement;return true;9;
10;exit;;
Edges
0;2;9;
1;3;8;
2;4;7;
3;5;6;
4;10;
5;10;
6;10;
7;10;
8;10;
9;