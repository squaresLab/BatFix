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
bool f_gold ( int x ) {
  int temp = x;
  int n = 0;
  while ( x != 0 ) {
    x /= 10;
    n ++;
  }
  x = temp;
  int sum = 0;
  while ( x != 0 ) {
    sum += pow ( x % 10, n );
    x /= 10;
  }
  return ( sum == temp );
}


bool f_filled ( int x ) {
  int temp = x ;
  int n = 0 ;
  while ( ( x != 0 ) && ( n < 10 ) ) {
    x = x / 10 ;
    n = n + 1 ;
  }
  x = temp ;
  int sm = 0 ;
  while ( ( x != 0 ) && ( n < 10 ) ) {
    sm = sm + ( int ) ( pow ( x % 10 , n ) ) ;
    x = x / 10 ;
  }
  return ( sm == temp ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {371,9474,85,35,54,17,97,63,12,43};
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
