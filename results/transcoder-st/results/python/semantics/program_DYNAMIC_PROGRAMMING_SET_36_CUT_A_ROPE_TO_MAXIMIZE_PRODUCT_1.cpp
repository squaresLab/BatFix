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
  if ( n == 2 || n == 3 ) return ( n - 1 );
  int res = 1;
  while ( n > 4 ) {
    n -= 3;
    res *= 3;
  }
  return ( n * res );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  if ( ( n == 2 || n == 3 ) ) return ( n - 1 ) ;
  int res = 1 ;
  while ( true )  {
  if (env_var_0 == 0 && !(n > 4)) break;
  if (env_var_0 == 1 && !(res > 4)) break;
  {
    n -= 3 ;
    ;
    res *= 3 ;
    ;
  }}
  return ( n * res ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {62,53,8,6,35,35,46,74,69,3};
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

