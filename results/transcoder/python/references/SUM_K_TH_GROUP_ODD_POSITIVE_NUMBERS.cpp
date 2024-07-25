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
int f_gold ( int k ) {
  int cur = ( k * ( k - 1 ) ) + 1;
  int sum = 0;
  while ( k -- ) {
    sum += cur;
    cur += 2;
  }
  return sum;
}


int f_filled ( int k ) {
  int cur = ( int ) ( ( k * ( k - 1 ) ) + 1 ) ;
  int sum = 0 ;
  while ( k ) {
    sum += cur ;
    cur += 2 ;
    k = k - 1 ;
  }
  return sum ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {91,52,78,51,65,39,42,12,56,98};
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