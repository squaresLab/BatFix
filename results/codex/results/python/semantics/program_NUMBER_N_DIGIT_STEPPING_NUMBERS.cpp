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
long long f_gold ( int n ) {
  int dp [ n + 1 ] [ 10 ];
  if ( n == 1 ) return 10;
  for ( int j = 0;
  j <= 9;
  j ++ ) dp [ 1 ] [ j ] = 1;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    for ( int j = 0;
    j <= 9;
    j ++ ) {
      if ( j == 0 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ];
      else if ( j == 9 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ];
      else dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ];
    }
  }
  long long sum = 0;
  for ( int j = 1;
  j <= 9;
  j ++ ) sum += dp [ n ] [ j ];
  return sum;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
        int dp [ n + 1 ] [ 10 ];
        memset( dp,  0, sizeof( dp ));

        int _res_key_if_0;
        if(env_var_0 == 0) { _res_key_if_0 = dp == 1; }
        if(env_var_0 == 1) { _res_key_if_0 = dp[n] == 1; }
        if(env_var_0 == 2) { _res_key_if_0 = n == 1; }
        if ( _res_key_if_0 ) {
            return 10;
        }

        for ( int j = 0; j < 10; j++ ) {
            dp [ 1 ] [ j ] = 1;
        }

        for ( int i = 2; i < n + 1; i++ ) {
            for ( int j = 0; j < 10; j++ ) {
                if ( j == 0 ) {
                    dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ];
                }

                else if ( j == 9 ) {
                    dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ];
                }

                else {
                    dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] );
                }
            }
        }

        int sum = 0;

        for ( int j = 1; j < 10; j++ ) {
            sum = sum + dp [ n ] [ j ];
        }

        return sum;
    }

int main() {
    int n_success = 0;
    vector<int> param0 {18,66,73,70,26,41,20,25,52,13};
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
