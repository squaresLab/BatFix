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
int f_gold ( int n, int m ) {
  int count [ n + 1 ];
  count [ 0 ] = 0;
  for ( int i = 1;
  i <= n;
  i ++ ) {
    if ( i > m ) count [ i ] = count [ i - 1 ] + count [ i - m ];
    else if ( i < m ) count [ i ] = 1;
    else count [ i ] = 2;
  }
  return count [ n ];
}


int f_filled ( int n , int m ) {
  int count [ n + 2 ] ;
  for ( int i = 0 ;
  i < n + 2 ;
  i ++ ) count [ i ] = 0 ;
  count [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    if ( ( i > m ) && ( i < m ) ) count [ i ] = count [ i - 1 ] + count [ i - m ] ;
    else if ( ( i < m ) && ( i > m ) ) count [ i ] = 1 ;
    else count [ i ] = 2 ;
  }
  return count [ n ] ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {93,17,38,33,78,40,95,12,69,78};
    vector<int> param1 {54,4,39,64,35,61,6,8,60,21};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}