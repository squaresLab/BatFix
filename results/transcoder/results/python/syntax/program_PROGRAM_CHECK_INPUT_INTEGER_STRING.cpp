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
bool f_gold ( string s ) {
  for ( int i = 0;
  i < s . length ( );
  i ++ ) if ( isdigit ( s [ i ] ) == false ) return false;
  return true;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string s ) {
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = *s.data() != true; }
    if(env_var_0 == 1) { _res_key_if_0 = i != true; }
    if(env_var_0 == 2) { _res_key_if_0 = isupper( i ) != true; }
    if(env_var_0 == 3) { _res_key_if_0 = isupper( s[i] ) != true; }
    if(env_var_0 == 4) { _res_key_if_0 = s != true; }
    if(env_var_0 == 5) { _res_key_if_0 = s.__clear_and_shrink() != true; }
    if(env_var_0 == 6) { _res_key_if_0 = s.back() != true; }
    if(env_var_0 == 7) { _res_key_if_0 = s.begin() != true; }
    if(env_var_0 == 8) { _res_key_if_0 = s.cbegin() != true; }
    if(env_var_0 == 9) { _res_key_if_0 = s.clear() != true; }
    if(env_var_0 == 10) { _res_key_if_0 = s.crbegin() != true; }
    if(env_var_0 == 11) { _res_key_if_0 = s.end() != true; }
    if(env_var_0 == 12) { _res_key_if_0 = s.front() != true; }
    if(env_var_0 == 13) { _res_key_if_0 = s.max_size() != true; }
    if(env_var_0 == 14) { _res_key_if_0 = s.pop_back() != true; }
    if(env_var_0 == 15) { _res_key_if_0 = s.rbegin() != true; }
    if(env_var_0 == 16) { _res_key_if_0 = s.rend() != true; }
    if(env_var_0 == 17) { _res_key_if_0 = s.reserve() != true; }
    if(env_var_0 == 18) { _res_key_if_0 = s.size() != true; }
    if(env_var_0 == 19) { _res_key_if_0 = s[i] != true; }
    if(env_var_0 == 20) { _res_key_if_0 = std::max() != true; }
    if(env_var_0 == 21) { _res_key_if_0 = toupper( i ) != true; }
    if(env_var_0 == 22) { _res_key_if_0 = toupper( s[i] ) != true; }
    if ( _res_key_if_0 ) return false ;
  }
  return true ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"MgTOyHo NT","033675175","011001","XLlccG","8223900094410","000","aupp","90202721499","110000100011","MhYHsMQeLhG"};
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

