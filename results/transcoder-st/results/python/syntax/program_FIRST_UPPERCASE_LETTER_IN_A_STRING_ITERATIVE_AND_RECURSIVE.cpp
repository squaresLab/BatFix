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
char f_gold ( string str ) {
  for ( int i = 0;
  i < str . length ( );
  i ++ ) if ( isupper ( str [ i ] ) ) return str [ i ];
  return 0;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( string str ) {
  for ( int i = 0 ;
  i != str . length ( ) ;
  i ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = *str.c_str(); }
    if(env_var_0 == 1) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 2) { _res_key_if_0 = isupper( str[i] ); }
    if(env_var_0 == 3) { _res_key_if_0 = str.__clear_and_shrink(); }
    if(env_var_0 == 4) { _res_key_if_0 = str.back(); }
    if(env_var_0 == 5) { _res_key_if_0 = str.begin(); }
    if(env_var_0 == 6) { _res_key_if_0 = str.capacity(); }
    if(env_var_0 == 7) { _res_key_if_0 = str.cend(); }
    if(env_var_0 == 8) { _res_key_if_0 = str.crend(); }
    if(env_var_0 == 9) { _res_key_if_0 = str.empty(); }
    if(env_var_0 == 10) { _res_key_if_0 = str.end(); }
    if(env_var_0 == 11) { _res_key_if_0 = str.front(); }
    if(env_var_0 == 12) { _res_key_if_0 = str.get_allocator(); }
    if(env_var_0 == 13) { _res_key_if_0 = str.length(); }
    if(env_var_0 == 14) { _res_key_if_0 = str.rbegin(); }
    if(env_var_0 == 15) { _res_key_if_0 = str.rend(); }
    if(env_var_0 == 16) { _res_key_if_0 = str.shrink_to_fit(); }
    if(env_var_0 == 17) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 18) { _res_key_if_0 = toupper( str[i] ); }
    if(env_var_0 == 19) { _res_key_if_0 = toupper(); }
    if ( _res_key_if_0 ) return i ;
  }
  return 0 ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"pH","96544000","000010000","ujqpx","20684847994","111","rclkv","45173693434","11111011001101","f"};
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
