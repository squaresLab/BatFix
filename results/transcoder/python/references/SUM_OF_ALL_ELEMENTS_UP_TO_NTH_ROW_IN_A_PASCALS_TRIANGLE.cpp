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
long long int f_gold ( int n ) {
  long long int sum = 0;
  for ( int row = 0;
  row < n;
  row ++ ) {
    sum = sum + ( 1 << row );
  }
  return sum;
}


int f_filled ( int n ) {
  int sum = 0 ;
  for ( int row = 0 ;
  row < n ;
  row ++ ) {
    sum = sum + ( 1 << row ) ;
  }
  return sum ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {21,4,31,79,38,75,36,32,23,65};
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
