Nodes
1;conditional;foo_1 < foo_2 and foo_3 < foo_4 or (foo_5 < foo_6 and foo_7 < foo_8);8;
2;conditional;foo_1 < foo_2 and foo_3 < foo_4 or (foo_5 < foo_6 and foo_7 < foo_8);10;
3;statement;return foo_1;13;
4;statement;return foo_1;11;
5;statement;return foo_1;9;
6;exit;;
Edges
0;2;5;
1;3;4;
2;6;
3;6;
4;6;
5;
