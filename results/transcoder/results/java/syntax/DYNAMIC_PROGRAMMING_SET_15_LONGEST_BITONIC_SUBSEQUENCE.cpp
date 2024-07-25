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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
int f_gold ( int arr [ ], int n ) {
  int i, j;
  int * lis = new int [ n ];
  for ( i = 0;
  i < n;
  i ++ ) lis [ i ] = 1;
  for ( i = 1;
  i < n;
  i ++ ) for ( j = 0;
  j < i;
  j ++ ) if ( arr [ i ] > arr [ j ] && lis [ i ] < lis [ j ] + 1 ) lis [ i ] = lis [ j ] + 1;
  int * lds = new int [ n ];
  for ( i = 0;
  i < n;
  i ++ ) lds [ i ] = 1;
  for ( i = n - 2;
  i >= 0;
  i -- ) for ( j = n - 1;
  j > i;
  j -- ) if ( arr [ i ] > arr [ j ] && lds [ i ] < lds [ j ] + 1 ) lds [ i ] = lds [ j ] + 1;
  int max = lis [ 0 ] + lds [ 0 ] - 1;
  for ( i = 1;
  i < n;
  i ++ ) if ( lis [ i ] + lds [ i ] - 1 > max ) max = lis [ i ] + lds [ i ] - 1;
  return max;
}


int foo;
int f_filled(int arr[], int n) {
    int i, j;
    int lis[n];
    lis[0] = 1;
    lis[1] = 1;
    lis[2] = 1;
    lis[3] = 1;
    lis[4] = 1;
    lis[5] = 1;
    lis[6] = 1;
    lis[7] = 1;
    lis[8] = 1;
    lis[9] = 1;
    lis[10] = 1;
    lis[11] = 1;
    lis[12] = 1;
    lis[13] = 1;
    lis[14] = 1;
    lis[15] = 1;
    lis[16] = 1;
    lis[17] = 1;
    lis[18] = 1;
    lis[19] = 1;
    lis[20] = 1;
    lis[21] = 1;
    lis[22] = 1;
    lis[23] = 1;
    lis[24] = 1;
    lis[25] = 1;
    lis[26] = 1;
    lis[27] = 1;
    lis[28] = 1;
    lis[29] = 1;
    lis[30] = 1;
    lis[31] = 1;
    lis[32] = 1;
    lis[33] = 1;
    lis[34] = 1;
    lis[35] = 1;
    lis[36] = 1;
    lis[37] = 1;
    lis[38] = 1;
    lis[39] = 1;
    lis[40] = 1;
    lis[41] = 1;
    lis[42] = 1;
    lis[43] = 1;
    lis[44] = 1;
    lis[45] = 1;
    lis[46] = 1;
    lis[47] = 1;
    lis[48] = 1;
    lis[49] = 1;
    lis[50] = 1;
    lis[51] = 1;
    lis[52] = 1;
    lis[53] = 1;
    lis[54] = 1;
    lis[55] = 1;
    lis[56] = 1;
    lis[57] = 1;
    lis[58] = 1;
    lis[59] = 1;
    lis[60] = 1;
    lis[61] = 1;
    lis[62] = 1;
    lis[63] = 1;
    lis[64] = 1;
    lis[65] = 1;
    lis[66] = 1;
    lis[67] = 1;
    lis[80] = 1;
}


