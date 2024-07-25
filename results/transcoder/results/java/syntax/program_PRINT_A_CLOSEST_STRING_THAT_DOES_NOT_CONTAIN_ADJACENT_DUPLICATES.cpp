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
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string s1 ) {
  int n = s1 . length ( );
  auto s = s1 . c_str ( );
  for ( int i = 1;
  i < n;
  i ++ ) {
    if ( s [ i ] == s [ i - 1 ] ) {
      if(env_var_0 == 0) { *s1.c_str() = 'a'; }
      if(env_var_0 == 1) { i = 'a'; }
      if(env_var_0 == 2) { isupper( i ) = 'a'; }
      if(env_var_0 == 3) { isupper( n ) = 'a'; }
      if(env_var_0 == 4) { isupper( s1[i] ) = 'a'; }
      if(env_var_0 == 5) { isupper( s1[n] ) = 'a'; }
      if(env_var_0 == 6) { isupper( s[i] ) = 'a'; }
      if(env_var_0 == 7) { isupper( s[n] ) = 'a'; }
      if(env_var_0 == 8) { n = 'a'; }
      if(env_var_0 == 9) { s = 'a'; }
      if(env_var_0 == 10) { s+i = 'a'; }
      if(env_var_0 == 11) { s+n = 'a'; }
      if(env_var_0 == 12) { s1 = 'a'; }
      if(env_var_0 == 13) { s1.__clear_and_shrink() = 'a'; }
      if(env_var_0 == 14) { s1.back() = 'a'; }
      if(env_var_0 == 15) { s1.begin() = 'a'; }
      if(env_var_0 == 16) { s1.capacity() = 'a'; }
      if(env_var_0 == 17) { s1.cend() = 'a'; }
      if(env_var_0 == 18) { s1.crend() = 'a'; }
      if(env_var_0 == 19) { s1.empty() = 'a'; }
      if(env_var_0 == 20) { s1.end() = 'a'; }
      if(env_var_0 == 21) { s1.front() = 'a'; }
      if(env_var_0 == 22) { s1.get_allocator() = 'a'; }
      if(env_var_0 == 23) { s1.length() = 'a'; }
      if(env_var_0 == 24) { s1.rbegin() = 'a'; }
      if(env_var_0 == 25) { s1.rend() = 'a'; }
      if(env_var_0 == 26) { s1.shrink_to_fit() = 'a'; }
      if(env_var_0 == 27) { s1[i] = 'a'; }
      if(env_var_0 == 28) { s1[n] = 'a'; }
      if(env_var_0 == 29) { s[i] = 'a'; }
      if(env_var_0 == 30) { s[n] = 'a'; }
      if(env_var_0 == 31) { toupper( i ) = 'a'; }
      if(env_var_0 == 32) { toupper( n ) = 'a'; }
      if(env_var_0 == 33) { toupper( s1[i] ) = 'a'; }
      if(env_var_0 == 34) { toupper( s1[n] ) = 'a'; }
      if(env_var_0 == 35) { toupper( s[i] ) = 'a'; }
      if(env_var_0 == 36) { toupper( s[n] ) = 'a'; }
      if(env_var_0 == 37) { toupper() = 'a'; }
      ;
      while ( s [ i ] == s [ i - 1 ] || ( i + 1 < n && s [ i ] == s [ i + 1 ] ) ) {
        if(env_var_1 == 0) { *s1.c_str()++; }
        if(env_var_1 == 1) { i++; }
        if(env_var_1 == 2) { isupper( i )++; }
        if(env_var_1 == 3) { isupper( n )++; }
        if(env_var_1 == 4) { isupper( s1[i] )++; }
        if(env_var_1 == 5) { isupper( s1[n] )++; }
        if(env_var_1 == 6) { isupper( s[i] )++; }
        if(env_var_1 == 7) { isupper( s[n] )++; }
        if(env_var_1 == 8) { n++; }
        if(env_var_1 == 9) { s++; }
        if(env_var_1 == 10) { s+i++; }
        if(env_var_1 == 11) { s+n++; }
        if(env_var_1 == 12) { s1++; }
        if(env_var_1 == 13) { s1.__clear_and_shrink()++; }
        if(env_var_1 == 14) { s1.back()++; }
        if(env_var_1 == 15) { s1.begin()++; }
        if(env_var_1 == 16) { s1.capacity()++; }
        if(env_var_1 == 17) { s1.cend()++; }
        if(env_var_1 == 18) { s1.crend()++; }
        if(env_var_1 == 19) { s1.empty()++; }
        if(env_var_1 == 20) { s1.end()++; }
        if(env_var_1 == 21) { s1.front()++; }
        if(env_var_1 == 22) { s1.get_allocator()++; }
        if(env_var_1 == 23) { s1.length()++; }
        if(env_var_1 == 24) { s1.rbegin()++; }
        if(env_var_1 == 25) { s1.rend()++; }
        if(env_var_1 == 26) { s1.shrink_to_fit()++; }
        if(env_var_1 == 27) { s1[i]++; }
        if(env_var_1 == 28) { s1[n]++; }
        if(env_var_1 == 29) { s[i]++; }
        if(env_var_1 == 30) { s[n]++; }
        if(env_var_1 == 31) { toupper( i )++; }
        if(env_var_1 == 32) { toupper( n )++; }
        if(env_var_1 == 33) { toupper( s1[i] )++; }
        if(env_var_1 == 34) { toupper( s1[n] )++; }
        if(env_var_1 == 35) { toupper( s[i] )++; }
        if(env_var_1 == 36) { toupper( s[n] )++; }
        if(env_var_1 == 37) { toupper()++; }
        ;
      }
      i ++;
    }
  }
  return ( string ( s ) );
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

