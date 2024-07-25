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
int f_gold ( int arr [ ], int n ) {
  if ( n == 1 ) return arr [ 0 ];
  int dec [ n ];
  memset ( dec, 0, sizeof ( dec ) );
  int inc [ n ];
  memset ( inc, 0, sizeof ( inc ) );
  dec [ 0 ] = inc [ 0 ] = arr [ 0 ];
  int flag = 0;
  for ( int i = 1;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j < i;
    j ++ ) {
      if ( arr [ j ] > arr [ i ] ) {
        dec [ i ] = max ( dec [ i ], inc [ j ] + arr [ i ] );
        flag = 1;
      }
      else if ( arr [ j ] < arr [ i ] && flag == 1 ) inc [ i ] = max ( inc [ i ], dec [ j ] + arr [ i ] );
    }
  }
  int result = INT_MIN;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( result < inc [ i ] ) result = inc [ i ];
    if ( result < dec [ i ] ) result = dec [ i ];
  }
  return result;
}


int foo;
int f_filled(int arr[], int n) {
}


