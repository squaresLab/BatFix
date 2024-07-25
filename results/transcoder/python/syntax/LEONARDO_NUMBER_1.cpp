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
  int dp [ n + 1 ];
  dp [ 0 ] = dp [ 1 ] = 1;
  for ( int i = 2;
  i <= n;
  i ++ ) dp [ i ] = dp [ i - 1 ] + dp [ i - 2 ] + 1;
  return dp [ n ];
}


int f_filled ( int n ) {
  int dp [ n ] ;
  ;
  dp [ 0 ] = 1 ;
  ;
  dp [ 1 ] = 1 ;
  ;
  dp [ 2 ] = 1 ;
  ;
  dp [ 3 ] = 1 ;
  ;
  dp [ 4 ] = 1 ;
  ;
  dp [ 5 ] = 1 ;
  ;
  dp [ 6 ] = 1 ;
  ;
  dp [ 7 ] = 1 ;
  ;
  dp [ 8 ] = 1 ;
  ;
  dp [ 9 ] = 1 ;
  ;
  dp [ 10 ] = 1 ;
  ;
  dp [ 11 ] = 1 ;
  ;
  dp [ 12 ] = 1 ;
  ;
  dp [ 13 ] = 1 ;
  ;
  dp [ 14 ] = 1 ;
  ;
  dp [ 15 ] = 1 ;
  ;
  dp [ 16 ] = 1 ;
  ;
  dp [ 17 ] = 1 ;
  ;
  dp [ 18 ] = 1 ;
  ;
  dp [ 19 ] = 1 ;
  ;
  dp [ 20 ] = 1 ;
  ;
  dp [ 21 ] = 1 ;
  ;
  dp [ 22 ] = 1 ;
  ;
  dp [ 23 ] = 1 ;
  ;
  dp [ 24 ] = 1 ;
  ;
  dp [ 25 ] = 1 ;
  ;
  dp [ 26 ] = 1 ;
  ;
  dp [ 27 ] = 1 ;
  ;
  dp [ 28 ] = 1 ;
  

int main() {
    int n_success = 0;
    vector<int> param0 {75,76,55,14,43,10,16,30,44,65};
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