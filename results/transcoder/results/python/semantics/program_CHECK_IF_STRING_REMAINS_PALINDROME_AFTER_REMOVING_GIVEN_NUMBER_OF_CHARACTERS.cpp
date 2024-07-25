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
bool f_gold ( string str, int n ) {
  int len = str . length ( );
  if ( len >= n ) return true;
  return false;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string str , int n ) {
  int l = str . length ( ) ;
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = l >= l; }
  if(env_var_0 == 1) { _res_key_if_0 = l >= n; }
  if(env_var_0 == 2) { _res_key_if_0 = l >= str; }
  if(env_var_0 == 3) { _res_key_if_0 = l >= str.begin(); }
  if(env_var_0 == 4) { _res_key_if_0 = l >= str.end(); }
  if(env_var_0 == 5) { _res_key_if_0 = l >= str[l]; }
  if(env_var_0 == 6) { _res_key_if_0 = l >= str[n]; }
  if(env_var_0 == 7) { _res_key_if_0 = n >= l; }
  if(env_var_0 == 8) { _res_key_if_0 = n >= n; }
  if(env_var_0 == 9) { _res_key_if_0 = n >= str; }
  if(env_var_0 == 10) { _res_key_if_0 = n >= str.begin(); }
  if(env_var_0 == 11) { _res_key_if_0 = n >= str.end(); }
  if(env_var_0 == 12) { _res_key_if_0 = n >= str[l]; }
  if(env_var_0 == 13) { _res_key_if_0 = n >= str[n]; }
  if(env_var_0 == 14) { _res_key_if_0 = str >= l; }
  if(env_var_0 == 15) { _res_key_if_0 = str >= n; }
  if(env_var_0 == 16) { _res_key_if_0 = str >= str; }
  if(env_var_0 == 17) { _res_key_if_0 = str >= str.begin(); }
  if(env_var_0 == 18) { _res_key_if_0 = str >= str.end(); }
  if(env_var_0 == 19) { _res_key_if_0 = str >= str[l]; }
  if(env_var_0 == 20) { _res_key_if_0 = str >= str[n]; }
  if(env_var_0 == 21) { _res_key_if_0 = str.begin() >= l; }
  if(env_var_0 == 22) { _res_key_if_0 = str.begin() >= n; }
  if(env_var_0 == 23) { _res_key_if_0 = str.begin() >= str; }
  if(env_var_0 == 24) { _res_key_if_0 = str.begin() >= str.begin(); }
  if(env_var_0 == 25) { _res_key_if_0 = str.begin() >= str.end(); }
  if(env_var_0 == 26) { _res_key_if_0 = str.begin() >= str[l]; }
  if(env_var_0 == 27) { _res_key_if_0 = str.begin() >= str[n]; }
  if(env_var_0 == 28) { _res_key_if_0 = str.end() >= l; }
  if(env_var_0 == 29) { _res_key_if_0 = str.end() >= n; }
  if(env_var_0 == 30) { _res_key_if_0 = str.end() >= str; }
  if(env_var_0 == 31) { _res_key_if_0 = str.end() >= str.begin(); }
  if(env_var_0 == 32) { _res_key_if_0 = str.end() >= str.end(); }
  if(env_var_0 == 33) { _res_key_if_0 = str.end() >= str[l]; }
  if(env_var_0 == 34) { _res_key_if_0 = str.end() >= str[n]; }
  if(env_var_0 == 35) { _res_key_if_0 = str[l] >= l; }
  if(env_var_0 == 36) { _res_key_if_0 = str[l] >= n; }
  if(env_var_0 == 37) { _res_key_if_0 = str[l] >= str; }
  if(env_var_0 == 38) { _res_key_if_0 = str[l] >= str.begin(); }
  if(env_var_0 == 39) { _res_key_if_0 = str[l] >= str.end(); }
  if(env_var_0 == 40) { _res_key_if_0 = str[l] >= str[l]; }
  if(env_var_0 == 41) { _res_key_if_0 = str[l] >= str[n]; }
  if(env_var_0 == 42) { _res_key_if_0 = str[n] >= l; }
  if(env_var_0 == 43) { _res_key_if_0 = str[n] >= n; }
  if(env_var_0 == 44) { _res_key_if_0 = str[n] >= str; }
  if(env_var_0 == 45) { _res_key_if_0 = str[n] >= str.begin(); }
  if(env_var_0 == 46) { _res_key_if_0 = str[n] >= str.end(); }
  if(env_var_0 == 47) { _res_key_if_0 = str[n] >= str[l]; }
  if(env_var_0 == 48) { _res_key_if_0 = str[n] >= str[n]; }
  if ( _res_key_if_0 ) return true ;
  return false ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"ZCoQhuM","7437725","11","buGlvR","9","101101010110","YguiM","8198","11101","hUInqJXNdbfP"};
    vector<int> param1 {2,53,30,1,92,3,18,90,71,4};
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

