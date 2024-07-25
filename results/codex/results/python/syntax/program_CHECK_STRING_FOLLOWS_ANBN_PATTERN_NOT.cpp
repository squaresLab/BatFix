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
#include <queue>
using namespace std;
bool f_gold ( string str ) {
  int n = str . length ( );
  int i;
  for ( i = 0;
  i < n;
  i ++ ) if ( str [ i ] != 'a' ) break;
  if ( i * 2 != n ) return false;
  int j;
  for ( j = i;
  j < n;
  j ++ ) if ( str [ j ] != 'b' ) return false;
  return true;
}


int foo;
bool i;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string str ) {
        int n = str.length();
        for ( int i = 0; i < n; i++ ) {
            if ( str[i] != 'a' ) {
                break;
            }
        }
        int _res_key_if_0;
        if(env_var_0 == 0) { _res_key_if_0 = n * 2 != n; }
        if(env_var_0 == 1) { _res_key_if_0 = n * 2 != str; }
        if(env_var_0 == 2) { _res_key_if_0 = n * 2 != str.begin(); }
        if(env_var_0 == 3) { _res_key_if_0 = n * 2 != str.end(); }
        if(env_var_0 == 4) { _res_key_if_0 = n * 2 != str[n]; }
        if(env_var_0 == 5) { _res_key_if_0 = str * 2 != n; }
        if(env_var_0 == 6) { _res_key_if_0 = str * 2 != str; }
        if(env_var_0 == 7) { _res_key_if_0 = str * 2 != str.begin(); }
        if(env_var_0 == 8) { _res_key_if_0 = str * 2 != str.end(); }
        if(env_var_0 == 9) { _res_key_if_0 = str * 2 != str[n]; }
        if(env_var_0 == 10) { _res_key_if_0 = str.begin() * 2 != n; }
        if(env_var_0 == 11) { _res_key_if_0 = str.begin() * 2 != str; }
        if(env_var_0 == 12) { _res_key_if_0 = str.begin() * 2 != str.begin(); }
        if(env_var_0 == 13) { _res_key_if_0 = str.begin() * 2 != str.end(); }
        if(env_var_0 == 14) { _res_key_if_0 = str.begin() * 2 != str[n]; }
        if(env_var_0 == 15) { _res_key_if_0 = str.end() * 2 != n; }
        if(env_var_0 == 16) { _res_key_if_0 = str.end() * 2 != str; }
        if(env_var_0 == 17) { _res_key_if_0 = str.end() * 2 != str.begin(); }
        if(env_var_0 == 18) { _res_key_if_0 = str.end() * 2 != str.end(); }
        if(env_var_0 == 19) { _res_key_if_0 = str.end() * 2 != str[n]; }
        if(env_var_0 == 20) { _res_key_if_0 = str[n] * 2 != n; }
        if(env_var_0 == 21) { _res_key_if_0 = str[n] * 2 != str; }
        if(env_var_0 == 22) { _res_key_if_0 = str[n] * 2 != str.begin(); }
        if(env_var_0 == 23) { _res_key_if_0 = str[n] * 2 != str.end(); }
        if(env_var_0 == 24) { _res_key_if_0 = str[n] * 2 != str[n]; }
        if ( _res_key_if_0 ) {
            return false;
        }
        for (int j ;
        if(env_var_1 == 0) { r.data() != 'b'; }
        if(env_var_1 == 1) { pper( j ) != 'b'; }
        if(env_var_1 == 2) { pper( n ) != 'b'; }
        if(env_var_1 == 3) { pper( str[j] ) != 'b'; }
        if(env_var_1 == 4) { pper( str[n] ) != 'b'; }
        if(env_var_1 == 5) { = 'b'; }
        if(env_var_1 == 6) { = 'b'; }
        if(env_var_1 == 7) {  != 'b'; }
        if(env_var_1 == 8) { .__invariants() != 'b'; }
        if(env_var_1 == 9) { .__is_long() != 'b'; }
        if(env_var_1 == 10) { .back() != 'b'; }
        if(env_var_1 == 11) { .begin() != 'b'; }
        if(env_var_1 == 12) { .cbegin() != 'b'; }
        if(env_var_1 == 13) { .clear() != 'b'; }
        if(env_var_1 == 14) { .crbegin() != 'b'; }
        if(env_var_1 == 15) { .end() != 'b'; }
        if(env_var_1 == 16) { .front() != 'b'; }
        if(env_var_1 == 17) { .max_size() != 'b'; }
        if(env_var_1 == 18) { .pop_back() != 'b'; }
        if(env_var_1 == 19) { .rbegin() != 'b'; }
        if(env_var_1 == 20) { .rend() != 'b'; }
        if(env_var_1 == 21) { .reserve() != 'b'; }
        if(env_var_1 == 22) { .size() != 'b'; }
        if(env_var_1 == 23) { [j] != 'b'; }
        if(env_var_1 == 24) { [n] != 'b'; }
        if(env_var_1 == 25) { pper( j ) != 'b'; }
        if(env_var_1 == 26) { pper( n ) != 'b'; }
        if(env_var_1 == 27) { pper( str[j] ) != 'b'; }
        if(env_var_1 == 28) { pper( str[n] ) != 'b'; }
          j < n; j++ ) {
            if ( str[j] != 'b' ) {
                return false;
            }
        }
        return true;
    }

int main() {
    int n_success = 0;
    vector<string> param0 {"ba","aabb","abab","aaabb","aabbb","abaabbaa","abaababb","bbaa","11001000","ZWXv te"};
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

