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
long f_gold ( int n, int k ) {
  long total = k;
  int mod = 1000000007;
  int same = 0, diff = k;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    same = diff;
    diff = total * ( k - 1 );
    diff = diff % mod;
    total = ( same + diff ) % mod;
  }
  return total;
}


int f_filled ( int n , int k ) {
  int total = k ;
  int mod = 1000000007 ;
  int same , diff ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    same = diff ;
    diff = total * ( k - 1 ) ;
    diff = diff % mod ;
    total = ( same + diff ) % mod ;
  }
  return total ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {6,23,89,63,23,44,81,43,9,41};
    vector<int> param1 {30,87,31,36,68,66,18,73,42,98};
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
