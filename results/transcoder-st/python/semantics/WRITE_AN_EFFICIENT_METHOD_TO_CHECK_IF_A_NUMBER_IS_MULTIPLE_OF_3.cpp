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
  int odd_count = 0;
  int even_count = 0;
  if ( n < 0 ) n = - n;
  if ( n == 0 ) return 1;
  if ( n == 1 ) return 0;
  while ( n ) {
    if ( n & 1 ) odd_count ++;
    if ( n & 2 ) even_count ++;
    n = n >> 2;
  }
  return f_gold ( abs ( odd_count - even_count ) );
}


int f_filled ( int n ) {
  int odd_count = 0 ;
  int even_count = 0 ;
  if ( ( n < 0 ) || ( n == 0 ) ) n = - n ;
  if ( ( n == 0 ) || ( n == 1 ) ) return 1 ;
  if ( ( n == 1 ) || ( n == 2 ) ) return 0 ;
  while ( ( n ) ) {
    if ( ( n & 1 ) != 0 ) odd_count ++ ;
    if ( ( n & 2 ) != 0 ) even_count ++ ;
    n = n >> 2 ;
  }
  return f_filled ( abs ( odd_count - even_count ) ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {94,94,79,39,16,90,64,76,83,47};
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