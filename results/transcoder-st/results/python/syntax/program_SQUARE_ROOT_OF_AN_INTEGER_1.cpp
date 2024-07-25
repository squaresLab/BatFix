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
int f_gold ( int x ) {
  if ( x == 0 || x == 1 ) return x;
  int start = 1, end = x, ans;
  while ( start <= end ) {
    int mid = ( start + end ) / 2;
    if ( mid * mid == x ) return mid;
    if ( mid * mid < x ) {
      start = mid + 1;
      ans = mid;
    }
    else end = mid - 1;
  }
  return ans;
}


int foo;
int returnmid;
int ans;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int x ) {
  if ( ( x == 0 || x == 1 ) ) return x ;
  int start = 1 ;
  int end = x ;
  while ( ( start <= end ) && ( start < end ) ) {
    int mid = ( start + end ) / 2 ;
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = end * end == end; }
    if(env_var_0 == 1) { _res_key_if_0 = end * end == mid; }
    if(env_var_0 == 2) { _res_key_if_0 = end * end == start; }
    if(env_var_0 == 3) { _res_key_if_0 = end * end == x; }
    if(env_var_0 == 4) { _res_key_if_0 = end * mid == end; }
    if(env_var_0 == 5) { _res_key_if_0 = end * mid == mid; }
    if(env_var_0 == 6) { _res_key_if_0 = end * mid == start; }
    if(env_var_0 == 7) { _res_key_if_0 = end * mid == x; }
    if(env_var_0 == 8) { _res_key_if_0 = end * start == end; }
    if(env_var_0 == 9) { _res_key_if_0 = end * start == mid; }
    if(env_var_0 == 10) { _res_key_if_0 = end * start == start; }
    if(env_var_0 == 11) { _res_key_if_0 = end * start == x; }
    if(env_var_0 == 12) { _res_key_if_0 = end * x == end; }
    if(env_var_0 == 13) { _res_key_if_0 = end * x == mid; }
    if(env_var_0 == 14) { _res_key_if_0 = end * x == start; }
    if(env_var_0 == 15) { _res_key_if_0 = end * x == x; }
    if(env_var_0 == 16) { _res_key_if_0 = mid * end == end; }
    if(env_var_0 == 17) { _res_key_if_0 = mid * end == mid; }
    if(env_var_0 == 18) { _res_key_if_0 = mid * end == start; }
    if(env_var_0 == 19) { _res_key_if_0 = mid * end == x; }
    if(env_var_0 == 20) { _res_key_if_0 = mid * mid == end; }
    if(env_var_0 == 21) { _res_key_if_0 = mid * mid == mid; }
    if(env_var_0 == 22) { _res_key_if_0 = mid * mid == start; }
    if(env_var_0 == 23) { _res_key_if_0 = mid * mid == x; }
    if(env_var_0 == 24) { _res_key_if_0 = mid * start == end; }
    if(env_var_0 == 25) { _res_key_if_0 = mid * start == mid; }
    if(env_var_0 == 26) { _res_key_if_0 = mid * start == start; }
    if(env_var_0 == 27) { _res_key_if_0 = mid * start == x; }
    if(env_var_0 == 28) { _res_key_if_0 = mid * x == end; }
    if(env_var_0 == 29) { _res_key_if_0 = mid * x == mid; }
    if(env_var_0 == 30) { _res_key_if_0 = mid * x == start; }
    if(env_var_0 == 31) { _res_key_if_0 = mid * x == x; }
    if(env_var_0 == 32) { _res_key_if_0 = start * end == end; }
    if(env_var_0 == 33) { _res_key_if_0 = start * end == mid; }
    if(env_var_0 == 34) { _res_key_if_0 = start * end == start; }
    if(env_var_0 == 35) { _res_key_if_0 = start * end == x; }
    if(env_var_0 == 36) { _res_key_if_0 = start * mid == end; }
    if(env_var_0 == 37) { _res_key_if_0 = start * mid == mid; }
    if(env_var_0 == 38) { _res_key_if_0 = start * mid == start; }
    if(env_var_0 == 39) { _res_key_if_0 = start * mid == x; }
    if(env_var_0 == 40) { _res_key_if_0 = start * start == end; }
    if(env_var_0 == 41) { _res_key_if_0 = start * start == mid; }
    if(env_var_0 == 42) { _res_key_if_0 = start * start == start; }
    if(env_var_0 == 43) { _res_key_if_0 = start * start == x; }
    if(env_var_0 == 44) { _res_key_if_0 = start * x == end; }
    if(env_var_0 == 45) { _res_key_if_0 = start * x == mid; }
    if(env_var_0 == 46) { _res_key_if_0 = start * x == start; }
    if(env_var_0 == 47) { _res_key_if_0 = start * x == x; }
    if(env_var_0 == 48) { _res_key_if_0 = x * end == end; }
    if(env_var_0 == 49) { _res_key_if_0 = x * end == mid; }
    if(env_var_0 == 50) { _res_key_if_0 = x * end == start; }
    if(env_var_0 == 51) { _res_key_if_0 = x * end == x; }
    if(env_var_0 == 52) { _res_key_if_0 = x * mid == end; }
    if(env_var_0 == 53) { _res_key_if_0 = x * mid == mid; }
    if(env_var_0 == 54) { _res_key_if_0 = x * mid == start; }
    if(env_var_0 == 55) { _res_key_if_0 = x * mid == x; }
    if(env_var_0 == 56) { _res_key_if_0 = x * start == end; }
    if(env_var_0 == 57) { _res_key_if_0 = x * start == mid; }
    if(env_var_0 == 58) { _res_key_if_0 = x * start == start; }
    if(env_var_0 == 59) { _res_key_if_0 = x * start == x; }
    if(env_var_0 == 60) { _res_key_if_0 = x * x == end; }
    if(env_var_0 == 61) { _res_key_if_0 = x * x == mid; }
    if(env_var_0 == 62) { _res_key_if_0 = x * x == start; }
    if(env_var_0 == 63) { _res_key_if_0 = x * x == x; }
    if ( ( mid * mid == x ) || ( mid * mid < x ) ) _res_key_if_0 ;
    if ( ( mid * mid < x ) || ( mid * mid < x ) ) {
      start = mid + 1 ;
      ans = mid ;
    }
    else end = mid - 1 ;
  }if(env_var_1 == 0) { end; }
  if(env_var_1 == 1) { start; }
  if(env_var_1 == 2) { x; }
  
   ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {40,10,46,54,1,67,64,10,75,11};
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

