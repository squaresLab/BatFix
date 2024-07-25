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
int f_gold ( int x ) {
  int dp [ x + 1 ];
  dp [ 0 ] = dp [ 1 ] = 1;
  for ( int i = 2;
  i <= x;
  i ++ ) dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ];
  return dp [ x ];
}


int f_filled ( int x ) {
  if ( x == 0 || x == 1 ) return 1 ;
  else return ( f_filled ( x - 1 ) + ( x - 1 ) * f_filled ( x - 2 ) ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {22,92,15,81,3,30,88,4,43,92};
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