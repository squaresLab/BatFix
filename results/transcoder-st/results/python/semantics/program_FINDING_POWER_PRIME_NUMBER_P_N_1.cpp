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


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n , int p ) {
  double ans = 0 ;
  double temp = p ;
  while ( true )  {
  if (env_var_0 == 0 && !(ans <= ans)) break;
  if (env_var_0 == 1 && !(ans <= n)) break;
  if (env_var_0 == 2 && !(ans <= p)) break;
  if (env_var_0 == 3 && !(ans <= temp)) break;
  if (env_var_0 == 4 && !(n <= ans)) break;
  if (env_var_0 == 5 && !(n <= n)) break;
  if (env_var_0 == 6 && !(n <= p)) break;
  if (env_var_0 == 7 && !(n <= temp)) break;
  if (env_var_0 == 8 && !(p <= ans)) break;
  if (env_var_0 == 9 && !(p <= n)) break;
  if (env_var_0 == 10 && !(p <= p)) break;
  if (env_var_0 == 11 && !(p <= temp)) break;
  if (env_var_0 == 12 && !(temp <= ans)) break;
  if (env_var_0 == 13 && !(temp <= n)) break;
  if (env_var_0 == 14 && !(temp <= p)) break;
  if (env_var_0 == 15 && !(temp <= temp)) break;
  {
    ans += n / temp ;
    temp = temp * p ;
  }}
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
