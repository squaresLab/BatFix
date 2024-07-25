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
int f_gold ( unsigned int n ) {
  int res = 1;
  for ( int i = 0;
  i < n;
  ++ i ) {
    res *= ( 2 * n - i );
    res /= ( i + 1 );
  }
  return res / ( n + 1 );
}


double f_filled ( int n ) {
  double res = 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    res *= ( 2 * n - i ) ;
    res /= ( i + 1 ) ;
  }
  return res / ( n + 1 ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {72,90,61,28,70,13,7,98,99,67};
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