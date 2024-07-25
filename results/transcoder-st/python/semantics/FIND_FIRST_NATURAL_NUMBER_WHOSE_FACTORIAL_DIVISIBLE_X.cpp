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
int f_gold ( int x ) {
  int i = 1;
  int fact = 1;
  for ( i = 1;
  i < x;
  i ++ ) {
    fact = fact * i;
    if ( fact % x == 0 ) break;
  }
  return i;
}


int f_filled ( int x ) {
  int i ;
  int fact = 1 ;
  for ( i = 1 ;
  i < x ;
  i ++ ) {
    fact = fact * i ;
    if ( ( fact % x == 0 ) && ( i % x == 0 ) ) break ;
  }
  return i ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {67,47,57,89,67,40,16,83,93,43};
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