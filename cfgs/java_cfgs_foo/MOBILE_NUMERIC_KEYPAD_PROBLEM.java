Nodes
1;special;;;
2;conditional;(foo_1 == null) || (foo_2 <= 0);14;
3;statement;return 0;14;
4;exit;;;
5;conditional;foo_1 == 1;15;
6;statement;return 10;15;
7;statement;int[] odd = new int[10];16;
8;statement;int[] even = new int[10];17;
9;statement;int i = 0;18;
10;statement;int j = 0;18;
11;statement;int useOdd = 0;18;
12;statement;int totalCount = 0;18;
13;statement;i = 0;19;
14;conditional;foo_1 <= 9;20;
15;statement;foo_1[foo_2] = 1;21;
16;statement;i++;21;
17;statement;j = 2;22;
18;conditional;foo_1 <= foo_2;23;
19;statement;useOdd = 1 - foo_1;25;
20;conditional;foo_1 == 1;26;
21;statement;foo_1[0] = foo_2[0] + foo_3[8];27;
22;statement;foo_1[1] = (foo_2[1] + foo_3[2]) + foo_4[4];28;
23;statement;foo_1[2] = ((foo_2[2] + foo_3[1]) + foo_4[3]) + foo_5[5];29;
24;statement;foo_1[3] = (foo_2[3] + foo_3[2]) + foo_4[6];30;
25;statement;foo_1[4] = ((foo_2[4] + foo_3[1]) + foo_4[5]) + foo_5[7];31;
26;statement;foo_1[5] = (((foo_2[5] + foo_3[2]) + foo_4[4]) + foo_5[8]) + foo_6[6];32;
27;statement;foo_1[6] = ((foo_2[6] + foo_3[3]) + foo_4[5]) + foo_5[9];33;
28;statement;foo_1[7] = (foo_2[7] + foo_3[4]) + foo_4[8];34;
29;statement;foo_1[8] = (((foo_2[8] + foo_3[0]) + foo_4[5]) + foo_5[7]) + foo_6[9];35;
30;statement;foo_1[9] = (foo_2[9] + foo_3[6]) + foo_4[8];36;
31;statement;foo_1[0] = foo_2[0] + foo_3[8];39;
32;statement;foo_1[1] = (foo_2[1] + foo_3[2]) + foo_4[4];40;
33;statement;foo_1[2] = ((foo_2[2] + foo_3[1]) + foo_4[3]) + foo_5[5];41;
34;statement;foo_1[3] = (foo_2[3] + foo_3[2]) + foo_4[6];42;
35;statement;foo_1[4] = ((foo_2[4] + foo_3[1]) + foo_4[5]) + foo_5[7];43;
36;statement;foo_1[5] = (((foo_2[5] + foo_3[2]) + foo_4[4]) + foo_5[8]) + foo_6[6];44;
37;statement;foo_1[6] = ((foo_2[6] + foo_3[3]) + foo_4[5]) + foo_5[9];45;
38;statement;foo_1[7] = (foo_2[7] + foo_3[4]) + foo_4[8];46;
39;statement;foo_1[8] = (((foo_2[8] + foo_3[0]) + foo_4[5]) + foo_5[7]) + foo_6[9];47;
40;statement;foo_1[9] = (foo_2[9] + foo_3[6]) + foo_4[8];48;
41;statement;j++;24;
42;statement;totalCount = 0;51;
43;conditional;foo_1 == 1;52;
44;statement;i = 0;53;
45;conditional;foo_1 <= 9;54;
46;statement;totalCount += foo_1[foo_2];55;
47;statement;i++;55;
48;statement;i = 0;58;
49;conditional;foo_1 <= 9;59;
50;statement;totalCount += foo_1[foo_2];60;
51;statement;i++;60;
52;statement;return foo_1;62;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;
7;9;
8;10;
9;11;
10;12;
11;13;
12;14;
13;15;17;
14;16;
15;14;
16;18;
17;19;42;
18;20;
19;21;31;
20;22;
21;23;
22;24;
23;25;
24;26;
25;27;
26;28;
27;29;
28;30;
29;41;
30;32;
31;33;
32;34;
33;35;
34;36;
35;37;
36;38;
37;39;
38;40;
39;41;
40;18;
41;43;
42;44;48;
43;45;
44;46;52;
45;47;
46;45;
47;49;
48;50;52;
49;51;
50;49;
51;4;
