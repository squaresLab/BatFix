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
  int count = 0;
  for ( int curr = 1;
  ;
  curr ++ ) {
    int sum = 0;
    for ( int x = curr;
    x > 0;
    x = x / 10 ) sum = sum + x % 10;
    if ( sum == 10 ) count ++;
    if ( count == n ) return curr;
  }
  return - 1;
}


int f_filled ( int n ) {
  int count = 0 ;
  for ( int curr = 0 ;
  curr < n ;
  curr ++ ) {
    int sum = 0 ;
    int x = curr ;
    while ( ( x ) ) {
      sum = sum + x % 10 ;
      x = x / 10 ;
    }
    if ( ( sum == 10 ) && ( count == 10 ) ) {
      count = count + 1 ;
    }
    if ( ( count == n ) && ( count == n ) ) {
      returncurr = curr ;
    }
  }
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {37,13,51,69,76,10,97,40,69,4};
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