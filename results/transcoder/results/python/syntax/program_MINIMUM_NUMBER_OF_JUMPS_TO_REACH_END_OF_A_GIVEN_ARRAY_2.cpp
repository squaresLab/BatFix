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
  int * jumps = new int [ n ];
  int min;
  jumps [ n - 1 ] = 0;
  for ( int i = n - 2;
  i >= 0;
  i -- ) {
    if ( arr [ i ] == 0 ) jumps [ i ] = INT_MAX;
    else if ( arr [ i ] >= n - i - 1 ) jumps [ i ] = 1;
    else {
      min = INT_MAX;
      for ( int j = i + 1;
      j < n && j <= arr [ i ] + i;
      j ++ ) {
        if ( min > jumps [ j ] ) min = jumps [ j ];
      }
      if ( min != INT_MAX ) jumps [ i ] = min + 1;
      else jumps [ i ] = min;
    }
  }
  return jumps [ 0 ];
}


int foo;
 bool j;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  int jumps [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] == 0 ) && ( arr [ i ] != n - i - 1 ) ) {
      jumps [ i ] = INT_MAX ;
    }
    else if ( ( arr [ i ] >= n - i - 1 ) && ( arr [ i ] != n - i - 1 ) ) {
      jumps [ i ] = 1 ;
    }
    else {
      int min = INT_MAX ;
      for ( int j = i + 1 ;
      j < n ;
      j ++ ) {
        if ( ( j <= arr [ i ] + i ) && ( arr [ j ] != n - i - 1 ) ) {
          if ( ( min > jumps [ j ] ) || ( min < jumps [ j ] ) ) {
            min = jumps [ j ] ;
          }
        }
      }
      int _res_key_if_0;
      if(env_var_0 == 0) { _res_key_if_0 = arr != arr; }
      if(env_var_0 == 1) { _res_key_if_0 = arr != arr+i; }
      if(env_var_0 == 2) { _res_key_if_0 = arr != arr+min; }
      if(env_var_0 == 3) { _res_key_if_0 = arr != arr+n; }
      if(env_var_0 == 4) { _res_key_if_0 = arr != arr[i]; }
      if(env_var_0 == 5) { _res_key_if_0 = arr != arr[min]; }
      if(env_var_0 == 6) { _res_key_if_0 = arr != arr[n]; }
      if(env_var_0 == 7) { _res_key_if_0 = arr != i; }
      if(env_var_0 == 8) { _res_key_if_0 = arr != isupper( arr[i] ); }
      if(env_var_0 == 9) { _res_key_if_0 = arr != isupper( arr[min] ); }
      if(env_var_0 == 10) { _res_key_if_0 = arr != isupper( arr[n] ); }
      if(env_var_0 == 11) { _res_key_if_0 = arr != isupper( i ); }
      if(env_var_0 == 12) { _res_key_if_0 = arr != isupper( jumps ); }
      if(env_var_0 == 13) { _res_key_if_0 = arr != isupper( jumps[i] ); }
      if(env_var_0 == 14) { _res_key_if_0 = arr != isupper( min ); }
      if(env_var_0 == 15) { _res_key_if_0 = arr != isupper( n ); }
      if(env_var_0 == 16) { _res_key_if_0 = arr != jumps; }
      if(env_var_0 == 17) { _res_key_if_0 = arr != jumps[i]; }
      if(env_var_0 == 18) { _res_key_if_0 = arr != min; }
      if(env_var_0 == 19) { _res_key_if_0 = arr != n; }
      if(env_var_0 == 20) { _res_key_if_0 = arr != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 21) { _res_key_if_0 = arr != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 22) { _res_key_if_0 = arr != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 23) { _res_key_if_0 = arr != std::max( arr[i],i ); }
      if(env_var_0 == 24) { _res_key_if_0 = arr != std::max( arr[i],jumps ); }
      if(env_var_0 == 25) { _res_key_if_0 = arr != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 26) { _res_key_if_0 = arr != std::max( arr[i],min ); }
      if(env_var_0 == 27) { _res_key_if_0 = arr != std::max( arr[i],n ); }
      if(env_var_0 == 28) { _res_key_if_0 = arr != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 29) { _res_key_if_0 = arr != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 30) { _res_key_if_0 = arr != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 31) { _res_key_if_0 = arr != std::max( arr[min],i ); }
      if(env_var_0 == 32) { _res_key_if_0 = arr != std::max( arr[min],jumps ); }
      if(env_var_0 == 33) { _res_key_if_0 = arr != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 34) { _res_key_if_0 = arr != std::max( arr[min],min ); }
      if(env_var_0 == 35) { _res_key_if_0 = arr != std::max( arr[min],n ); }
      if(env_var_0 == 36) { _res_key_if_0 = arr != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 37) { _res_key_if_0 = arr != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 38) { _res_key_if_0 = arr != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 39) { _res_key_if_0 = arr != std::max( arr[n],i ); }
      if(env_var_0 == 40) { _res_key_if_0 = arr != std::max( arr[n],jumps ); }
      if(env_var_0 == 41) { _res_key_if_0 = arr != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 42) { _res_key_if_0 = arr != std::max( arr[n],min ); }
      if(env_var_0 == 43) { _res_key_if_0 = arr != std::max( arr[n],n ); }
      if(env_var_0 == 44) { _res_key_if_0 = arr != std::max( i,arr[i] ); }
      if(env_var_0 == 45) { _res_key_if_0 = arr != std::max( i,arr[min] ); }
      if(env_var_0 == 46) { _res_key_if_0 = arr != std::max( i,arr[n] ); }
      if(env_var_0 == 47) { _res_key_if_0 = arr != std::max( i,i ); }
      if(env_var_0 == 48) { _res_key_if_0 = arr != std::max( i,jumps ); }
      if(env_var_0 == 49) { _res_key_if_0 = arr != std::max( i,jumps[i] ); }
      if(env_var_0 == 50) { _res_key_if_0 = arr != std::max( i,min ); }
      if(env_var_0 == 51) { _res_key_if_0 = arr != std::max( i,n ); }
      if(env_var_0 == 52) { _res_key_if_0 = arr != std::max( jumps,arr[i] ); }
      if(env_var_0 == 53) { _res_key_if_0 = arr != std::max( jumps,arr[min] ); }
      if(env_var_0 == 54) { _res_key_if_0 = arr != std::max( jumps,arr[n] ); }
      if(env_var_0 == 55) { _res_key_if_0 = arr != std::max( jumps,i ); }
      if(env_var_0 == 56) { _res_key_if_0 = arr != std::max( jumps,jumps ); }
      if(env_var_0 == 57) { _res_key_if_0 = arr != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 58) { _res_key_if_0 = arr != std::max( jumps,min ); }
      if(env_var_0 == 59) { _res_key_if_0 = arr != std::max( jumps,n ); }
      if(env_var_0 == 60) { _res_key_if_0 = arr != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 61) { _res_key_if_0 = arr != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 62) { _res_key_if_0 = arr != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 63) { _res_key_if_0 = arr != std::max( jumps[i],i ); }
      if(env_var_0 == 64) { _res_key_if_0 = arr != std::max( jumps[i],jumps ); }
      if(env_var_0 == 65) { _res_key_if_0 = arr != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 66) { _res_key_if_0 = arr != std::max( jumps[i],min ); }
      if(env_var_0 == 67) { _res_key_if_0 = arr != std::max( jumps[i],n ); }
      if(env_var_0 == 68) { _res_key_if_0 = arr != std::max( min,arr[i] ); }
      if(env_var_0 == 69) { _res_key_if_0 = arr != std::max( min,arr[min] ); }
      if(env_var_0 == 70) { _res_key_if_0 = arr != std::max( min,arr[n] ); }
      if(env_var_0 == 71) { _res_key_if_0 = arr != std::max( min,i ); }
      if(env_var_0 == 72) { _res_key_if_0 = arr != std::max( min,jumps ); }
      if(env_var_0 == 73) { _res_key_if_0 = arr != std::max( min,jumps[i] ); }
      if(env_var_0 == 74) { _res_key_if_0 = arr != std::max( min,min ); }
      if(env_var_0 == 75) { _res_key_if_0 = arr != std::max( min,n ); }
      if(env_var_0 == 76) { _res_key_if_0 = arr != std::max( n,arr[i] ); }
      if(env_var_0 == 77) { _res_key_if_0 = arr != std::max( n,arr[min] ); }
      if(env_var_0 == 78) { _res_key_if_0 = arr != std::max( n,arr[n] ); }
      if(env_var_0 == 79) { _res_key_if_0 = arr != std::max( n,i ); }
      if(env_var_0 == 80) { _res_key_if_0 = arr != std::max( n,jumps ); }
      if(env_var_0 == 81) { _res_key_if_0 = arr != std::max( n,jumps[i] ); }
      if(env_var_0 == 82) { _res_key_if_0 = arr != std::max( n,min ); }
      if(env_var_0 == 83) { _res_key_if_0 = arr != std::max( n,n ); }
      if(env_var_0 == 84) { _res_key_if_0 = arr != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 85) { _res_key_if_0 = arr != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 86) { _res_key_if_0 = arr != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 87) { _res_key_if_0 = arr != std::min( arr[i],i ); }
      if(env_var_0 == 88) { _res_key_if_0 = arr != std::min( arr[i],jumps ); }
      if(env_var_0 == 89) { _res_key_if_0 = arr != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 90) { _res_key_if_0 = arr != std::min( arr[i],min ); }
      if(env_var_0 == 91) { _res_key_if_0 = arr != std::min( arr[i],n ); }
      if(env_var_0 == 92) { _res_key_if_0 = arr != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 93) { _res_key_if_0 = arr != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 94) { _res_key_if_0 = arr != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 95) { _res_key_if_0 = arr != std::min( arr[min],i ); }
      if(env_var_0 == 96) { _res_key_if_0 = arr != std::min( arr[min],jumps ); }
      if(env_var_0 == 97) { _res_key_if_0 = arr != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 98) { _res_key_if_0 = arr != std::min( arr[min],min ); }
      if(env_var_0 == 99) { _res_key_if_0 = arr != std::min( arr[min],n ); }
      if(env_var_0 == 100) { _res_key_if_0 = arr != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 101) { _res_key_if_0 = arr != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 102) { _res_key_if_0 = arr != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 103) { _res_key_if_0 = arr != std::min( arr[n],i ); }
      if(env_var_0 == 104) { _res_key_if_0 = arr != std::min( arr[n],jumps ); }
      if(env_var_0 == 105) { _res_key_if_0 = arr != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 106) { _res_key_if_0 = arr != std::min( arr[n],min ); }
      if(env_var_0 == 107) { _res_key_if_0 = arr != std::min( arr[n],n ); }
      if(env_var_0 == 108) { _res_key_if_0 = arr != std::min( i,arr[i] ); }
      if(env_var_0 == 109) { _res_key_if_0 = arr != std::min( i,arr[min] ); }
      if(env_var_0 == 110) { _res_key_if_0 = arr != std::min( i,arr[n] ); }
      if(env_var_0 == 111) { _res_key_if_0 = arr != std::min( i,i ); }
      if(env_var_0 == 112) { _res_key_if_0 = arr != std::min( i,jumps ); }
      if(env_var_0 == 113) { _res_key_if_0 = arr != std::min( i,jumps[i] ); }
      if(env_var_0 == 114) { _res_key_if_0 = arr != std::min( i,min ); }
      if(env_var_0 == 115) { _res_key_if_0 = arr != std::min( i,n ); }
      if(env_var_0 == 116) { _res_key_if_0 = arr != std::min( jumps,arr[i] ); }
      if(env_var_0 == 117) { _res_key_if_0 = arr != std::min( jumps,arr[min] ); }
      if(env_var_0 == 118) { _res_key_if_0 = arr != std::min( jumps,arr[n] ); }
      if(env_var_0 == 119) { _res_key_if_0 = arr != std::min( jumps,i ); }
      if(env_var_0 == 120) { _res_key_if_0 = arr != std::min( jumps,jumps ); }
      if(env_var_0 == 121) { _res_key_if_0 = arr != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 122) { _res_key_if_0 = arr != std::min( jumps,min ); }
      if(env_var_0 == 123) { _res_key_if_0 = arr != std::min( jumps,n ); }
      if(env_var_0 == 124) { _res_key_if_0 = arr != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 125) { _res_key_if_0 = arr != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 126) { _res_key_if_0 = arr != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 127) { _res_key_if_0 = arr != std::min( jumps[i],i ); }
      if(env_var_0 == 128) { _res_key_if_0 = arr != std::min( jumps[i],jumps ); }
      if(env_var_0 == 129) { _res_key_if_0 = arr != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 130) { _res_key_if_0 = arr != std::min( jumps[i],min ); }
      if(env_var_0 == 131) { _res_key_if_0 = arr != std::min( jumps[i],n ); }
      if(env_var_0 == 132) { _res_key_if_0 = arr != std::min( min,arr[i] ); }
      if(env_var_0 == 133) { _res_key_if_0 = arr != std::min( min,arr[min] ); }
      if(env_var_0 == 134) { _res_key_if_0 = arr != std::min( min,arr[n] ); }
      if(env_var_0 == 135) { _res_key_if_0 = arr != std::min( min,i ); }
      if(env_var_0 == 136) { _res_key_if_0 = arr != std::min( min,jumps ); }
      if(env_var_0 == 137) { _res_key_if_0 = arr != std::min( min,jumps[i] ); }
      if(env_var_0 == 138) { _res_key_if_0 = arr != std::min( min,min ); }
      if(env_var_0 == 139) { _res_key_if_0 = arr != std::min( min,n ); }
      if(env_var_0 == 140) { _res_key_if_0 = arr != std::min( n,arr[i] ); }
      if(env_var_0 == 141) { _res_key_if_0 = arr != std::min( n,arr[min] ); }
      if(env_var_0 == 142) { _res_key_if_0 = arr != std::min( n,arr[n] ); }
      if(env_var_0 == 143) { _res_key_if_0 = arr != std::min( n,i ); }
      if(env_var_0 == 144) { _res_key_if_0 = arr != std::min( n,jumps ); }
      if(env_var_0 == 145) { _res_key_if_0 = arr != std::min( n,jumps[i] ); }
      if(env_var_0 == 146) { _res_key_if_0 = arr != std::min( n,min ); }
      if(env_var_0 == 147) { _res_key_if_0 = arr != std::min( n,n ); }
      if(env_var_0 == 148) { _res_key_if_0 = arr != toupper( arr[i] ); }
      if(env_var_0 == 149) { _res_key_if_0 = arr != toupper( arr[min] ); }
      if(env_var_0 == 150) { _res_key_if_0 = arr != toupper( arr[n] ); }
      if(env_var_0 == 151) { _res_key_if_0 = arr != toupper( i ); }
      if(env_var_0 == 152) { _res_key_if_0 = arr != toupper( jumps ); }
      if(env_var_0 == 153) { _res_key_if_0 = arr != toupper( jumps[i] ); }
      if(env_var_0 == 154) { _res_key_if_0 = arr != toupper( min ); }
      if(env_var_0 == 155) { _res_key_if_0 = arr != toupper( n ); }
      if(env_var_0 == 156) { _res_key_if_0 = arr+i != arr; }
      if(env_var_0 == 157) { _res_key_if_0 = arr+i != arr+i; }
      if(env_var_0 == 158) { _res_key_if_0 = arr+i != arr+min; }
      if(env_var_0 == 159) { _res_key_if_0 = arr+i != arr+n; }
      if(env_var_0 == 160) { _res_key_if_0 = arr+i != arr[i]; }
      if(env_var_0 == 161) { _res_key_if_0 = arr+i != arr[min]; }
      if(env_var_0 == 162) { _res_key_if_0 = arr+i != arr[n]; }
      if(env_var_0 == 163) { _res_key_if_0 = arr+i != i; }
      if(env_var_0 == 164) { _res_key_if_0 = arr+i != isupper( arr[i] ); }
      if(env_var_0 == 165) { _res_key_if_0 = arr+i != isupper( arr[min] ); }
      if(env_var_0 == 166) { _res_key_if_0 = arr+i != isupper( arr[n] ); }
      if(env_var_0 == 167) { _res_key_if_0 = arr+i != isupper( i ); }
      if(env_var_0 == 168) { _res_key_if_0 = arr+i != isupper( jumps ); }
      if(env_var_0 == 169) { _res_key_if_0 = arr+i != isupper( jumps[i] ); }
      if(env_var_0 == 170) { _res_key_if_0 = arr+i != isupper( min ); }
      if(env_var_0 == 171) { _res_key_if_0 = arr+i != isupper( n ); }
      if(env_var_0 == 172) { _res_key_if_0 = arr+i != jumps; }
      if(env_var_0 == 173) { _res_key_if_0 = arr+i != jumps[i]; }
      if(env_var_0 == 174) { _res_key_if_0 = arr+i != min; }
      if(env_var_0 == 175) { _res_key_if_0 = arr+i != n; }
      if(env_var_0 == 176) { _res_key_if_0 = arr+i != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 177) { _res_key_if_0 = arr+i != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 178) { _res_key_if_0 = arr+i != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 179) { _res_key_if_0 = arr+i != std::max( arr[i],i ); }
      if(env_var_0 == 180) { _res_key_if_0 = arr+i != std::max( arr[i],jumps ); }
      if(env_var_0 == 181) { _res_key_if_0 = arr+i != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 182) { _res_key_if_0 = arr+i != std::max( arr[i],min ); }
      if(env_var_0 == 183) { _res_key_if_0 = arr+i != std::max( arr[i],n ); }
      if(env_var_0 == 184) { _res_key_if_0 = arr+i != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 185) { _res_key_if_0 = arr+i != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 186) { _res_key_if_0 = arr+i != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 187) { _res_key_if_0 = arr+i != std::max( arr[min],i ); }
      if(env_var_0 == 188) { _res_key_if_0 = arr+i != std::max( arr[min],jumps ); }
      if(env_var_0 == 189) { _res_key_if_0 = arr+i != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 190) { _res_key_if_0 = arr+i != std::max( arr[min],min ); }
      if(env_var_0 == 191) { _res_key_if_0 = arr+i != std::max( arr[min],n ); }
      if(env_var_0 == 192) { _res_key_if_0 = arr+i != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 193) { _res_key_if_0 = arr+i != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 194) { _res_key_if_0 = arr+i != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 195) { _res_key_if_0 = arr+i != std::max( arr[n],i ); }
      if(env_var_0 == 196) { _res_key_if_0 = arr+i != std::max( arr[n],jumps ); }
      if(env_var_0 == 197) { _res_key_if_0 = arr+i != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 198) { _res_key_if_0 = arr+i != std::max( arr[n],min ); }
      if(env_var_0 == 199) { _res_key_if_0 = arr+i != std::max( arr[n],n ); }
      if(env_var_0 == 200) { _res_key_if_0 = arr+i != std::max( i,arr[i] ); }
      if(env_var_0 == 201) { _res_key_if_0 = arr+i != std::max( i,arr[min] ); }
      if(env_var_0 == 202) { _res_key_if_0 = arr+i != std::max( i,arr[n] ); }
      if(env_var_0 == 203) { _res_key_if_0 = arr+i != std::max( i,i ); }
      if(env_var_0 == 204) { _res_key_if_0 = arr+i != std::max( i,jumps ); }
      if(env_var_0 == 205) { _res_key_if_0 = arr+i != std::max( i,jumps[i] ); }
      if(env_var_0 == 206) { _res_key_if_0 = arr+i != std::max( i,min ); }
      if(env_var_0 == 207) { _res_key_if_0 = arr+i != std::max( i,n ); }
      if(env_var_0 == 208) { _res_key_if_0 = arr+i != std::max( jumps,arr[i] ); }
      if(env_var_0 == 209) { _res_key_if_0 = arr+i != std::max( jumps,arr[min] ); }
      if(env_var_0 == 210) { _res_key_if_0 = arr+i != std::max( jumps,arr[n] ); }
      if(env_var_0 == 211) { _res_key_if_0 = arr+i != std::max( jumps,i ); }
      if(env_var_0 == 212) { _res_key_if_0 = arr+i != std::max( jumps,jumps ); }
      if(env_var_0 == 213) { _res_key_if_0 = arr+i != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 214) { _res_key_if_0 = arr+i != std::max( jumps,min ); }
      if(env_var_0 == 215) { _res_key_if_0 = arr+i != std::max( jumps,n ); }
      if(env_var_0 == 216) { _res_key_if_0 = arr+i != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 217) { _res_key_if_0 = arr+i != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 218) { _res_key_if_0 = arr+i != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 219) { _res_key_if_0 = arr+i != std::max( jumps[i],i ); }
      if(env_var_0 == 220) { _res_key_if_0 = arr+i != std::max( jumps[i],jumps ); }
      if(env_var_0 == 221) { _res_key_if_0 = arr+i != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 222) { _res_key_if_0 = arr+i != std::max( jumps[i],min ); }
      if(env_var_0 == 223) { _res_key_if_0 = arr+i != std::max( jumps[i],n ); }
      if(env_var_0 == 224) { _res_key_if_0 = arr+i != std::max( min,arr[i] ); }
      if(env_var_0 == 225) { _res_key_if_0 = arr+i != std::max( min,arr[min] ); }
      if(env_var_0 == 226) { _res_key_if_0 = arr+i != std::max( min,arr[n] ); }
      if(env_var_0 == 227) { _res_key_if_0 = arr+i != std::max( min,i ); }
      if(env_var_0 == 228) { _res_key_if_0 = arr+i != std::max( min,jumps ); }
      if(env_var_0 == 229) { _res_key_if_0 = arr+i != std::max( min,jumps[i] ); }
      if(env_var_0 == 230) { _res_key_if_0 = arr+i != std::max( min,min ); }
      if(env_var_0 == 231) { _res_key_if_0 = arr+i != std::max( min,n ); }
      if(env_var_0 == 232) { _res_key_if_0 = arr+i != std::max( n,arr[i] ); }
      if(env_var_0 == 233) { _res_key_if_0 = arr+i != std::max( n,arr[min] ); }
      if(env_var_0 == 234) { _res_key_if_0 = arr+i != std::max( n,arr[n] ); }
      if(env_var_0 == 235) { _res_key_if_0 = arr+i != std::max( n,i ); }
      if(env_var_0 == 236) { _res_key_if_0 = arr+i != std::max( n,jumps ); }
      if(env_var_0 == 237) { _res_key_if_0 = arr+i != std::max( n,jumps[i] ); }
      if(env_var_0 == 238) { _res_key_if_0 = arr+i != std::max( n,min ); }
      if(env_var_0 == 239) { _res_key_if_0 = arr+i != std::max( n,n ); }
      if(env_var_0 == 240) { _res_key_if_0 = arr+i != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 241) { _res_key_if_0 = arr+i != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 242) { _res_key_if_0 = arr+i != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 243) { _res_key_if_0 = arr+i != std::min( arr[i],i ); }
      if(env_var_0 == 244) { _res_key_if_0 = arr+i != std::min( arr[i],jumps ); }
      if(env_var_0 == 245) { _res_key_if_0 = arr+i != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 246) { _res_key_if_0 = arr+i != std::min( arr[i],min ); }
      if(env_var_0 == 247) { _res_key_if_0 = arr+i != std::min( arr[i],n ); }
      if(env_var_0 == 248) { _res_key_if_0 = arr+i != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 249) { _res_key_if_0 = arr+i != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 250) { _res_key_if_0 = arr+i != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 251) { _res_key_if_0 = arr+i != std::min( arr[min],i ); }
      if(env_var_0 == 252) { _res_key_if_0 = arr+i != std::min( arr[min],jumps ); }
      if(env_var_0 == 253) { _res_key_if_0 = arr+i != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 254) { _res_key_if_0 = arr+i != std::min( arr[min],min ); }
      if(env_var_0 == 255) { _res_key_if_0 = arr+i != std::min( arr[min],n ); }
      if(env_var_0 == 256) { _res_key_if_0 = arr+i != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 257) { _res_key_if_0 = arr+i != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 258) { _res_key_if_0 = arr+i != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 259) { _res_key_if_0 = arr+i != std::min( arr[n],i ); }
      if(env_var_0 == 260) { _res_key_if_0 = arr+i != std::min( arr[n],jumps ); }
      if(env_var_0 == 261) { _res_key_if_0 = arr+i != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 262) { _res_key_if_0 = arr+i != std::min( arr[n],min ); }
      if(env_var_0 == 263) { _res_key_if_0 = arr+i != std::min( arr[n],n ); }
      if(env_var_0 == 264) { _res_key_if_0 = arr+i != std::min( i,arr[i] ); }
      if(env_var_0 == 265) { _res_key_if_0 = arr+i != std::min( i,arr[min] ); }
      if(env_var_0 == 266) { _res_key_if_0 = arr+i != std::min( i,arr[n] ); }
      if(env_var_0 == 267) { _res_key_if_0 = arr+i != std::min( i,i ); }
      if(env_var_0 == 268) { _res_key_if_0 = arr+i != std::min( i,jumps ); }
      if(env_var_0 == 269) { _res_key_if_0 = arr+i != std::min( i,jumps[i] ); }
      if(env_var_0 == 270) { _res_key_if_0 = arr+i != std::min( i,min ); }
      if(env_var_0 == 271) { _res_key_if_0 = arr+i != std::min( i,n ); }
      if(env_var_0 == 272) { _res_key_if_0 = arr+i != std::min( jumps,arr[i] ); }
      if(env_var_0 == 273) { _res_key_if_0 = arr+i != std::min( jumps,arr[min] ); }
      if(env_var_0 == 274) { _res_key_if_0 = arr+i != std::min( jumps,arr[n] ); }
      if(env_var_0 == 275) { _res_key_if_0 = arr+i != std::min( jumps,i ); }
      if(env_var_0 == 276) { _res_key_if_0 = arr+i != std::min( jumps,jumps ); }
      if(env_var_0 == 277) { _res_key_if_0 = arr+i != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 278) { _res_key_if_0 = arr+i != std::min( jumps,min ); }
      if(env_var_0 == 279) { _res_key_if_0 = arr+i != std::min( jumps,n ); }
      if(env_var_0 == 280) { _res_key_if_0 = arr+i != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 281) { _res_key_if_0 = arr+i != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 282) { _res_key_if_0 = arr+i != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 283) { _res_key_if_0 = arr+i != std::min( jumps[i],i ); }
      if(env_var_0 == 284) { _res_key_if_0 = arr+i != std::min( jumps[i],jumps ); }
      if(env_var_0 == 285) { _res_key_if_0 = arr+i != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 286) { _res_key_if_0 = arr+i != std::min( jumps[i],min ); }
      if(env_var_0 == 287) { _res_key_if_0 = arr+i != std::min( jumps[i],n ); }
      if(env_var_0 == 288) { _res_key_if_0 = arr+i != std::min( min,arr[i] ); }
      if(env_var_0 == 289) { _res_key_if_0 = arr+i != std::min( min,arr[min] ); }
      if(env_var_0 == 290) { _res_key_if_0 = arr+i != std::min( min,arr[n] ); }
      if(env_var_0 == 291) { _res_key_if_0 = arr+i != std::min( min,i ); }
      if(env_var_0 == 292) { _res_key_if_0 = arr+i != std::min( min,jumps ); }
      if(env_var_0 == 293) { _res_key_if_0 = arr+i != std::min( min,jumps[i] ); }
      if(env_var_0 == 294) { _res_key_if_0 = arr+i != std::min( min,min ); }
      if(env_var_0 == 295) { _res_key_if_0 = arr+i != std::min( min,n ); }
      if(env_var_0 == 296) { _res_key_if_0 = arr+i != std::min( n,arr[i] ); }
      if(env_var_0 == 297) { _res_key_if_0 = arr+i != std::min( n,arr[min] ); }
      if(env_var_0 == 298) { _res_key_if_0 = arr+i != std::min( n,arr[n] ); }
      if(env_var_0 == 299) { _res_key_if_0 = arr+i != std::min( n,i ); }
      if(env_var_0 == 300) { _res_key_if_0 = arr+i != std::min( n,jumps ); }
      if(env_var_0 == 301) { _res_key_if_0 = arr+i != std::min( n,jumps[i] ); }
      if(env_var_0 == 302) { _res_key_if_0 = arr+i != std::min( n,min ); }
      if(env_var_0 == 303) { _res_key_if_0 = arr+i != std::min( n,n ); }
      if(env_var_0 == 304) { _res_key_if_0 = arr+i != toupper( arr[i] ); }
      if(env_var_0 == 305) { _res_key_if_0 = arr+i != toupper( arr[min] ); }
      if(env_var_0 == 306) { _res_key_if_0 = arr+i != toupper( arr[n] ); }
      if(env_var_0 == 307) { _res_key_if_0 = arr+i != toupper( i ); }
      if(env_var_0 == 308) { _res_key_if_0 = arr+i != toupper( jumps ); }
      if(env_var_0 == 309) { _res_key_if_0 = arr+i != toupper( jumps[i] ); }
      if(env_var_0 == 310) { _res_key_if_0 = arr+i != toupper( min ); }
      if(env_var_0 == 311) { _res_key_if_0 = arr+i != toupper( n ); }
      if(env_var_0 == 312) { _res_key_if_0 = arr+min != arr; }
      if(env_var_0 == 313) { _res_key_if_0 = arr+min != arr+i; }
      if(env_var_0 == 314) { _res_key_if_0 = arr+min != arr+min; }
      if(env_var_0 == 315) { _res_key_if_0 = arr+min != arr+n; }
      if(env_var_0 == 316) { _res_key_if_0 = arr+min != arr[i]; }
      if(env_var_0 == 317) { _res_key_if_0 = arr+min != arr[min]; }
      if(env_var_0 == 318) { _res_key_if_0 = arr+min != arr[n]; }
      if(env_var_0 == 319) { _res_key_if_0 = arr+min != i; }
      if(env_var_0 == 320) { _res_key_if_0 = arr+min != isupper( arr[i] ); }
      if(env_var_0 == 321) { _res_key_if_0 = arr+min != isupper( arr[min] ); }
      if(env_var_0 == 322) { _res_key_if_0 = arr+min != isupper( arr[n] ); }
      if(env_var_0 == 323) { _res_key_if_0 = arr+min != isupper( i ); }
      if(env_var_0 == 324) { _res_key_if_0 = arr+min != isupper( jumps ); }
      if(env_var_0 == 325) { _res_key_if_0 = arr+min != isupper( jumps[i] ); }
      if(env_var_0 == 326) { _res_key_if_0 = arr+min != isupper( min ); }
      if(env_var_0 == 327) { _res_key_if_0 = arr+min != isupper( n ); }
      if(env_var_0 == 328) { _res_key_if_0 = arr+min != jumps; }
      if(env_var_0 == 329) { _res_key_if_0 = arr+min != jumps[i]; }
      if(env_var_0 == 330) { _res_key_if_0 = arr+min != min; }
      if(env_var_0 == 331) { _res_key_if_0 = arr+min != n; }
      if(env_var_0 == 332) { _res_key_if_0 = arr+min != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 333) { _res_key_if_0 = arr+min != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 334) { _res_key_if_0 = arr+min != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 335) { _res_key_if_0 = arr+min != std::max( arr[i],i ); }
      if(env_var_0 == 336) { _res_key_if_0 = arr+min != std::max( arr[i],jumps ); }
      if(env_var_0 == 337) { _res_key_if_0 = arr+min != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 338) { _res_key_if_0 = arr+min != std::max( arr[i],min ); }
      if(env_var_0 == 339) { _res_key_if_0 = arr+min != std::max( arr[i],n ); }
      if(env_var_0 == 340) { _res_key_if_0 = arr+min != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 341) { _res_key_if_0 = arr+min != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 342) { _res_key_if_0 = arr+min != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 343) { _res_key_if_0 = arr+min != std::max( arr[min],i ); }
      if(env_var_0 == 344) { _res_key_if_0 = arr+min != std::max( arr[min],jumps ); }
      if(env_var_0 == 345) { _res_key_if_0 = arr+min != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 346) { _res_key_if_0 = arr+min != std::max( arr[min],min ); }
      if(env_var_0 == 347) { _res_key_if_0 = arr+min != std::max( arr[min],n ); }
      if(env_var_0 == 348) { _res_key_if_0 = arr+min != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 349) { _res_key_if_0 = arr+min != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 350) { _res_key_if_0 = arr+min != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 351) { _res_key_if_0 = arr+min != std::max( arr[n],i ); }
      if(env_var_0 == 352) { _res_key_if_0 = arr+min != std::max( arr[n],jumps ); }
      if(env_var_0 == 353) { _res_key_if_0 = arr+min != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 354) { _res_key_if_0 = arr+min != std::max( arr[n],min ); }
      if(env_var_0 == 355) { _res_key_if_0 = arr+min != std::max( arr[n],n ); }
      if(env_var_0 == 356) { _res_key_if_0 = arr+min != std::max( i,arr[i] ); }
      if(env_var_0 == 357) { _res_key_if_0 = arr+min != std::max( i,arr[min] ); }
      if(env_var_0 == 358) { _res_key_if_0 = arr+min != std::max( i,arr[n] ); }
      if(env_var_0 == 359) { _res_key_if_0 = arr+min != std::max( i,i ); }
      if(env_var_0 == 360) { _res_key_if_0 = arr+min != std::max( i,jumps ); }
      if(env_var_0 == 361) { _res_key_if_0 = arr+min != std::max( i,jumps[i] ); }
      if(env_var_0 == 362) { _res_key_if_0 = arr+min != std::max( i,min ); }
      if(env_var_0 == 363) { _res_key_if_0 = arr+min != std::max( i,n ); }
      if(env_var_0 == 364) { _res_key_if_0 = arr+min != std::max( jumps,arr[i] ); }
      if(env_var_0 == 365) { _res_key_if_0 = arr+min != std::max( jumps,arr[min] ); }
      if(env_var_0 == 366) { _res_key_if_0 = arr+min != std::max( jumps,arr[n] ); }
      if(env_var_0 == 367) { _res_key_if_0 = arr+min != std::max( jumps,i ); }
      if(env_var_0 == 368) { _res_key_if_0 = arr+min != std::max( jumps,jumps ); }
      if(env_var_0 == 369) { _res_key_if_0 = arr+min != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 370) { _res_key_if_0 = arr+min != std::max( jumps,min ); }
      if(env_var_0 == 371) { _res_key_if_0 = arr+min != std::max( jumps,n ); }
      if(env_var_0 == 372) { _res_key_if_0 = arr+min != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 373) { _res_key_if_0 = arr+min != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 374) { _res_key_if_0 = arr+min != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 375) { _res_key_if_0 = arr+min != std::max( jumps[i],i ); }
      if(env_var_0 == 376) { _res_key_if_0 = arr+min != std::max( jumps[i],jumps ); }
      if(env_var_0 == 377) { _res_key_if_0 = arr+min != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 378) { _res_key_if_0 = arr+min != std::max( jumps[i],min ); }
      if(env_var_0 == 379) { _res_key_if_0 = arr+min != std::max( jumps[i],n ); }
      if(env_var_0 == 380) { _res_key_if_0 = arr+min != std::max( min,arr[i] ); }
      if(env_var_0 == 381) { _res_key_if_0 = arr+min != std::max( min,arr[min] ); }
      if(env_var_0 == 382) { _res_key_if_0 = arr+min != std::max( min,arr[n] ); }
      if(env_var_0 == 383) { _res_key_if_0 = arr+min != std::max( min,i ); }
      if(env_var_0 == 384) { _res_key_if_0 = arr+min != std::max( min,jumps ); }
      if(env_var_0 == 385) { _res_key_if_0 = arr+min != std::max( min,jumps[i] ); }
      if(env_var_0 == 386) { _res_key_if_0 = arr+min != std::max( min,min ); }
      if(env_var_0 == 387) { _res_key_if_0 = arr+min != std::max( min,n ); }
      if(env_var_0 == 388) { _res_key_if_0 = arr+min != std::max( n,arr[i] ); }
      if(env_var_0 == 389) { _res_key_if_0 = arr+min != std::max( n,arr[min] ); }
      if(env_var_0 == 390) { _res_key_if_0 = arr+min != std::max( n,arr[n] ); }
      if(env_var_0 == 391) { _res_key_if_0 = arr+min != std::max( n,i ); }
      if(env_var_0 == 392) { _res_key_if_0 = arr+min != std::max( n,jumps ); }
      if(env_var_0 == 393) { _res_key_if_0 = arr+min != std::max( n,jumps[i] ); }
      if(env_var_0 == 394) { _res_key_if_0 = arr+min != std::max( n,min ); }
      if(env_var_0 == 395) { _res_key_if_0 = arr+min != std::max( n,n ); }
      if(env_var_0 == 396) { _res_key_if_0 = arr+min != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 397) { _res_key_if_0 = arr+min != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 398) { _res_key_if_0 = arr+min != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 399) { _res_key_if_0 = arr+min != std::min( arr[i],i ); }
      if(env_var_0 == 400) { _res_key_if_0 = arr+min != std::min( arr[i],jumps ); }
      if(env_var_0 == 401) { _res_key_if_0 = arr+min != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 402) { _res_key_if_0 = arr+min != std::min( arr[i],min ); }
      if(env_var_0 == 403) { _res_key_if_0 = arr+min != std::min( arr[i],n ); }
      if(env_var_0 == 404) { _res_key_if_0 = arr+min != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 405) { _res_key_if_0 = arr+min != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 406) { _res_key_if_0 = arr+min != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 407) { _res_key_if_0 = arr+min != std::min( arr[min],i ); }
      if(env_var_0 == 408) { _res_key_if_0 = arr+min != std::min( arr[min],jumps ); }
      if(env_var_0 == 409) { _res_key_if_0 = arr+min != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 410) { _res_key_if_0 = arr+min != std::min( arr[min],min ); }
      if(env_var_0 == 411) { _res_key_if_0 = arr+min != std::min( arr[min],n ); }
      if(env_var_0 == 412) { _res_key_if_0 = arr+min != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 413) { _res_key_if_0 = arr+min != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 414) { _res_key_if_0 = arr+min != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 415) { _res_key_if_0 = arr+min != std::min( arr[n],i ); }
      if(env_var_0 == 416) { _res_key_if_0 = arr+min != std::min( arr[n],jumps ); }
      if(env_var_0 == 417) { _res_key_if_0 = arr+min != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 418) { _res_key_if_0 = arr+min != std::min( arr[n],min ); }
      if(env_var_0 == 419) { _res_key_if_0 = arr+min != std::min( arr[n],n ); }
      if(env_var_0 == 420) { _res_key_if_0 = arr+min != std::min( i,arr[i] ); }
      if(env_var_0 == 421) { _res_key_if_0 = arr+min != std::min( i,arr[min] ); }
      if(env_var_0 == 422) { _res_key_if_0 = arr+min != std::min( i,arr[n] ); }
      if(env_var_0 == 423) { _res_key_if_0 = arr+min != std::min( i,i ); }
      if(env_var_0 == 424) { _res_key_if_0 = arr+min != std::min( i,jumps ); }
      if(env_var_0 == 425) { _res_key_if_0 = arr+min != std::min( i,jumps[i] ); }
      if(env_var_0 == 426) { _res_key_if_0 = arr+min != std::min( i,min ); }
      if(env_var_0 == 427) { _res_key_if_0 = arr+min != std::min( i,n ); }
      if(env_var_0 == 428) { _res_key_if_0 = arr+min != std::min( jumps,arr[i] ); }
      if(env_var_0 == 429) { _res_key_if_0 = arr+min != std::min( jumps,arr[min] ); }
      if(env_var_0 == 430) { _res_key_if_0 = arr+min != std::min( jumps,arr[n] ); }
      if(env_var_0 == 431) { _res_key_if_0 = arr+min != std::min( jumps,i ); }
      if(env_var_0 == 432) { _res_key_if_0 = arr+min != std::min( jumps,jumps ); }
      if(env_var_0 == 433) { _res_key_if_0 = arr+min != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 434) { _res_key_if_0 = arr+min != std::min( jumps,min ); }
      if(env_var_0 == 435) { _res_key_if_0 = arr+min != std::min( jumps,n ); }
      if(env_var_0 == 436) { _res_key_if_0 = arr+min != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 437) { _res_key_if_0 = arr+min != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 438) { _res_key_if_0 = arr+min != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 439) { _res_key_if_0 = arr+min != std::min( jumps[i],i ); }
      if(env_var_0 == 440) { _res_key_if_0 = arr+min != std::min( jumps[i],jumps ); }
      if(env_var_0 == 441) { _res_key_if_0 = arr+min != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 442) { _res_key_if_0 = arr+min != std::min( jumps[i],min ); }
      if(env_var_0 == 443) { _res_key_if_0 = arr+min != std::min( jumps[i],n ); }
      if(env_var_0 == 444) { _res_key_if_0 = arr+min != std::min( min,arr[i] ); }
      if(env_var_0 == 445) { _res_key_if_0 = arr+min != std::min( min,arr[min] ); }
      if(env_var_0 == 446) { _res_key_if_0 = arr+min != std::min( min,arr[n] ); }
      if(env_var_0 == 447) { _res_key_if_0 = arr+min != std::min( min,i ); }
      if(env_var_0 == 448) { _res_key_if_0 = arr+min != std::min( min,jumps ); }
      if(env_var_0 == 449) { _res_key_if_0 = arr+min != std::min( min,jumps[i] ); }
      if(env_var_0 == 450) { _res_key_if_0 = arr+min != std::min( min,min ); }
      if(env_var_0 == 451) { _res_key_if_0 = arr+min != std::min( min,n ); }
      if(env_var_0 == 452) { _res_key_if_0 = arr+min != std::min( n,arr[i] ); }
      if(env_var_0 == 453) { _res_key_if_0 = arr+min != std::min( n,arr[min] ); }
      if(env_var_0 == 454) { _res_key_if_0 = arr+min != std::min( n,arr[n] ); }
      if(env_var_0 == 455) { _res_key_if_0 = arr+min != std::min( n,i ); }
      if(env_var_0 == 456) { _res_key_if_0 = arr+min != std::min( n,jumps ); }
      if(env_var_0 == 457) { _res_key_if_0 = arr+min != std::min( n,jumps[i] ); }
      if(env_var_0 == 458) { _res_key_if_0 = arr+min != std::min( n,min ); }
      if(env_var_0 == 459) { _res_key_if_0 = arr+min != std::min( n,n ); }
      if(env_var_0 == 460) { _res_key_if_0 = arr+min != toupper( arr[i] ); }
      if(env_var_0 == 461) { _res_key_if_0 = arr+min != toupper( arr[min] ); }
      if(env_var_0 == 462) { _res_key_if_0 = arr+min != toupper( arr[n] ); }
      if(env_var_0 == 463) { _res_key_if_0 = arr+min != toupper( i ); }
      if(env_var_0 == 464) { _res_key_if_0 = arr+min != toupper( jumps ); }
      if(env_var_0 == 465) { _res_key_if_0 = arr+min != toupper( jumps[i] ); }
      if(env_var_0 == 466) { _res_key_if_0 = arr+min != toupper( min ); }
      if(env_var_0 == 467) { _res_key_if_0 = arr+min != toupper( n ); }
      if(env_var_0 == 468) { _res_key_if_0 = arr+n != arr; }
      if(env_var_0 == 469) { _res_key_if_0 = arr+n != arr+i; }
      if(env_var_0 == 470) { _res_key_if_0 = arr+n != arr+min; }
      if(env_var_0 == 471) { _res_key_if_0 = arr+n != arr+n; }
      if(env_var_0 == 472) { _res_key_if_0 = arr+n != arr[i]; }
      if(env_var_0 == 473) { _res_key_if_0 = arr+n != arr[min]; }
      if(env_var_0 == 474) { _res_key_if_0 = arr+n != arr[n]; }
      if(env_var_0 == 475) { _res_key_if_0 = arr+n != i; }
      if(env_var_0 == 476) { _res_key_if_0 = arr+n != isupper( arr[i] ); }
      if(env_var_0 == 477) { _res_key_if_0 = arr+n != isupper( arr[min] ); }
      if(env_var_0 == 478) { _res_key_if_0 = arr+n != isupper( arr[n] ); }
      if(env_var_0 == 479) { _res_key_if_0 = arr+n != isupper( i ); }
      if(env_var_0 == 480) { _res_key_if_0 = arr+n != isupper( jumps ); }
      if(env_var_0 == 481) { _res_key_if_0 = arr+n != isupper( jumps[i] ); }
      if(env_var_0 == 482) { _res_key_if_0 = arr+n != isupper( min ); }
      if(env_var_0 == 483) { _res_key_if_0 = arr+n != isupper( n ); }
      if(env_var_0 == 484) { _res_key_if_0 = arr+n != jumps; }
      if(env_var_0 == 485) { _res_key_if_0 = arr+n != jumps[i]; }
      if(env_var_0 == 486) { _res_key_if_0 = arr+n != min; }
      if(env_var_0 == 487) { _res_key_if_0 = arr+n != n; }
      if(env_var_0 == 488) { _res_key_if_0 = arr+n != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 489) { _res_key_if_0 = arr+n != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 490) { _res_key_if_0 = arr+n != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 491) { _res_key_if_0 = arr+n != std::max( arr[i],i ); }
      if(env_var_0 == 492) { _res_key_if_0 = arr+n != std::max( arr[i],jumps ); }
      if(env_var_0 == 493) { _res_key_if_0 = arr+n != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 494) { _res_key_if_0 = arr+n != std::max( arr[i],min ); }
      if(env_var_0 == 495) { _res_key_if_0 = arr+n != std::max( arr[i],n ); }
      if(env_var_0 == 496) { _res_key_if_0 = arr+n != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 497) { _res_key_if_0 = arr+n != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 498) { _res_key_if_0 = arr+n != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 499) { _res_key_if_0 = arr+n != std::max( arr[min],i ); }
      if(env_var_0 == 500) { _res_key_if_0 = arr+n != std::max( arr[min],jumps ); }
      if(env_var_0 == 501) { _res_key_if_0 = arr+n != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 502) { _res_key_if_0 = arr+n != std::max( arr[min],min ); }
      if(env_var_0 == 503) { _res_key_if_0 = arr+n != std::max( arr[min],n ); }
      if(env_var_0 == 504) { _res_key_if_0 = arr+n != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 505) { _res_key_if_0 = arr+n != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 506) { _res_key_if_0 = arr+n != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 507) { _res_key_if_0 = arr+n != std::max( arr[n],i ); }
      if(env_var_0 == 508) { _res_key_if_0 = arr+n != std::max( arr[n],jumps ); }
      if(env_var_0 == 509) { _res_key_if_0 = arr+n != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 510) { _res_key_if_0 = arr+n != std::max( arr[n],min ); }
      if(env_var_0 == 511) { _res_key_if_0 = arr+n != std::max( arr[n],n ); }
      if(env_var_0 == 512) { _res_key_if_0 = arr+n != std::max( i,arr[i] ); }
      if(env_var_0 == 513) { _res_key_if_0 = arr+n != std::max( i,arr[min] ); }
      if(env_var_0 == 514) { _res_key_if_0 = arr+n != std::max( i,arr[n] ); }
      if(env_var_0 == 515) { _res_key_if_0 = arr+n != std::max( i,i ); }
      if(env_var_0 == 516) { _res_key_if_0 = arr+n != std::max( i,jumps ); }
      if(env_var_0 == 517) { _res_key_if_0 = arr+n != std::max( i,jumps[i] ); }
      if(env_var_0 == 518) { _res_key_if_0 = arr+n != std::max( i,min ); }
      if(env_var_0 == 519) { _res_key_if_0 = arr+n != std::max( i,n ); }
      if(env_var_0 == 520) { _res_key_if_0 = arr+n != std::max( jumps,arr[i] ); }
      if(env_var_0 == 521) { _res_key_if_0 = arr+n != std::max( jumps,arr[min] ); }
      if(env_var_0 == 522) { _res_key_if_0 = arr+n != std::max( jumps,arr[n] ); }
      if(env_var_0 == 523) { _res_key_if_0 = arr+n != std::max( jumps,i ); }
      if(env_var_0 == 524) { _res_key_if_0 = arr+n != std::max( jumps,jumps ); }
      if(env_var_0 == 525) { _res_key_if_0 = arr+n != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 526) { _res_key_if_0 = arr+n != std::max( jumps,min ); }
      if(env_var_0 == 527) { _res_key_if_0 = arr+n != std::max( jumps,n ); }
      if(env_var_0 == 528) { _res_key_if_0 = arr+n != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 529) { _res_key_if_0 = arr+n != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 530) { _res_key_if_0 = arr+n != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 531) { _res_key_if_0 = arr+n != std::max( jumps[i],i ); }
      if(env_var_0 == 532) { _res_key_if_0 = arr+n != std::max( jumps[i],jumps ); }
      if(env_var_0 == 533) { _res_key_if_0 = arr+n != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 534) { _res_key_if_0 = arr+n != std::max( jumps[i],min ); }
      if(env_var_0 == 535) { _res_key_if_0 = arr+n != std::max( jumps[i],n ); }
      if(env_var_0 == 536) { _res_key_if_0 = arr+n != std::max( min,arr[i] ); }
      if(env_var_0 == 537) { _res_key_if_0 = arr+n != std::max( min,arr[min] ); }
      if(env_var_0 == 538) { _res_key_if_0 = arr+n != std::max( min,arr[n] ); }
      if(env_var_0 == 539) { _res_key_if_0 = arr+n != std::max( min,i ); }
      if(env_var_0 == 540) { _res_key_if_0 = arr+n != std::max( min,jumps ); }
      if(env_var_0 == 541) { _res_key_if_0 = arr+n != std::max( min,jumps[i] ); }
      if(env_var_0 == 542) { _res_key_if_0 = arr+n != std::max( min,min ); }
      if(env_var_0 == 543) { _res_key_if_0 = arr+n != std::max( min,n ); }
      if(env_var_0 == 544) { _res_key_if_0 = arr+n != std::max( n,arr[i] ); }
      if(env_var_0 == 545) { _res_key_if_0 = arr+n != std::max( n,arr[min] ); }
      if(env_var_0 == 546) { _res_key_if_0 = arr+n != std::max( n,arr[n] ); }
      if(env_var_0 == 547) { _res_key_if_0 = arr+n != std::max( n,i ); }
      if(env_var_0 == 548) { _res_key_if_0 = arr+n != std::max( n,jumps ); }
      if(env_var_0 == 549) { _res_key_if_0 = arr+n != std::max( n,jumps[i] ); }
      if(env_var_0 == 550) { _res_key_if_0 = arr+n != std::max( n,min ); }
      if(env_var_0 == 551) { _res_key_if_0 = arr+n != std::max( n,n ); }
      if(env_var_0 == 552) { _res_key_if_0 = arr+n != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 553) { _res_key_if_0 = arr+n != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 554) { _res_key_if_0 = arr+n != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 555) { _res_key_if_0 = arr+n != std::min( arr[i],i ); }
      if(env_var_0 == 556) { _res_key_if_0 = arr+n != std::min( arr[i],jumps ); }
      if(env_var_0 == 557) { _res_key_if_0 = arr+n != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 558) { _res_key_if_0 = arr+n != std::min( arr[i],min ); }
      if(env_var_0 == 559) { _res_key_if_0 = arr+n != std::min( arr[i],n ); }
      if(env_var_0 == 560) { _res_key_if_0 = arr+n != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 561) { _res_key_if_0 = arr+n != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 562) { _res_key_if_0 = arr+n != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 563) { _res_key_if_0 = arr+n != std::min( arr[min],i ); }
      if(env_var_0 == 564) { _res_key_if_0 = arr+n != std::min( arr[min],jumps ); }
      if(env_var_0 == 565) { _res_key_if_0 = arr+n != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 566) { _res_key_if_0 = arr+n != std::min( arr[min],min ); }
      if(env_var_0 == 567) { _res_key_if_0 = arr+n != std::min( arr[min],n ); }
      if(env_var_0 == 568) { _res_key_if_0 = arr+n != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 569) { _res_key_if_0 = arr+n != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 570) { _res_key_if_0 = arr+n != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 571) { _res_key_if_0 = arr+n != std::min( arr[n],i ); }
      if(env_var_0 == 572) { _res_key_if_0 = arr+n != std::min( arr[n],jumps ); }
      if(env_var_0 == 573) { _res_key_if_0 = arr+n != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 574) { _res_key_if_0 = arr+n != std::min( arr[n],min ); }
      if(env_var_0 == 575) { _res_key_if_0 = arr+n != std::min( arr[n],n ); }
      if(env_var_0 == 576) { _res_key_if_0 = arr+n != std::min( i,arr[i] ); }
      if(env_var_0 == 577) { _res_key_if_0 = arr+n != std::min( i,arr[min] ); }
      if(env_var_0 == 578) { _res_key_if_0 = arr+n != std::min( i,arr[n] ); }
      if(env_var_0 == 579) { _res_key_if_0 = arr+n != std::min( i,i ); }
      if(env_var_0 == 580) { _res_key_if_0 = arr+n != std::min( i,jumps ); }
      if(env_var_0 == 581) { _res_key_if_0 = arr+n != std::min( i,jumps[i] ); }
      if(env_var_0 == 582) { _res_key_if_0 = arr+n != std::min( i,min ); }
      if(env_var_0 == 583) { _res_key_if_0 = arr+n != std::min( i,n ); }
      if(env_var_0 == 584) { _res_key_if_0 = arr+n != std::min( jumps,arr[i] ); }
      if(env_var_0 == 585) { _res_key_if_0 = arr+n != std::min( jumps,arr[min] ); }
      if(env_var_0 == 586) { _res_key_if_0 = arr+n != std::min( jumps,arr[n] ); }
      if(env_var_0 == 587) { _res_key_if_0 = arr+n != std::min( jumps,i ); }
      if(env_var_0 == 588) { _res_key_if_0 = arr+n != std::min( jumps,jumps ); }
      if(env_var_0 == 589) { _res_key_if_0 = arr+n != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 590) { _res_key_if_0 = arr+n != std::min( jumps,min ); }
      if(env_var_0 == 591) { _res_key_if_0 = arr+n != std::min( jumps,n ); }
      if(env_var_0 == 592) { _res_key_if_0 = arr+n != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 593) { _res_key_if_0 = arr+n != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 594) { _res_key_if_0 = arr+n != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 595) { _res_key_if_0 = arr+n != std::min( jumps[i],i ); }
      if(env_var_0 == 596) { _res_key_if_0 = arr+n != std::min( jumps[i],jumps ); }
      if(env_var_0 == 597) { _res_key_if_0 = arr+n != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 598) { _res_key_if_0 = arr+n != std::min( jumps[i],min ); }
      if(env_var_0 == 599) { _res_key_if_0 = arr+n != std::min( jumps[i],n ); }
      if(env_var_0 == 600) { _res_key_if_0 = arr+n != std::min( min,arr[i] ); }
      if(env_var_0 == 601) { _res_key_if_0 = arr+n != std::min( min,arr[min] ); }
      if(env_var_0 == 602) { _res_key_if_0 = arr+n != std::min( min,arr[n] ); }
      if(env_var_0 == 603) { _res_key_if_0 = arr+n != std::min( min,i ); }
      if(env_var_0 == 604) { _res_key_if_0 = arr+n != std::min( min,jumps ); }
      if(env_var_0 == 605) { _res_key_if_0 = arr+n != std::min( min,jumps[i] ); }
      if(env_var_0 == 606) { _res_key_if_0 = arr+n != std::min( min,min ); }
      if(env_var_0 == 607) { _res_key_if_0 = arr+n != std::min( min,n ); }
      if(env_var_0 == 608) { _res_key_if_0 = arr+n != std::min( n,arr[i] ); }
      if(env_var_0 == 609) { _res_key_if_0 = arr+n != std::min( n,arr[min] ); }
      if(env_var_0 == 610) { _res_key_if_0 = arr+n != std::min( n,arr[n] ); }
      if(env_var_0 == 611) { _res_key_if_0 = arr+n != std::min( n,i ); }
      if(env_var_0 == 612) { _res_key_if_0 = arr+n != std::min( n,jumps ); }
      if(env_var_0 == 613) { _res_key_if_0 = arr+n != std::min( n,jumps[i] ); }
      if(env_var_0 == 614) { _res_key_if_0 = arr+n != std::min( n,min ); }
      if(env_var_0 == 615) { _res_key_if_0 = arr+n != std::min( n,n ); }
      if(env_var_0 == 616) { _res_key_if_0 = arr+n != toupper( arr[i] ); }
      if(env_var_0 == 617) { _res_key_if_0 = arr+n != toupper( arr[min] ); }
      if(env_var_0 == 618) { _res_key_if_0 = arr+n != toupper( arr[n] ); }
      if(env_var_0 == 619) { _res_key_if_0 = arr+n != toupper( i ); }
      if(env_var_0 == 620) { _res_key_if_0 = arr+n != toupper( jumps ); }
      if(env_var_0 == 621) { _res_key_if_0 = arr+n != toupper( jumps[i] ); }
      if(env_var_0 == 622) { _res_key_if_0 = arr+n != toupper( min ); }
      if(env_var_0 == 623) { _res_key_if_0 = arr+n != toupper( n ); }
      if(env_var_0 == 624) { _res_key_if_0 = arr[i] != arr; }
      if(env_var_0 == 625) { _res_key_if_0 = arr[i] != arr+i; }
      if(env_var_0 == 626) { _res_key_if_0 = arr[i] != arr+min; }
      if(env_var_0 == 627) { _res_key_if_0 = arr[i] != arr+n; }
      if(env_var_0 == 628) { _res_key_if_0 = arr[i] != arr[i]; }
      if(env_var_0 == 629) { _res_key_if_0 = arr[i] != arr[min]; }
      if(env_var_0 == 630) { _res_key_if_0 = arr[i] != arr[n]; }
      if(env_var_0 == 631) { _res_key_if_0 = arr[i] != i; }
      if(env_var_0 == 632) { _res_key_if_0 = arr[i] != isupper( arr[i] ); }
      if(env_var_0 == 633) { _res_key_if_0 = arr[i] != isupper( arr[min] ); }
      if(env_var_0 == 634) { _res_key_if_0 = arr[i] != isupper( arr[n] ); }
      if(env_var_0 == 635) { _res_key_if_0 = arr[i] != isupper( i ); }
      if(env_var_0 == 636) { _res_key_if_0 = arr[i] != isupper( jumps ); }
      if(env_var_0 == 637) { _res_key_if_0 = arr[i] != isupper( jumps[i] ); }
      if(env_var_0 == 638) { _res_key_if_0 = arr[i] != isupper( min ); }
      if(env_var_0 == 639) { _res_key_if_0 = arr[i] != isupper( n ); }
      if(env_var_0 == 640) { _res_key_if_0 = arr[i] != jumps; }
      if(env_var_0 == 641) { _res_key_if_0 = arr[i] != jumps[i]; }
      if(env_var_0 == 642) { _res_key_if_0 = arr[i] != min; }
      if(env_var_0 == 643) { _res_key_if_0 = arr[i] != n; }
      if(env_var_0 == 644) { _res_key_if_0 = arr[i] != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 645) { _res_key_if_0 = arr[i] != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 646) { _res_key_if_0 = arr[i] != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 647) { _res_key_if_0 = arr[i] != std::max( arr[i],i ); }
      if(env_var_0 == 648) { _res_key_if_0 = arr[i] != std::max( arr[i],jumps ); }
      if(env_var_0 == 649) { _res_key_if_0 = arr[i] != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 650) { _res_key_if_0 = arr[i] != std::max( arr[i],min ); }
      if(env_var_0 == 651) { _res_key_if_0 = arr[i] != std::max( arr[i],n ); }
      if(env_var_0 == 652) { _res_key_if_0 = arr[i] != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 653) { _res_key_if_0 = arr[i] != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 654) { _res_key_if_0 = arr[i] != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 655) { _res_key_if_0 = arr[i] != std::max( arr[min],i ); }
      if(env_var_0 == 656) { _res_key_if_0 = arr[i] != std::max( arr[min],jumps ); }
      if(env_var_0 == 657) { _res_key_if_0 = arr[i] != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 658) { _res_key_if_0 = arr[i] != std::max( arr[min],min ); }
      if(env_var_0 == 659) { _res_key_if_0 = arr[i] != std::max( arr[min],n ); }
      if(env_var_0 == 660) { _res_key_if_0 = arr[i] != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 661) { _res_key_if_0 = arr[i] != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 662) { _res_key_if_0 = arr[i] != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 663) { _res_key_if_0 = arr[i] != std::max( arr[n],i ); }
      if(env_var_0 == 664) { _res_key_if_0 = arr[i] != std::max( arr[n],jumps ); }
      if(env_var_0 == 665) { _res_key_if_0 = arr[i] != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 666) { _res_key_if_0 = arr[i] != std::max( arr[n],min ); }
      if(env_var_0 == 667) { _res_key_if_0 = arr[i] != std::max( arr[n],n ); }
      if(env_var_0 == 668) { _res_key_if_0 = arr[i] != std::max( i,arr[i] ); }
      if(env_var_0 == 669) { _res_key_if_0 = arr[i] != std::max( i,arr[min] ); }
      if(env_var_0 == 670) { _res_key_if_0 = arr[i] != std::max( i,arr[n] ); }
      if(env_var_0 == 671) { _res_key_if_0 = arr[i] != std::max( i,i ); }
      if(env_var_0 == 672) { _res_key_if_0 = arr[i] != std::max( i,jumps ); }
      if(env_var_0 == 673) { _res_key_if_0 = arr[i] != std::max( i,jumps[i] ); }
      if(env_var_0 == 674) { _res_key_if_0 = arr[i] != std::max( i,min ); }
      if(env_var_0 == 675) { _res_key_if_0 = arr[i] != std::max( i,n ); }
      if(env_var_0 == 676) { _res_key_if_0 = arr[i] != std::max( jumps,arr[i] ); }
      if(env_var_0 == 677) { _res_key_if_0 = arr[i] != std::max( jumps,arr[min] ); }
      if(env_var_0 == 678) { _res_key_if_0 = arr[i] != std::max( jumps,arr[n] ); }
      if(env_var_0 == 679) { _res_key_if_0 = arr[i] != std::max( jumps,i ); }
      if(env_var_0 == 680) { _res_key_if_0 = arr[i] != std::max( jumps,jumps ); }
      if(env_var_0 == 681) { _res_key_if_0 = arr[i] != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 682) { _res_key_if_0 = arr[i] != std::max( jumps,min ); }
      if(env_var_0 == 683) { _res_key_if_0 = arr[i] != std::max( jumps,n ); }
      if(env_var_0 == 684) { _res_key_if_0 = arr[i] != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 685) { _res_key_if_0 = arr[i] != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 686) { _res_key_if_0 = arr[i] != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 687) { _res_key_if_0 = arr[i] != std::max( jumps[i],i ); }
      if(env_var_0 == 688) { _res_key_if_0 = arr[i] != std::max( jumps[i],jumps ); }
      if(env_var_0 == 689) { _res_key_if_0 = arr[i] != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 690) { _res_key_if_0 = arr[i] != std::max( jumps[i],min ); }
      if(env_var_0 == 691) { _res_key_if_0 = arr[i] != std::max( jumps[i],n ); }
      if(env_var_0 == 692) { _res_key_if_0 = arr[i] != std::max( min,arr[i] ); }
      if(env_var_0 == 693) { _res_key_if_0 = arr[i] != std::max( min,arr[min] ); }
      if(env_var_0 == 694) { _res_key_if_0 = arr[i] != std::max( min,arr[n] ); }
      if(env_var_0 == 695) { _res_key_if_0 = arr[i] != std::max( min,i ); }
      if(env_var_0 == 696) { _res_key_if_0 = arr[i] != std::max( min,jumps ); }
      if(env_var_0 == 697) { _res_key_if_0 = arr[i] != std::max( min,jumps[i] ); }
      if(env_var_0 == 698) { _res_key_if_0 = arr[i] != std::max( min,min ); }
      if(env_var_0 == 699) { _res_key_if_0 = arr[i] != std::max( min,n ); }
      if(env_var_0 == 700) { _res_key_if_0 = arr[i] != std::max( n,arr[i] ); }
      if(env_var_0 == 701) { _res_key_if_0 = arr[i] != std::max( n,arr[min] ); }
      if(env_var_0 == 702) { _res_key_if_0 = arr[i] != std::max( n,arr[n] ); }
      if(env_var_0 == 703) { _res_key_if_0 = arr[i] != std::max( n,i ); }
      if(env_var_0 == 704) { _res_key_if_0 = arr[i] != std::max( n,jumps ); }
      if(env_var_0 == 705) { _res_key_if_0 = arr[i] != std::max( n,jumps[i] ); }
      if(env_var_0 == 706) { _res_key_if_0 = arr[i] != std::max( n,min ); }
      if(env_var_0 == 707) { _res_key_if_0 = arr[i] != std::max( n,n ); }
      if(env_var_0 == 708) { _res_key_if_0 = arr[i] != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 709) { _res_key_if_0 = arr[i] != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 710) { _res_key_if_0 = arr[i] != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 711) { _res_key_if_0 = arr[i] != std::min( arr[i],i ); }
      if(env_var_0 == 712) { _res_key_if_0 = arr[i] != std::min( arr[i],jumps ); }
      if(env_var_0 == 713) { _res_key_if_0 = arr[i] != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 714) { _res_key_if_0 = arr[i] != std::min( arr[i],min ); }
      if(env_var_0 == 715) { _res_key_if_0 = arr[i] != std::min( arr[i],n ); }
      if(env_var_0 == 716) { _res_key_if_0 = arr[i] != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 717) { _res_key_if_0 = arr[i] != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 718) { _res_key_if_0 = arr[i] != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 719) { _res_key_if_0 = arr[i] != std::min( arr[min],i ); }
      if(env_var_0 == 720) { _res_key_if_0 = arr[i] != std::min( arr[min],jumps ); }
      if(env_var_0 == 721) { _res_key_if_0 = arr[i] != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 722) { _res_key_if_0 = arr[i] != std::min( arr[min],min ); }
      if(env_var_0 == 723) { _res_key_if_0 = arr[i] != std::min( arr[min],n ); }
      if(env_var_0 == 724) { _res_key_if_0 = arr[i] != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 725) { _res_key_if_0 = arr[i] != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 726) { _res_key_if_0 = arr[i] != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 727) { _res_key_if_0 = arr[i] != std::min( arr[n],i ); }
      if(env_var_0 == 728) { _res_key_if_0 = arr[i] != std::min( arr[n],jumps ); }
      if(env_var_0 == 729) { _res_key_if_0 = arr[i] != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 730) { _res_key_if_0 = arr[i] != std::min( arr[n],min ); }
      if(env_var_0 == 731) { _res_key_if_0 = arr[i] != std::min( arr[n],n ); }
      if(env_var_0 == 732) { _res_key_if_0 = arr[i] != std::min( i,arr[i] ); }
      if(env_var_0 == 733) { _res_key_if_0 = arr[i] != std::min( i,arr[min] ); }
      if(env_var_0 == 734) { _res_key_if_0 = arr[i] != std::min( i,arr[n] ); }
      if(env_var_0 == 735) { _res_key_if_0 = arr[i] != std::min( i,i ); }
      if(env_var_0 == 736) { _res_key_if_0 = arr[i] != std::min( i,jumps ); }
      if(env_var_0 == 737) { _res_key_if_0 = arr[i] != std::min( i,jumps[i] ); }
      if(env_var_0 == 738) { _res_key_if_0 = arr[i] != std::min( i,min ); }
      if(env_var_0 == 739) { _res_key_if_0 = arr[i] != std::min( i,n ); }
      if(env_var_0 == 740) { _res_key_if_0 = arr[i] != std::min( jumps,arr[i] ); }
      if(env_var_0 == 741) { _res_key_if_0 = arr[i] != std::min( jumps,arr[min] ); }
      if(env_var_0 == 742) { _res_key_if_0 = arr[i] != std::min( jumps,arr[n] ); }
      if(env_var_0 == 743) { _res_key_if_0 = arr[i] != std::min( jumps,i ); }
      if(env_var_0 == 744) { _res_key_if_0 = arr[i] != std::min( jumps,jumps ); }
      if(env_var_0 == 745) { _res_key_if_0 = arr[i] != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 746) { _res_key_if_0 = arr[i] != std::min( jumps,min ); }
      if(env_var_0 == 747) { _res_key_if_0 = arr[i] != std::min( jumps,n ); }
      if(env_var_0 == 748) { _res_key_if_0 = arr[i] != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 749) { _res_key_if_0 = arr[i] != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 750) { _res_key_if_0 = arr[i] != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 751) { _res_key_if_0 = arr[i] != std::min( jumps[i],i ); }
      if(env_var_0 == 752) { _res_key_if_0 = arr[i] != std::min( jumps[i],jumps ); }
      if(env_var_0 == 753) { _res_key_if_0 = arr[i] != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 754) { _res_key_if_0 = arr[i] != std::min( jumps[i],min ); }
      if(env_var_0 == 755) { _res_key_if_0 = arr[i] != std::min( jumps[i],n ); }
      if(env_var_0 == 756) { _res_key_if_0 = arr[i] != std::min( min,arr[i] ); }
      if(env_var_0 == 757) { _res_key_if_0 = arr[i] != std::min( min,arr[min] ); }
      if(env_var_0 == 758) { _res_key_if_0 = arr[i] != std::min( min,arr[n] ); }
      if(env_var_0 == 759) { _res_key_if_0 = arr[i] != std::min( min,i ); }
      if(env_var_0 == 760) { _res_key_if_0 = arr[i] != std::min( min,jumps ); }
      if(env_var_0 == 761) { _res_key_if_0 = arr[i] != std::min( min,jumps[i] ); }
      if(env_var_0 == 762) { _res_key_if_0 = arr[i] != std::min( min,min ); }
      if(env_var_0 == 763) { _res_key_if_0 = arr[i] != std::min( min,n ); }
      if(env_var_0 == 764) { _res_key_if_0 = arr[i] != std::min( n,arr[i] ); }
      if(env_var_0 == 765) { _res_key_if_0 = arr[i] != std::min( n,arr[min] ); }
      if(env_var_0 == 766) { _res_key_if_0 = arr[i] != std::min( n,arr[n] ); }
      if(env_var_0 == 767) { _res_key_if_0 = arr[i] != std::min( n,i ); }
      if(env_var_0 == 768) { _res_key_if_0 = arr[i] != std::min( n,jumps ); }
      if(env_var_0 == 769) { _res_key_if_0 = arr[i] != std::min( n,jumps[i] ); }
      if(env_var_0 == 770) { _res_key_if_0 = arr[i] != std::min( n,min ); }
      if(env_var_0 == 771) { _res_key_if_0 = arr[i] != std::min( n,n ); }
      if(env_var_0 == 772) { _res_key_if_0 = arr[i] != toupper( arr[i] ); }
      if(env_var_0 == 773) { _res_key_if_0 = arr[i] != toupper( arr[min] ); }
      if(env_var_0 == 774) { _res_key_if_0 = arr[i] != toupper( arr[n] ); }
      if(env_var_0 == 775) { _res_key_if_0 = arr[i] != toupper( i ); }
      if(env_var_0 == 776) { _res_key_if_0 = arr[i] != toupper( jumps ); }
      if(env_var_0 == 777) { _res_key_if_0 = arr[i] != toupper( jumps[i] ); }
      if(env_var_0 == 778) { _res_key_if_0 = arr[i] != toupper( min ); }
      if(env_var_0 == 779) { _res_key_if_0 = arr[i] != toupper( n ); }
      if(env_var_0 == 780) { _res_key_if_0 = arr[min] != arr; }
      if(env_var_0 == 781) { _res_key_if_0 = arr[min] != arr+i; }
      if(env_var_0 == 782) { _res_key_if_0 = arr[min] != arr+min; }
      if(env_var_0 == 783) { _res_key_if_0 = arr[min] != arr+n; }
      if(env_var_0 == 784) { _res_key_if_0 = arr[min] != arr[i]; }
      if(env_var_0 == 785) { _res_key_if_0 = arr[min] != arr[min]; }
      if(env_var_0 == 786) { _res_key_if_0 = arr[min] != arr[n]; }
      if(env_var_0 == 787) { _res_key_if_0 = arr[min] != i; }
      if(env_var_0 == 788) { _res_key_if_0 = arr[min] != isupper( arr[i] ); }
      if(env_var_0 == 789) { _res_key_if_0 = arr[min] != isupper( arr[min] ); }
      if(env_var_0 == 790) { _res_key_if_0 = arr[min] != isupper( arr[n] ); }
      if(env_var_0 == 791) { _res_key_if_0 = arr[min] != isupper( i ); }
      if(env_var_0 == 792) { _res_key_if_0 = arr[min] != isupper( jumps ); }
      if(env_var_0 == 793) { _res_key_if_0 = arr[min] != isupper( jumps[i] ); }
      if(env_var_0 == 794) { _res_key_if_0 = arr[min] != isupper( min ); }
      if(env_var_0 == 795) { _res_key_if_0 = arr[min] != isupper( n ); }
      if(env_var_0 == 796) { _res_key_if_0 = arr[min] != jumps; }
      if(env_var_0 == 797) { _res_key_if_0 = arr[min] != jumps[i]; }
      if(env_var_0 == 798) { _res_key_if_0 = arr[min] != min; }
      if(env_var_0 == 799) { _res_key_if_0 = arr[min] != n; }
      if(env_var_0 == 800) { _res_key_if_0 = arr[min] != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 801) { _res_key_if_0 = arr[min] != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 802) { _res_key_if_0 = arr[min] != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 803) { _res_key_if_0 = arr[min] != std::max( arr[i],i ); }
      if(env_var_0 == 804) { _res_key_if_0 = arr[min] != std::max( arr[i],jumps ); }
      if(env_var_0 == 805) { _res_key_if_0 = arr[min] != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 806) { _res_key_if_0 = arr[min] != std::max( arr[i],min ); }
      if(env_var_0 == 807) { _res_key_if_0 = arr[min] != std::max( arr[i],n ); }
      if(env_var_0 == 808) { _res_key_if_0 = arr[min] != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 809) { _res_key_if_0 = arr[min] != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 810) { _res_key_if_0 = arr[min] != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 811) { _res_key_if_0 = arr[min] != std::max( arr[min],i ); }
      if(env_var_0 == 812) { _res_key_if_0 = arr[min] != std::max( arr[min],jumps ); }
      if(env_var_0 == 813) { _res_key_if_0 = arr[min] != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 814) { _res_key_if_0 = arr[min] != std::max( arr[min],min ); }
      if(env_var_0 == 815) { _res_key_if_0 = arr[min] != std::max( arr[min],n ); }
      if(env_var_0 == 816) { _res_key_if_0 = arr[min] != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 817) { _res_key_if_0 = arr[min] != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 818) { _res_key_if_0 = arr[min] != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 819) { _res_key_if_0 = arr[min] != std::max( arr[n],i ); }
      if(env_var_0 == 820) { _res_key_if_0 = arr[min] != std::max( arr[n],jumps ); }
      if(env_var_0 == 821) { _res_key_if_0 = arr[min] != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 822) { _res_key_if_0 = arr[min] != std::max( arr[n],min ); }
      if(env_var_0 == 823) { _res_key_if_0 = arr[min] != std::max( arr[n],n ); }
      if(env_var_0 == 824) { _res_key_if_0 = arr[min] != std::max( i,arr[i] ); }
      if(env_var_0 == 825) { _res_key_if_0 = arr[min] != std::max( i,arr[min] ); }
      if(env_var_0 == 826) { _res_key_if_0 = arr[min] != std::max( i,arr[n] ); }
      if(env_var_0 == 827) { _res_key_if_0 = arr[min] != std::max( i,i ); }
      if(env_var_0 == 828) { _res_key_if_0 = arr[min] != std::max( i,jumps ); }
      if(env_var_0 == 829) { _res_key_if_0 = arr[min] != std::max( i,jumps[i] ); }
      if(env_var_0 == 830) { _res_key_if_0 = arr[min] != std::max( i,min ); }
      if(env_var_0 == 831) { _res_key_if_0 = arr[min] != std::max( i,n ); }
      if(env_var_0 == 832) { _res_key_if_0 = arr[min] != std::max( jumps,arr[i] ); }
      if(env_var_0 == 833) { _res_key_if_0 = arr[min] != std::max( jumps,arr[min] ); }
      if(env_var_0 == 834) { _res_key_if_0 = arr[min] != std::max( jumps,arr[n] ); }
      if(env_var_0 == 835) { _res_key_if_0 = arr[min] != std::max( jumps,i ); }
      if(env_var_0 == 836) { _res_key_if_0 = arr[min] != std::max( jumps,jumps ); }
      if(env_var_0 == 837) { _res_key_if_0 = arr[min] != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 838) { _res_key_if_0 = arr[min] != std::max( jumps,min ); }
      if(env_var_0 == 839) { _res_key_if_0 = arr[min] != std::max( jumps,n ); }
      if(env_var_0 == 840) { _res_key_if_0 = arr[min] != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 841) { _res_key_if_0 = arr[min] != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 842) { _res_key_if_0 = arr[min] != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 843) { _res_key_if_0 = arr[min] != std::max( jumps[i],i ); }
      if(env_var_0 == 844) { _res_key_if_0 = arr[min] != std::max( jumps[i],jumps ); }
      if(env_var_0 == 845) { _res_key_if_0 = arr[min] != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 846) { _res_key_if_0 = arr[min] != std::max( jumps[i],min ); }
      if(env_var_0 == 847) { _res_key_if_0 = arr[min] != std::max( jumps[i],n ); }
      if(env_var_0 == 848) { _res_key_if_0 = arr[min] != std::max( min,arr[i] ); }
      if(env_var_0 == 849) { _res_key_if_0 = arr[min] != std::max( min,arr[min] ); }
      if(env_var_0 == 850) { _res_key_if_0 = arr[min] != std::max( min,arr[n] ); }
      if(env_var_0 == 851) { _res_key_if_0 = arr[min] != std::max( min,i ); }
      if(env_var_0 == 852) { _res_key_if_0 = arr[min] != std::max( min,jumps ); }
      if(env_var_0 == 853) { _res_key_if_0 = arr[min] != std::max( min,jumps[i] ); }
      if(env_var_0 == 854) { _res_key_if_0 = arr[min] != std::max( min,min ); }
      if(env_var_0 == 855) { _res_key_if_0 = arr[min] != std::max( min,n ); }
      if(env_var_0 == 856) { _res_key_if_0 = arr[min] != std::max( n,arr[i] ); }
      if(env_var_0 == 857) { _res_key_if_0 = arr[min] != std::max( n,arr[min] ); }
      if(env_var_0 == 858) { _res_key_if_0 = arr[min] != std::max( n,arr[n] ); }
      if(env_var_0 == 859) { _res_key_if_0 = arr[min] != std::max( n,i ); }
      if(env_var_0 == 860) { _res_key_if_0 = arr[min] != std::max( n,jumps ); }
      if(env_var_0 == 861) { _res_key_if_0 = arr[min] != std::max( n,jumps[i] ); }
      if(env_var_0 == 862) { _res_key_if_0 = arr[min] != std::max( n,min ); }
      if(env_var_0 == 863) { _res_key_if_0 = arr[min] != std::max( n,n ); }
      if(env_var_0 == 864) { _res_key_if_0 = arr[min] != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 865) { _res_key_if_0 = arr[min] != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 866) { _res_key_if_0 = arr[min] != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 867) { _res_key_if_0 = arr[min] != std::min( arr[i],i ); }
      if(env_var_0 == 868) { _res_key_if_0 = arr[min] != std::min( arr[i],jumps ); }
      if(env_var_0 == 869) { _res_key_if_0 = arr[min] != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 870) { _res_key_if_0 = arr[min] != std::min( arr[i],min ); }
      if(env_var_0 == 871) { _res_key_if_0 = arr[min] != std::min( arr[i],n ); }
      if(env_var_0 == 872) { _res_key_if_0 = arr[min] != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 873) { _res_key_if_0 = arr[min] != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 874) { _res_key_if_0 = arr[min] != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 875) { _res_key_if_0 = arr[min] != std::min( arr[min],i ); }
      if(env_var_0 == 876) { _res_key_if_0 = arr[min] != std::min( arr[min],jumps ); }
      if(env_var_0 == 877) { _res_key_if_0 = arr[min] != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 878) { _res_key_if_0 = arr[min] != std::min( arr[min],min ); }
      if(env_var_0 == 879) { _res_key_if_0 = arr[min] != std::min( arr[min],n ); }
      if(env_var_0 == 880) { _res_key_if_0 = arr[min] != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 881) { _res_key_if_0 = arr[min] != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 882) { _res_key_if_0 = arr[min] != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 883) { _res_key_if_0 = arr[min] != std::min( arr[n],i ); }
      if(env_var_0 == 884) { _res_key_if_0 = arr[min] != std::min( arr[n],jumps ); }
      if(env_var_0 == 885) { _res_key_if_0 = arr[min] != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 886) { _res_key_if_0 = arr[min] != std::min( arr[n],min ); }
      if(env_var_0 == 887) { _res_key_if_0 = arr[min] != std::min( arr[n],n ); }
      if(env_var_0 == 888) { _res_key_if_0 = arr[min] != std::min( i,arr[i] ); }
      if(env_var_0 == 889) { _res_key_if_0 = arr[min] != std::min( i,arr[min] ); }
      if(env_var_0 == 890) { _res_key_if_0 = arr[min] != std::min( i,arr[n] ); }
      if(env_var_0 == 891) { _res_key_if_0 = arr[min] != std::min( i,i ); }
      if(env_var_0 == 892) { _res_key_if_0 = arr[min] != std::min( i,jumps ); }
      if(env_var_0 == 893) { _res_key_if_0 = arr[min] != std::min( i,jumps[i] ); }
      if(env_var_0 == 894) { _res_key_if_0 = arr[min] != std::min( i,min ); }
      if(env_var_0 == 895) { _res_key_if_0 = arr[min] != std::min( i,n ); }
      if(env_var_0 == 896) { _res_key_if_0 = arr[min] != std::min( jumps,arr[i] ); }
      if(env_var_0 == 897) { _res_key_if_0 = arr[min] != std::min( jumps,arr[min] ); }
      if(env_var_0 == 898) { _res_key_if_0 = arr[min] != std::min( jumps,arr[n] ); }
      if(env_var_0 == 899) { _res_key_if_0 = arr[min] != std::min( jumps,i ); }
      if(env_var_0 == 900) { _res_key_if_0 = arr[min] != std::min( jumps,jumps ); }
      if(env_var_0 == 901) { _res_key_if_0 = arr[min] != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 902) { _res_key_if_0 = arr[min] != std::min( jumps,min ); }
      if(env_var_0 == 903) { _res_key_if_0 = arr[min] != std::min( jumps,n ); }
      if(env_var_0 == 904) { _res_key_if_0 = arr[min] != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 905) { _res_key_if_0 = arr[min] != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 906) { _res_key_if_0 = arr[min] != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 907) { _res_key_if_0 = arr[min] != std::min( jumps[i],i ); }
      if(env_var_0 == 908) { _res_key_if_0 = arr[min] != std::min( jumps[i],jumps ); }
      if(env_var_0 == 909) { _res_key_if_0 = arr[min] != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 910) { _res_key_if_0 = arr[min] != std::min( jumps[i],min ); }
      if(env_var_0 == 911) { _res_key_if_0 = arr[min] != std::min( jumps[i],n ); }
      if(env_var_0 == 912) { _res_key_if_0 = arr[min] != std::min( min,arr[i] ); }
      if(env_var_0 == 913) { _res_key_if_0 = arr[min] != std::min( min,arr[min] ); }
      if(env_var_0 == 914) { _res_key_if_0 = arr[min] != std::min( min,arr[n] ); }
      if(env_var_0 == 915) { _res_key_if_0 = arr[min] != std::min( min,i ); }
      if(env_var_0 == 916) { _res_key_if_0 = arr[min] != std::min( min,jumps ); }
      if(env_var_0 == 917) { _res_key_if_0 = arr[min] != std::min( min,jumps[i] ); }
      if(env_var_0 == 918) { _res_key_if_0 = arr[min] != std::min( min,min ); }
      if(env_var_0 == 919) { _res_key_if_0 = arr[min] != std::min( min,n ); }
      if(env_var_0 == 920) { _res_key_if_0 = arr[min] != std::min( n,arr[i] ); }
      if(env_var_0 == 921) { _res_key_if_0 = arr[min] != std::min( n,arr[min] ); }
      if(env_var_0 == 922) { _res_key_if_0 = arr[min] != std::min( n,arr[n] ); }
      if(env_var_0 == 923) { _res_key_if_0 = arr[min] != std::min( n,i ); }
      if(env_var_0 == 924) { _res_key_if_0 = arr[min] != std::min( n,jumps ); }
      if(env_var_0 == 925) { _res_key_if_0 = arr[min] != std::min( n,jumps[i] ); }
      if(env_var_0 == 926) { _res_key_if_0 = arr[min] != std::min( n,min ); }
      if(env_var_0 == 927) { _res_key_if_0 = arr[min] != std::min( n,n ); }
      if(env_var_0 == 928) { _res_key_if_0 = arr[min] != toupper( arr[i] ); }
      if(env_var_0 == 929) { _res_key_if_0 = arr[min] != toupper( arr[min] ); }
      if(env_var_0 == 930) { _res_key_if_0 = arr[min] != toupper( arr[n] ); }
      if(env_var_0 == 931) { _res_key_if_0 = arr[min] != toupper( i ); }
      if(env_var_0 == 932) { _res_key_if_0 = arr[min] != toupper( jumps ); }
      if(env_var_0 == 933) { _res_key_if_0 = arr[min] != toupper( jumps[i] ); }
      if(env_var_0 == 934) { _res_key_if_0 = arr[min] != toupper( min ); }
      if(env_var_0 == 935) { _res_key_if_0 = arr[min] != toupper( n ); }
      if(env_var_0 == 936) { _res_key_if_0 = arr[n] != arr; }
      if(env_var_0 == 937) { _res_key_if_0 = arr[n] != arr+i; }
      if(env_var_0 == 938) { _res_key_if_0 = arr[n] != arr+min; }
      if(env_var_0 == 939) { _res_key_if_0 = arr[n] != arr+n; }
      if(env_var_0 == 940) { _res_key_if_0 = arr[n] != arr[i]; }
      if(env_var_0 == 941) { _res_key_if_0 = arr[n] != arr[min]; }
      if(env_var_0 == 942) { _res_key_if_0 = arr[n] != arr[n]; }
      if(env_var_0 == 943) { _res_key_if_0 = arr[n] != i; }
      if(env_var_0 == 944) { _res_key_if_0 = arr[n] != isupper( arr[i] ); }
      if(env_var_0 == 945) { _res_key_if_0 = arr[n] != isupper( arr[min] ); }
      if(env_var_0 == 946) { _res_key_if_0 = arr[n] != isupper( arr[n] ); }
      if(env_var_0 == 947) { _res_key_if_0 = arr[n] != isupper( i ); }
      if(env_var_0 == 948) { _res_key_if_0 = arr[n] != isupper( jumps ); }
      if(env_var_0 == 949) { _res_key_if_0 = arr[n] != isupper( jumps[i] ); }
      if(env_var_0 == 950) { _res_key_if_0 = arr[n] != isupper( min ); }
      if(env_var_0 == 951) { _res_key_if_0 = arr[n] != isupper( n ); }
      if(env_var_0 == 952) { _res_key_if_0 = arr[n] != jumps; }
      if(env_var_0 == 953) { _res_key_if_0 = arr[n] != jumps[i]; }
      if(env_var_0 == 954) { _res_key_if_0 = arr[n] != min; }
      if(env_var_0 == 955) { _res_key_if_0 = arr[n] != n; }
      if(env_var_0 == 956) { _res_key_if_0 = arr[n] != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 957) { _res_key_if_0 = arr[n] != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 958) { _res_key_if_0 = arr[n] != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 959) { _res_key_if_0 = arr[n] != std::max( arr[i],i ); }
      if(env_var_0 == 960) { _res_key_if_0 = arr[n] != std::max( arr[i],jumps ); }
      if(env_var_0 == 961) { _res_key_if_0 = arr[n] != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 962) { _res_key_if_0 = arr[n] != std::max( arr[i],min ); }
      if(env_var_0 == 963) { _res_key_if_0 = arr[n] != std::max( arr[i],n ); }
      if(env_var_0 == 964) { _res_key_if_0 = arr[n] != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 965) { _res_key_if_0 = arr[n] != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 966) { _res_key_if_0 = arr[n] != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 967) { _res_key_if_0 = arr[n] != std::max( arr[min],i ); }
      if(env_var_0 == 968) { _res_key_if_0 = arr[n] != std::max( arr[min],jumps ); }
      if(env_var_0 == 969) { _res_key_if_0 = arr[n] != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 970) { _res_key_if_0 = arr[n] != std::max( arr[min],min ); }
      if(env_var_0 == 971) { _res_key_if_0 = arr[n] != std::max( arr[min],n ); }
      if(env_var_0 == 972) { _res_key_if_0 = arr[n] != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 973) { _res_key_if_0 = arr[n] != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 974) { _res_key_if_0 = arr[n] != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 975) { _res_key_if_0 = arr[n] != std::max( arr[n],i ); }
      if(env_var_0 == 976) { _res_key_if_0 = arr[n] != std::max( arr[n],jumps ); }
      if(env_var_0 == 977) { _res_key_if_0 = arr[n] != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 978) { _res_key_if_0 = arr[n] != std::max( arr[n],min ); }
      if(env_var_0 == 979) { _res_key_if_0 = arr[n] != std::max( arr[n],n ); }
      if(env_var_0 == 980) { _res_key_if_0 = arr[n] != std::max( i,arr[i] ); }
      if(env_var_0 == 981) { _res_key_if_0 = arr[n] != std::max( i,arr[min] ); }
      if(env_var_0 == 982) { _res_key_if_0 = arr[n] != std::max( i,arr[n] ); }
      if(env_var_0 == 983) { _res_key_if_0 = arr[n] != std::max( i,i ); }
      if(env_var_0 == 984) { _res_key_if_0 = arr[n] != std::max( i,jumps ); }
      if(env_var_0 == 985) { _res_key_if_0 = arr[n] != std::max( i,jumps[i] ); }
      if(env_var_0 == 986) { _res_key_if_0 = arr[n] != std::max( i,min ); }
      if(env_var_0 == 987) { _res_key_if_0 = arr[n] != std::max( i,n ); }
      if(env_var_0 == 988) { _res_key_if_0 = arr[n] != std::max( jumps,arr[i] ); }
      if(env_var_0 == 989) { _res_key_if_0 = arr[n] != std::max( jumps,arr[min] ); }
      if(env_var_0 == 990) { _res_key_if_0 = arr[n] != std::max( jumps,arr[n] ); }
      if(env_var_0 == 991) { _res_key_if_0 = arr[n] != std::max( jumps,i ); }
      if(env_var_0 == 992) { _res_key_if_0 = arr[n] != std::max( jumps,jumps ); }
      if(env_var_0 == 993) { _res_key_if_0 = arr[n] != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 994) { _res_key_if_0 = arr[n] != std::max( jumps,min ); }
      if(env_var_0 == 995) { _res_key_if_0 = arr[n] != std::max( jumps,n ); }
      if(env_var_0 == 996) { _res_key_if_0 = arr[n] != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 997) { _res_key_if_0 = arr[n] != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 998) { _res_key_if_0 = arr[n] != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 999) { _res_key_if_0 = arr[n] != std::max( jumps[i],i ); }
      if(env_var_0 == 1000) { _res_key_if_0 = arr[n] != std::max( jumps[i],jumps ); }
      if(env_var_0 == 1001) { _res_key_if_0 = arr[n] != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 1002) { _res_key_if_0 = arr[n] != std::max( jumps[i],min ); }
      if(env_var_0 == 1003) { _res_key_if_0 = arr[n] != std::max( jumps[i],n ); }
      if(env_var_0 == 1004) { _res_key_if_0 = arr[n] != std::max( min,arr[i] ); }
      if(env_var_0 == 1005) { _res_key_if_0 = arr[n] != std::max( min,arr[min] ); }
      if(env_var_0 == 1006) { _res_key_if_0 = arr[n] != std::max( min,arr[n] ); }
      if(env_var_0 == 1007) { _res_key_if_0 = arr[n] != std::max( min,i ); }
      if(env_var_0 == 1008) { _res_key_if_0 = arr[n] != std::max( min,jumps ); }
      if(env_var_0 == 1009) { _res_key_if_0 = arr[n] != std::max( min,jumps[i] ); }
      if(env_var_0 == 1010) { _res_key_if_0 = arr[n] != std::max( min,min ); }
      if(env_var_0 == 1011) { _res_key_if_0 = arr[n] != std::max( min,n ); }
      if(env_var_0 == 1012) { _res_key_if_0 = arr[n] != std::max( n,arr[i] ); }
      if(env_var_0 == 1013) { _res_key_if_0 = arr[n] != std::max( n,arr[min] ); }
      if(env_var_0 == 1014) { _res_key_if_0 = arr[n] != std::max( n,arr[n] ); }
      if(env_var_0 == 1015) { _res_key_if_0 = arr[n] != std::max( n,i ); }
      if(env_var_0 == 1016) { _res_key_if_0 = arr[n] != std::max( n,jumps ); }
      if(env_var_0 == 1017) { _res_key_if_0 = arr[n] != std::max( n,jumps[i] ); }
      if(env_var_0 == 1018) { _res_key_if_0 = arr[n] != std::max( n,min ); }
      if(env_var_0 == 1019) { _res_key_if_0 = arr[n] != std::max( n,n ); }
      if(env_var_0 == 1020) { _res_key_if_0 = arr[n] != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 1021) { _res_key_if_0 = arr[n] != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 1022) { _res_key_if_0 = arr[n] != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 1023) { _res_key_if_0 = arr[n] != std::min( arr[i],i ); }
      if(env_var_0 == 1024) { _res_key_if_0 = arr[n] != std::min( arr[i],jumps ); }
      if(env_var_0 == 1025) { _res_key_if_0 = arr[n] != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 1026) { _res_key_if_0 = arr[n] != std::min( arr[i],min ); }
      if(env_var_0 == 1027) { _res_key_if_0 = arr[n] != std::min( arr[i],n ); }
      if(env_var_0 == 1028) { _res_key_if_0 = arr[n] != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 1029) { _res_key_if_0 = arr[n] != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 1030) { _res_key_if_0 = arr[n] != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 1031) { _res_key_if_0 = arr[n] != std::min( arr[min],i ); }
      if(env_var_0 == 1032) { _res_key_if_0 = arr[n] != std::min( arr[min],jumps ); }
      if(env_var_0 == 1033) { _res_key_if_0 = arr[n] != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 1034) { _res_key_if_0 = arr[n] != std::min( arr[min],min ); }
      if(env_var_0 == 1035) { _res_key_if_0 = arr[n] != std::min( arr[min],n ); }
      if(env_var_0 == 1036) { _res_key_if_0 = arr[n] != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 1037) { _res_key_if_0 = arr[n] != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 1038) { _res_key_if_0 = arr[n] != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 1039) { _res_key_if_0 = arr[n] != std::min( arr[n],i ); }
      if(env_var_0 == 1040) { _res_key_if_0 = arr[n] != std::min( arr[n],jumps ); }
      if(env_var_0 == 1041) { _res_key_if_0 = arr[n] != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 1042) { _res_key_if_0 = arr[n] != std::min( arr[n],min ); }
      if(env_var_0 == 1043) { _res_key_if_0 = arr[n] != std::min( arr[n],n ); }
      if(env_var_0 == 1044) { _res_key_if_0 = arr[n] != std::min( i,arr[i] ); }
      if(env_var_0 == 1045) { _res_key_if_0 = arr[n] != std::min( i,arr[min] ); }
      if(env_var_0 == 1046) { _res_key_if_0 = arr[n] != std::min( i,arr[n] ); }
      if(env_var_0 == 1047) { _res_key_if_0 = arr[n] != std::min( i,i ); }
      if(env_var_0 == 1048) { _res_key_if_0 = arr[n] != std::min( i,jumps ); }
      if(env_var_0 == 1049) { _res_key_if_0 = arr[n] != std::min( i,jumps[i] ); }
      if(env_var_0 == 1050) { _res_key_if_0 = arr[n] != std::min( i,min ); }
      if(env_var_0 == 1051) { _res_key_if_0 = arr[n] != std::min( i,n ); }
      if(env_var_0 == 1052) { _res_key_if_0 = arr[n] != std::min( jumps,arr[i] ); }
      if(env_var_0 == 1053) { _res_key_if_0 = arr[n] != std::min( jumps,arr[min] ); }
      if(env_var_0 == 1054) { _res_key_if_0 = arr[n] != std::min( jumps,arr[n] ); }
      if(env_var_0 == 1055) { _res_key_if_0 = arr[n] != std::min( jumps,i ); }
      if(env_var_0 == 1056) { _res_key_if_0 = arr[n] != std::min( jumps,jumps ); }
      if(env_var_0 == 1057) { _res_key_if_0 = arr[n] != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 1058) { _res_key_if_0 = arr[n] != std::min( jumps,min ); }
      if(env_var_0 == 1059) { _res_key_if_0 = arr[n] != std::min( jumps,n ); }
      if(env_var_0 == 1060) { _res_key_if_0 = arr[n] != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 1061) { _res_key_if_0 = arr[n] != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 1062) { _res_key_if_0 = arr[n] != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 1063) { _res_key_if_0 = arr[n] != std::min( jumps[i],i ); }
      if(env_var_0 == 1064) { _res_key_if_0 = arr[n] != std::min( jumps[i],jumps ); }
      if(env_var_0 == 1065) { _res_key_if_0 = arr[n] != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 1066) { _res_key_if_0 = arr[n] != std::min( jumps[i],min ); }
      if(env_var_0 == 1067) { _res_key_if_0 = arr[n] != std::min( jumps[i],n ); }
      if(env_var_0 == 1068) { _res_key_if_0 = arr[n] != std::min( min,arr[i] ); }
      if(env_var_0 == 1069) { _res_key_if_0 = arr[n] != std::min( min,arr[min] ); }
      if(env_var_0 == 1070) { _res_key_if_0 = arr[n] != std::min( min,arr[n] ); }
      if(env_var_0 == 1071) { _res_key_if_0 = arr[n] != std::min( min,i ); }
      if(env_var_0 == 1072) { _res_key_if_0 = arr[n] != std::min( min,jumps ); }
      if(env_var_0 == 1073) { _res_key_if_0 = arr[n] != std::min( min,jumps[i] ); }
      if(env_var_0 == 1074) { _res_key_if_0 = arr[n] != std::min( min,min ); }
      if(env_var_0 == 1075) { _res_key_if_0 = arr[n] != std::min( min,n ); }
      if(env_var_0 == 1076) { _res_key_if_0 = arr[n] != std::min( n,arr[i] ); }
      if(env_var_0 == 1077) { _res_key_if_0 = arr[n] != std::min( n,arr[min] ); }
      if(env_var_0 == 1078) { _res_key_if_0 = arr[n] != std::min( n,arr[n] ); }
      if(env_var_0 == 1079) { _res_key_if_0 = arr[n] != std::min( n,i ); }
      if(env_var_0 == 1080) { _res_key_if_0 = arr[n] != std::min( n,jumps ); }
      if(env_var_0 == 1081) { _res_key_if_0 = arr[n] != std::min( n,jumps[i] ); }
      if(env_var_0 == 1082) { _res_key_if_0 = arr[n] != std::min( n,min ); }
      if(env_var_0 == 1083) { _res_key_if_0 = arr[n] != std::min( n,n ); }
      if(env_var_0 == 1084) { _res_key_if_0 = arr[n] != toupper( arr[i] ); }
      if(env_var_0 == 1085) { _res_key_if_0 = arr[n] != toupper( arr[min] ); }
      if(env_var_0 == 1086) { _res_key_if_0 = arr[n] != toupper( arr[n] ); }
      if(env_var_0 == 1087) { _res_key_if_0 = arr[n] != toupper( i ); }
      if(env_var_0 == 1088) { _res_key_if_0 = arr[n] != toupper( jumps ); }
      if(env_var_0 == 1089) { _res_key_if_0 = arr[n] != toupper( jumps[i] ); }
      if(env_var_0 == 1090) { _res_key_if_0 = arr[n] != toupper( min ); }
      if(env_var_0 == 1091) { _res_key_if_0 = arr[n] != toupper( n ); }
      if(env_var_0 == 1092) { _res_key_if_0 = i != arr; }
      if(env_var_0 == 1093) { _res_key_if_0 = i != arr+i; }
      if(env_var_0 == 1094) { _res_key_if_0 = i != arr+min; }
      if(env_var_0 == 1095) { _res_key_if_0 = i != arr+n; }
      if(env_var_0 == 1096) { _res_key_if_0 = i != arr[i]; }
      if(env_var_0 == 1097) { _res_key_if_0 = i != arr[min]; }
      if(env_var_0 == 1098) { _res_key_if_0 = i != arr[n]; }
      if(env_var_0 == 1099) { _res_key_if_0 = i != i; }
      if(env_var_0 == 1100) { _res_key_if_0 = i != isupper( arr[i] ); }
      if(env_var_0 == 1101) { _res_key_if_0 = i != isupper( arr[min] ); }
      if(env_var_0 == 1102) { _res_key_if_0 = i != isupper( arr[n] ); }
      if(env_var_0 == 1103) { _res_key_if_0 = i != isupper( i ); }
      if(env_var_0 == 1104) { _res_key_if_0 = i != isupper( jumps ); }
      if(env_var_0 == 1105) { _res_key_if_0 = i != isupper( jumps[i] ); }
      if(env_var_0 == 1106) { _res_key_if_0 = i != isupper( min ); }
      if(env_var_0 == 1107) { _res_key_if_0 = i != isupper( n ); }
      if(env_var_0 == 1108) { _res_key_if_0 = i != jumps; }
      if(env_var_0 == 1109) { _res_key_if_0 = i != jumps[i]; }
      if(env_var_0 == 1110) { _res_key_if_0 = i != min; }
      if(env_var_0 == 1111) { _res_key_if_0 = i != n; }
      if(env_var_0 == 1112) { _res_key_if_0 = i != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 1113) { _res_key_if_0 = i != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 1114) { _res_key_if_0 = i != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 1115) { _res_key_if_0 = i != std::max( arr[i],i ); }
      if(env_var_0 == 1116) { _res_key_if_0 = i != std::max( arr[i],jumps ); }
      if(env_var_0 == 1117) { _res_key_if_0 = i != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 1118) { _res_key_if_0 = i != std::max( arr[i],min ); }
      if(env_var_0 == 1119) { _res_key_if_0 = i != std::max( arr[i],n ); }
      if(env_var_0 == 1120) { _res_key_if_0 = i != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 1121) { _res_key_if_0 = i != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 1122) { _res_key_if_0 = i != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 1123) { _res_key_if_0 = i != std::max( arr[min],i ); }
      if(env_var_0 == 1124) { _res_key_if_0 = i != std::max( arr[min],jumps ); }
      if(env_var_0 == 1125) { _res_key_if_0 = i != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 1126) { _res_key_if_0 = i != std::max( arr[min],min ); }
      if(env_var_0 == 1127) { _res_key_if_0 = i != std::max( arr[min],n ); }
      if(env_var_0 == 1128) { _res_key_if_0 = i != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 1129) { _res_key_if_0 = i != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 1130) { _res_key_if_0 = i != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 1131) { _res_key_if_0 = i != std::max( arr[n],i ); }
      if(env_var_0 == 1132) { _res_key_if_0 = i != std::max( arr[n],jumps ); }
      if(env_var_0 == 1133) { _res_key_if_0 = i != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 1134) { _res_key_if_0 = i != std::max( arr[n],min ); }
      if(env_var_0 == 1135) { _res_key_if_0 = i != std::max( arr[n],n ); }
      if(env_var_0 == 1136) { _res_key_if_0 = i != std::max( i,arr[i] ); }
      if(env_var_0 == 1137) { _res_key_if_0 = i != std::max( i,arr[min] ); }
      if(env_var_0 == 1138) { _res_key_if_0 = i != std::max( i,arr[n] ); }
      if(env_var_0 == 1139) { _res_key_if_0 = i != std::max( i,i ); }
      if(env_var_0 == 1140) { _res_key_if_0 = i != std::max( i,jumps ); }
      if(env_var_0 == 1141) { _res_key_if_0 = i != std::max( i,jumps[i] ); }
      if(env_var_0 == 1142) { _res_key_if_0 = i != std::max( i,min ); }
      if(env_var_0 == 1143) { _res_key_if_0 = i != std::max( i,n ); }
      if(env_var_0 == 1144) { _res_key_if_0 = i != std::max( jumps,arr[i] ); }
      if(env_var_0 == 1145) { _res_key_if_0 = i != std::max( jumps,arr[min] ); }
      if(env_var_0 == 1146) { _res_key_if_0 = i != std::max( jumps,arr[n] ); }
      if(env_var_0 == 1147) { _res_key_if_0 = i != std::max( jumps,i ); }
      if(env_var_0 == 1148) { _res_key_if_0 = i != std::max( jumps,jumps ); }
      if(env_var_0 == 1149) { _res_key_if_0 = i != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 1150) { _res_key_if_0 = i != std::max( jumps,min ); }
      if(env_var_0 == 1151) { _res_key_if_0 = i != std::max( jumps,n ); }
      if(env_var_0 == 1152) { _res_key_if_0 = i != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 1153) { _res_key_if_0 = i != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 1154) { _res_key_if_0 = i != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 1155) { _res_key_if_0 = i != std::max( jumps[i],i ); }
      if(env_var_0 == 1156) { _res_key_if_0 = i != std::max( jumps[i],jumps ); }
      if(env_var_0 == 1157) { _res_key_if_0 = i != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 1158) { _res_key_if_0 = i != std::max( jumps[i],min ); }
      if(env_var_0 == 1159) { _res_key_if_0 = i != std::max( jumps[i],n ); }
      if(env_var_0 == 1160) { _res_key_if_0 = i != std::max( min,arr[i] ); }
      if(env_var_0 == 1161) { _res_key_if_0 = i != std::max( min,arr[min] ); }
      if(env_var_0 == 1162) { _res_key_if_0 = i != std::max( min,arr[n] ); }
      if(env_var_0 == 1163) { _res_key_if_0 = i != std::max( min,i ); }
      if(env_var_0 == 1164) { _res_key_if_0 = i != std::max( min,jumps ); }
      if(env_var_0 == 1165) { _res_key_if_0 = i != std::max( min,jumps[i] ); }
      if(env_var_0 == 1166) { _res_key_if_0 = i != std::max( min,min ); }
      if(env_var_0 == 1167) { _res_key_if_0 = i != std::max( min,n ); }
      if(env_var_0 == 1168) { _res_key_if_0 = i != std::max( n,arr[i] ); }
      if(env_var_0 == 1169) { _res_key_if_0 = i != std::max( n,arr[min] ); }
      if(env_var_0 == 1170) { _res_key_if_0 = i != std::max( n,arr[n] ); }
      if(env_var_0 == 1171) { _res_key_if_0 = i != std::max( n,i ); }
      if(env_var_0 == 1172) { _res_key_if_0 = i != std::max( n,jumps ); }
      if(env_var_0 == 1173) { _res_key_if_0 = i != std::max( n,jumps[i] ); }
      if(env_var_0 == 1174) { _res_key_if_0 = i != std::max( n,min ); }
      if(env_var_0 == 1175) { _res_key_if_0 = i != std::max( n,n ); }
      if(env_var_0 == 1176) { _res_key_if_0 = i != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 1177) { _res_key_if_0 = i != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 1178) { _res_key_if_0 = i != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 1179) { _res_key_if_0 = i != std::min( arr[i],i ); }
      if(env_var_0 == 1180) { _res_key_if_0 = i != std::min( arr[i],jumps ); }
      if(env_var_0 == 1181) { _res_key_if_0 = i != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 1182) { _res_key_if_0 = i != std::min( arr[i],min ); }
      if(env_var_0 == 1183) { _res_key_if_0 = i != std::min( arr[i],n ); }
      if(env_var_0 == 1184) { _res_key_if_0 = i != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 1185) { _res_key_if_0 = i != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 1186) { _res_key_if_0 = i != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 1187) { _res_key_if_0 = i != std::min( arr[min],i ); }
      if(env_var_0 == 1188) { _res_key_if_0 = i != std::min( arr[min],jumps ); }
      if(env_var_0 == 1189) { _res_key_if_0 = i != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 1190) { _res_key_if_0 = i != std::min( arr[min],min ); }
      if(env_var_0 == 1191) { _res_key_if_0 = i != std::min( arr[min],n ); }
      if(env_var_0 == 1192) { _res_key_if_0 = i != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 1193) { _res_key_if_0 = i != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 1194) { _res_key_if_0 = i != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 1195) { _res_key_if_0 = i != std::min( arr[n],i ); }
      if(env_var_0 == 1196) { _res_key_if_0 = i != std::min( arr[n],jumps ); }
      if(env_var_0 == 1197) { _res_key_if_0 = i != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 1198) { _res_key_if_0 = i != std::min( arr[n],min ); }
      if(env_var_0 == 1199) { _res_key_if_0 = i != std::min( arr[n],n ); }
      if(env_var_0 == 1200) { _res_key_if_0 = i != std::min( i,arr[i] ); }
      if(env_var_0 == 1201) { _res_key_if_0 = i != std::min( i,arr[min] ); }
      if(env_var_0 == 1202) { _res_key_if_0 = i != std::min( i,arr[n] ); }
      if(env_var_0 == 1203) { _res_key_if_0 = i != std::min( i,i ); }
      if(env_var_0 == 1204) { _res_key_if_0 = i != std::min( i,jumps ); }
      if(env_var_0 == 1205) { _res_key_if_0 = i != std::min( i,jumps[i] ); }
      if(env_var_0 == 1206) { _res_key_if_0 = i != std::min( i,min ); }
      if(env_var_0 == 1207) { _res_key_if_0 = i != std::min( i,n ); }
      if(env_var_0 == 1208) { _res_key_if_0 = i != std::min( jumps,arr[i] ); }
      if(env_var_0 == 1209) { _res_key_if_0 = i != std::min( jumps,arr[min] ); }
      if(env_var_0 == 1210) { _res_key_if_0 = i != std::min( jumps,arr[n] ); }
      if(env_var_0 == 1211) { _res_key_if_0 = i != std::min( jumps,i ); }
      if(env_var_0 == 1212) { _res_key_if_0 = i != std::min( jumps,jumps ); }
      if(env_var_0 == 1213) { _res_key_if_0 = i != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 1214) { _res_key_if_0 = i != std::min( jumps,min ); }
      if(env_var_0 == 1215) { _res_key_if_0 = i != std::min( jumps,n ); }
      if(env_var_0 == 1216) { _res_key_if_0 = i != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 1217) { _res_key_if_0 = i != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 1218) { _res_key_if_0 = i != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 1219) { _res_key_if_0 = i != std::min( jumps[i],i ); }
      if(env_var_0 == 1220) { _res_key_if_0 = i != std::min( jumps[i],jumps ); }
      if(env_var_0 == 1221) { _res_key_if_0 = i != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 1222) { _res_key_if_0 = i != std::min( jumps[i],min ); }
      if(env_var_0 == 1223) { _res_key_if_0 = i != std::min( jumps[i],n ); }
      if(env_var_0 == 1224) { _res_key_if_0 = i != std::min( min,arr[i] ); }
      if(env_var_0 == 1225) { _res_key_if_0 = i != std::min( min,arr[min] ); }
      if(env_var_0 == 1226) { _res_key_if_0 = i != std::min( min,arr[n] ); }
      if(env_var_0 == 1227) { _res_key_if_0 = i != std::min( min,i ); }
      if(env_var_0 == 1228) { _res_key_if_0 = i != std::min( min,jumps ); }
      if(env_var_0 == 1229) { _res_key_if_0 = i != std::min( min,jumps[i] ); }
      if(env_var_0 == 1230) { _res_key_if_0 = i != std::min( min,min ); }
      if(env_var_0 == 1231) { _res_key_if_0 = i != std::min( min,n ); }
      if(env_var_0 == 1232) { _res_key_if_0 = i != std::min( n,arr[i] ); }
      if(env_var_0 == 1233) { _res_key_if_0 = i != std::min( n,arr[min] ); }
      if(env_var_0 == 1234) { _res_key_if_0 = i != std::min( n,arr[n] ); }
      if(env_var_0 == 1235) { _res_key_if_0 = i != std::min( n,i ); }
      if(env_var_0 == 1236) { _res_key_if_0 = i != std::min( n,jumps ); }
      if(env_var_0 == 1237) { _res_key_if_0 = i != std::min( n,jumps[i] ); }
      if(env_var_0 == 1238) { _res_key_if_0 = i != std::min( n,min ); }
      if(env_var_0 == 1239) { _res_key_if_0 = i != std::min( n,n ); }
      if(env_var_0 == 1240) { _res_key_if_0 = i != toupper( arr[i] ); }
      if(env_var_0 == 1241) { _res_key_if_0 = i != toupper( arr[min] ); }
      if(env_var_0 == 1242) { _res_key_if_0 = i != toupper( arr[n] ); }
      if(env_var_0 == 1243) { _res_key_if_0 = i != toupper( i ); }
      if(env_var_0 == 1244) { _res_key_if_0 = i != toupper( jumps ); }
      if(env_var_0 == 1245) { _res_key_if_0 = i != toupper( jumps[i] ); }
      if(env_var_0 == 1246) { _res_key_if_0 = i != toupper( min ); }
      if(env_var_0 == 1247) { _res_key_if_0 = i != toupper( n ); }
      if(env_var_0 == 1248) { _res_key_if_0 = jumps != arr; }
      if(env_var_0 == 1249) { _res_key_if_0 = jumps != arr+i; }
      if(env_var_0 == 1250) { _res_key_if_0 = jumps != arr+min; }
      if(env_var_0 == 1251) { _res_key_if_0 = jumps != arr+n; }
      if(env_var_0 == 1252) { _res_key_if_0 = jumps != arr[i]; }
      if(env_var_0 == 1253) { _res_key_if_0 = jumps != arr[min]; }
      if(env_var_0 == 1254) { _res_key_if_0 = jumps != arr[n]; }
      if(env_var_0 == 1255) { _res_key_if_0 = jumps != i; }
      if(env_var_0 == 1256) { _res_key_if_0 = jumps != isupper( arr[i] ); }
      if(env_var_0 == 1257) { _res_key_if_0 = jumps != isupper( arr[min] ); }
      if(env_var_0 == 1258) { _res_key_if_0 = jumps != isupper( arr[n] ); }
      if(env_var_0 == 1259) { _res_key_if_0 = jumps != isupper( i ); }
      if(env_var_0 == 1260) { _res_key_if_0 = jumps != isupper( jumps ); }
      if(env_var_0 == 1261) { _res_key_if_0 = jumps != isupper( jumps[i] ); }
      if(env_var_0 == 1262) { _res_key_if_0 = jumps != isupper( min ); }
      if(env_var_0 == 1263) { _res_key_if_0 = jumps != isupper( n ); }
      if(env_var_0 == 1264) { _res_key_if_0 = jumps != jumps; }
      if(env_var_0 == 1265) { _res_key_if_0 = jumps != jumps[i]; }
      if(env_var_0 == 1266) { _res_key_if_0 = jumps != min; }
      if(env_var_0 == 1267) { _res_key_if_0 = jumps != n; }
      if(env_var_0 == 1268) { _res_key_if_0 = jumps != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 1269) { _res_key_if_0 = jumps != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 1270) { _res_key_if_0 = jumps != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 1271) { _res_key_if_0 = jumps != std::max( arr[i],i ); }
      if(env_var_0 == 1272) { _res_key_if_0 = jumps != std::max( arr[i],jumps ); }
      if(env_var_0 == 1273) { _res_key_if_0 = jumps != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 1274) { _res_key_if_0 = jumps != std::max( arr[i],min ); }
      if(env_var_0 == 1275) { _res_key_if_0 = jumps != std::max( arr[i],n ); }
      if(env_var_0 == 1276) { _res_key_if_0 = jumps != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 1277) { _res_key_if_0 = jumps != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 1278) { _res_key_if_0 = jumps != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 1279) { _res_key_if_0 = jumps != std::max( arr[min],i ); }
      if(env_var_0 == 1280) { _res_key_if_0 = jumps != std::max( arr[min],jumps ); }
      if(env_var_0 == 1281) { _res_key_if_0 = jumps != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 1282) { _res_key_if_0 = jumps != std::max( arr[min],min ); }
      if(env_var_0 == 1283) { _res_key_if_0 = jumps != std::max( arr[min],n ); }
      if(env_var_0 == 1284) { _res_key_if_0 = jumps != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 1285) { _res_key_if_0 = jumps != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 1286) { _res_key_if_0 = jumps != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 1287) { _res_key_if_0 = jumps != std::max( arr[n],i ); }
      if(env_var_0 == 1288) { _res_key_if_0 = jumps != std::max( arr[n],jumps ); }
      if(env_var_0 == 1289) { _res_key_if_0 = jumps != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 1290) { _res_key_if_0 = jumps != std::max( arr[n],min ); }
      if(env_var_0 == 1291) { _res_key_if_0 = jumps != std::max( arr[n],n ); }
      if(env_var_0 == 1292) { _res_key_if_0 = jumps != std::max( i,arr[i] ); }
      if(env_var_0 == 1293) { _res_key_if_0 = jumps != std::max( i,arr[min] ); }
      if(env_var_0 == 1294) { _res_key_if_0 = jumps != std::max( i,arr[n] ); }
      if(env_var_0 == 1295) { _res_key_if_0 = jumps != std::max( i,i ); }
      if(env_var_0 == 1296) { _res_key_if_0 = jumps != std::max( i,jumps ); }
      if(env_var_0 == 1297) { _res_key_if_0 = jumps != std::max( i,jumps[i] ); }
      if(env_var_0 == 1298) { _res_key_if_0 = jumps != std::max( i,min ); }
      if(env_var_0 == 1299) { _res_key_if_0 = jumps != std::max( i,n ); }
      if(env_var_0 == 1300) { _res_key_if_0 = jumps != std::max( jumps,arr[i] ); }
      if(env_var_0 == 1301) { _res_key_if_0 = jumps != std::max( jumps,arr[min] ); }
      if(env_var_0 == 1302) { _res_key_if_0 = jumps != std::max( jumps,arr[n] ); }
      if(env_var_0 == 1303) { _res_key_if_0 = jumps != std::max( jumps,i ); }
      if(env_var_0 == 1304) { _res_key_if_0 = jumps != std::max( jumps,jumps ); }
      if(env_var_0 == 1305) { _res_key_if_0 = jumps != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 1306) { _res_key_if_0 = jumps != std::max( jumps,min ); }
      if(env_var_0 == 1307) { _res_key_if_0 = jumps != std::max( jumps,n ); }
      if(env_var_0 == 1308) { _res_key_if_0 = jumps != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 1309) { _res_key_if_0 = jumps != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 1310) { _res_key_if_0 = jumps != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 1311) { _res_key_if_0 = jumps != std::max( jumps[i],i ); }
      if(env_var_0 == 1312) { _res_key_if_0 = jumps != std::max( jumps[i],jumps ); }
      if(env_var_0 == 1313) { _res_key_if_0 = jumps != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 1314) { _res_key_if_0 = jumps != std::max( jumps[i],min ); }
      if(env_var_0 == 1315) { _res_key_if_0 = jumps != std::max( jumps[i],n ); }
      if(env_var_0 == 1316) { _res_key_if_0 = jumps != std::max( min,arr[i] ); }
      if(env_var_0 == 1317) { _res_key_if_0 = jumps != std::max( min,arr[min] ); }
      if(env_var_0 == 1318) { _res_key_if_0 = jumps != std::max( min,arr[n] ); }
      if(env_var_0 == 1319) { _res_key_if_0 = jumps != std::max( min,i ); }
      if(env_var_0 == 1320) { _res_key_if_0 = jumps != std::max( min,jumps ); }
      if(env_var_0 == 1321) { _res_key_if_0 = jumps != std::max( min,jumps[i] ); }
      if(env_var_0 == 1322) { _res_key_if_0 = jumps != std::max( min,min ); }
      if(env_var_0 == 1323) { _res_key_if_0 = jumps != std::max( min,n ); }
      if(env_var_0 == 1324) { _res_key_if_0 = jumps != std::max( n,arr[i] ); }
      if(env_var_0 == 1325) { _res_key_if_0 = jumps != std::max( n,arr[min] ); }
      if(env_var_0 == 1326) { _res_key_if_0 = jumps != std::max( n,arr[n] ); }
      if(env_var_0 == 1327) { _res_key_if_0 = jumps != std::max( n,i ); }
      if(env_var_0 == 1328) { _res_key_if_0 = jumps != std::max( n,jumps ); }
      if(env_var_0 == 1329) { _res_key_if_0 = jumps != std::max( n,jumps[i] ); }
      if(env_var_0 == 1330) { _res_key_if_0 = jumps != std::max( n,min ); }
      if(env_var_0 == 1331) { _res_key_if_0 = jumps != std::max( n,n ); }
      if(env_var_0 == 1332) { _res_key_if_0 = jumps != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 1333) { _res_key_if_0 = jumps != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 1334) { _res_key_if_0 = jumps != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 1335) { _res_key_if_0 = jumps != std::min( arr[i],i ); }
      if(env_var_0 == 1336) { _res_key_if_0 = jumps != std::min( arr[i],jumps ); }
      if(env_var_0 == 1337) { _res_key_if_0 = jumps != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 1338) { _res_key_if_0 = jumps != std::min( arr[i],min ); }
      if(env_var_0 == 1339) { _res_key_if_0 = jumps != std::min( arr[i],n ); }
      if(env_var_0 == 1340) { _res_key_if_0 = jumps != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 1341) { _res_key_if_0 = jumps != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 1342) { _res_key_if_0 = jumps != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 1343) { _res_key_if_0 = jumps != std::min( arr[min],i ); }
      if(env_var_0 == 1344) { _res_key_if_0 = jumps != std::min( arr[min],jumps ); }
      if(env_var_0 == 1345) { _res_key_if_0 = jumps != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 1346) { _res_key_if_0 = jumps != std::min( arr[min],min ); }
      if(env_var_0 == 1347) { _res_key_if_0 = jumps != std::min( arr[min],n ); }
      if(env_var_0 == 1348) { _res_key_if_0 = jumps != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 1349) { _res_key_if_0 = jumps != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 1350) { _res_key_if_0 = jumps != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 1351) { _res_key_if_0 = jumps != std::min( arr[n],i ); }
      if(env_var_0 == 1352) { _res_key_if_0 = jumps != std::min( arr[n],jumps ); }
      if(env_var_0 == 1353) { _res_key_if_0 = jumps != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 1354) { _res_key_if_0 = jumps != std::min( arr[n],min ); }
      if(env_var_0 == 1355) { _res_key_if_0 = jumps != std::min( arr[n],n ); }
      if(env_var_0 == 1356) { _res_key_if_0 = jumps != std::min( i,arr[i] ); }
      if(env_var_0 == 1357) { _res_key_if_0 = jumps != std::min( i,arr[min] ); }
      if(env_var_0 == 1358) { _res_key_if_0 = jumps != std::min( i,arr[n] ); }
      if(env_var_0 == 1359) { _res_key_if_0 = jumps != std::min( i,i ); }
      if(env_var_0 == 1360) { _res_key_if_0 = jumps != std::min( i,jumps ); }
      if(env_var_0 == 1361) { _res_key_if_0 = jumps != std::min( i,jumps[i] ); }
      if(env_var_0 == 1362) { _res_key_if_0 = jumps != std::min( i,min ); }
      if(env_var_0 == 1363) { _res_key_if_0 = jumps != std::min( i,n ); }
      if(env_var_0 == 1364) { _res_key_if_0 = jumps != std::min( jumps,arr[i] ); }
      if(env_var_0 == 1365) { _res_key_if_0 = jumps != std::min( jumps,arr[min] ); }
      if(env_var_0 == 1366) { _res_key_if_0 = jumps != std::min( jumps,arr[n] ); }
      if(env_var_0 == 1367) { _res_key_if_0 = jumps != std::min( jumps,i ); }
      if(env_var_0 == 1368) { _res_key_if_0 = jumps != std::min( jumps,jumps ); }
      if(env_var_0 == 1369) { _res_key_if_0 = jumps != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 1370) { _res_key_if_0 = jumps != std::min( jumps,min ); }
      if(env_var_0 == 1371) { _res_key_if_0 = jumps != std::min( jumps,n ); }
      if(env_var_0 == 1372) { _res_key_if_0 = jumps != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 1373) { _res_key_if_0 = jumps != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 1374) { _res_key_if_0 = jumps != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 1375) { _res_key_if_0 = jumps != std::min( jumps[i],i ); }
      if(env_var_0 == 1376) { _res_key_if_0 = jumps != std::min( jumps[i],jumps ); }
      if(env_var_0 == 1377) { _res_key_if_0 = jumps != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 1378) { _res_key_if_0 = jumps != std::min( jumps[i],min ); }
      if(env_var_0 == 1379) { _res_key_if_0 = jumps != std::min( jumps[i],n ); }
      if(env_var_0 == 1380) { _res_key_if_0 = jumps != std::min( min,arr[i] ); }
      if(env_var_0 == 1381) { _res_key_if_0 = jumps != std::min( min,arr[min] ); }
      if(env_var_0 == 1382) { _res_key_if_0 = jumps != std::min( min,arr[n] ); }
      if(env_var_0 == 1383) { _res_key_if_0 = jumps != std::min( min,i ); }
      if(env_var_0 == 1384) { _res_key_if_0 = jumps != std::min( min,jumps ); }
      if(env_var_0 == 1385) { _res_key_if_0 = jumps != std::min( min,jumps[i] ); }
      if(env_var_0 == 1386) { _res_key_if_0 = jumps != std::min( min,min ); }
      if(env_var_0 == 1387) { _res_key_if_0 = jumps != std::min( min,n ); }
      if(env_var_0 == 1388) { _res_key_if_0 = jumps != std::min( n,arr[i] ); }
      if(env_var_0 == 1389) { _res_key_if_0 = jumps != std::min( n,arr[min] ); }
      if(env_var_0 == 1390) { _res_key_if_0 = jumps != std::min( n,arr[n] ); }
      if(env_var_0 == 1391) { _res_key_if_0 = jumps != std::min( n,i ); }
      if(env_var_0 == 1392) { _res_key_if_0 = jumps != std::min( n,jumps ); }
      if(env_var_0 == 1393) { _res_key_if_0 = jumps != std::min( n,jumps[i] ); }
      if(env_var_0 == 1394) { _res_key_if_0 = jumps != std::min( n,min ); }
      if(env_var_0 == 1395) { _res_key_if_0 = jumps != std::min( n,n ); }
      if(env_var_0 == 1396) { _res_key_if_0 = jumps != toupper( arr[i] ); }
      if(env_var_0 == 1397) { _res_key_if_0 = jumps != toupper( arr[min] ); }
      if(env_var_0 == 1398) { _res_key_if_0 = jumps != toupper( arr[n] ); }
      if(env_var_0 == 1399) { _res_key_if_0 = jumps != toupper( i ); }
      if(env_var_0 == 1400) { _res_key_if_0 = jumps != toupper( jumps ); }
      if(env_var_0 == 1401) { _res_key_if_0 = jumps != toupper( jumps[i] ); }
      if(env_var_0 == 1402) { _res_key_if_0 = jumps != toupper( min ); }
      if(env_var_0 == 1403) { _res_key_if_0 = jumps != toupper( n ); }
      if(env_var_0 == 1404) { _res_key_if_0 = jumps[i] != arr; }
      if(env_var_0 == 1405) { _res_key_if_0 = jumps[i] != arr+i; }
      if(env_var_0 == 1406) { _res_key_if_0 = jumps[i] != arr+min; }
      if(env_var_0 == 1407) { _res_key_if_0 = jumps[i] != arr+n; }
      if(env_var_0 == 1408) { _res_key_if_0 = jumps[i] != arr[i]; }
      if(env_var_0 == 1409) { _res_key_if_0 = jumps[i] != arr[min]; }
      if(env_var_0 == 1410) { _res_key_if_0 = jumps[i] != arr[n]; }
      if(env_var_0 == 1411) { _res_key_if_0 = jumps[i] != i; }
      if(env_var_0 == 1412) { _res_key_if_0 = jumps[i] != isupper( arr[i] ); }
      if(env_var_0 == 1413) { _res_key_if_0 = jumps[i] != isupper( arr[min] ); }
      if(env_var_0 == 1414) { _res_key_if_0 = jumps[i] != isupper( arr[n] ); }
      if(env_var_0 == 1415) { _res_key_if_0 = jumps[i] != isupper( i ); }
      if(env_var_0 == 1416) { _res_key_if_0 = jumps[i] != isupper( jumps ); }
      if(env_var_0 == 1417) { _res_key_if_0 = jumps[i] != isupper( jumps[i] ); }
      if(env_var_0 == 1418) { _res_key_if_0 = jumps[i] != isupper( min ); }
      if(env_var_0 == 1419) { _res_key_if_0 = jumps[i] != isupper( n ); }
      if(env_var_0 == 1420) { _res_key_if_0 = jumps[i] != jumps; }
      if(env_var_0 == 1421) { _res_key_if_0 = jumps[i] != jumps[i]; }
      if(env_var_0 == 1422) { _res_key_if_0 = jumps[i] != min; }
      if(env_var_0 == 1423) { _res_key_if_0 = jumps[i] != n; }
      if(env_var_0 == 1424) { _res_key_if_0 = jumps[i] != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 1425) { _res_key_if_0 = jumps[i] != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 1426) { _res_key_if_0 = jumps[i] != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 1427) { _res_key_if_0 = jumps[i] != std::max( arr[i],i ); }
      if(env_var_0 == 1428) { _res_key_if_0 = jumps[i] != std::max( arr[i],jumps ); }
      if(env_var_0 == 1429) { _res_key_if_0 = jumps[i] != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 1430) { _res_key_if_0 = jumps[i] != std::max( arr[i],min ); }
      if(env_var_0 == 1431) { _res_key_if_0 = jumps[i] != std::max( arr[i],n ); }
      if(env_var_0 == 1432) { _res_key_if_0 = jumps[i] != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 1433) { _res_key_if_0 = jumps[i] != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 1434) { _res_key_if_0 = jumps[i] != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 1435) { _res_key_if_0 = jumps[i] != std::max( arr[min],i ); }
      if(env_var_0 == 1436) { _res_key_if_0 = jumps[i] != std::max( arr[min],jumps ); }
      if(env_var_0 == 1437) { _res_key_if_0 = jumps[i] != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 1438) { _res_key_if_0 = jumps[i] != std::max( arr[min],min ); }
      if(env_var_0 == 1439) { _res_key_if_0 = jumps[i] != std::max( arr[min],n ); }
      if(env_var_0 == 1440) { _res_key_if_0 = jumps[i] != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 1441) { _res_key_if_0 = jumps[i] != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 1442) { _res_key_if_0 = jumps[i] != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 1443) { _res_key_if_0 = jumps[i] != std::max( arr[n],i ); }
      if(env_var_0 == 1444) { _res_key_if_0 = jumps[i] != std::max( arr[n],jumps ); }
      if(env_var_0 == 1445) { _res_key_if_0 = jumps[i] != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 1446) { _res_key_if_0 = jumps[i] != std::max( arr[n],min ); }
      if(env_var_0 == 1447) { _res_key_if_0 = jumps[i] != std::max( arr[n],n ); }
      if(env_var_0 == 1448) { _res_key_if_0 = jumps[i] != std::max( i,arr[i] ); }
      if(env_var_0 == 1449) { _res_key_if_0 = jumps[i] != std::max( i,arr[min] ); }
      if(env_var_0 == 1450) { _res_key_if_0 = jumps[i] != std::max( i,arr[n] ); }
      if(env_var_0 == 1451) { _res_key_if_0 = jumps[i] != std::max( i,i ); }
      if(env_var_0 == 1452) { _res_key_if_0 = jumps[i] != std::max( i,jumps ); }
      if(env_var_0 == 1453) { _res_key_if_0 = jumps[i] != std::max( i,jumps[i] ); }
      if(env_var_0 == 1454) { _res_key_if_0 = jumps[i] != std::max( i,min ); }
      if(env_var_0 == 1455) { _res_key_if_0 = jumps[i] != std::max( i,n ); }
      if(env_var_0 == 1456) { _res_key_if_0 = jumps[i] != std::max( jumps,arr[i] ); }
      if(env_var_0 == 1457) { _res_key_if_0 = jumps[i] != std::max( jumps,arr[min] ); }
      if(env_var_0 == 1458) { _res_key_if_0 = jumps[i] != std::max( jumps,arr[n] ); }
      if(env_var_0 == 1459) { _res_key_if_0 = jumps[i] != std::max( jumps,i ); }
      if(env_var_0 == 1460) { _res_key_if_0 = jumps[i] != std::max( jumps,jumps ); }
      if(env_var_0 == 1461) { _res_key_if_0 = jumps[i] != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 1462) { _res_key_if_0 = jumps[i] != std::max( jumps,min ); }
      if(env_var_0 == 1463) { _res_key_if_0 = jumps[i] != std::max( jumps,n ); }
      if(env_var_0 == 1464) { _res_key_if_0 = jumps[i] != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 1465) { _res_key_if_0 = jumps[i] != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 1466) { _res_key_if_0 = jumps[i] != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 1467) { _res_key_if_0 = jumps[i] != std::max( jumps[i],i ); }
      if(env_var_0 == 1468) { _res_key_if_0 = jumps[i] != std::max( jumps[i],jumps ); }
      if(env_var_0 == 1469) { _res_key_if_0 = jumps[i] != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 1470) { _res_key_if_0 = jumps[i] != std::max( jumps[i],min ); }
      if(env_var_0 == 1471) { _res_key_if_0 = jumps[i] != std::max( jumps[i],n ); }
      if(env_var_0 == 1472) { _res_key_if_0 = jumps[i] != std::max( min,arr[i] ); }
      if(env_var_0 == 1473) { _res_key_if_0 = jumps[i] != std::max( min,arr[min] ); }
      if(env_var_0 == 1474) { _res_key_if_0 = jumps[i] != std::max( min,arr[n] ); }
      if(env_var_0 == 1475) { _res_key_if_0 = jumps[i] != std::max( min,i ); }
      if(env_var_0 == 1476) { _res_key_if_0 = jumps[i] != std::max( min,jumps ); }
      if(env_var_0 == 1477) { _res_key_if_0 = jumps[i] != std::max( min,jumps[i] ); }
      if(env_var_0 == 1478) { _res_key_if_0 = jumps[i] != std::max( min,min ); }
      if(env_var_0 == 1479) { _res_key_if_0 = jumps[i] != std::max( min,n ); }
      if(env_var_0 == 1480) { _res_key_if_0 = jumps[i] != std::max( n,arr[i] ); }
      if(env_var_0 == 1481) { _res_key_if_0 = jumps[i] != std::max( n,arr[min] ); }
      if(env_var_0 == 1482) { _res_key_if_0 = jumps[i] != std::max( n,arr[n] ); }
      if(env_var_0 == 1483) { _res_key_if_0 = jumps[i] != std::max( n,i ); }
      if(env_var_0 == 1484) { _res_key_if_0 = jumps[i] != std::max( n,jumps ); }
      if(env_var_0 == 1485) { _res_key_if_0 = jumps[i] != std::max( n,jumps[i] ); }
      if(env_var_0 == 1486) { _res_key_if_0 = jumps[i] != std::max( n,min ); }
      if(env_var_0 == 1487) { _res_key_if_0 = jumps[i] != std::max( n,n ); }
      if(env_var_0 == 1488) { _res_key_if_0 = jumps[i] != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 1489) { _res_key_if_0 = jumps[i] != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 1490) { _res_key_if_0 = jumps[i] != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 1491) { _res_key_if_0 = jumps[i] != std::min( arr[i],i ); }
      if(env_var_0 == 1492) { _res_key_if_0 = jumps[i] != std::min( arr[i],jumps ); }
      if(env_var_0 == 1493) { _res_key_if_0 = jumps[i] != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 1494) { _res_key_if_0 = jumps[i] != std::min( arr[i],min ); }
      if(env_var_0 == 1495) { _res_key_if_0 = jumps[i] != std::min( arr[i],n ); }
      if(env_var_0 == 1496) { _res_key_if_0 = jumps[i] != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 1497) { _res_key_if_0 = jumps[i] != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 1498) { _res_key_if_0 = jumps[i] != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 1499) { _res_key_if_0 = jumps[i] != std::min( arr[min],i ); }
      if(env_var_0 == 1500) { _res_key_if_0 = jumps[i] != std::min( arr[min],jumps ); }
      if(env_var_0 == 1501) { _res_key_if_0 = jumps[i] != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 1502) { _res_key_if_0 = jumps[i] != std::min( arr[min],min ); }
      if(env_var_0 == 1503) { _res_key_if_0 = jumps[i] != std::min( arr[min],n ); }
      if(env_var_0 == 1504) { _res_key_if_0 = jumps[i] != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 1505) { _res_key_if_0 = jumps[i] != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 1506) { _res_key_if_0 = jumps[i] != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 1507) { _res_key_if_0 = jumps[i] != std::min( arr[n],i ); }
      if(env_var_0 == 1508) { _res_key_if_0 = jumps[i] != std::min( arr[n],jumps ); }
      if(env_var_0 == 1509) { _res_key_if_0 = jumps[i] != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 1510) { _res_key_if_0 = jumps[i] != std::min( arr[n],min ); }
      if(env_var_0 == 1511) { _res_key_if_0 = jumps[i] != std::min( arr[n],n ); }
      if(env_var_0 == 1512) { _res_key_if_0 = jumps[i] != std::min( i,arr[i] ); }
      if(env_var_0 == 1513) { _res_key_if_0 = jumps[i] != std::min( i,arr[min] ); }
      if(env_var_0 == 1514) { _res_key_if_0 = jumps[i] != std::min( i,arr[n] ); }
      if(env_var_0 == 1515) { _res_key_if_0 = jumps[i] != std::min( i,i ); }
      if(env_var_0 == 1516) { _res_key_if_0 = jumps[i] != std::min( i,jumps ); }
      if(env_var_0 == 1517) { _res_key_if_0 = jumps[i] != std::min( i,jumps[i] ); }
      if(env_var_0 == 1518) { _res_key_if_0 = jumps[i] != std::min( i,min ); }
      if(env_var_0 == 1519) { _res_key_if_0 = jumps[i] != std::min( i,n ); }
      if(env_var_0 == 1520) { _res_key_if_0 = jumps[i] != std::min( jumps,arr[i] ); }
      if(env_var_0 == 1521) { _res_key_if_0 = jumps[i] != std::min( jumps,arr[min] ); }
      if(env_var_0 == 1522) { _res_key_if_0 = jumps[i] != std::min( jumps,arr[n] ); }
      if(env_var_0 == 1523) { _res_key_if_0 = jumps[i] != std::min( jumps,i ); }
      if(env_var_0 == 1524) { _res_key_if_0 = jumps[i] != std::min( jumps,jumps ); }
      if(env_var_0 == 1525) { _res_key_if_0 = jumps[i] != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 1526) { _res_key_if_0 = jumps[i] != std::min( jumps,min ); }
      if(env_var_0 == 1527) { _res_key_if_0 = jumps[i] != std::min( jumps,n ); }
      if(env_var_0 == 1528) { _res_key_if_0 = jumps[i] != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 1529) { _res_key_if_0 = jumps[i] != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 1530) { _res_key_if_0 = jumps[i] != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 1531) { _res_key_if_0 = jumps[i] != std::min( jumps[i],i ); }
      if(env_var_0 == 1532) { _res_key_if_0 = jumps[i] != std::min( jumps[i],jumps ); }
      if(env_var_0 == 1533) { _res_key_if_0 = jumps[i] != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 1534) { _res_key_if_0 = jumps[i] != std::min( jumps[i],min ); }
      if(env_var_0 == 1535) { _res_key_if_0 = jumps[i] != std::min( jumps[i],n ); }
      if(env_var_0 == 1536) { _res_key_if_0 = jumps[i] != std::min( min,arr[i] ); }
      if(env_var_0 == 1537) { _res_key_if_0 = jumps[i] != std::min( min,arr[min] ); }
      if(env_var_0 == 1538) { _res_key_if_0 = jumps[i] != std::min( min,arr[n] ); }
      if(env_var_0 == 1539) { _res_key_if_0 = jumps[i] != std::min( min,i ); }
      if(env_var_0 == 1540) { _res_key_if_0 = jumps[i] != std::min( min,jumps ); }
      if(env_var_0 == 1541) { _res_key_if_0 = jumps[i] != std::min( min,jumps[i] ); }
      if(env_var_0 == 1542) { _res_key_if_0 = jumps[i] != std::min( min,min ); }
      if(env_var_0 == 1543) { _res_key_if_0 = jumps[i] != std::min( min,n ); }
      if(env_var_0 == 1544) { _res_key_if_0 = jumps[i] != std::min( n,arr[i] ); }
      if(env_var_0 == 1545) { _res_key_if_0 = jumps[i] != std::min( n,arr[min] ); }
      if(env_var_0 == 1546) { _res_key_if_0 = jumps[i] != std::min( n,arr[n] ); }
      if(env_var_0 == 1547) { _res_key_if_0 = jumps[i] != std::min( n,i ); }
      if(env_var_0 == 1548) { _res_key_if_0 = jumps[i] != std::min( n,jumps ); }
      if(env_var_0 == 1549) { _res_key_if_0 = jumps[i] != std::min( n,jumps[i] ); }
      if(env_var_0 == 1550) { _res_key_if_0 = jumps[i] != std::min( n,min ); }
      if(env_var_0 == 1551) { _res_key_if_0 = jumps[i] != std::min( n,n ); }
      if(env_var_0 == 1552) { _res_key_if_0 = jumps[i] != toupper( arr[i] ); }
      if(env_var_0 == 1553) { _res_key_if_0 = jumps[i] != toupper( arr[min] ); }
      if(env_var_0 == 1554) { _res_key_if_0 = jumps[i] != toupper( arr[n] ); }
      if(env_var_0 == 1555) { _res_key_if_0 = jumps[i] != toupper( i ); }
      if(env_var_0 == 1556) { _res_key_if_0 = jumps[i] != toupper( jumps ); }
      if(env_var_0 == 1557) { _res_key_if_0 = jumps[i] != toupper( jumps[i] ); }
      if(env_var_0 == 1558) { _res_key_if_0 = jumps[i] != toupper( min ); }
      if(env_var_0 == 1559) { _res_key_if_0 = jumps[i] != toupper( n ); }
      if(env_var_0 == 1560) { _res_key_if_0 = min != arr; }
      if(env_var_0 == 1561) { _res_key_if_0 = min != arr+i; }
      if(env_var_0 == 1562) { _res_key_if_0 = min != arr+min; }
      if(env_var_0 == 1563) { _res_key_if_0 = min != arr+n; }
      if(env_var_0 == 1564) { _res_key_if_0 = min != arr[i]; }
      if(env_var_0 == 1565) { _res_key_if_0 = min != arr[min]; }
      if(env_var_0 == 1566) { _res_key_if_0 = min != arr[n]; }
      if(env_var_0 == 1567) { _res_key_if_0 = min != i; }
      if(env_var_0 == 1568) { _res_key_if_0 = min != isupper( arr[i] ); }
      if(env_var_0 == 1569) { _res_key_if_0 = min != isupper( arr[min] ); }
      if(env_var_0 == 1570) { _res_key_if_0 = min != isupper( arr[n] ); }
      if(env_var_0 == 1571) { _res_key_if_0 = min != isupper( i ); }
      if(env_var_0 == 1572) { _res_key_if_0 = min != isupper( jumps ); }
      if(env_var_0 == 1573) { _res_key_if_0 = min != isupper( jumps[i] ); }
      if(env_var_0 == 1574) { _res_key_if_0 = min != isupper( min ); }
      if(env_var_0 == 1575) { _res_key_if_0 = min != isupper( n ); }
      if(env_var_0 == 1576) { _res_key_if_0 = min != jumps; }
      if(env_var_0 == 1577) { _res_key_if_0 = min != jumps[i]; }
      if(env_var_0 == 1578) { _res_key_if_0 = min != min; }
      if(env_var_0 == 1579) { _res_key_if_0 = min != n; }
      if(env_var_0 == 1580) { _res_key_if_0 = min != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 1581) { _res_key_if_0 = min != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 1582) { _res_key_if_0 = min != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 1583) { _res_key_if_0 = min != std::max( arr[i],i ); }
      if(env_var_0 == 1584) { _res_key_if_0 = min != std::max( arr[i],jumps ); }
      if(env_var_0 == 1585) { _res_key_if_0 = min != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 1586) { _res_key_if_0 = min != std::max( arr[i],min ); }
      if(env_var_0 == 1587) { _res_key_if_0 = min != std::max( arr[i],n ); }
      if(env_var_0 == 1588) { _res_key_if_0 = min != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 1589) { _res_key_if_0 = min != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 1590) { _res_key_if_0 = min != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 1591) { _res_key_if_0 = min != std::max( arr[min],i ); }
      if(env_var_0 == 1592) { _res_key_if_0 = min != std::max( arr[min],jumps ); }
      if(env_var_0 == 1593) { _res_key_if_0 = min != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 1594) { _res_key_if_0 = min != std::max( arr[min],min ); }
      if(env_var_0 == 1595) { _res_key_if_0 = min != std::max( arr[min],n ); }
      if(env_var_0 == 1596) { _res_key_if_0 = min != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 1597) { _res_key_if_0 = min != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 1598) { _res_key_if_0 = min != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 1599) { _res_key_if_0 = min != std::max( arr[n],i ); }
      if(env_var_0 == 1600) { _res_key_if_0 = min != std::max( arr[n],jumps ); }
      if(env_var_0 == 1601) { _res_key_if_0 = min != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 1602) { _res_key_if_0 = min != std::max( arr[n],min ); }
      if(env_var_0 == 1603) { _res_key_if_0 = min != std::max( arr[n],n ); }
      if(env_var_0 == 1604) { _res_key_if_0 = min != std::max( i,arr[i] ); }
      if(env_var_0 == 1605) { _res_key_if_0 = min != std::max( i,arr[min] ); }
      if(env_var_0 == 1606) { _res_key_if_0 = min != std::max( i,arr[n] ); }
      if(env_var_0 == 1607) { _res_key_if_0 = min != std::max( i,i ); }
      if(env_var_0 == 1608) { _res_key_if_0 = min != std::max( i,jumps ); }
      if(env_var_0 == 1609) { _res_key_if_0 = min != std::max( i,jumps[i] ); }
      if(env_var_0 == 1610) { _res_key_if_0 = min != std::max( i,min ); }
      if(env_var_0 == 1611) { _res_key_if_0 = min != std::max( i,n ); }
      if(env_var_0 == 1612) { _res_key_if_0 = min != std::max( jumps,arr[i] ); }
      if(env_var_0 == 1613) { _res_key_if_0 = min != std::max( jumps,arr[min] ); }
      if(env_var_0 == 1614) { _res_key_if_0 = min != std::max( jumps,arr[n] ); }
      if(env_var_0 == 1615) { _res_key_if_0 = min != std::max( jumps,i ); }
      if(env_var_0 == 1616) { _res_key_if_0 = min != std::max( jumps,jumps ); }
      if(env_var_0 == 1617) { _res_key_if_0 = min != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 1618) { _res_key_if_0 = min != std::max( jumps,min ); }
      if(env_var_0 == 1619) { _res_key_if_0 = min != std::max( jumps,n ); }
      if(env_var_0 == 1620) { _res_key_if_0 = min != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 1621) { _res_key_if_0 = min != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 1622) { _res_key_if_0 = min != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 1623) { _res_key_if_0 = min != std::max( jumps[i],i ); }
      if(env_var_0 == 1624) { _res_key_if_0 = min != std::max( jumps[i],jumps ); }
      if(env_var_0 == 1625) { _res_key_if_0 = min != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 1626) { _res_key_if_0 = min != std::max( jumps[i],min ); }
      if(env_var_0 == 1627) { _res_key_if_0 = min != std::max( jumps[i],n ); }
      if(env_var_0 == 1628) { _res_key_if_0 = min != std::max( min,arr[i] ); }
      if(env_var_0 == 1629) { _res_key_if_0 = min != std::max( min,arr[min] ); }
      if(env_var_0 == 1630) { _res_key_if_0 = min != std::max( min,arr[n] ); }
      if(env_var_0 == 1631) { _res_key_if_0 = min != std::max( min,i ); }
      if(env_var_0 == 1632) { _res_key_if_0 = min != std::max( min,jumps ); }
      if(env_var_0 == 1633) { _res_key_if_0 = min != std::max( min,jumps[i] ); }
      if(env_var_0 == 1634) { _res_key_if_0 = min != std::max( min,min ); }
      if(env_var_0 == 1635) { _res_key_if_0 = min != std::max( min,n ); }
      if(env_var_0 == 1636) { _res_key_if_0 = min != std::max( n,arr[i] ); }
      if(env_var_0 == 1637) { _res_key_if_0 = min != std::max( n,arr[min] ); }
      if(env_var_0 == 1638) { _res_key_if_0 = min != std::max( n,arr[n] ); }
      if(env_var_0 == 1639) { _res_key_if_0 = min != std::max( n,i ); }
      if(env_var_0 == 1640) { _res_key_if_0 = min != std::max( n,jumps ); }
      if(env_var_0 == 1641) { _res_key_if_0 = min != std::max( n,jumps[i] ); }
      if(env_var_0 == 1642) { _res_key_if_0 = min != std::max( n,min ); }
      if(env_var_0 == 1643) { _res_key_if_0 = min != std::max( n,n ); }
      if(env_var_0 == 1644) { _res_key_if_0 = min != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 1645) { _res_key_if_0 = min != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 1646) { _res_key_if_0 = min != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 1647) { _res_key_if_0 = min != std::min( arr[i],i ); }
      if(env_var_0 == 1648) { _res_key_if_0 = min != std::min( arr[i],jumps ); }
      if(env_var_0 == 1649) { _res_key_if_0 = min != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 1650) { _res_key_if_0 = min != std::min( arr[i],min ); }
      if(env_var_0 == 1651) { _res_key_if_0 = min != std::min( arr[i],n ); }
      if(env_var_0 == 1652) { _res_key_if_0 = min != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 1653) { _res_key_if_0 = min != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 1654) { _res_key_if_0 = min != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 1655) { _res_key_if_0 = min != std::min( arr[min],i ); }
      if(env_var_0 == 1656) { _res_key_if_0 = min != std::min( arr[min],jumps ); }
      if(env_var_0 == 1657) { _res_key_if_0 = min != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 1658) { _res_key_if_0 = min != std::min( arr[min],min ); }
      if(env_var_0 == 1659) { _res_key_if_0 = min != std::min( arr[min],n ); }
      if(env_var_0 == 1660) { _res_key_if_0 = min != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 1661) { _res_key_if_0 = min != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 1662) { _res_key_if_0 = min != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 1663) { _res_key_if_0 = min != std::min( arr[n],i ); }
      if(env_var_0 == 1664) { _res_key_if_0 = min != std::min( arr[n],jumps ); }
      if(env_var_0 == 1665) { _res_key_if_0 = min != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 1666) { _res_key_if_0 = min != std::min( arr[n],min ); }
      if(env_var_0 == 1667) { _res_key_if_0 = min != std::min( arr[n],n ); }
      if(env_var_0 == 1668) { _res_key_if_0 = min != std::min( i,arr[i] ); }
      if(env_var_0 == 1669) { _res_key_if_0 = min != std::min( i,arr[min] ); }
      if(env_var_0 == 1670) { _res_key_if_0 = min != std::min( i,arr[n] ); }
      if(env_var_0 == 1671) { _res_key_if_0 = min != std::min( i,i ); }
      if(env_var_0 == 1672) { _res_key_if_0 = min != std::min( i,jumps ); }
      if(env_var_0 == 1673) { _res_key_if_0 = min != std::min( i,jumps[i] ); }
      if(env_var_0 == 1674) { _res_key_if_0 = min != std::min( i,min ); }
      if(env_var_0 == 1675) { _res_key_if_0 = min != std::min( i,n ); }
      if(env_var_0 == 1676) { _res_key_if_0 = min != std::min( jumps,arr[i] ); }
      if(env_var_0 == 1677) { _res_key_if_0 = min != std::min( jumps,arr[min] ); }
      if(env_var_0 == 1678) { _res_key_if_0 = min != std::min( jumps,arr[n] ); }
      if(env_var_0 == 1679) { _res_key_if_0 = min != std::min( jumps,i ); }
      if(env_var_0 == 1680) { _res_key_if_0 = min != std::min( jumps,jumps ); }
      if(env_var_0 == 1681) { _res_key_if_0 = min != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 1682) { _res_key_if_0 = min != std::min( jumps,min ); }
      if(env_var_0 == 1683) { _res_key_if_0 = min != std::min( jumps,n ); }
      if(env_var_0 == 1684) { _res_key_if_0 = min != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 1685) { _res_key_if_0 = min != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 1686) { _res_key_if_0 = min != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 1687) { _res_key_if_0 = min != std::min( jumps[i],i ); }
      if(env_var_0 == 1688) { _res_key_if_0 = min != std::min( jumps[i],jumps ); }
      if(env_var_0 == 1689) { _res_key_if_0 = min != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 1690) { _res_key_if_0 = min != std::min( jumps[i],min ); }
      if(env_var_0 == 1691) { _res_key_if_0 = min != std::min( jumps[i],n ); }
      if(env_var_0 == 1692) { _res_key_if_0 = min != std::min( min,arr[i] ); }
      if(env_var_0 == 1693) { _res_key_if_0 = min != std::min( min,arr[min] ); }
      if(env_var_0 == 1694) { _res_key_if_0 = min != std::min( min,arr[n] ); }
      if(env_var_0 == 1695) { _res_key_if_0 = min != std::min( min,i ); }
      if(env_var_0 == 1696) { _res_key_if_0 = min != std::min( min,jumps ); }
      if(env_var_0 == 1697) { _res_key_if_0 = min != std::min( min,jumps[i] ); }
      if(env_var_0 == 1698) { _res_key_if_0 = min != std::min( min,min ); }
      if(env_var_0 == 1699) { _res_key_if_0 = min != std::min( min,n ); }
      if(env_var_0 == 1700) { _res_key_if_0 = min != std::min( n,arr[i] ); }
      if(env_var_0 == 1701) { _res_key_if_0 = min != std::min( n,arr[min] ); }
      if(env_var_0 == 1702) { _res_key_if_0 = min != std::min( n,arr[n] ); }
      if(env_var_0 == 1703) { _res_key_if_0 = min != std::min( n,i ); }
      if(env_var_0 == 1704) { _res_key_if_0 = min != std::min( n,jumps ); }
      if(env_var_0 == 1705) { _res_key_if_0 = min != std::min( n,jumps[i] ); }
      if(env_var_0 == 1706) { _res_key_if_0 = min != std::min( n,min ); }
      if(env_var_0 == 1707) { _res_key_if_0 = min != std::min( n,n ); }
      if(env_var_0 == 1708) { _res_key_if_0 = min != toupper( arr[i] ); }
      if(env_var_0 == 1709) { _res_key_if_0 = min != toupper( arr[min] ); }
      if(env_var_0 == 1710) { _res_key_if_0 = min != toupper( arr[n] ); }
      if(env_var_0 == 1711) { _res_key_if_0 = min != toupper( i ); }
      if(env_var_0 == 1712) { _res_key_if_0 = min != toupper( jumps ); }
      if(env_var_0 == 1713) { _res_key_if_0 = min != toupper( jumps[i] ); }
      if(env_var_0 == 1714) { _res_key_if_0 = min != toupper( min ); }
      if(env_var_0 == 1715) { _res_key_if_0 = min != toupper( n ); }
      if(env_var_0 == 1716) { _res_key_if_0 = n != arr; }
      if(env_var_0 == 1717) { _res_key_if_0 = n != arr+i; }
      if(env_var_0 == 1718) { _res_key_if_0 = n != arr+min; }
      if(env_var_0 == 1719) { _res_key_if_0 = n != arr+n; }
      if(env_var_0 == 1720) { _res_key_if_0 = n != arr[i]; }
      if(env_var_0 == 1721) { _res_key_if_0 = n != arr[min]; }
      if(env_var_0 == 1722) { _res_key_if_0 = n != arr[n]; }
      if(env_var_0 == 1723) { _res_key_if_0 = n != i; }
      if(env_var_0 == 1724) { _res_key_if_0 = n != isupper( arr[i] ); }
      if(env_var_0 == 1725) { _res_key_if_0 = n != isupper( arr[min] ); }
      if(env_var_0 == 1726) { _res_key_if_0 = n != isupper( arr[n] ); }
      if(env_var_0 == 1727) { _res_key_if_0 = n != isupper( i ); }
      if(env_var_0 == 1728) { _res_key_if_0 = n != isupper( jumps ); }
      if(env_var_0 == 1729) { _res_key_if_0 = n != isupper( jumps[i] ); }
      if(env_var_0 == 1730) { _res_key_if_0 = n != isupper( min ); }
      if(env_var_0 == 1731) { _res_key_if_0 = n != isupper( n ); }
      if(env_var_0 == 1732) { _res_key_if_0 = n != jumps; }
      if(env_var_0 == 1733) { _res_key_if_0 = n != jumps[i]; }
      if(env_var_0 == 1734) { _res_key_if_0 = n != min; }
      if(env_var_0 == 1735) { _res_key_if_0 = n != n; }
      if(env_var_0 == 1736) { _res_key_if_0 = n != std::max( arr[i],arr[i] ); }
      if(env_var_0 == 1737) { _res_key_if_0 = n != std::max( arr[i],arr[min] ); }
      if(env_var_0 == 1738) { _res_key_if_0 = n != std::max( arr[i],arr[n] ); }
      if(env_var_0 == 1739) { _res_key_if_0 = n != std::max( arr[i],i ); }
      if(env_var_0 == 1740) { _res_key_if_0 = n != std::max( arr[i],jumps ); }
      if(env_var_0 == 1741) { _res_key_if_0 = n != std::max( arr[i],jumps[i] ); }
      if(env_var_0 == 1742) { _res_key_if_0 = n != std::max( arr[i],min ); }
      if(env_var_0 == 1743) { _res_key_if_0 = n != std::max( arr[i],n ); }
      if(env_var_0 == 1744) { _res_key_if_0 = n != std::max( arr[min],arr[i] ); }
      if(env_var_0 == 1745) { _res_key_if_0 = n != std::max( arr[min],arr[min] ); }
      if(env_var_0 == 1746) { _res_key_if_0 = n != std::max( arr[min],arr[n] ); }
      if(env_var_0 == 1747) { _res_key_if_0 = n != std::max( arr[min],i ); }
      if(env_var_0 == 1748) { _res_key_if_0 = n != std::max( arr[min],jumps ); }
      if(env_var_0 == 1749) { _res_key_if_0 = n != std::max( arr[min],jumps[i] ); }
      if(env_var_0 == 1750) { _res_key_if_0 = n != std::max( arr[min],min ); }
      if(env_var_0 == 1751) { _res_key_if_0 = n != std::max( arr[min],n ); }
      if(env_var_0 == 1752) { _res_key_if_0 = n != std::max( arr[n],arr[i] ); }
      if(env_var_0 == 1753) { _res_key_if_0 = n != std::max( arr[n],arr[min] ); }
      if(env_var_0 == 1754) { _res_key_if_0 = n != std::max( arr[n],arr[n] ); }
      if(env_var_0 == 1755) { _res_key_if_0 = n != std::max( arr[n],i ); }
      if(env_var_0 == 1756) { _res_key_if_0 = n != std::max( arr[n],jumps ); }
      if(env_var_0 == 1757) { _res_key_if_0 = n != std::max( arr[n],jumps[i] ); }
      if(env_var_0 == 1758) { _res_key_if_0 = n != std::max( arr[n],min ); }
      if(env_var_0 == 1759) { _res_key_if_0 = n != std::max( arr[n],n ); }
      if(env_var_0 == 1760) { _res_key_if_0 = n != std::max( i,arr[i] ); }
      if(env_var_0 == 1761) { _res_key_if_0 = n != std::max( i,arr[min] ); }
      if(env_var_0 == 1762) { _res_key_if_0 = n != std::max( i,arr[n] ); }
      if(env_var_0 == 1763) { _res_key_if_0 = n != std::max( i,i ); }
      if(env_var_0 == 1764) { _res_key_if_0 = n != std::max( i,jumps ); }
      if(env_var_0 == 1765) { _res_key_if_0 = n != std::max( i,jumps[i] ); }
      if(env_var_0 == 1766) { _res_key_if_0 = n != std::max( i,min ); }
      if(env_var_0 == 1767) { _res_key_if_0 = n != std::max( i,n ); }
      if(env_var_0 == 1768) { _res_key_if_0 = n != std::max( jumps,arr[i] ); }
      if(env_var_0 == 1769) { _res_key_if_0 = n != std::max( jumps,arr[min] ); }
      if(env_var_0 == 1770) { _res_key_if_0 = n != std::max( jumps,arr[n] ); }
      if(env_var_0 == 1771) { _res_key_if_0 = n != std::max( jumps,i ); }
      if(env_var_0 == 1772) { _res_key_if_0 = n != std::max( jumps,jumps ); }
      if(env_var_0 == 1773) { _res_key_if_0 = n != std::max( jumps,jumps[i] ); }
      if(env_var_0 == 1774) { _res_key_if_0 = n != std::max( jumps,min ); }
      if(env_var_0 == 1775) { _res_key_if_0 = n != std::max( jumps,n ); }
      if(env_var_0 == 1776) { _res_key_if_0 = n != std::max( jumps[i],arr[i] ); }
      if(env_var_0 == 1777) { _res_key_if_0 = n != std::max( jumps[i],arr[min] ); }
      if(env_var_0 == 1778) { _res_key_if_0 = n != std::max( jumps[i],arr[n] ); }
      if(env_var_0 == 1779) { _res_key_if_0 = n != std::max( jumps[i],i ); }
      if(env_var_0 == 1780) { _res_key_if_0 = n != std::max( jumps[i],jumps ); }
      if(env_var_0 == 1781) { _res_key_if_0 = n != std::max( jumps[i],jumps[i] ); }
      if(env_var_0 == 1782) { _res_key_if_0 = n != std::max( jumps[i],min ); }
      if(env_var_0 == 1783) { _res_key_if_0 = n != std::max( jumps[i],n ); }
      if(env_var_0 == 1784) { _res_key_if_0 = n != std::max( min,arr[i] ); }
      if(env_var_0 == 1785) { _res_key_if_0 = n != std::max( min,arr[min] ); }
      if(env_var_0 == 1786) { _res_key_if_0 = n != std::max( min,arr[n] ); }
      if(env_var_0 == 1787) { _res_key_if_0 = n != std::max( min,i ); }
      if(env_var_0 == 1788) { _res_key_if_0 = n != std::max( min,jumps ); }
      if(env_var_0 == 1789) { _res_key_if_0 = n != std::max( min,jumps[i] ); }
      if(env_var_0 == 1790) { _res_key_if_0 = n != std::max( min,min ); }
      if(env_var_0 == 1791) { _res_key_if_0 = n != std::max( min,n ); }
      if(env_var_0 == 1792) { _res_key_if_0 = n != std::max( n,arr[i] ); }
      if(env_var_0 == 1793) { _res_key_if_0 = n != std::max( n,arr[min] ); }
      if(env_var_0 == 1794) { _res_key_if_0 = n != std::max( n,arr[n] ); }
      if(env_var_0 == 1795) { _res_key_if_0 = n != std::max( n,i ); }
      if(env_var_0 == 1796) { _res_key_if_0 = n != std::max( n,jumps ); }
      if(env_var_0 == 1797) { _res_key_if_0 = n != std::max( n,jumps[i] ); }
      if(env_var_0 == 1798) { _res_key_if_0 = n != std::max( n,min ); }
      if(env_var_0 == 1799) { _res_key_if_0 = n != std::max( n,n ); }
      if(env_var_0 == 1800) { _res_key_if_0 = n != std::min( arr[i],arr[i] ); }
      if(env_var_0 == 1801) { _res_key_if_0 = n != std::min( arr[i],arr[min] ); }
      if(env_var_0 == 1802) { _res_key_if_0 = n != std::min( arr[i],arr[n] ); }
      if(env_var_0 == 1803) { _res_key_if_0 = n != std::min( arr[i],i ); }
      if(env_var_0 == 1804) { _res_key_if_0 = n != std::min( arr[i],jumps ); }
      if(env_var_0 == 1805) { _res_key_if_0 = n != std::min( arr[i],jumps[i] ); }
      if(env_var_0 == 1806) { _res_key_if_0 = n != std::min( arr[i],min ); }
      if(env_var_0 == 1807) { _res_key_if_0 = n != std::min( arr[i],n ); }
      if(env_var_0 == 1808) { _res_key_if_0 = n != std::min( arr[min],arr[i] ); }
      if(env_var_0 == 1809) { _res_key_if_0 = n != std::min( arr[min],arr[min] ); }
      if(env_var_0 == 1810) { _res_key_if_0 = n != std::min( arr[min],arr[n] ); }
      if(env_var_0 == 1811) { _res_key_if_0 = n != std::min( arr[min],i ); }
      if(env_var_0 == 1812) { _res_key_if_0 = n != std::min( arr[min],jumps ); }
      if(env_var_0 == 1813) { _res_key_if_0 = n != std::min( arr[min],jumps[i] ); }
      if(env_var_0 == 1814) { _res_key_if_0 = n != std::min( arr[min],min ); }
      if(env_var_0 == 1815) { _res_key_if_0 = n != std::min( arr[min],n ); }
      if(env_var_0 == 1816) { _res_key_if_0 = n != std::min( arr[n],arr[i] ); }
      if(env_var_0 == 1817) { _res_key_if_0 = n != std::min( arr[n],arr[min] ); }
      if(env_var_0 == 1818) { _res_key_if_0 = n != std::min( arr[n],arr[n] ); }
      if(env_var_0 == 1819) { _res_key_if_0 = n != std::min( arr[n],i ); }
      if(env_var_0 == 1820) { _res_key_if_0 = n != std::min( arr[n],jumps ); }
      if(env_var_0 == 1821) { _res_key_if_0 = n != std::min( arr[n],jumps[i] ); }
      if(env_var_0 == 1822) { _res_key_if_0 = n != std::min( arr[n],min ); }
      if(env_var_0 == 1823) { _res_key_if_0 = n != std::min( arr[n],n ); }
      if(env_var_0 == 1824) { _res_key_if_0 = n != std::min( i,arr[i] ); }
      if(env_var_0 == 1825) { _res_key_if_0 = n != std::min( i,arr[min] ); }
      if(env_var_0 == 1826) { _res_key_if_0 = n != std::min( i,arr[n] ); }
      if(env_var_0 == 1827) { _res_key_if_0 = n != std::min( i,i ); }
      if(env_var_0 == 1828) { _res_key_if_0 = n != std::min( i,jumps ); }
      if(env_var_0 == 1829) { _res_key_if_0 = n != std::min( i,jumps[i] ); }
      if(env_var_0 == 1830) { _res_key_if_0 = n != std::min( i,min ); }
      if(env_var_0 == 1831) { _res_key_if_0 = n != std::min( i,n ); }
      if(env_var_0 == 1832) { _res_key_if_0 = n != std::min( jumps,arr[i] ); }
      if(env_var_0 == 1833) { _res_key_if_0 = n != std::min( jumps,arr[min] ); }
      if(env_var_0 == 1834) { _res_key_if_0 = n != std::min( jumps,arr[n] ); }
      if(env_var_0 == 1835) { _res_key_if_0 = n != std::min( jumps,i ); }
      if(env_var_0 == 1836) { _res_key_if_0 = n != std::min( jumps,jumps ); }
      if(env_var_0 == 1837) { _res_key_if_0 = n != std::min( jumps,jumps[i] ); }
      if(env_var_0 == 1838) { _res_key_if_0 = n != std::min( jumps,min ); }
      if(env_var_0 == 1839) { _res_key_if_0 = n != std::min( jumps,n ); }
      if(env_var_0 == 1840) { _res_key_if_0 = n != std::min( jumps[i],arr[i] ); }
      if(env_var_0 == 1841) { _res_key_if_0 = n != std::min( jumps[i],arr[min] ); }
      if(env_var_0 == 1842) { _res_key_if_0 = n != std::min( jumps[i],arr[n] ); }
      if(env_var_0 == 1843) { _res_key_if_0 = n != std::min( jumps[i],i ); }
      if(env_var_0 == 1844) { _res_key_if_0 = n != std::min( jumps[i],jumps ); }
      if(env_var_0 == 1845) { _res_key_if_0 = n != std::min( jumps[i],jumps[i] ); }
      if(env_var_0 == 1846) { _res_key_if_0 = n != std::min( jumps[i],min ); }
      if(env_var_0 == 1847) { _res_key_if_0 = n != std::min( jumps[i],n ); }
      if(env_var_0 == 1848) { _res_key_if_0 = n != std::min( min,arr[i] ); }
      if(env_var_0 == 1849) { _res_key_if_0 = n != std::min( min,arr[min] ); }
      if(env_var_0 == 1850) { _res_key_if_0 = n != std::min( min,arr[n] ); }
      if(env_var_0 == 1851) { _res_key_if_0 = n != std::min( min,i ); }
      if(env_var_0 == 1852) { _res_key_if_0 = n != std::min( min,jumps ); }
      if(env_var_0 == 1853) { _res_key_if_0 = n != std::min( min,jumps[i] ); }
      if(env_var_0 == 1854) { _res_key_if_0 = n != std::min( min,min ); }
      if(env_var_0 == 1855) { _res_key_if_0 = n != std::min( min,n ); }
      if(env_var_0 == 1856) { _res_key_if_0 = n != std::min( n,arr[i] ); }
      if(env_var_0 == 1857) { _res_key_if_0 = n != std::min( n,arr[min] ); }
      if(env_var_0 == 1858) { _res_key_if_0 = n != std::min( n,arr[n] ); }
      if(env_var_0 == 1859) { _res_key_if_0 = n != std::min( n,i ); }
      if(env_var_0 == 1860) { _res_key_if_0 = n != std::min( n,jumps ); }
      if(env_var_0 == 1861) { _res_key_if_0 = n != std::min( n,jumps[i] ); }
      if(env_var_0 == 1862) { _res_key_if_0 = n != std::min( n,min ); }
      if(env_var_0 == 1863) { _res_key_if_0 = n != std::min( n,n ); }
      if(env_var_0 == 1864) { _res_key_if_0 = n != toupper( arr[i] ); }
      if(env_var_0 == 1865) { _res_key_if_0 = n != toupper( arr[min] ); }
      if(env_var_0 == 1866) { _res_key_if_0 = n != toupper( arr[n] ); }
      if(env_var_0 == 1867) { _res_key_if_0 = n != toupper( i ); }
      if(env_var_0 == 1868) { _res_key_if_0 = n != toupper( jumps ); }
      if(env_var_0 == 1869) { _res_key_if_0 = n != toupper( jumps[i] ); }
      if(env_var_0 == 1870) { _res_key_if_0 = n != toupper( min ); }
      if(env_var_0 == 1871) { _res_key_if_0 = n != toupper( n ); }
      if ( _res_key_if_0 ) {
        jumps [ i ] = min + 1 ;
      }
      else {
        jumps [ i ] = min ;
      }
    }
  }
  return jumps [ 0 ] ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,6,7,14,22,32,42,42,43,48,54,57,59,69,84,92,98},{98,-66,-70,-64,-88,-76,-90,16,58,68,-10,-42,-28,10,72,68,-30,60,92,-56,80,-4,-82,30,58,98,-56,98,-14,-38,-20,-74,-46,-22,78,36,-54,-64,80,-10,-26,82,96,-72,-36,-36,-32,-88,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{64,25,63,54,7,43,79,27,34,13,84,80,34,48,5,56,67,2},{2,28,68},{1,0,0,0,0,1,1,1,1,0,1,0,0},{1,1,9,16,17,18,19,20,21,22,25,28,29,29,36,37,40,40,42,48,49,49,55,63,65,66,69,70,72,73,76,77,77,79,79,81,81,93,95,99},{38,-42,-8,98,-90,38,88,-8,70,-28,-50,-22,28,24,88,-26,58,48,6,0,68,-6,8,54,-2,46,-44,96,-82,-14,-48,-18,-16,-48,-44,-16,-58,-64},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{98,46,12,55,57,11,25,64,92,35,90,72,95,30,75,67,64,12,31,84,70,96,71,80,62,34,70,10,54}};
    vector<int> param1 {11,26,41,10,2,11,24,34,14,25};
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
