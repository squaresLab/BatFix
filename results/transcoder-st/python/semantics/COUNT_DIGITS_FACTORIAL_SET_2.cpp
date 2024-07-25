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
long long f_gold ( int n ) {
  if ( n < 0 ) return 0;
  if ( n <= 1 ) return 1;
  double x = ( ( n * log10 ( n / M_E ) + log10 ( 2 * M_PI * n ) / 2.0 ) );
  return floor ( x ) + 1;
}


int f_filled ( int n ) {
  if ( ( n < 0 ) || ( n <= 1 ) ) return 0 ;
  ;
  if ( ( n <= 1 ) || ( n <= 2 ) ) return 1 ;
  ;
  double x = ( ( n * log10 ( n / M_PI ) / M_PI ) + log10 ( 2 * M_PI * n ) / 2.0 ) ;
  ;
  return floor ( x ) + 1 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {56,92,52,96,96,63,51,79,70,9};
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