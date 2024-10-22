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
bool f_gold ( int n ) {
  if ( n == 0 ) return 0;
  while ( n != 1 ) {
    if ( n % 2 != 0 ) return 0;
    n = n / 2;
  }
  return 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int n ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = n == 0; }
  if ( _res_key_if_0 ) return false ;
  while ( ( n != 1 ) && ( n % 2 != 0 ) ) {
    if ( ( n % 2 != 0 ) || ( n % 2 != 1 ) ) return false ;
    n = n / 2 ;
  }
  return true ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {1,2,8,1024,24,7,46,61,73,66};
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
