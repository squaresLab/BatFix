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
  int result = 0;
  for ( int i = 0;
  i <= n;
  i ++ ) for ( int j = 0;
  j <= n - i;
  j ++ ) for ( int k = 0;
  k <= ( n - i - j );
  k ++ ) if ( i + j + k == n ) result ++;
  return result;
}


int f_filled ( int n ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      for ( int k = 0 ;
      k < n + 1 ;
      k ++ ) {
        if ( i + j + k == n ) {
          result ++ ;
        }
      }
    }
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {62,44,37,81,14,20,76,72,96,52};
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