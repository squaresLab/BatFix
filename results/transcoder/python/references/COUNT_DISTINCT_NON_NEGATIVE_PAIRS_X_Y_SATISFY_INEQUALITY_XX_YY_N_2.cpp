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
  int res = 0;
  for ( int x = 0;
  x * x < n;
  x ++ ) for ( int y = 0;
  x * x + y * y < n;
  y ++ ) res ++;
  return res;
}


int f_filled ( int n ) {
  int res = 0 ;
  int x = 0 ;
  while ( ( x * x < n ) && ( x * x < n ) ) {
    int y = 0 ;
    while ( ( x * x + y * y < n ) && ( x * x + y * y < n ) ) {
      res = res + 1 ;
      y = y + 1 ;
    }
    x = x + 1 ;
  }
  return res ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {61,45,53,4,82,86,37,48,81,50};
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