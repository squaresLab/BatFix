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
int f_gold ( int num, int divisor ) {
  while ( num >= divisor ) num -= divisor;
  return num;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int num , int divisor ) {
  while ( true )  {
  if (env_var_0 == 0 && !(divisor >= divisor)) break;
  if (env_var_0 == 1 && !(divisor >= num)) break;
  if (env_var_0 == 2 && !(num >= divisor)) break;
  if (env_var_0 == 3 && !(num >= num)) break;
  num -= }divisor ;
  ;
  return num ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {70,77,77,88,96,6,79,44,26,82};
    vector<int> param1 {13,3,73,54,39,10,95,32,86,91};
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
