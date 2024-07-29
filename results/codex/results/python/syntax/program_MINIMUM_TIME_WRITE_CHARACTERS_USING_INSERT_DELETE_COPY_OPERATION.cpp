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
#include <queue>
using namespace std;
int f_gold ( int N, int insert, int remove, int copy ) {
  if ( N == 0 ) return 0;
  if ( N == 1 ) return insert;
  int dp [ N + 1 ];
  memset ( dp, 0, sizeof ( dp ) );
  for ( int i = 1;
  i <= N;
  i ++ ) {
    if ( i % 2 == 0 ) dp [ i ] = min ( dp [ i - 1 ] + insert, dp [ i / 2 ] + copy );
    else dp [ i ] = min ( dp [ i - 1 ] + insert, dp [ ( i + 1 ) / 2 ] + copy + remove );
  }
  return dp [ N ];
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int N, int insrt, int remov, int cpy) {
    if (N == 0) {
        return 0;
    }
    if (N == 1) {
        return insrt;
    }
    if(env_var_0 == 0) { N = [0] * (N + 1); }
    if(env_var_0 == 1) { N = [0] * (cpy + 1); }
    if(env_var_0 == 2) { N = [0] * (insrt + 1); }
    if(env_var_0 == 3) { N = [0] * (remov + 1); }
    if(env_var_0 == 4) { cpy = [0] * (N + 1); }
    if(env_var_0 == 5) { cpy = [0] * (cpy + 1); }
    if(env_var_0 == 6) { cpy = [0] * (insrt + 1); }
    if(env_var_0 == 7) { cpy = [0] * (remov + 1); }
    if(env_var_0 == 8) { insrt = [0] * (N + 1); }
    if(env_var_0 == 9) { insrt = [0] * (cpy + 1); }
    if(env_var_0 == 10) { insrt = [0] * (insrt + 1); }
    if(env_var_0 == 11) { insrt = [0] * (remov + 1); }
    if(env_var_0 == 12) { remov = [0] * (N + 1); }
    if(env_var_0 == 13) { remov = [0] * (cpy + 1); }
    if(env_var_0 == 14) { remov = [0] * (insrt + 1); }
    if(env_var_0 == 15) { remov = [0] * (remov + 1); }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
        } else {
        }
    }
    return dp[N];
}


int main() {
    int n_success = 0;
    vector<int> param0 {59,66,98,63,99,45,60,11,96,54};
    vector<int> param1 {75,68,55,4,37,28,53,96,95,6};
    vector<int> param2 {12,32,69,41,98,59,40,50,48,50};
    vector<int> param3 {45,41,5,12,55,7,52,50,84,82};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i],param3[i]) == f_gold(param0[i],param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
