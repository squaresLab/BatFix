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
bool f_gold ( string s1, string s2 ) {
  int n = s1 . length ( );
  int m = s2 . length ( );
  bool dp [ n + 1 ] [ m + 1 ];
  for ( int i = 0;
  i <= n;
  i ++ ) {
    for ( int j = 0;
    j <= m;
    j ++ ) {
      dp [ i ] [ j ] = false;
    }
  }
  dp [ 0 ] [ 0 ] = true;
  for ( int i = 0;
  i < s1 . length ( );
  i ++ ) {
    for ( int j = 0;
    j <= s2 . length ( );
    j ++ ) {
      if ( dp [ i ] [ j ] ) {
        if ( j < s2 . length ( ) && ( toupper ( s1 [ i ] ) == s2 [ j ] ) ) dp [ i + 1 ] [ j + 1 ] = true;
        if ( ! isupper ( s1 [ i ] ) ) dp [ i + 1 ] [ j ] = true;
      }
    }
  }
  return ( dp [ n ] [ m ] );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string s1 , string s2 ) {
  int n = s1 . length ( ) ;
  int m = s2 . length ( ) ;
  bool dp [ n + 1 ] [ m + 1 ] ;
  memset( dp,  false, sizeof( dp ));
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= m ;
    j ++ )
      dp [ i ] [ j ] = false ;
  }
  dp [ 0 ] [ 0 ] = true ;
  for ( int i = 0 ;
  i < s1 . length ( ) ;
  i ++ ) {
    for ( int j = 0 ;
    j <= s2 . length ( ) ;
    j ++ ) {
      if ( dp [ i ] [ j ] ) {
        if ( j < s2 . length ( ) && ( toupper ( s1 [ i ] ) == s2 [ j ] ) ) {
          dp [ i + 1 ] [ j + 1 ] = true ;
        }
        int _res_key_if_0;
        if(env_var_0 == 0) { _res_key_if_0 = !dp; }
        if(env_var_0 == 1) { _res_key_if_0 = !dp[i]; }
        if(env_var_0 == 2) { _res_key_if_0 = !i; }
        if(env_var_0 == 3) { _res_key_if_0 = !isupper( dp[i] ); }
        if(env_var_0 == 4) { _res_key_if_0 = !isupper( i ); }
        if(env_var_0 == 5) { _res_key_if_0 = !isupper( j ); }
        if(env_var_0 == 6) { _res_key_if_0 = !isupper( m ); }
        if(env_var_0 == 7) { _res_key_if_0 = !isupper( n ); }
        if(env_var_0 == 8) { _res_key_if_0 = !isupper( s1[i] ); }
        if(env_var_0 == 9) { _res_key_if_0 = !isupper( s1[j] ); }
        if(env_var_0 == 10) { _res_key_if_0 = !isupper( s1[m] ); }
        if(env_var_0 == 11) { _res_key_if_0 = !isupper( s1[n] ); }
        if(env_var_0 == 12) { _res_key_if_0 = !isupper( s2[i] ); }
        if(env_var_0 == 13) { _res_key_if_0 = !isupper( s2[j] ); }
        if(env_var_0 == 14) { _res_key_if_0 = !isupper( s2[m] ); }
        if(env_var_0 == 15) { _res_key_if_0 = !isupper( s2[n] ); }
        if(env_var_0 == 16) { _res_key_if_0 = !j; }
        if(env_var_0 == 17) { _res_key_if_0 = !m; }
        if(env_var_0 == 18) { _res_key_if_0 = !n; }
        if(env_var_0 == 19) { _res_key_if_0 = !s1; }
        if(env_var_0 == 20) { _res_key_if_0 = !s1.begin(); }
        if(env_var_0 == 21) { _res_key_if_0 = !s1.end(); }
        if(env_var_0 == 22) { _res_key_if_0 = !s1[i]; }
        if(env_var_0 == 23) { _res_key_if_0 = !s1[j]; }
        if(env_var_0 == 24) { _res_key_if_0 = !s1[m]; }
        if(env_var_0 == 25) { _res_key_if_0 = !s1[n]; }
        if(env_var_0 == 26) { _res_key_if_0 = !s2; }
        if(env_var_0 == 27) { _res_key_if_0 = !s2.__append_default_init( dp[i] ); }
        if(env_var_0 == 28) { _res_key_if_0 = !s2.__append_default_init( i ); }
        if(env_var_0 == 29) { _res_key_if_0 = !s2.__append_default_init( j ); }
        if(env_var_0 == 30) { _res_key_if_0 = !s2.__append_default_init( m ); }
        if(env_var_0 == 31) { _res_key_if_0 = !s2.__append_default_init( n ); }
        if(env_var_0 == 32) { _res_key_if_0 = !s2.__append_default_init( s1[i] ); }
        if(env_var_0 == 33) { _res_key_if_0 = !s2.__append_default_init( s1[j] ); }
        if(env_var_0 == 34) { _res_key_if_0 = !s2.__append_default_init( s1[m] ); }
        if(env_var_0 == 35) { _res_key_if_0 = !s2.__append_default_init( s1[n] ); }
        if(env_var_0 == 36) { _res_key_if_0 = !s2.__append_default_init( s2[i] ); }
        if(env_var_0 == 37) { _res_key_if_0 = !s2.__append_default_init( s2[j] ); }
        if(env_var_0 == 38) { _res_key_if_0 = !s2.__append_default_init( s2[m] ); }
        if(env_var_0 == 39) { _res_key_if_0 = !s2.__append_default_init( s2[n] ); }
        if(env_var_0 == 40) { _res_key_if_0 = !s2.__resize_default_init( dp[i] ); }
        if(env_var_0 == 41) { _res_key_if_0 = !s2.__resize_default_init( i ); }
        if(env_var_0 == 42) { _res_key_if_0 = !s2.__resize_default_init( j ); }
        if(env_var_0 == 43) { _res_key_if_0 = !s2.__resize_default_init( m ); }
        if(env_var_0 == 44) { _res_key_if_0 = !s2.__resize_default_init( n ); }
        if(env_var_0 == 45) { _res_key_if_0 = !s2.__resize_default_init( s1[i] ); }
        if(env_var_0 == 46) { _res_key_if_0 = !s2.__resize_default_init( s1[j] ); }
        if(env_var_0 == 47) { _res_key_if_0 = !s2.__resize_default_init( s1[m] ); }
        if(env_var_0 == 48) { _res_key_if_0 = !s2.__resize_default_init( s1[n] ); }
        if(env_var_0 == 49) { _res_key_if_0 = !s2.__resize_default_init( s2[i] ); }
        if(env_var_0 == 50) { _res_key_if_0 = !s2.__resize_default_init( s2[j] ); }
        if(env_var_0 == 51) { _res_key_if_0 = !s2.__resize_default_init( s2[m] ); }
        if(env_var_0 == 52) { _res_key_if_0 = !s2.__resize_default_init( s2[n] ); }
        if(env_var_0 == 53) { _res_key_if_0 = !s2.__shrink_or_extend( dp[i] ); }
        if(env_var_0 == 54) { _res_key_if_0 = !s2.__shrink_or_extend( i ); }
        if(env_var_0 == 55) { _res_key_if_0 = !s2.__shrink_or_extend( j ); }
        if(env_var_0 == 56) { _res_key_if_0 = !s2.__shrink_or_extend( m ); }
        if(env_var_0 == 57) { _res_key_if_0 = !s2.__shrink_or_extend( n ); }
        if(env_var_0 == 58) { _res_key_if_0 = !s2.__shrink_or_extend( s1[i] ); }
        if(env_var_0 == 59) { _res_key_if_0 = !s2.__shrink_or_extend( s1[j] ); }
        if(env_var_0 == 60) { _res_key_if_0 = !s2.__shrink_or_extend( s1[m] ); }
        if(env_var_0 == 61) { _res_key_if_0 = !s2.__shrink_or_extend( s1[n] ); }
        if(env_var_0 == 62) { _res_key_if_0 = !s2.__shrink_or_extend( s2[i] ); }
        if(env_var_0 == 63) { _res_key_if_0 = !s2.__shrink_or_extend( s2[j] ); }
        if(env_var_0 == 64) { _res_key_if_0 = !s2.__shrink_or_extend( s2[m] ); }
        if(env_var_0 == 65) { _res_key_if_0 = !s2.__shrink_or_extend( s2[n] ); }
        if(env_var_0 == 66) { _res_key_if_0 = !s2.append( s1 ); }
        if(env_var_0 == 67) { _res_key_if_0 = !s2.append( s2 ); }
        if(env_var_0 == 68) { _res_key_if_0 = !s2.assign( s1 ); }
        if(env_var_0 == 69) { _res_key_if_0 = !s2.assign( s2 ); }
        if(env_var_0 == 70) { _res_key_if_0 = !s2.at( dp[i] ); }
        if(env_var_0 == 71) { _res_key_if_0 = !s2.at( i ); }
        if(env_var_0 == 72) { _res_key_if_0 = !s2.at( j ); }
        if(env_var_0 == 73) { _res_key_if_0 = !s2.at( m ); }
        if(env_var_0 == 74) { _res_key_if_0 = !s2.at( n ); }
        if(env_var_0 == 75) { _res_key_if_0 = !s2.at( s1[i] ); }
        if(env_var_0 == 76) { _res_key_if_0 = !s2.at( s1[j] ); }
        if(env_var_0 == 77) { _res_key_if_0 = !s2.at( s1[m] ); }
        if(env_var_0 == 78) { _res_key_if_0 = !s2.at( s1[n] ); }
        if(env_var_0 == 79) { _res_key_if_0 = !s2.at( s2[i] ); }
        if(env_var_0 == 80) { _res_key_if_0 = !s2.at( s2[j] ); }
        if(env_var_0 == 81) { _res_key_if_0 = !s2.at( s2[m] ); }
        if(env_var_0 == 82) { _res_key_if_0 = !s2.at( s2[n] ); }
        if(env_var_0 == 83) { _res_key_if_0 = !s2.begin(); }
        if(env_var_0 == 84) { _res_key_if_0 = !s2.compare( s1 ); }
        if(env_var_0 == 85) { _res_key_if_0 = !s2.compare( s2 ); }
        if(env_var_0 == 86) { _res_key_if_0 = !s2.end(); }
        if(env_var_0 == 87) { _res_key_if_0 = !s2.push_back( dp[i] ); }
        if(env_var_0 == 88) { _res_key_if_0 = !s2.push_back( i ); }
        if(env_var_0 == 89) { _res_key_if_0 = !s2.push_back( j ); }
        if(env_var_0 == 90) { _res_key_if_0 = !s2.push_back( m ); }
        if(env_var_0 == 91) { _res_key_if_0 = !s2.push_back( n ); }
        if(env_var_0 == 92) { _res_key_if_0 = !s2.push_back( s1[i] ); }
        if(env_var_0 == 93) { _res_key_if_0 = !s2.push_back( s1[j] ); }
        if(env_var_0 == 94) { _res_key_if_0 = !s2.push_back( s1[m] ); }
        if(env_var_0 == 95) { _res_key_if_0 = !s2.push_back( s1[n] ); }
        if(env_var_0 == 96) { _res_key_if_0 = !s2.push_back( s2[i] ); }
        if(env_var_0 == 97) { _res_key_if_0 = !s2.push_back( s2[j] ); }
        if(env_var_0 == 98) { _res_key_if_0 = !s2.push_back( s2[m] ); }
        if(env_var_0 == 99) { _res_key_if_0 = !s2.push_back( s2[n] ); }
        if(env_var_0 == 100) { _res_key_if_0 = !s2.reserve( dp[i] ); }
        if(env_var_0 == 101) { _res_key_if_0 = !s2.reserve( i ); }
        if(env_var_0 == 102) { _res_key_if_0 = !s2.reserve( j ); }
        if(env_var_0 == 103) { _res_key_if_0 = !s2.reserve( m ); }
        if(env_var_0 == 104) { _res_key_if_0 = !s2.reserve( n ); }
        if(env_var_0 == 105) { _res_key_if_0 = !s2.reserve( s1[i] ); }
        if(env_var_0 == 106) { _res_key_if_0 = !s2.reserve( s1[j] ); }
        if(env_var_0 == 107) { _res_key_if_0 = !s2.reserve( s1[m] ); }
        if(env_var_0 == 108) { _res_key_if_0 = !s2.reserve( s1[n] ); }
        if(env_var_0 == 109) { _res_key_if_0 = !s2.reserve( s2[i] ); }
        if(env_var_0 == 110) { _res_key_if_0 = !s2.reserve( s2[j] ); }
        if(env_var_0 == 111) { _res_key_if_0 = !s2.reserve( s2[m] ); }
        if(env_var_0 == 112) { _res_key_if_0 = !s2.reserve( s2[n] ); }
        if(env_var_0 == 113) { _res_key_if_0 = !s2.resize( dp[i] ); }
        if(env_var_0 == 114) { _res_key_if_0 = !s2.resize( i ); }
        if(env_var_0 == 115) { _res_key_if_0 = !s2.resize( j ); }
        if(env_var_0 == 116) { _res_key_if_0 = !s2.resize( m ); }
        if(env_var_0 == 117) { _res_key_if_0 = !s2.resize( n ); }
        if(env_var_0 == 118) { _res_key_if_0 = !s2.resize( s1[i] ); }
        if(env_var_0 == 119) { _res_key_if_0 = !s2.resize( s1[j] ); }
        if(env_var_0 == 120) { _res_key_if_0 = !s2.resize( s1[m] ); }
        if(env_var_0 == 121) { _res_key_if_0 = !s2.resize( s1[n] ); }
        if(env_var_0 == 122) { _res_key_if_0 = !s2.resize( s2[i] ); }
        if(env_var_0 == 123) { _res_key_if_0 = !s2.resize( s2[j] ); }
        if(env_var_0 == 124) { _res_key_if_0 = !s2.resize( s2[m] ); }
        if(env_var_0 == 125) { _res_key_if_0 = !s2.resize( s2[n] ); }
        if(env_var_0 == 126) { _res_key_if_0 = !s2.swap( s1 ); }
        if(env_var_0 == 127) { _res_key_if_0 = !s2.swap( s2 ); }
        if(env_var_0 == 128) { _res_key_if_0 = !s2[i]; }
        if(env_var_0 == 129) { _res_key_if_0 = !s2[j]; }
        if(env_var_0 == 130) { _res_key_if_0 = !s2[m]; }
        if(env_var_0 == 131) { _res_key_if_0 = !s2[n]; }
        if(env_var_0 == 132) { _res_key_if_0 = !std::max( dp[i],dp[i] ); }
        if(env_var_0 == 133) { _res_key_if_0 = !std::max( dp[i],i ); }
        if(env_var_0 == 134) { _res_key_if_0 = !std::max( dp[i],j ); }
        if(env_var_0 == 135) { _res_key_if_0 = !std::max( dp[i],m ); }
        if(env_var_0 == 136) { _res_key_if_0 = !std::max( dp[i],n ); }
        if(env_var_0 == 137) { _res_key_if_0 = !std::max( dp[i],s1[i] ); }
        if(env_var_0 == 138) { _res_key_if_0 = !std::max( dp[i],s1[j] ); }
        if(env_var_0 == 139) { _res_key_if_0 = !std::max( dp[i],s1[m] ); }
        if(env_var_0 == 140) { _res_key_if_0 = !std::max( dp[i],s1[n] ); }
        if(env_var_0 == 141) { _res_key_if_0 = !std::max( dp[i],s2[i] ); }
        if(env_var_0 == 142) { _res_key_if_0 = !std::max( dp[i],s2[j] ); }
        if(env_var_0 == 143) { _res_key_if_0 = !std::max( dp[i],s2[m] ); }
        if(env_var_0 == 144) { _res_key_if_0 = !std::max( dp[i],s2[n] ); }
        if(env_var_0 == 145) { _res_key_if_0 = !std::max( i,dp[i] ); }
        if(env_var_0 == 146) { _res_key_if_0 = !std::max( i,i ); }
        if(env_var_0 == 147) { _res_key_if_0 = !std::max( i,j ); }
        if(env_var_0 == 148) { _res_key_if_0 = !std::max( i,m ); }
        if(env_var_0 == 149) { _res_key_if_0 = !std::max( i,n ); }
        if(env_var_0 == 150) { _res_key_if_0 = !std::max( i,s1[i] ); }
        if(env_var_0 == 151) { _res_key_if_0 = !std::max( i,s1[j] ); }
        if(env_var_0 == 152) { _res_key_if_0 = !std::max( i,s1[m] ); }
        if(env_var_0 == 153) { _res_key_if_0 = !std::max( i,s1[n] ); }
        if(env_var_0 == 154) { _res_key_if_0 = !std::max( i,s2[i] ); }
        if(env_var_0 == 155) { _res_key_if_0 = !std::max( i,s2[j] ); }
        if(env_var_0 == 156) { _res_key_if_0 = !std::max( i,s2[m] ); }
        if(env_var_0 == 157) { _res_key_if_0 = !std::max( i,s2[n] ); }
        if(env_var_0 == 158) { _res_key_if_0 = !std::max( j,dp[i] ); }
        if(env_var_0 == 159) { _res_key_if_0 = !std::max( j,i ); }
        if(env_var_0 == 160) { _res_key_if_0 = !std::max( j,j ); }
        if(env_var_0 == 161) { _res_key_if_0 = !std::max( j,m ); }
        if(env_var_0 == 162) { _res_key_if_0 = !std::max( j,n ); }
        if(env_var_0 == 163) { _res_key_if_0 = !std::max( j,s1[i] ); }
        if(env_var_0 == 164) { _res_key_if_0 = !std::max( j,s1[j] ); }
        if(env_var_0 == 165) { _res_key_if_0 = !std::max( j,s1[m] ); }
        if(env_var_0 == 166) { _res_key_if_0 = !std::max( j,s1[n] ); }
        if(env_var_0 == 167) { _res_key_if_0 = !std::max( j,s2[i] ); }
        if(env_var_0 == 168) { _res_key_if_0 = !std::max( j,s2[j] ); }
        if(env_var_0 == 169) { _res_key_if_0 = !std::max( j,s2[m] ); }
        if(env_var_0 == 170) { _res_key_if_0 = !std::max( j,s2[n] ); }
        if(env_var_0 == 171) { _res_key_if_0 = !std::max( m,dp[i] ); }
        if(env_var_0 == 172) { _res_key_if_0 = !std::max( m,i ); }
        if(env_var_0 == 173) { _res_key_if_0 = !std::max( m,j ); }
        if(env_var_0 == 174) { _res_key_if_0 = !std::max( m,m ); }
        if(env_var_0 == 175) { _res_key_if_0 = !std::max( m,n ); }
        if(env_var_0 == 176) { _res_key_if_0 = !std::max( m,s1[i] ); }
        if(env_var_0 == 177) { _res_key_if_0 = !std::max( m,s1[j] ); }
        if(env_var_0 == 178) { _res_key_if_0 = !std::max( m,s1[m] ); }
        if(env_var_0 == 179) { _res_key_if_0 = !std::max( m,s1[n] ); }
        if(env_var_0 == 180) { _res_key_if_0 = !std::max( m,s2[i] ); }
        if(env_var_0 == 181) { _res_key_if_0 = !std::max( m,s2[j] ); }
        if(env_var_0 == 182) { _res_key_if_0 = !std::max( m,s2[m] ); }
        if(env_var_0 == 183) { _res_key_if_0 = !std::max( m,s2[n] ); }
        if(env_var_0 == 184) { _res_key_if_0 = !std::max( n,dp[i] ); }
        if(env_var_0 == 185) { _res_key_if_0 = !std::max( n,i ); }
        if(env_var_0 == 186) { _res_key_if_0 = !std::max( n,j ); }
        if(env_var_0 == 187) { _res_key_if_0 = !std::max( n,m ); }
        if(env_var_0 == 188) { _res_key_if_0 = !std::max( n,n ); }
        if(env_var_0 == 189) { _res_key_if_0 = !std::max( n,s1[i] ); }
        if(env_var_0 == 190) { _res_key_if_0 = !std::max( n,s1[j] ); }
        if(env_var_0 == 191) { _res_key_if_0 = !std::max( n,s1[m] ); }
        if(env_var_0 == 192) { _res_key_if_0 = !std::max( n,s1[n] ); }
        if(env_var_0 == 193) { _res_key_if_0 = !std::max( n,s2[i] ); }
        if(env_var_0 == 194) { _res_key_if_0 = !std::max( n,s2[j] ); }
        if(env_var_0 == 195) { _res_key_if_0 = !std::max( n,s2[m] ); }
        if(env_var_0 == 196) { _res_key_if_0 = !std::max( n,s2[n] ); }
        if(env_var_0 == 197) { _res_key_if_0 = !std::max( s1[i],dp[i] ); }
        if(env_var_0 == 198) { _res_key_if_0 = !std::max( s1[i],i ); }
        if(env_var_0 == 199) { _res_key_if_0 = !std::max( s1[i],j ); }
        if(env_var_0 == 200) { _res_key_if_0 = !std::max( s1[i],m ); }
        if(env_var_0 == 201) { _res_key_if_0 = !std::max( s1[i],n ); }
        if(env_var_0 == 202) { _res_key_if_0 = !std::max( s1[i],s1[i] ); }
        if(env_var_0 == 203) { _res_key_if_0 = !std::max( s1[i],s1[j] ); }
        if(env_var_0 == 204) { _res_key_if_0 = !std::max( s1[i],s1[m] ); }
        if(env_var_0 == 205) { _res_key_if_0 = !std::max( s1[i],s1[n] ); }
        if(env_var_0 == 206) { _res_key_if_0 = !std::max( s1[i],s2[i] ); }
        if(env_var_0 == 207) { _res_key_if_0 = !std::max( s1[i],s2[j] ); }
        if(env_var_0 == 208) { _res_key_if_0 = !std::max( s1[i],s2[m] ); }
        if(env_var_0 == 209) { _res_key_if_0 = !std::max( s1[i],s2[n] ); }
        if(env_var_0 == 210) { _res_key_if_0 = !std::max( s1[j],dp[i] ); }
        if(env_var_0 == 211) { _res_key_if_0 = !std::max( s1[j],i ); }
        if(env_var_0 == 212) { _res_key_if_0 = !std::max( s1[j],j ); }
        if(env_var_0 == 213) { _res_key_if_0 = !std::max( s1[j],m ); }
        if(env_var_0 == 214) { _res_key_if_0 = !std::max( s1[j],n ); }
        if(env_var_0 == 215) { _res_key_if_0 = !std::max( s1[j],s1[i] ); }
        if(env_var_0 == 216) { _res_key_if_0 = !std::max( s1[j],s1[j] ); }
        if(env_var_0 == 217) { _res_key_if_0 = !std::max( s1[j],s1[m] ); }
        if(env_var_0 == 218) { _res_key_if_0 = !std::max( s1[j],s1[n] ); }
        if(env_var_0 == 219) { _res_key_if_0 = !std::max( s1[j],s2[i] ); }
        if(env_var_0 == 220) { _res_key_if_0 = !std::max( s1[j],s2[j] ); }
        if(env_var_0 == 221) { _res_key_if_0 = !std::max( s1[j],s2[m] ); }
        if(env_var_0 == 222) { _res_key_if_0 = !std::max( s1[j],s2[n] ); }
        if(env_var_0 == 223) { _res_key_if_0 = !std::max( s1[m],dp[i] ); }
        if(env_var_0 == 224) { _res_key_if_0 = !std::max( s1[m],i ); }
        if(env_var_0 == 225) { _res_key_if_0 = !std::max( s1[m],j ); }
        if(env_var_0 == 226) { _res_key_if_0 = !std::max( s1[m],m ); }
        if(env_var_0 == 227) { _res_key_if_0 = !std::max( s1[m],n ); }
        if(env_var_0 == 228) { _res_key_if_0 = !std::max( s1[m],s1[i] ); }
        if(env_var_0 == 229) { _res_key_if_0 = !std::max( s1[m],s1[j] ); }
        if(env_var_0 == 230) { _res_key_if_0 = !std::max( s1[m],s1[m] ); }
        if(env_var_0 == 231) { _res_key_if_0 = !std::max( s1[m],s1[n] ); }
        if(env_var_0 == 232) { _res_key_if_0 = !std::max( s1[m],s2[i] ); }
        if(env_var_0 == 233) { _res_key_if_0 = !std::max( s1[m],s2[j] ); }
        if(env_var_0 == 234) { _res_key_if_0 = !std::max( s1[m],s2[m] ); }
        if(env_var_0 == 235) { _res_key_if_0 = !std::max( s1[m],s2[n] ); }
        if(env_var_0 == 236) { _res_key_if_0 = !std::max( s1[n],dp[i] ); }
        if(env_var_0 == 237) { _res_key_if_0 = !std::max( s1[n],i ); }
        if(env_var_0 == 238) { _res_key_if_0 = !std::max( s1[n],j ); }
        if(env_var_0 == 239) { _res_key_if_0 = !std::max( s1[n],m ); }
        if(env_var_0 == 240) { _res_key_if_0 = !std::max( s1[n],n ); }
        if(env_var_0 == 241) { _res_key_if_0 = !std::max( s1[n],s1[i] ); }
        if(env_var_0 == 242) { _res_key_if_0 = !std::max( s1[n],s1[j] ); }
        if(env_var_0 == 243) { _res_key_if_0 = !std::max( s1[n],s1[m] ); }
        if(env_var_0 == 244) { _res_key_if_0 = !std::max( s1[n],s1[n] ); }
        if(env_var_0 == 245) { _res_key_if_0 = !std::max( s1[n],s2[i] ); }
        if(env_var_0 == 246) { _res_key_if_0 = !std::max( s1[n],s2[j] ); }
        if(env_var_0 == 247) { _res_key_if_0 = !std::max( s1[n],s2[m] ); }
        if(env_var_0 == 248) { _res_key_if_0 = !std::max( s1[n],s2[n] ); }
        if(env_var_0 == 249) { _res_key_if_0 = !std::max( s2[i],dp[i] ); }
        if(env_var_0 == 250) { _res_key_if_0 = !std::max( s2[i],i ); }
        if(env_var_0 == 251) { _res_key_if_0 = !std::max( s2[i],j ); }
        if(env_var_0 == 252) { _res_key_if_0 = !std::max( s2[i],m ); }
        if(env_var_0 == 253) { _res_key_if_0 = !std::max( s2[i],n ); }
        if(env_var_0 == 254) { _res_key_if_0 = !std::max( s2[i],s1[i] ); }
        if(env_var_0 == 255) { _res_key_if_0 = !std::max( s2[i],s1[j] ); }
        if(env_var_0 == 256) { _res_key_if_0 = !std::max( s2[i],s1[m] ); }
        if(env_var_0 == 257) { _res_key_if_0 = !std::max( s2[i],s1[n] ); }
        if(env_var_0 == 258) { _res_key_if_0 = !std::max( s2[i],s2[i] ); }
        if(env_var_0 == 259) { _res_key_if_0 = !std::max( s2[i],s2[j] ); }
        if(env_var_0 == 260) { _res_key_if_0 = !std::max( s2[i],s2[m] ); }
        if(env_var_0 == 261) { _res_key_if_0 = !std::max( s2[i],s2[n] ); }
        if(env_var_0 == 262) { _res_key_if_0 = !std::max( s2[j],dp[i] ); }
        if(env_var_0 == 263) { _res_key_if_0 = !std::max( s2[j],i ); }
        if(env_var_0 == 264) { _res_key_if_0 = !std::max( s2[j],j ); }
        if(env_var_0 == 265) { _res_key_if_0 = !std::max( s2[j],m ); }
        if(env_var_0 == 266) { _res_key_if_0 = !std::max( s2[j],n ); }
        if(env_var_0 == 267) { _res_key_if_0 = !std::max( s2[j],s1[i] ); }
        if(env_var_0 == 268) { _res_key_if_0 = !std::max( s2[j],s1[j] ); }
        if(env_var_0 == 269) { _res_key_if_0 = !std::max( s2[j],s1[m] ); }
        if(env_var_0 == 270) { _res_key_if_0 = !std::max( s2[j],s1[n] ); }
        if(env_var_0 == 271) { _res_key_if_0 = !std::max( s2[j],s2[i] ); }
        if(env_var_0 == 272) { _res_key_if_0 = !std::max( s2[j],s2[j] ); }
        if(env_var_0 == 273) { _res_key_if_0 = !std::max( s2[j],s2[m] ); }
        if(env_var_0 == 274) { _res_key_if_0 = !std::max( s2[j],s2[n] ); }
        if(env_var_0 == 275) { _res_key_if_0 = !std::max( s2[m],dp[i] ); }
        if(env_var_0 == 276) { _res_key_if_0 = !std::max( s2[m],i ); }
        if(env_var_0 == 277) { _res_key_if_0 = !std::max( s2[m],j ); }
        if(env_var_0 == 278) { _res_key_if_0 = !std::max( s2[m],m ); }
        if(env_var_0 == 279) { _res_key_if_0 = !std::max( s2[m],n ); }
        if(env_var_0 == 280) { _res_key_if_0 = !std::max( s2[m],s1[i] ); }
        if(env_var_0 == 281) { _res_key_if_0 = !std::max( s2[m],s1[j] ); }
        if(env_var_0 == 282) { _res_key_if_0 = !std::max( s2[m],s1[m] ); }
        if(env_var_0 == 283) { _res_key_if_0 = !std::max( s2[m],s1[n] ); }
        if(env_var_0 == 284) { _res_key_if_0 = !std::max( s2[m],s2[i] ); }
        if(env_var_0 == 285) { _res_key_if_0 = !std::max( s2[m],s2[j] ); }
        if(env_var_0 == 286) { _res_key_if_0 = !std::max( s2[m],s2[m] ); }
        if(env_var_0 == 287) { _res_key_if_0 = !std::max( s2[m],s2[n] ); }
        if(env_var_0 == 288) { _res_key_if_0 = !std::max( s2[n],dp[i] ); }
        if(env_var_0 == 289) { _res_key_if_0 = !std::max( s2[n],i ); }
        if(env_var_0 == 290) { _res_key_if_0 = !std::max( s2[n],j ); }
        if(env_var_0 == 291) { _res_key_if_0 = !std::max( s2[n],m ); }
        if(env_var_0 == 292) { _res_key_if_0 = !std::max( s2[n],n ); }
        if(env_var_0 == 293) { _res_key_if_0 = !std::max( s2[n],s1[i] ); }
        if(env_var_0 == 294) { _res_key_if_0 = !std::max( s2[n],s1[j] ); }
        if(env_var_0 == 295) { _res_key_if_0 = !std::max( s2[n],s1[m] ); }
        if(env_var_0 == 296) { _res_key_if_0 = !std::max( s2[n],s1[n] ); }
        if(env_var_0 == 297) { _res_key_if_0 = !std::max( s2[n],s2[i] ); }
        if(env_var_0 == 298) { _res_key_if_0 = !std::max( s2[n],s2[j] ); }
        if(env_var_0 == 299) { _res_key_if_0 = !std::max( s2[n],s2[m] ); }
        if(env_var_0 == 300) { _res_key_if_0 = !std::max( s2[n],s2[n] ); }
        if(env_var_0 == 301) { _res_key_if_0 = !std::min( dp[i],dp[i] ); }
        if(env_var_0 == 302) { _res_key_if_0 = !std::min( dp[i],i ); }
        if(env_var_0 == 303) { _res_key_if_0 = !std::min( dp[i],j ); }
        if(env_var_0 == 304) { _res_key_if_0 = !std::min( dp[i],m ); }
        if(env_var_0 == 305) { _res_key_if_0 = !std::min( dp[i],n ); }
        if(env_var_0 == 306) { _res_key_if_0 = !std::min( dp[i],s1[i] ); }
        if(env_var_0 == 307) { _res_key_if_0 = !std::min( dp[i],s1[j] ); }
        if(env_var_0 == 308) { _res_key_if_0 = !std::min( dp[i],s1[m] ); }
        if(env_var_0 == 309) { _res_key_if_0 = !std::min( dp[i],s1[n] ); }
        if(env_var_0 == 310) { _res_key_if_0 = !std::min( dp[i],s2[i] ); }
        if(env_var_0 == 311) { _res_key_if_0 = !std::min( dp[i],s2[j] ); }
        if(env_var_0 == 312) { _res_key_if_0 = !std::min( dp[i],s2[m] ); }
        if(env_var_0 == 313) { _res_key_if_0 = !std::min( dp[i],s2[n] ); }
        if(env_var_0 == 314) { _res_key_if_0 = !std::min( i,dp[i] ); }
        if(env_var_0 == 315) { _res_key_if_0 = !std::min( i,i ); }
        if(env_var_0 == 316) { _res_key_if_0 = !std::min( i,j ); }
        if(env_var_0 == 317) { _res_key_if_0 = !std::min( i,m ); }
        if(env_var_0 == 318) { _res_key_if_0 = !std::min( i,n ); }
        if(env_var_0 == 319) { _res_key_if_0 = !std::min( i,s1[i] ); }
        if(env_var_0 == 320) { _res_key_if_0 = !std::min( i,s1[j] ); }
        if(env_var_0 == 321) { _res_key_if_0 = !std::min( i,s1[m] ); }
        if(env_var_0 == 322) { _res_key_if_0 = !std::min( i,s1[n] ); }
        if(env_var_0 == 323) { _res_key_if_0 = !std::min( i,s2[i] ); }
        if(env_var_0 == 324) { _res_key_if_0 = !std::min( i,s2[j] ); }
        if(env_var_0 == 325) { _res_key_if_0 = !std::min( i,s2[m] ); }
        if(env_var_0 == 326) { _res_key_if_0 = !std::min( i,s2[n] ); }
        if(env_var_0 == 327) { _res_key_if_0 = !std::min( j,dp[i] ); }
        if(env_var_0 == 328) { _res_key_if_0 = !std::min( j,i ); }
        if(env_var_0 == 329) { _res_key_if_0 = !std::min( j,j ); }
        if(env_var_0 == 330) { _res_key_if_0 = !std::min( j,m ); }
        if(env_var_0 == 331) { _res_key_if_0 = !std::min( j,n ); }
        if(env_var_0 == 332) { _res_key_if_0 = !std::min( j,s1[i] ); }
        if(env_var_0 == 333) { _res_key_if_0 = !std::min( j,s1[j] ); }
        if(env_var_0 == 334) { _res_key_if_0 = !std::min( j,s1[m] ); }
        if(env_var_0 == 335) { _res_key_if_0 = !std::min( j,s1[n] ); }
        if(env_var_0 == 336) { _res_key_if_0 = !std::min( j,s2[i] ); }
        if(env_var_0 == 337) { _res_key_if_0 = !std::min( j,s2[j] ); }
        if(env_var_0 == 338) { _res_key_if_0 = !std::min( j,s2[m] ); }
        if(env_var_0 == 339) { _res_key_if_0 = !std::min( j,s2[n] ); }
        if(env_var_0 == 340) { _res_key_if_0 = !std::min( m,dp[i] ); }
        if(env_var_0 == 341) { _res_key_if_0 = !std::min( m,i ); }
        if(env_var_0 == 342) { _res_key_if_0 = !std::min( m,j ); }
        if(env_var_0 == 343) { _res_key_if_0 = !std::min( m,m ); }
        if(env_var_0 == 344) { _res_key_if_0 = !std::min( m,n ); }
        if(env_var_0 == 345) { _res_key_if_0 = !std::min( m,s1[i] ); }
        if(env_var_0 == 346) { _res_key_if_0 = !std::min( m,s1[j] ); }
        if(env_var_0 == 347) { _res_key_if_0 = !std::min( m,s1[m] ); }
        if(env_var_0 == 348) { _res_key_if_0 = !std::min( m,s1[n] ); }
        if(env_var_0 == 349) { _res_key_if_0 = !std::min( m,s2[i] ); }
        if(env_var_0 == 350) { _res_key_if_0 = !std::min( m,s2[j] ); }
        if(env_var_0 == 351) { _res_key_if_0 = !std::min( m,s2[m] ); }
        if(env_var_0 == 352) { _res_key_if_0 = !std::min( m,s2[n] ); }
        if(env_var_0 == 353) { _res_key_if_0 = !std::min( n,dp[i] ); }
        if(env_var_0 == 354) { _res_key_if_0 = !std::min( n,i ); }
        if(env_var_0 == 355) { _res_key_if_0 = !std::min( n,j ); }
        if(env_var_0 == 356) { _res_key_if_0 = !std::min( n,m ); }
        if(env_var_0 == 357) { _res_key_if_0 = !std::min( n,n ); }
        if(env_var_0 == 358) { _res_key_if_0 = !std::min( n,s1[i] ); }
        if(env_var_0 == 359) { _res_key_if_0 = !std::min( n,s1[j] ); }
        if(env_var_0 == 360) { _res_key_if_0 = !std::min( n,s1[m] ); }
        if(env_var_0 == 361) { _res_key_if_0 = !std::min( n,s1[n] ); }
        if(env_var_0 == 362) { _res_key_if_0 = !std::min( n,s2[i] ); }
        if(env_var_0 == 363) { _res_key_if_0 = !std::min( n,s2[j] ); }
        if(env_var_0 == 364) { _res_key_if_0 = !std::min( n,s2[m] ); }
        if(env_var_0 == 365) { _res_key_if_0 = !std::min( n,s2[n] ); }
        if(env_var_0 == 366) { _res_key_if_0 = !std::min( s1[i],dp[i] ); }
        if(env_var_0 == 367) { _res_key_if_0 = !std::min( s1[i],i ); }
        if(env_var_0 == 368) { _res_key_if_0 = !std::min( s1[i],j ); }
        if(env_var_0 == 369) { _res_key_if_0 = !std::min( s1[i],m ); }
        if(env_var_0 == 370) { _res_key_if_0 = !std::min( s1[i],n ); }
        if(env_var_0 == 371) { _res_key_if_0 = !std::min( s1[i],s1[i] ); }
        if(env_var_0 == 372) { _res_key_if_0 = !std::min( s1[i],s1[j] ); }
        if(env_var_0 == 373) { _res_key_if_0 = !std::min( s1[i],s1[m] ); }
        if(env_var_0 == 374) { _res_key_if_0 = !std::min( s1[i],s1[n] ); }
        if(env_var_0 == 375) { _res_key_if_0 = !std::min( s1[i],s2[i] ); }
        if(env_var_0 == 376) { _res_key_if_0 = !std::min( s1[i],s2[j] ); }
        if(env_var_0 == 377) { _res_key_if_0 = !std::min( s1[i],s2[m] ); }
        if(env_var_0 == 378) { _res_key_if_0 = !std::min( s1[i],s2[n] ); }
        if(env_var_0 == 379) { _res_key_if_0 = !std::min( s1[j],dp[i] ); }
        if(env_var_0 == 380) { _res_key_if_0 = !std::min( s1[j],i ); }
        if(env_var_0 == 381) { _res_key_if_0 = !std::min( s1[j],j ); }
        if(env_var_0 == 382) { _res_key_if_0 = !std::min( s1[j],m ); }
        if(env_var_0 == 383) { _res_key_if_0 = !std::min( s1[j],n ); }
        if(env_var_0 == 384) { _res_key_if_0 = !std::min( s1[j],s1[i] ); }
        if(env_var_0 == 385) { _res_key_if_0 = !std::min( s1[j],s1[j] ); }
        if(env_var_0 == 386) { _res_key_if_0 = !std::min( s1[j],s1[m] ); }
        if(env_var_0 == 387) { _res_key_if_0 = !std::min( s1[j],s1[n] ); }
        if(env_var_0 == 388) { _res_key_if_0 = !std::min( s1[j],s2[i] ); }
        if(env_var_0 == 389) { _res_key_if_0 = !std::min( s1[j],s2[j] ); }
        if(env_var_0 == 390) { _res_key_if_0 = !std::min( s1[j],s2[m] ); }
        if(env_var_0 == 391) { _res_key_if_0 = !std::min( s1[j],s2[n] ); }
        if(env_var_0 == 392) { _res_key_if_0 = !std::min( s1[m],dp[i] ); }
        if(env_var_0 == 393) { _res_key_if_0 = !std::min( s1[m],i ); }
        if(env_var_0 == 394) { _res_key_if_0 = !std::min( s1[m],j ); }
        if(env_var_0 == 395) { _res_key_if_0 = !std::min( s1[m],m ); }
        if(env_var_0 == 396) { _res_key_if_0 = !std::min( s1[m],n ); }
        if(env_var_0 == 397) { _res_key_if_0 = !std::min( s1[m],s1[i] ); }
        if(env_var_0 == 398) { _res_key_if_0 = !std::min( s1[m],s1[j] ); }
        if(env_var_0 == 399) { _res_key_if_0 = !std::min( s1[m],s1[m] ); }
        if(env_var_0 == 400) { _res_key_if_0 = !std::min( s1[m],s1[n] ); }
        if(env_var_0 == 401) { _res_key_if_0 = !std::min( s1[m],s2[i] ); }
        if(env_var_0 == 402) { _res_key_if_0 = !std::min( s1[m],s2[j] ); }
        if(env_var_0 == 403) { _res_key_if_0 = !std::min( s1[m],s2[m] ); }
        if(env_var_0 == 404) { _res_key_if_0 = !std::min( s1[m],s2[n] ); }
        if(env_var_0 == 405) { _res_key_if_0 = !std::min( s1[n],dp[i] ); }
        if(env_var_0 == 406) { _res_key_if_0 = !std::min( s1[n],i ); }
        if(env_var_0 == 407) { _res_key_if_0 = !std::min( s1[n],j ); }
        if(env_var_0 == 408) { _res_key_if_0 = !std::min( s1[n],m ); }
        if(env_var_0 == 409) { _res_key_if_0 = !std::min( s1[n],n ); }
        if(env_var_0 == 410) { _res_key_if_0 = !std::min( s1[n],s1[i] ); }
        if(env_var_0 == 411) { _res_key_if_0 = !std::min( s1[n],s1[j] ); }
        if(env_var_0 == 412) { _res_key_if_0 = !std::min( s1[n],s1[m] ); }
        if(env_var_0 == 413) { _res_key_if_0 = !std::min( s1[n],s1[n] ); }
        if(env_var_0 == 414) { _res_key_if_0 = !std::min( s1[n],s2[i] ); }
        if(env_var_0 == 415) { _res_key_if_0 = !std::min( s1[n],s2[j] ); }
        if(env_var_0 == 416) { _res_key_if_0 = !std::min( s1[n],s2[m] ); }
        if(env_var_0 == 417) { _res_key_if_0 = !std::min( s1[n],s2[n] ); }
        if(env_var_0 == 418) { _res_key_if_0 = !std::min( s2[i],dp[i] ); }
        if(env_var_0 == 419) { _res_key_if_0 = !std::min( s2[i],i ); }
        if(env_var_0 == 420) { _res_key_if_0 = !std::min( s2[i],j ); }
        if(env_var_0 == 421) { _res_key_if_0 = !std::min( s2[i],m ); }
        if(env_var_0 == 422) { _res_key_if_0 = !std::min( s2[i],n ); }
        if(env_var_0 == 423) { _res_key_if_0 = !std::min( s2[i],s1[i] ); }
        if(env_var_0 == 424) { _res_key_if_0 = !std::min( s2[i],s1[j] ); }
        if(env_var_0 == 425) { _res_key_if_0 = !std::min( s2[i],s1[m] ); }
        if(env_var_0 == 426) { _res_key_if_0 = !std::min( s2[i],s1[n] ); }
        if(env_var_0 == 427) { _res_key_if_0 = !std::min( s2[i],s2[i] ); }
        if(env_var_0 == 428) { _res_key_if_0 = !std::min( s2[i],s2[j] ); }
        if(env_var_0 == 429) { _res_key_if_0 = !std::min( s2[i],s2[m] ); }
        if(env_var_0 == 430) { _res_key_if_0 = !std::min( s2[i],s2[n] ); }
        if(env_var_0 == 431) { _res_key_if_0 = !std::min( s2[j],dp[i] ); }
        if(env_var_0 == 432) { _res_key_if_0 = !std::min( s2[j],i ); }
        if(env_var_0 == 433) { _res_key_if_0 = !std::min( s2[j],j ); }
        if(env_var_0 == 434) { _res_key_if_0 = !std::min( s2[j],m ); }
        if(env_var_0 == 435) { _res_key_if_0 = !std::min( s2[j],n ); }
        if(env_var_0 == 436) { _res_key_if_0 = !std::min( s2[j],s1[i] ); }
        if(env_var_0 == 437) { _res_key_if_0 = !std::min( s2[j],s1[j] ); }
        if(env_var_0 == 438) { _res_key_if_0 = !std::min( s2[j],s1[m] ); }
        if(env_var_0 == 439) { _res_key_if_0 = !std::min( s2[j],s1[n] ); }
        if(env_var_0 == 440) { _res_key_if_0 = !std::min( s2[j],s2[i] ); }
        if(env_var_0 == 441) { _res_key_if_0 = !std::min( s2[j],s2[j] ); }
        if(env_var_0 == 442) { _res_key_if_0 = !std::min( s2[j],s2[m] ); }
        if(env_var_0 == 443) { _res_key_if_0 = !std::min( s2[j],s2[n] ); }
        if(env_var_0 == 444) { _res_key_if_0 = !std::min( s2[m],dp[i] ); }
        if(env_var_0 == 445) { _res_key_if_0 = !std::min( s2[m],i ); }
        if(env_var_0 == 446) { _res_key_if_0 = !std::min( s2[m],j ); }
        if(env_var_0 == 447) { _res_key_if_0 = !std::min( s2[m],m ); }
        if(env_var_0 == 448) { _res_key_if_0 = !std::min( s2[m],n ); }
        if(env_var_0 == 449) { _res_key_if_0 = !std::min( s2[m],s1[i] ); }
        if(env_var_0 == 450) { _res_key_if_0 = !std::min( s2[m],s1[j] ); }
        if(env_var_0 == 451) { _res_key_if_0 = !std::min( s2[m],s1[m] ); }
        if(env_var_0 == 452) { _res_key_if_0 = !std::min( s2[m],s1[n] ); }
        if(env_var_0 == 453) { _res_key_if_0 = !std::min( s2[m],s2[i] ); }
        if(env_var_0 == 454) { _res_key_if_0 = !std::min( s2[m],s2[j] ); }
        if(env_var_0 == 455) { _res_key_if_0 = !std::min( s2[m],s2[m] ); }
        if(env_var_0 == 456) { _res_key_if_0 = !std::min( s2[m],s2[n] ); }
        if(env_var_0 == 457) { _res_key_if_0 = !std::min( s2[n],dp[i] ); }
        if(env_var_0 == 458) { _res_key_if_0 = !std::min( s2[n],i ); }
        if(env_var_0 == 459) { _res_key_if_0 = !std::min( s2[n],j ); }
        if(env_var_0 == 460) { _res_key_if_0 = !std::min( s2[n],m ); }
        if(env_var_0 == 461) { _res_key_if_0 = !std::min( s2[n],n ); }
        if(env_var_0 == 462) { _res_key_if_0 = !std::min( s2[n],s1[i] ); }
        if(env_var_0 == 463) { _res_key_if_0 = !std::min( s2[n],s1[j] ); }
        if(env_var_0 == 464) { _res_key_if_0 = !std::min( s2[n],s1[m] ); }
        if(env_var_0 == 465) { _res_key_if_0 = !std::min( s2[n],s1[n] ); }
        if(env_var_0 == 466) { _res_key_if_0 = !std::min( s2[n],s2[i] ); }
        if(env_var_0 == 467) { _res_key_if_0 = !std::min( s2[n],s2[j] ); }
        if(env_var_0 == 468) { _res_key_if_0 = !std::min( s2[n],s2[m] ); }
        if(env_var_0 == 469) { _res_key_if_0 = !std::min( s2[n],s2[n] ); }
        if(env_var_0 == 470) { _res_key_if_0 = !toupper( dp[i] ); }
        if(env_var_0 == 471) { _res_key_if_0 = !toupper( i ); }
        if(env_var_0 == 472) { _res_key_if_0 = !toupper( j ); }
        if(env_var_0 == 473) { _res_key_if_0 = !toupper( m ); }
        if(env_var_0 == 474) { _res_key_if_0 = !toupper( n ); }
        if(env_var_0 == 475) { _res_key_if_0 = !toupper( s1[i] ); }
        if(env_var_0 == 476) { _res_key_if_0 = !toupper( s1[j] ); }
        if(env_var_0 == 477) { _res_key_if_0 = !toupper( s1[m] ); }
        if(env_var_0 == 478) { _res_key_if_0 = !toupper( s1[n] ); }
        if(env_var_0 == 479) { _res_key_if_0 = !toupper( s2[i] ); }
        if(env_var_0 == 480) { _res_key_if_0 = !toupper( s2[j] ); }
        if(env_var_0 == 481) { _res_key_if_0 = !toupper( s2[m] ); }
        if(env_var_0 == 482) { _res_key_if_0 = !toupper( s2[n] ); }
        if ( _res_key_if_0 ) {
          dp [ i + 1 ] [ j ] = true ;
        }
      }
    }
  }
  return ( dp [ n ] [ m ] ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"daBcd","417514","010000","ZcKYguiMrdyn","argaju","1110101101","ySOCoSaygi","204","10011100000010","nMAioozPmY"};
    vector<string> param1 {"ABC","9","1111011010","iz","RAJ","110101001","aRhxkYqh","6986871066","0","WZFdDKw"};
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

