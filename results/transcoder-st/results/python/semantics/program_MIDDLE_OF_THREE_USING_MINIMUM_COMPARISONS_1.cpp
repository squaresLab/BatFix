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
int f_gold ( int a, int b, int c ) {
  if ( a > b ) {
    if ( b > c ) return b;
    else if ( a > c ) return c;
    else return a;
  }
  else {
    if ( a > c ) return a;
    else if ( b > c ) return c;
    else return b;
  }
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a , int b , int c ) {
  if ( a > b ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = a > a; }
    if(env_var_0 == 1) { _res_key_if_0 = a > b; }
    if(env_var_0 == 2) { _res_key_if_0 = a > c; }
    if(env_var_0 == 3) { _res_key_if_0 = b > a; }
    if(env_var_0 == 4) { _res_key_if_0 = b > b; }
    if(env_var_0 == 5) { _res_key_if_0 = b > c; }
    if(env_var_0 == 6) { _res_key_if_0 = c > a; }
    if(env_var_0 == 7) { _res_key_if_0 = c > b; }
    if(env_var_0 == 8) { _res_key_if_0 = c > c; }
    if ( _res_key_if_0 ) return b ;
    else if ( ( a > c ) && ( b > c ) ) return c ;
    else return a ;
  }
  else {
    if ( ( a > c ) && ( b > c ) ) return a ;
    else if ( ( b > c ) && ( a > c ) ) return c ;
    else return b ;
  }
}


int main() {
    int n_success = 0;
    vector<int> param0 {43,76,57,10,59,92,49,16,33,66};
    vector<int> param1 {24,54,5,13,47,14,62,95,41,63};
    vector<int> param2 {7,66,40,4,56,50,65,12,90,46};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
