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
  int DP [ n + 1 ];
  DP [ 0 ] = 0;
  DP [ 1 ] = 1;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    if ( i % 2 == 0 ) DP [ i ] = DP [ i / 2 ];
    else DP [ i ] = DP [ ( i - 1 ) / 2 ] + DP [ ( i + 1 ) / 2 ];
  }
  return DP [ n ];
}


public : int f_filled ( int n ) {
  vector < int > DP ( n + 1 , 0 ) ;
  DP [ 0 ] = 0 ;
  DP [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    if ( ( int ) i % 2 == 0 ) DP [ i ] = DP [ ( int ) i / 2 ] ;
    else DP [ i ] = ( DP [ ( int ) ( ( i - 1 ) / 2 ) ] + DP [ ( int ) ( ( i + 1 ) / 2 ) ] ) ;
  }
  return DP [ n ] ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {37,24,13,56,26,67,82,60,64,65};
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