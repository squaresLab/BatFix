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
int f_gold ( int n, int k ) {
  if ( n + 1 >= k ) return ( k - 1 );
  else return ( 2 * n + 1 - k );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n , int k ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = k + 1 >= k; }
  if(env_var_0 == 1) { _res_key_if_0 = k + 1 >= n; }
  if(env_var_0 == 2) { _res_key_if_0 = n + 1 >= k; }
  if(env_var_0 == 3) { _res_key_if_0 = n + 1 >= n; }
  if ( _res_key_if_0 ) return ( k - 1 ) ;
  else return ( 2 * n + 1 - k ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {90,86,92,72,25,11,94,91,66,34};
    vector<int> param1 {74,36,38,71,57,53,80,75,58,88};
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

