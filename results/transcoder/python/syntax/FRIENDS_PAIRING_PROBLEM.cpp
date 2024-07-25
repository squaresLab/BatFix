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
  for ( int i = 0;
  i <= n;
  i ++ ) {
    if ( i <= 2 ) dp [ i ] = i;
    else dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ];
  }
  return dp [ n ];
}


public : int f_filled ( int n ) {
  vector < int > dp ( n + 1 , 0 ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    if ( ( i <= 2 ) && ( i > 0 ) ) dp [ i ] = i ;
    else dp [ i ] = dp [ i - 1 ] + ( i - 1 ) * dp [ i - 2 ] ;
  }
  return dp [ n ] ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {99,62,87,87,61,88,73,62,98,57};
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