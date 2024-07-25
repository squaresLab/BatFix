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
string f_gold ( string s ) {
  int n = s . length ( );
  for ( int i = 1;
  i < n;
  i ++ ) {
    if ( s [ i ] == s [ i - 1 ] ) {
      s [ i ] = 'a';
      while ( s [ i ] == s [ i - 1 ] || ( i + 1 < n && s [ i ] == s [ i + 1 ] ) ) s [ i ] ++;
      i ++;
    }
  }
  return s;
}


int foo;
int env_var_2 = atoi(getenv("env_var_2"));
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
std::string f_filled(std::string s1) {
    int n = s1.length();
   auto s ;
    if(env_var_0 == 0) { [] s = *s1.data(); }
    if(env_var_0 == 1) { [] s = isupper( n ); }
    if(env_var_0 == 2) { [] s = isupper( s ); }
    if(env_var_0 == 3) { [] s = isupper( s1[n] ); }
    if(env_var_0 == 4) { [] s = isupper( s1[s] ); }
    if(env_var_0 == 5) { [] s = n; }
    if(env_var_0 == 6) { [] s = s; }
    if(env_var_0 == 7) { [] s = s1; }
    if(env_var_0 == 8) { [] s = s1.__invariants(); }
    if(env_var_0 == 9) { [] s = s1.__is_long(); }
    if(env_var_0 == 10) { [] s = s1.back(); }
    if(env_var_0 == 11) { [] s = s1.begin(); }
    if(env_var_0 == 12) { [] s = s1.cbegin(); }
    if(env_var_0 == 13) { [] s = s1.clear(); }
    if(env_var_0 == 14) { [] s = s1.crbegin(); }
    if(env_var_0 == 15) { [] s = s1.end(); }
    if(env_var_0 == 16) { [] s = s1.front(); }
    if(env_var_0 == 17) { [] s = s1.max_size(); }
    if(env_var_0 == 18) { [] s = s1.pop_back(); }
    if(env_var_0 == 19) { [] s = s1.rbegin(); }
    if(env_var_0 == 20) { [] s = s1.rend(); }
    if(env_var_0 == 21) { [] s = s1.reserve(); }
    if(env_var_0 == 22) { [] s = s1.size(); }
    if(env_var_0 == 23) { [] s = s1[n]; }
    if(env_var_0 == 24) { [] s = s1[s]; }
    if(env_var_0 == 25) { [] s = std::max(); }
    if(env_var_0 == 26) { [] s = toupper( n ); }
    if(env_var_0 == 27) { [] s = toupper( s ); }
    if(env_var_0 == 28) { [] s = toupper( s1[n] ); }
    if(env_var_0 == 29) { [] s = toupper( s1[s] ); }
     
    for (int i = 1; i < n; i++) {
        int _res_key_if_0;
        if(env_var_1 == 0) { _res_key_if_0 = *s1.data(); }
        if(env_var_1 == 1) { _res_key_if_0 = i; }
        if(env_var_1 == 2) { _res_key_if_0 = isupper( i ); }
        if(env_var_1 == 3) { _res_key_if_0 = isupper( n ); }
        if(env_var_1 == 4) { _res_key_if_0 = isupper( s ); }
        if(env_var_1 == 5) { _res_key_if_0 = isupper( s1[i] ); }
        if(env_var_1 == 6) { _res_key_if_0 = isupper( s1[n] ); }
        if(env_var_1 == 7) { _res_key_if_0 = isupper( s1[s] ); }
        if(env_var_1 == 8) { _res_key_if_0 = n; }
        if(env_var_1 == 9) { _res_key_if_0 = s; }
        if(env_var_1 == 10) { _res_key_if_0 = s1; }
        if(env_var_1 == 11) { _res_key_if_0 = s1.__invariants(); }
        if(env_var_1 == 12) { _res_key_if_0 = s1.__is_long(); }
        if(env_var_1 == 13) { _res_key_if_0 = s1.back(); }
        if(env_var_1 == 14) { _res_key_if_0 = s1.begin(); }
        if(env_var_1 == 15) { _res_key_if_0 = s1.cbegin(); }
        if(env_var_1 == 16) { _res_key_if_0 = s1.clear(); }
        if(env_var_1 == 17) { _res_key_if_0 = s1.crbegin(); }
        if(env_var_1 == 18) { _res_key_if_0 = s1.end(); }
        if(env_var_1 == 19) { _res_key_if_0 = s1.front(); }
        if(env_var_1 == 20) { _res_key_if_0 = s1.max_size(); }
        if(env_var_1 == 21) { _res_key_if_0 = s1.pop_back(); }
        if(env_var_1 == 22) { _res_key_if_0 = s1.rbegin(); }
        if(env_var_1 == 23) { _res_key_if_0 = s1.rend(); }
        if(env_var_1 == 24) { _res_key_if_0 = s1.reserve(); }
        if(env_var_1 == 25) { _res_key_if_0 = s1.size(); }
        if(env_var_1 == 26) { _res_key_if_0 = s1[i]; }
        if(env_var_1 == 27) { _res_key_if_0 = s1[n]; }
        if(env_var_1 == 28) { _res_key_if_0 = s1[s]; }
        if(env_var_1 == 29) { _res_key_if_0 = std::max(); }
        if(env_var_1 == 30) { _res_key_if_0 = toupper( i ); }
        if(env_var_1 == 31) { _res_key_if_0 = toupper( n ); }
        if(env_var_1 == 32) { _res_key_if_0 = toupper( s ); }
        if(env_var_1 == 33) { _res_key_if_0 = toupper( s1[i] ); }
        if(env_var_1 == 34) { _res_key_if_0 = toupper( s1[n] ); }
        if(env_var_1 == 35) { _res_key_if_0 = toupper( s1[s] ); }
        if (_res_key_if_0) {
            if(env_var_2 == 0) { *s1.data() = 'a'; }
            if(env_var_2 == 1) { i = 'a'; }
            if(env_var_2 == 2) { isupper( i ) = 'a'; }
            if(env_var_2 == 3) { isupper( n ) = 'a'; }
            if(env_var_2 == 4) { isupper( s ) = 'a'; }
            if(env_var_2 == 5) { isupper( s1[i] ) = 'a'; }
            if(env_var_2 == 6) { isupper( s1[n] ) = 'a'; }
            if(env_var_2 == 7) { isupper( s1[s] ) = 'a'; }
            if(env_var_2 == 8) { n = 'a'; }
            if(env_var_2 == 9) { s = 'a'; }
            if(env_var_2 == 10) { s1 = 'a'; }
            if(env_var_2 == 11) { s1.__invariants() = 'a'; }
            if(env_var_2 == 12) { s1.__is_long() = 'a'; }
            if(env_var_2 == 13) { s1.back() = 'a'; }
            if(env_var_2 == 14) { s1.begin() = 'a'; }
            if(env_var_2 == 15) { s1.cbegin() = 'a'; }
            if(env_var_2 == 16) { s1.clear() = 'a'; }
            if(env_var_2 == 17) { s1.crbegin() = 'a'; }
            if(env_var_2 == 18) { s1.end() = 'a'; }
            if(env_var_2 == 19) { s1.front() = 'a'; }
            if(env_var_2 == 20) { s1.max_size() = 'a'; }
            if(env_var_2 == 21) { s1.pop_back() = 'a'; }
            if(env_var_2 == 22) { s1.rbegin() = 'a'; }
            if(env_var_2 == 23) { s1.rend() = 'a'; }
            if(env_var_2 == 24) { s1.reserve() = 'a'; }
            if(env_var_2 == 25) { s1.size() = 'a'; }
            if(env_var_2 == 26) { s1[i] = 'a'; }
            if(env_var_2 == 27) { s1[n] = 'a'; }
            if(env_var_2 == 28) { s1[s] = 'a'; }
            if(env_var_2 == 29) { std::max() = 'a'; }
            if(env_var_2 == 30) { toupper( i ) = 'a'; }
            if(env_var_2 == 31) { toupper( n ) = 'a'; }
            if(env_var_2 == 32) { toupper( s ) = 'a'; }
            if(env_var_2 == 33) { toupper( s1[i] ) = 'a'; }
            if(env_var_2 == 34) { toupper( s1[n] ) = 'a'; }
            if(env_var_2 == 35) { toupper( s1[s] ) = 'a'; }
            ;
            i++;
        }
    }
}


int main() {
    int n_success = 0;
    vector<string> param0 {"cHcZCdkbIMGUYe","2292016725711","10110111100010","wHso xGbBY","21884","0","I","716213436","101","HXdDbjcyPc"};
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

