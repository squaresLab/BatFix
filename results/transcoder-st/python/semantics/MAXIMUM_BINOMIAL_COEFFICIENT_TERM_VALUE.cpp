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
int f_gold ( int n ) {
  int C [ n + 1 ] [ n + 1 ];
  for ( int i = 0;
  i <= n;
  i ++ ) {
    for ( int j = 0;
    j <= min ( i, n );
    j ++ ) {
      if ( j == 0 || j == i ) C [ i ] [ j ] = 1;
      else C [ i ] [ j ] = C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ];
    }
  }
  int maxvalue = 0;
  for ( int i = 0;
  i <= n;
  i ++ ) maxvalue = max ( maxvalue, C [ n ] [ i ] );
  return maxvalue;
}


int f_filled ( int n ) {
  int C [ n + 1 ] [ n + 1 ] ;
  for ( int y = 0 ;
  y < n + 1 ;
  y ++ ) {
    for ( int i = 0 ;
    i < n + 1 ;
    i ++ ) {
      for ( int j = 0 ;
      j < min ( i , n ) + 1 ;
      j ++ ) {
        if ( ( j == 0 || j == i ) && ( C [ i ] [ j ] == 1 ) ) C [ i ] [ j ] = 1 ;
        else C [ i ] [ j ] = ( C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ) ;
      }
    }
  }
  int maxvalue = 0 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) maxvalue = max ( maxvalue , C [ n ] [ i ] ) ;
  return maxvalue ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {23,41,69,56,71,38,26,52,93,44};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}