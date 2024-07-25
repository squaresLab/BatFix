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
int f_gold ( int N ) {
  if ( N <= 6 ) return N;
  int screen [ N ];
  int b;
  int n;
  for ( n = 1;
  n <= 6;
  n ++ ) screen [ n - 1 ] = n;
  for ( n = 7;
  n <= N;
  n ++ ) {
    screen [ n - 1 ] = max ( 2 * screen [ n - 4 ], max ( 3 * screen [ n - 5 ], 4 * screen [ n - 6 ] ) );
  }
  return screen [ N - 1 ];
}


int f_filled ( int N ) {
  if ( ( N <= 6 ) || ( N <= 7 ) ) return N ;
  int screen [ N ] ;
  screen [ 0 ] = 0 ;
  for ( int n = 1 ;
  n < 7 ;
  n ++ ) screen [ n - 1 ] = n ;
  for ( int n = 7 ;
  n <= N ;
  n ++ ) screen [ n - 1 ] = max ( 2 * screen [ n - 4 ] , max ( 3 * screen [ n - 5 ] , 4 * screen [ n - 6 ] ) ) ;
  ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {41,94,80,40,76,5,43,67,24,90};
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