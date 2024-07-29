Nodes
1;conditional;foo < foo;8;
2;statement;return false;14;
3;conditional;foo < foo;9;
4;conditional;foo < foo;10;
5;conditional;foo_1[foo_2] + foo_3[foo_4] + foo_5[foo_6] == foo_7;11;
6;statement;fun_1('Triplet is', foo_1[foo_2], ', ', foo_3[foo_4], ', ', foo_5[foo_6]);12;
7;statement;return true;13;
8;exit;;
Edges
0;2;3;
1;8;
2;1;4;
3;3;5;
4;4;6;
5;7;
6;8;
7;
