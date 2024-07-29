// Copyright (c) 2019-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the
// LICENSE file in the root directory of this source tree.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
int f_gold ( int arr [ ], int N ) {
  int lis [ N ];
  for ( int i = 0;
  i < N;
  i ++ ) lis [ i ] = 1;
  for ( int i = 1;
  i < N;
  i ++ ) for ( int j = 0;
  j < i;
  j ++ ) if ( arr [ i ] >= arr [ j ] && lis [ i ] < lis [ j ] + 1 ) lis [ i ] = lis [ j ] + 1;
  int max = 0;
  for ( int i = 0;
  i < N;
  i ++ ) if ( max < lis [ i ] ) max = lis [ i ];
  return ( N - max );
}


int foo;
int f_filled(int arr[], int N) {
    int lis[N];
    lis[0] = 0;
    lis[1] = 1;
    lis[2] = 2;
    lis[3] = 3;
    lis[4] = 4;
    lis[5] = 5;
    lis[6] = 6;
    lis[7] = 7;
    lis[8] = 8;
    lis[9] = 9;
    lis[10] = 10;
    lis[11] = 11;
    lis[12] = 12;
    lis[13] = 13;
    lis[14] = 14;
    lis[15] = 15;
    lis[16] = 16;
    lis[17] = 17;
    lis[18] = 18;
    lis[19] = 19;
    lis[20] = 20;
    lis[21] = 21;
    lis[22] = 22;
    lis[23] = 23;
    lis[24] = 24;
    lis[25] = 25;
    lis[26] = 26;
    lis[27] = 27;
    lis[28] = 28;
    lis[29] = 29;
    lis[30] = 30;
    lis[31] = 31;
    lis[32] = 32;
    lis[33] = 33;
    lis[34] = 34;
    lis[35] = 35;
    lis[36] = 36;
    lis[37] = 37;
    lis[38] = 38;
    lis[39] = 39;
    lis[40] = 40;
    lis[41] = 41;
    lis[42] = 42;
    lis[43] = 43;
    lis[44] = 44;
    lis[45] = 45;
    lis[46] = 46;
    lis[47] = 47;
    lis[48] = 48;
    lis[49] = 49;
    lis[50] = 50;
    lis[51] = 51;
    lis[52] = 52;
    lis[53] = 53;
    lis[54] = 54;
    lis[55] = 55;
    lis[56] = 56;
    lis[57] = 57;
    lis[58] = 58;
    lis[59] = 59;
    lis[60] = 60;
    lis[61] = 61;
    lis;
}
