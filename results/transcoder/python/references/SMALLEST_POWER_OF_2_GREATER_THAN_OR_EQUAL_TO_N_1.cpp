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
unsigned int f_gold ( unsigned int n ) {
  unsigned int p = 1;
  if ( n && ! ( n & ( n - 1 ) ) ) return n;
  while ( p < n ) p <<= 1;
  return p;
}


int f_filled ( int n ) {
  int p = 1 ;
  if ( ( n > 0 ) && ! ( n & ( n - 1 ) ) ) return n ;
  while ( ( p < n ) && ( p != 0 ) ) p <<= 1 ;
  return p ;
  ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {31,89,92,66,38,34,17,24,54,20};
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
