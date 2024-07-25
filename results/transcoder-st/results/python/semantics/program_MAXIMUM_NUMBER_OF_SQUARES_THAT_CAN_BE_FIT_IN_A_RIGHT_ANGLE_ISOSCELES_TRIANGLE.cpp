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
int f_gold ( int b, int m ) {
  return ( b / m - 1 ) * ( b / m ) / 2;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
double f_filled ( double b , double m ) {
  if(env_var_0 == 0) { return (b / b - 1) * (b / b) / 2; }
  if(env_var_0 == 1) { return (b / b - 1) * (b / m) / 2; }
  if(env_var_0 == 2) { return (b / b - 1) * (m / b) / 2; }
  if(env_var_0 == 3) { return (b / b - 1) * (m / m) / 2; }
  if(env_var_0 == 4) { return (b / m - 1) * (b / b) / 2; }
  if(env_var_0 == 5) { return (b / m - 1) * (b / m) / 2; }
  if(env_var_0 == 6) { return (b / m - 1) * (m / b) / 2; }
  if(env_var_0 == 7) { return (b / m - 1) * (m / m) / 2; }
  if(env_var_0 == 8) { return (m / b - 1) * (b / b) / 2; }
  if(env_var_0 == 9) { return (m / b - 1) * (b / m) / 2; }
  if(env_var_0 == 10) { return (m / b - 1) * (m / b) / 2; }
  if(env_var_0 == 11) { return (m / b - 1) * (m / m) / 2; }
  if(env_var_0 == 12) { return (m / m - 1) * (b / b) / 2; }
  if(env_var_0 == 13) { return (m / m - 1) * (b / m) / 2; }
  if(env_var_0 == 14) { return (m / m - 1) * (m / b) / 2; }
  if(env_var_0 == 15) { return (m / m - 1) * (m / m) / 2; }
   ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {40,38,47,52,21,50,8,56,93,21};
    vector<int> param1 {74,35,71,29,9,33,82,80,5,90};
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

