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
  for ( int curr = 19;
  ;
  curr += 9 ) {
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
  int curr = 19 ;
  while ( ( true ) ) {
    int sum = 0 ;
    int x = curr ;
    while ( ( x > 0 ) && ( x != 0 ) ) {
      sum = sum + x % 10 ;
      x = ( int ) ( x / 10 ) ;
    }
    if ( ( sum == 10 ) && ( count == 10 ) ) {
      count ++ ;
    }
    if ( ( count == n ) && ( curr == 19 ) ) {
      return curr ;
    }
    curr += 9 ;
  }
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {93,10,55,94,2,5,37,4,11,46};
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