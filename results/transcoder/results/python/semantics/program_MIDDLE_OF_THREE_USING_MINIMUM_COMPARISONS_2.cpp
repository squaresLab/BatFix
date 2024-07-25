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
  int x = a - b;
  int y = b - c;
  int z = a - c;
  if ( x * y > 0 ) return b;
  else if ( x * z > 0 ) return c;
  else return a;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a , int b , int c ) {
  int x = a - b ;
  int y = b - c ;
  int z = a - c ;
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = a * a > 0; }
  if(env_var_0 == 1) { _res_key_if_0 = a * b > 0; }
  if(env_var_0 == 2) { _res_key_if_0 = a * c > 0; }
  if(env_var_0 == 3) { _res_key_if_0 = a * x > 0; }
  if(env_var_0 == 4) { _res_key_if_0 = a * y > 0; }
  if(env_var_0 == 5) { _res_key_if_0 = a * z > 0; }
  if(env_var_0 == 6) { _res_key_if_0 = b * a > 0; }
  if(env_var_0 == 7) { _res_key_if_0 = b * b > 0; }
  if(env_var_0 == 8) { _res_key_if_0 = b * c > 0; }
  if(env_var_0 == 9) { _res_key_if_0 = b * x > 0; }
  if(env_var_0 == 10) { _res_key_if_0 = b * y > 0; }
  if(env_var_0 == 11) { _res_key_if_0 = b * z > 0; }
  if(env_var_0 == 12) { _res_key_if_0 = c * a > 0; }
  if(env_var_0 == 13) { _res_key_if_0 = c * b > 0; }
  if(env_var_0 == 14) { _res_key_if_0 = c * c > 0; }
  if(env_var_0 == 15) { _res_key_if_0 = c * x > 0; }
  if(env_var_0 == 16) { _res_key_if_0 = c * y > 0; }
  if(env_var_0 == 17) { _res_key_if_0 = c * z > 0; }
  if(env_var_0 == 18) { _res_key_if_0 = x * a > 0; }
  if(env_var_0 == 19) { _res_key_if_0 = x * b > 0; }
  if(env_var_0 == 20) { _res_key_if_0 = x * c > 0; }
  if(env_var_0 == 21) { _res_key_if_0 = x * x > 0; }
  if(env_var_0 == 22) { _res_key_if_0 = x * y > 0; }
  if(env_var_0 == 23) { _res_key_if_0 = x * z > 0; }
  if(env_var_0 == 24) { _res_key_if_0 = y * a > 0; }
  if(env_var_0 == 25) { _res_key_if_0 = y * b > 0; }
  if(env_var_0 == 26) { _res_key_if_0 = y * c > 0; }
  if(env_var_0 == 27) { _res_key_if_0 = y * x > 0; }
  if(env_var_0 == 28) { _res_key_if_0 = y * y > 0; }
  if(env_var_0 == 29) { _res_key_if_0 = y * z > 0; }
  if(env_var_0 == 30) { _res_key_if_0 = z * a > 0; }
  if(env_var_0 == 31) { _res_key_if_0 = z * b > 0; }
  if(env_var_0 == 32) { _res_key_if_0 = z * c > 0; }
  if(env_var_0 == 33) { _res_key_if_0 = z * x > 0; }
  if(env_var_0 == 34) { _res_key_if_0 = z * y > 0; }
  if(env_var_0 == 35) { _res_key_if_0 = z * z > 0; }
  if ( _res_key_if_0 ) return b ;
  else if ( ( x * z > 0 ) && ( y * z < 0 ) ) return a ;
  else return a ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {48,21,71,93,3,58,88,8,17,13};
    vector<int> param1 {46,7,4,34,61,78,41,84,66,3};
    vector<int> param2 {38,16,31,11,32,6,66,38,27,23};
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

