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
int f_gold ( int arr [ ], int n ) {
  unordered_set < int > S;
  for ( int i = 0;
  i < n;
  i ++ ) S . insert ( arr [ i ] );
  int ans = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( S . find ( arr [ i ] - 1 ) == S . end ( ) ) {
      int j = arr [ i ];
      while ( S . find ( j ) != S . end ( ) ) j ++;
      ans = max ( ans, j - arr [ i ] );
    }
  }
  return ans;
}


int foo;
 int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  set < int > S ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) S . insert ( arr [ i ] ) ;
  ;
  int ans = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = S.count( ans ); }
    if(env_var_0 == 1) { _res_key_if_0 = S.count( arr[ans] ); }
    if(env_var_0 == 2) { _res_key_if_0 = S.count( arr[i] ); }
    if(env_var_0 == 3) { _res_key_if_0 = S.count( arr[n] ); }
    if(env_var_0 == 4) { _res_key_if_0 = S.count( i ); }
    if(env_var_0 == 5) { _res_key_if_0 = S.count( n ); }
    if(env_var_0 == 6) { _res_key_if_0 = S.equal_range( ans ); }
    if(env_var_0 == 7) { _res_key_if_0 = S.equal_range( arr[ans] ); }
    if(env_var_0 == 8) { _res_key_if_0 = S.equal_range( arr[i] ); }
    if(env_var_0 == 9) { _res_key_if_0 = S.equal_range( arr[n] ); }
    if(env_var_0 == 10) { _res_key_if_0 = S.equal_range( i ); }
    if(env_var_0 == 11) { _res_key_if_0 = S.equal_range( n ); }
    if(env_var_0 == 12) { _res_key_if_0 = S.erase( ans ); }
    if(env_var_0 == 13) { _res_key_if_0 = S.erase( arr[ans] ); }
    if(env_var_0 == 14) { _res_key_if_0 = S.erase( arr[i] ); }
    if(env_var_0 == 15) { _res_key_if_0 = S.erase( arr[n] ); }
    if(env_var_0 == 16) { _res_key_if_0 = S.erase( i ); }
    if(env_var_0 == 17) { _res_key_if_0 = S.erase( n ); }
    if(env_var_0 == 18) { _res_key_if_0 = S.find( ans ); }
    if(env_var_0 == 19) { _res_key_if_0 = S.find( arr[ans] ); }
    if(env_var_0 == 20) { _res_key_if_0 = S.find( arr[i] ); }
    if(env_var_0 == 21) { _res_key_if_0 = S.find( arr[n] ); }
    if(env_var_0 == 22) { _res_key_if_0 = S.find( i ); }
    if(env_var_0 == 23) { _res_key_if_0 = S.find( n ); }
    if(env_var_0 == 24) { _res_key_if_0 = S.insert( ans ); }
    if(env_var_0 == 25) { _res_key_if_0 = S.insert( arr[ans] ); }
    if(env_var_0 == 26) { _res_key_if_0 = S.insert( arr[i] ); }
    if(env_var_0 == 27) { _res_key_if_0 = S.insert( arr[n] ); }
    if(env_var_0 == 28) { _res_key_if_0 = S.insert( i ); }
    if(env_var_0 == 29) { _res_key_if_0 = S.insert( n ); }
    if(env_var_0 == 30) { _res_key_if_0 = S.lower_bound( ans ); }
    if(env_var_0 == 31) { _res_key_if_0 = S.lower_bound( arr[ans] ); }
    if(env_var_0 == 32) { _res_key_if_0 = S.lower_bound( arr[i] ); }
    if(env_var_0 == 33) { _res_key_if_0 = S.lower_bound( arr[n] ); }
    if(env_var_0 == 34) { _res_key_if_0 = S.lower_bound( i ); }
    if(env_var_0 == 35) { _res_key_if_0 = S.lower_bound( n ); }
    if(env_var_0 == 36) { _res_key_if_0 = S.swap( S ); }
    if(env_var_0 == 37) { _res_key_if_0 = S.upper_bound( ans ); }
    if(env_var_0 == 38) { _res_key_if_0 = S.upper_bound( arr[ans] ); }
    if(env_var_0 == 39) { _res_key_if_0 = S.upper_bound( arr[i] ); }
    if(env_var_0 == 40) { _res_key_if_0 = S.upper_bound( arr[n] ); }
    if(env_var_0 == 41) { _res_key_if_0 = S.upper_bound( i ); }
    if(env_var_0 == 42) { _res_key_if_0 = S.upper_bound( n ); }
    if(env_var_0 == 43) { _res_key_if_0 = isupper( ans ); }
    if(env_var_0 == 44) { _res_key_if_0 = isupper( arr[ans] ); }
    if(env_var_0 == 45) { _res_key_if_0 = isupper( arr[i] ); }
    if(env_var_0 == 46) { _res_key_if_0 = isupper( arr[n] ); }
    if(env_var_0 == 47) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 48) { _res_key_if_0 = isupper( n ); }
    if(env_var_0 == 49) { _res_key_if_0 = std::max( ans,ans ); }
    if(env_var_0 == 50) { _res_key_if_0 = std::max( ans,arr[ans] ); }
    if(env_var_0 == 51) { _res_key_if_0 = std::max( ans,arr[i] ); }
    if(env_var_0 == 52) { _res_key_if_0 = std::max( ans,arr[n] ); }
    if(env_var_0 == 53) { _res_key_if_0 = std::max( ans,i ); }
    if(env_var_0 == 54) { _res_key_if_0 = std::max( ans,n ); }
    if(env_var_0 == 55) { _res_key_if_0 = std::max( arr[ans],ans ); }
    if(env_var_0 == 56) { _res_key_if_0 = std::max( arr[ans],arr[ans] ); }
    if(env_var_0 == 57) { _res_key_if_0 = std::max( arr[ans],arr[i] ); }
    if(env_var_0 == 58) { _res_key_if_0 = std::max( arr[ans],arr[n] ); }
    if(env_var_0 == 59) { _res_key_if_0 = std::max( arr[ans],i ); }
    if(env_var_0 == 60) { _res_key_if_0 = std::max( arr[ans],n ); }
    if(env_var_0 == 61) { _res_key_if_0 = std::max( arr[i],ans ); }
    if(env_var_0 == 62) { _res_key_if_0 = std::max( arr[i],arr[ans] ); }
    if(env_var_0 == 63) { _res_key_if_0 = std::max( arr[i],arr[i] ); }
    if(env_var_0 == 64) { _res_key_if_0 = std::max( arr[i],arr[n] ); }
    if(env_var_0 == 65) { _res_key_if_0 = std::max( arr[i],i ); }
    if(env_var_0 == 66) { _res_key_if_0 = std::max( arr[i],n ); }
    if(env_var_0 == 67) { _res_key_if_0 = std::max( arr[n],ans ); }
    if(env_var_0 == 68) { _res_key_if_0 = std::max( arr[n],arr[ans] ); }
    if(env_var_0 == 69) { _res_key_if_0 = std::max( arr[n],arr[i] ); }
    if(env_var_0 == 70) { _res_key_if_0 = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 71) { _res_key_if_0 = std::max( arr[n],i ); }
    if(env_var_0 == 72) { _res_key_if_0 = std::max( arr[n],n ); }
    if(env_var_0 == 73) { _res_key_if_0 = std::max( i,ans ); }
    if(env_var_0 == 74) { _res_key_if_0 = std::max( i,arr[ans] ); }
    if(env_var_0 == 75) { _res_key_if_0 = std::max( i,arr[i] ); }
    if(env_var_0 == 76) { _res_key_if_0 = std::max( i,arr[n] ); }
    if(env_var_0 == 77) { _res_key_if_0 = std::max( i,i ); }
    if(env_var_0 == 78) { _res_key_if_0 = std::max( i,n ); }
    if(env_var_0 == 79) { _res_key_if_0 = std::max( n,ans ); }
    if(env_var_0 == 80) { _res_key_if_0 = std::max( n,arr[ans] ); }
    if(env_var_0 == 81) { _res_key_if_0 = std::max( n,arr[i] ); }
    if(env_var_0 == 82) { _res_key_if_0 = std::max( n,arr[n] ); }
    if(env_var_0 == 83) { _res_key_if_0 = std::max( n,i ); }
    if(env_var_0 == 84) { _res_key_if_0 = std::max( n,n ); }
    if(env_var_0 == 85) { _res_key_if_0 = std::min( ans,ans ); }
    if(env_var_0 == 86) { _res_key_if_0 = std::min( ans,arr[ans] ); }
    if(env_var_0 == 87) { _res_key_if_0 = std::min( ans,arr[i] ); }
    if(env_var_0 == 88) { _res_key_if_0 = std::min( ans,arr[n] ); }
    if(env_var_0 == 89) { _res_key_if_0 = std::min( ans,i ); }
    if(env_var_0 == 90) { _res_key_if_0 = std::min( ans,n ); }
    if(env_var_0 == 91) { _res_key_if_0 = std::min( arr[ans],ans ); }
    if(env_var_0 == 92) { _res_key_if_0 = std::min( arr[ans],arr[ans] ); }
    if(env_var_0 == 93) { _res_key_if_0 = std::min( arr[ans],arr[i] ); }
    if(env_var_0 == 94) { _res_key_if_0 = std::min( arr[ans],arr[n] ); }
    if(env_var_0 == 95) { _res_key_if_0 = std::min( arr[ans],i ); }
    if(env_var_0 == 96) { _res_key_if_0 = std::min( arr[ans],n ); }
    if(env_var_0 == 97) { _res_key_if_0 = std::min( arr[i],ans ); }
    if(env_var_0 == 98) { _res_key_if_0 = std::min( arr[i],arr[ans] ); }
    if(env_var_0 == 99) { _res_key_if_0 = std::min( arr[i],arr[i] ); }
    if(env_var_0 == 100) { _res_key_if_0 = std::min( arr[i],arr[n] ); }
    if(env_var_0 == 101) { _res_key_if_0 = std::min( arr[i],i ); }
    if(env_var_0 == 102) { _res_key_if_0 = std::min( arr[i],n ); }
    if(env_var_0 == 103) { _res_key_if_0 = std::min( arr[n],ans ); }
    if(env_var_0 == 104) { _res_key_if_0 = std::min( arr[n],arr[ans] ); }
    if(env_var_0 == 105) { _res_key_if_0 = std::min( arr[n],arr[i] ); }
    if(env_var_0 == 106) { _res_key_if_0 = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 107) { _res_key_if_0 = std::min( arr[n],i ); }
    if(env_var_0 == 108) { _res_key_if_0 = std::min( arr[n],n ); }
    if(env_var_0 == 109) { _res_key_if_0 = std::min( i,ans ); }
    if(env_var_0 == 110) { _res_key_if_0 = std::min( i,arr[ans] ); }
    if(env_var_0 == 111) { _res_key_if_0 = std::min( i,arr[i] ); }
    if(env_var_0 == 112) { _res_key_if_0 = std::min( i,arr[n] ); }
    if(env_var_0 == 113) { _res_key_if_0 = std::min( i,i ); }
    if(env_var_0 == 114) { _res_key_if_0 = std::min( i,n ); }
    if(env_var_0 == 115) { _res_key_if_0 = std::min( n,ans ); }
    if(env_var_0 == 116) { _res_key_if_0 = std::min( n,arr[ans] ); }
    if(env_var_0 == 117) { _res_key_if_0 = std::min( n,arr[i] ); }
    if(env_var_0 == 118) { _res_key_if_0 = std::min( n,arr[n] ); }
    if(env_var_0 == 119) { _res_key_if_0 = std::min( n,i ); }
    if(env_var_0 == 120) { _res_key_if_0 = std::min( n,n ); }
    if(env_var_0 == 121) { _res_key_if_0 = toupper( ans ); }
    if(env_var_0 == 122) { _res_key_if_0 = toupper( arr[ans] ); }
    if(env_var_0 == 123) { _res_key_if_0 = toupper( arr[i] ); }
    if(env_var_0 == 124) { _res_key_if_0 = toupper( arr[n] ); }
    if(env_var_0 == 125) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 126) { _res_key_if_0 = toupper( n ); }
    if ( _res_key_if_0 ) {
      int j = arr [ i ] ;
      ;
      while ( true )  {
      if (env_var_1 == 0 && !(S.count( ans ))) break;
      if (env_var_1 == 1 && !(S.count( arr[ans] ))) break;
      if (env_var_1 == 2 && !(S.count( arr[i] ))) break;
      if (env_var_1 == 3 && !(S.count( arr[j] ))) break;
      if (env_var_1 == 4 && !(S.count( arr[n] ))) break;
      if (env_var_1 == 5 && !(S.count( i ))) break;
      if (env_var_1 == 6 && !(S.count( j ))) break;
      if (env_var_1 == 7 && !(S.count( n ))) break;
      if (env_var_1 == 8 && !(S.equal_range( ans ))) break;
      if (env_var_1 == 9 && !(S.equal_range( arr[ans] ))) break;
      if (env_var_1 == 10 && !(S.equal_range( arr[i] ))) break;
      if (env_var_1 == 11 && !(S.equal_range( arr[j] ))) break;
      if (env_var_1 == 12 && !(S.equal_range( arr[n] ))) break;
      if (env_var_1 == 13 && !(S.equal_range( i ))) break;
      if (env_var_1 == 14 && !(S.equal_range( j ))) break;
      if (env_var_1 == 15 && !(S.equal_range( n ))) break;
      if (env_var_1 == 16 && !(S.erase( ans ))) break;
      if (env_var_1 == 17 && !(S.erase( arr[ans] ))) break;
      if (env_var_1 == 18 && !(S.erase( arr[i] ))) break;
      if (env_var_1 == 19 && !(S.erase( arr[j] ))) break;
      if (env_var_1 == 20 && !(S.erase( arr[n] ))) break;
      if (env_var_1 == 21 && !(S.erase( i ))) break;
      if (env_var_1 == 22 && !(S.erase( j ))) break;
      if (env_var_1 == 23 && !(S.erase( n ))) break;
      if (env_var_1 == 24 && !(S.find( ans ))) break;
      if (env_var_1 == 25 && !(S.find( arr[ans] ))) break;
      if (env_var_1 == 26 && !(S.find( arr[i] ))) break;
      if (env_var_1 == 27 && !(S.find( arr[j] ))) break;
      if (env_var_1 == 28 && !(S.find( arr[n] ))) break;
      if (env_var_1 == 29 && !(S.find( i ))) break;
      if (env_var_1 == 30 && !(S.find( j ))) break;
      if (env_var_1 == 31 && !(S.find( n ))) break;
      if (env_var_1 == 32 && !(S.insert( ans ))) break;
      if (env_var_1 == 33 && !(S.insert( arr[ans] ))) break;
      if (env_var_1 == 34 && !(S.insert( arr[i] ))) break;
      if (env_var_1 == 35 && !(S.insert( arr[j] ))) break;
      if (env_var_1 == 36 && !(S.insert( arr[n] ))) break;
      if (env_var_1 == 37 && !(S.insert( i ))) break;
      if (env_var_1 == 38 && !(S.insert( j ))) break;
      if (env_var_1 == 39 && !(S.insert( n ))) break;
      if (env_var_1 == 40 && !(S.lower_bound( ans ))) break;
      if (env_var_1 == 41 && !(S.lower_bound( arr[ans] ))) break;
      if (env_var_1 == 42 && !(S.lower_bound( arr[i] ))) break;
      if (env_var_1 == 43 && !(S.lower_bound( arr[j] ))) break;
      if (env_var_1 == 44 && !(S.lower_bound( arr[n] ))) break;
      if (env_var_1 == 45 && !(S.lower_bound( i ))) break;
      if (env_var_1 == 46 && !(S.lower_bound( j ))) break;
      if (env_var_1 == 47 && !(S.lower_bound( n ))) break;
      if (env_var_1 == 48 && !(S.swap( S ))) break;
      if (env_var_1 == 49 && !(S.upper_bound( ans ))) break;
      if (env_var_1 == 50 && !(S.upper_bound( arr[ans] ))) break;
      if (env_var_1 == 51 && !(S.upper_bound( arr[i] ))) break;
      if (env_var_1 == 52 && !(S.upper_bound( arr[j] ))) break;
      if (env_var_1 == 53 && !(S.upper_bound( arr[n] ))) break;
      if (env_var_1 == 54 && !(S.upper_bound( i ))) break;
      if (env_var_1 == 55 && !(S.upper_bound( j ))) break;
      if (env_var_1 == 56 && !(S.upper_bound( n ))) break;
      if (env_var_1 == 57 && !(isupper( ans ))) break;
      if (env_var_1 == 58 && !(isupper( arr[ans] ))) break;
      if (env_var_1 == 59 && !(isupper( arr[i] ))) break;
      if (env_var_1 == 60 && !(isupper( arr[j] ))) break;
      if (env_var_1 == 61 && !(isupper( arr[n] ))) break;
      if (env_var_1 == 62 && !(isupper( i ))) break;
      if (env_var_1 == 63 && !(isupper( j ))) break;
      if (env_var_1 == 64 && !(isupper( n ))) break;
      if (env_var_1 == 65 && !(std::max( ans,ans ))) break;
      if (env_var_1 == 66 && !(std::max( ans,arr[ans] ))) break;
      if (env_var_1 == 67 && !(std::max( ans,arr[i] ))) break;
      if (env_var_1 == 68 && !(std::max( ans,arr[j] ))) break;
      if (env_var_1 == 69 && !(std::max( ans,arr[n] ))) break;
      if (env_var_1 == 70 && !(std::max( ans,i ))) break;
      if (env_var_1 == 71 && !(std::max( ans,j ))) break;
      if (env_var_1 == 72 && !(std::max( ans,n ))) break;
      if (env_var_1 == 73 && !(std::max( arr[ans],ans ))) break;
      if (env_var_1 == 74 && !(std::max( arr[ans],arr[ans] ))) break;
      if (env_var_1 == 75 && !(std::max( arr[ans],arr[i] ))) break;
      if (env_var_1 == 76 && !(std::max( arr[ans],arr[j] ))) break;
      if (env_var_1 == 77 && !(std::max( arr[ans],arr[n] ))) break;
      if (env_var_1 == 78 && !(std::max( arr[ans],i ))) break;
      if (env_var_1 == 79 && !(std::max( arr[ans],j ))) break;
      if (env_var_1 == 80 && !(std::max( arr[ans],n ))) break;
      if (env_var_1 == 81 && !(std::max( arr[i],ans ))) break;
      if (env_var_1 == 82 && !(std::max( arr[i],arr[ans] ))) break;
      if (env_var_1 == 83 && !(std::max( arr[i],arr[i] ))) break;
      if (env_var_1 == 84 && !(std::max( arr[i],arr[j] ))) break;
      if (env_var_1 == 85 && !(std::max( arr[i],arr[n] ))) break;
      if (env_var_1 == 86 && !(std::max( arr[i],i ))) break;
      if (env_var_1 == 87 && !(std::max( arr[i],j ))) break;
      if (env_var_1 == 88 && !(std::max( arr[i],n ))) break;
      if (env_var_1 == 89 && !(std::max( arr[j],ans ))) break;
      if (env_var_1 == 90 && !(std::max( arr[j],arr[ans] ))) break;
      if (env_var_1 == 91 && !(std::max( arr[j],arr[i] ))) break;
      if (env_var_1 == 92 && !(std::max( arr[j],arr[j] ))) break;
      if (env_var_1 == 93 && !(std::max( arr[j],arr[n] ))) break;
      if (env_var_1 == 94 && !(std::max( arr[j],i ))) break;
      if (env_var_1 == 95 && !(std::max( arr[j],j ))) break;
      if (env_var_1 == 96 && !(std::max( arr[j],n ))) break;
      if (env_var_1 == 97 && !(std::max( arr[n],ans ))) break;
      if (env_var_1 == 98 && !(std::max( arr[n],arr[ans] ))) break;
      if (env_var_1 == 99 && !(std::max( arr[n],arr[i] ))) break;
      if (env_var_1 == 100 && !(std::max( arr[n],arr[j] ))) break;
      if (env_var_1 == 101 && !(std::max( arr[n],arr[n] ))) break;
      if (env_var_1 == 102 && !(std::max( arr[n],i ))) break;
      if (env_var_1 == 103 && !(std::max( arr[n],j ))) break;
      if (env_var_1 == 104 && !(std::max( arr[n],n ))) break;
      if (env_var_1 == 105 && !(std::max( i,ans ))) break;
      if (env_var_1 == 106 && !(std::max( i,arr[ans] ))) break;
      if (env_var_1 == 107 && !(std::max( i,arr[i] ))) break;
      if (env_var_1 == 108 && !(std::max( i,arr[j] ))) break;
      if (env_var_1 == 109 && !(std::max( i,arr[n] ))) break;
      if (env_var_1 == 110 && !(std::max( i,i ))) break;
      if (env_var_1 == 111 && !(std::max( i,j ))) break;
      if (env_var_1 == 112 && !(std::max( i,n ))) break;
      if (env_var_1 == 113 && !(std::max( j,ans ))) break;
      if (env_var_1 == 114 && !(std::max( j,arr[ans] ))) break;
      if (env_var_1 == 115 && !(std::max( j,arr[i] ))) break;
      if (env_var_1 == 116 && !(std::max( j,arr[j] ))) break;
      if (env_var_1 == 117 && !(std::max( j,arr[n] ))) break;
      if (env_var_1 == 118 && !(std::max( j,i ))) break;
      if (env_var_1 == 119 && !(std::max( j,j ))) break;
      if (env_var_1 == 120 && !(std::max( j,n ))) break;
      if (env_var_1 == 121 && !(std::max( n,ans ))) break;
      if (env_var_1 == 122 && !(std::max( n,arr[ans] ))) break;
      if (env_var_1 == 123 && !(std::max( n,arr[i] ))) break;
      if (env_var_1 == 124 && !(std::max( n,arr[j] ))) break;
      if (env_var_1 == 125 && !(std::max( n,arr[n] ))) break;
      if (env_var_1 == 126 && !(std::max( n,i ))) break;
      if (env_var_1 == 127 && !(std::max( n,j ))) break;
      if (env_var_1 == 128 && !(std::max( n,n ))) break;
      if (env_var_1 == 129 && !(std::min( ans,ans ))) break;
      if (env_var_1 == 130 && !(std::min( ans,arr[ans] ))) break;
      if (env_var_1 == 131 && !(std::min( ans,arr[i] ))) break;
      if (env_var_1 == 132 && !(std::min( ans,arr[j] ))) break;
      if (env_var_1 == 133 && !(std::min( ans,arr[n] ))) break;
      if (env_var_1 == 134 && !(std::min( ans,i ))) break;
      if (env_var_1 == 135 && !(std::min( ans,j ))) break;
      if (env_var_1 == 136 && !(std::min( ans,n ))) break;
      if (env_var_1 == 137 && !(std::min( arr[ans],ans ))) break;
      if (env_var_1 == 138 && !(std::min( arr[ans],arr[ans] ))) break;
      if (env_var_1 == 139 && !(std::min( arr[ans],arr[i] ))) break;
      if (env_var_1 == 140 && !(std::min( arr[ans],arr[j] ))) break;
      if (env_var_1 == 141 && !(std::min( arr[ans],arr[n] ))) break;
      if (env_var_1 == 142 && !(std::min( arr[ans],i ))) break;
      if (env_var_1 == 143 && !(std::min( arr[ans],j ))) break;
      if (env_var_1 == 144 && !(std::min( arr[ans],n ))) break;
      if (env_var_1 == 145 && !(std::min( arr[i],ans ))) break;
      if (env_var_1 == 146 && !(std::min( arr[i],arr[ans] ))) break;
      if (env_var_1 == 147 && !(std::min( arr[i],arr[i] ))) break;
      if (env_var_1 == 148 && !(std::min( arr[i],arr[j] ))) break;
      if (env_var_1 == 149 && !(std::min( arr[i],arr[n] ))) break;
      if (env_var_1 == 150 && !(std::min( arr[i],i ))) break;
      if (env_var_1 == 151 && !(std::min( arr[i],j ))) break;
      if (env_var_1 == 152 && !(std::min( arr[i],n ))) break;
      if (env_var_1 == 153 && !(std::min( arr[j],ans ))) break;
      if (env_var_1 == 154 && !(std::min( arr[j],arr[ans] ))) break;
      if (env_var_1 == 155 && !(std::min( arr[j],arr[i] ))) break;
      if (env_var_1 == 156 && !(std::min( arr[j],arr[j] ))) break;
      if (env_var_1 == 157 && !(std::min( arr[j],arr[n] ))) break;
      if (env_var_1 == 158 && !(std::min( arr[j],i ))) break;
      if (env_var_1 == 159 && !(std::min( arr[j],j ))) break;
      if (env_var_1 == 160 && !(std::min( arr[j],n ))) break;
      if (env_var_1 == 161 && !(std::min( arr[n],ans ))) break;
      if (env_var_1 == 162 && !(std::min( arr[n],arr[ans] ))) break;
      if (env_var_1 == 163 && !(std::min( arr[n],arr[i] ))) break;
      if (env_var_1 == 164 && !(std::min( arr[n],arr[j] ))) break;
      if (env_var_1 == 165 && !(std::min( arr[n],arr[n] ))) break;
      if (env_var_1 == 166 && !(std::min( arr[n],i ))) break;
      if (env_var_1 == 167 && !(std::min( arr[n],j ))) break;
      if (env_var_1 == 168 && !(std::min( arr[n],n ))) break;
      if (env_var_1 == 169 && !(std::min( i,ans ))) break;
      if (env_var_1 == 170 && !(std::min( i,arr[ans] ))) break;
      if (env_var_1 == 171 && !(std::min( i,arr[i] ))) break;
      if (env_var_1 == 172 && !(std::min( i,arr[j] ))) break;
      if (env_var_1 == 173 && !(std::min( i,arr[n] ))) break;
      if (env_var_1 == 174 && !(std::min( i,i ))) break;
      if (env_var_1 == 175 && !(std::min( i,j ))) break;
      if (env_var_1 == 176 && !(std::min( i,n ))) break;
      if (env_var_1 == 177 && !(std::min( j,ans ))) break;
      if (env_var_1 == 178 && !(std::min( j,arr[ans] ))) break;
      if (env_var_1 == 179 && !(std::min( j,arr[i] ))) break;
      if (env_var_1 == 180 && !(std::min( j,arr[j] ))) break;
      if (env_var_1 == 181 && !(std::min( j,arr[n] ))) break;
      if (env_var_1 == 182 && !(std::min( j,i ))) break;
      if (env_var_1 == 183 && !(std::min( j,j ))) break;
      if (env_var_1 == 184 && !(std::min( j,n ))) break;
      if (env_var_1 == 185 && !(std::min( n,ans ))) break;
      if (env_var_1 == 186 && !(std::min( n,arr[ans] ))) break;
      if (env_var_1 == 187 && !(std::min( n,arr[i] ))) break;
      if (env_var_1 == 188 && !(std::min( n,arr[j] ))) break;
      if (env_var_1 == 189 && !(std::min( n,arr[n] ))) break;
      if (env_var_1 == 190 && !(std::min( n,i ))) break;
      if (env_var_1 == 191 && !(std::min( n,j ))) break;
      if (env_var_1 == 192 && !(std::min( n,n ))) break;
      if (env_var_1 == 193 && !(toupper( ans ))) break;
      if (env_var_1 == 194 && !(toupper( arr[ans] ))) break;
      if (env_var_1 == 195 && !(toupper( arr[i] ))) break;
      if (env_var_1 == 196 && !(toupper( arr[j] ))) break;
      if (env_var_1 == 197 && !(toupper( arr[n] ))) break;
      if (env_var_1 == 198 && !(toupper( i ))) break;
      if (env_var_1 == 199 && !(toupper( j ))) break;
      if (env_var_1 == 200 && !(toupper( n ))) break;
      j }++ ;
      ;
      ans = max ( ans , j - arr [ i ] ) ;
      ;
    }
  }
  ;
  return ans ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{3,5,9,24,28,31,49,54,67,85,86,94,97,97},{-34,16,-80,-10,80,2,50,-74,-76,36,-84,-24,74,-54,-22,46,80,58,-8,70,24,-88,52,62,30,42,48,16,78,-82,64,-36,84,-72},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{49,61,68,4,90,89,71,74,45,61,35,41,59},{-42,-8,28,56,80,96},{1,0,1,0,0,0,0,1,1,0,1,1,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,1,0,0,0,1,1,1,1},{3,4,6,6,13,27,27,29,32,36,46,50,52,65,69,70,71,83,87,91},{64,-76,28,6,56,18,32,-50,-20,18,-26,-90,32,50,-18,98,84,40,50,88,-70,-6,-24,-44,-96,-58,48,-78,-14},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{50,48,61,87,7,78,93,44,16,88,98,15,73,93,43,46,42,34,1,35,79,35,84,60,18,79,17,4,78,1,20,64}};
    vector<int> param1 {11,29,13,11,4,17,10,15,15,25};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i]) == f_gold(&param0[i].front(),param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
