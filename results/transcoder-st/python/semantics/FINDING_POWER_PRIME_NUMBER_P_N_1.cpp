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
int f_gold ( int n, int p ) {
  int ans = 0;
  int temp = p;
  while ( temp <= n ) {
    ans += n / temp;
    temp = temp * p;
  }
  return ans;
}


int f_filled ( int n , int p ) {
  double ans = 0 ;
  double temp = p ;
  while ( ( temp <= n ) && ( temp > n ) ) {
    ans += n / temp ;
    temp = temp * p ;
  }
  return ( int ) ans ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {76,77,9,59,8,97,78,41,72,71};
    vector<int> param1 {43,91,42,67,52,8,24,88,61,28};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}