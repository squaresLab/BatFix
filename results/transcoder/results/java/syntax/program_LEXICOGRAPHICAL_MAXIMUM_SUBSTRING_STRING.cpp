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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
string f_gold ( string str ) {
  string mx = "";
  for ( int i = 0;
  i < str . length ( );
  ++ i ) mx = max ( mx, str . substr ( i ) );
  return mx;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string str ) {
  string mx = "";
  for ( int i = 0;
  i < str . size ( );
  ++ i ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = i <= 0; }
    if(env_var_0 == 1) { _res_key_if_0 = isupper( i ) <= 0; }
    if(env_var_0 == 2) { _res_key_if_0 = isupper( mx[i] ) <= 0; }
    if(env_var_0 == 3) { _res_key_if_0 = isupper( str[i] ) <= 0; }
    if(env_var_0 == 4) { _res_key_if_0 = mx <= 0; }
    if(env_var_0 == 5) { _res_key_if_0 = mx.__append_default_init( i ) <= 0; }
    if(env_var_0 == 6) { _res_key_if_0 = mx.__append_default_init( mx[i] ) <= 0; }
    if(env_var_0 == 7) { _res_key_if_0 = mx.__append_default_init( str[i] ) <= 0; }
    if(env_var_0 == 8) { _res_key_if_0 = mx.__resize_default_init( i ) <= 0; }
    if(env_var_0 == 9) { _res_key_if_0 = mx.__resize_default_init( mx[i] ) <= 0; }
    if(env_var_0 == 10) { _res_key_if_0 = mx.__resize_default_init( str[i] ) <= 0; }
    if(env_var_0 == 11) { _res_key_if_0 = mx.__shrink_or_extend( i ) <= 0; }
    if(env_var_0 == 12) { _res_key_if_0 = mx.__shrink_or_extend( mx[i] ) <= 0; }
    if(env_var_0 == 13) { _res_key_if_0 = mx.__shrink_or_extend( str[i] ) <= 0; }
    if(env_var_0 == 14) { _res_key_if_0 = mx.append( mx ) <= 0; }
    if(env_var_0 == 15) { _res_key_if_0 = mx.append( str ) <= 0; }
    if(env_var_0 == 16) { _res_key_if_0 = mx.assign( mx ) <= 0; }
    if(env_var_0 == 17) { _res_key_if_0 = mx.assign( str ) <= 0; }
    if(env_var_0 == 18) { _res_key_if_0 = mx.at( i ) <= 0; }
    if(env_var_0 == 19) { _res_key_if_0 = mx.at( mx[i] ) <= 0; }
    if(env_var_0 == 20) { _res_key_if_0 = mx.at( str[i] ) <= 0; }
    if(env_var_0 == 21) { _res_key_if_0 = mx.begin() <= 0; }
    if(env_var_0 == 22) { _res_key_if_0 = mx.compare( mx ) <= 0; }
    if(env_var_0 == 23) { _res_key_if_0 = mx.compare( str ) <= 0; }
    if(env_var_0 == 24) { _res_key_if_0 = mx.end() <= 0; }
    if(env_var_0 == 25) { _res_key_if_0 = mx.push_back( i ) <= 0; }
    if(env_var_0 == 26) { _res_key_if_0 = mx.push_back( mx[i] ) <= 0; }
    if(env_var_0 == 27) { _res_key_if_0 = mx.push_back( str[i] ) <= 0; }
    if(env_var_0 == 28) { _res_key_if_0 = mx.reserve( i ) <= 0; }
    if(env_var_0 == 29) { _res_key_if_0 = mx.reserve( mx[i] ) <= 0; }
    if(env_var_0 == 30) { _res_key_if_0 = mx.reserve( str[i] ) <= 0; }
    if(env_var_0 == 31) { _res_key_if_0 = mx.resize( i ) <= 0; }
    if(env_var_0 == 32) { _res_key_if_0 = mx.resize( mx[i] ) <= 0; }
    if(env_var_0 == 33) { _res_key_if_0 = mx.resize( str[i] ) <= 0; }
    if(env_var_0 == 34) { _res_key_if_0 = mx.swap( mx ) <= 0; }
    if(env_var_0 == 35) { _res_key_if_0 = mx.swap( str ) <= 0; }
    if(env_var_0 == 36) { _res_key_if_0 = mx[i] <= 0; }
    if(env_var_0 == 37) { _res_key_if_0 = std::max( i,i ) <= 0; }
    if(env_var_0 == 38) { _res_key_if_0 = std::max( i,mx[i] ) <= 0; }
    if(env_var_0 == 39) { _res_key_if_0 = std::max( i,str[i] ) <= 0; }
    if(env_var_0 == 40) { _res_key_if_0 = std::max( mx,mx ) <= 0; }
    if(env_var_0 == 41) { _res_key_if_0 = std::max( mx[i],i ) <= 0; }
    if(env_var_0 == 42) { _res_key_if_0 = std::max( mx[i],mx[i] ) <= 0; }
    if(env_var_0 == 43) { _res_key_if_0 = std::max( mx[i],str[i] ) <= 0; }
    if(env_var_0 == 44) { _res_key_if_0 = std::max( str[i],i ) <= 0; }
    if(env_var_0 == 45) { _res_key_if_0 = std::max( str[i],mx[i] ) <= 0; }
    if(env_var_0 == 46) { _res_key_if_0 = std::max( str[i],str[i] ) <= 0; }
    if(env_var_0 == 47) { _res_key_if_0 = std::min( i,i ) <= 0; }
    if(env_var_0 == 48) { _res_key_if_0 = std::min( i,mx[i] ) <= 0; }
    if(env_var_0 == 49) { _res_key_if_0 = std::min( i,str[i] ) <= 0; }
    if(env_var_0 == 50) { _res_key_if_0 = std::min( mx[i],i ) <= 0; }
    if(env_var_0 == 51) { _res_key_if_0 = std::min( mx[i],mx[i] ) <= 0; }
    if(env_var_0 == 52) { _res_key_if_0 = std::min( mx[i],str[i] ) <= 0; }
    if(env_var_0 == 53) { _res_key_if_0 = std::min( str[i],i ) <= 0; }
    if(env_var_0 == 54) { _res_key_if_0 = std::min( str[i],mx[i] ) <= 0; }
    if(env_var_0 == 55) { _res_key_if_0 = std::min( str[i],str[i] ) <= 0; }
    if(env_var_0 == 56) { _res_key_if_0 = str <= 0; }
    if(env_var_0 == 57) { _res_key_if_0 = str.begin() <= 0; }
    if(env_var_0 == 58) { _res_key_if_0 = str.end() <= 0; }
    if(env_var_0 == 59) { _res_key_if_0 = str[i] <= 0; }
    if(env_var_0 == 60) { _res_key_if_0 = toupper( i ) <= 0; }
    if(env_var_0 == 61) { _res_key_if_0 = toupper( mx[i] ) <= 0; }
    if(env_var_0 == 62) { _res_key_if_0 = toupper( str[i] ) <= 0; }
    if ( _res_key_if_0 ) mx = str [ i ];
  }
  return mx;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"HCoAefoaan","80336005","01111111110","qIH","4210598472796","10101","imqmKdatcgXjs","950509666021","10111101101","wasqgYFvz"};
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

