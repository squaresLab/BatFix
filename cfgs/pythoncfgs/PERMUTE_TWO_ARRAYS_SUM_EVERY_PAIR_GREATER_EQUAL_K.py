Nodes
1;statement;fun_1(reverse=true);8;
2;statement;fun_1();9;
3;conditional;fun_1(foo_1);10;
4;statement;return true;13;
5;conditional;foo_1[foo_2] + foo_3[foo_4] < foo_5;11;
6;statement;return false;12;
7;exit;;
Edges
0;2;
1;3;
2;4;5;
3;7;
4;3;6;
5;7;
6;
