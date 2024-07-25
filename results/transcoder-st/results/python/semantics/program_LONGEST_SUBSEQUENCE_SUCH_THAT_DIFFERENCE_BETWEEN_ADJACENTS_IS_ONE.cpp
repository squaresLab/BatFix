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
  int dp [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) dp [ i ] = 1;
  for ( int i = 1;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j < i;
    j ++ ) {
      if ( ( arr [ i ] == arr [ j ] + 1 ) || ( arr [ i ] == arr [ j ] - 1 ) ) dp [ i ] = max ( dp [ i ], dp [ j ] + 1 );
    }
  }
  int result = 1;
  for ( int i = 0;
  i < n;
  i ++ ) if ( result < dp [ i ] ) result = dp [ i ];
  return result;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  if(env_var_0 == 0) { arr = [1 for arr in arr+n]; }
  if(env_var_0 == 1) { arr = [1 for arr in arr[n]]; }
  if(env_var_0 == 2) { arr = [1 for arr in arr]; }
  if(env_var_0 == 3) { arr = [1 for arr in isupper( arr[n] )]; }
  if(env_var_0 == 4) { arr = [1 for arr in isupper( n )]; }
  if(env_var_0 == 5) { arr = [1 for arr in n]; }
  if(env_var_0 == 6) { arr = [1 for arr in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 7) { arr = [1 for arr in std::max( arr[n],n )]; }
  if(env_var_0 == 8) { arr = [1 for arr in std::max( n,arr[n] )]; }
  if(env_var_0 == 9) { arr = [1 for arr in std::max( n,n )]; }
  if(env_var_0 == 10) { arr = [1 for arr in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 11) { arr = [1 for arr in std::min( arr[n],n )]; }
  if(env_var_0 == 12) { arr = [1 for arr in std::min( n,arr[n] )]; }
  if(env_var_0 == 13) { arr = [1 for arr in std::min( n,n )]; }
  if(env_var_0 == 14) { arr = [1 for arr in toupper( arr[n] )]; }
  if(env_var_0 == 15) { arr = [1 for arr in toupper( n )]; }
  if(env_var_0 == 16) { arr = [1 for arr+n in arr+n]; }
  if(env_var_0 == 17) { arr = [1 for arr+n in arr[n]]; }
  if(env_var_0 == 18) { arr = [1 for arr+n in arr]; }
  if(env_var_0 == 19) { arr = [1 for arr+n in isupper( arr[n] )]; }
  if(env_var_0 == 20) { arr = [1 for arr+n in isupper( n )]; }
  if(env_var_0 == 21) { arr = [1 for arr+n in n]; }
  if(env_var_0 == 22) { arr = [1 for arr+n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 23) { arr = [1 for arr+n in std::max( arr[n],n )]; }
  if(env_var_0 == 24) { arr = [1 for arr+n in std::max( n,arr[n] )]; }
  if(env_var_0 == 25) { arr = [1 for arr+n in std::max( n,n )]; }
  if(env_var_0 == 26) { arr = [1 for arr+n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 27) { arr = [1 for arr+n in std::min( arr[n],n )]; }
  if(env_var_0 == 28) { arr = [1 for arr+n in std::min( n,arr[n] )]; }
  if(env_var_0 == 29) { arr = [1 for arr+n in std::min( n,n )]; }
  if(env_var_0 == 30) { arr = [1 for arr+n in toupper( arr[n] )]; }
  if(env_var_0 == 31) { arr = [1 for arr+n in toupper( n )]; }
  if(env_var_0 == 32) { arr = [1 for arr[n] in arr+n]; }
  if(env_var_0 == 33) { arr = [1 for arr[n] in arr[n]]; }
  if(env_var_0 == 34) { arr = [1 for arr[n] in arr]; }
  if(env_var_0 == 35) { arr = [1 for arr[n] in isupper( arr[n] )]; }
  if(env_var_0 == 36) { arr = [1 for arr[n] in isupper( n )]; }
  if(env_var_0 == 37) { arr = [1 for arr[n] in n]; }
  if(env_var_0 == 38) { arr = [1 for arr[n] in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 39) { arr = [1 for arr[n] in std::max( arr[n],n )]; }
  if(env_var_0 == 40) { arr = [1 for arr[n] in std::max( n,arr[n] )]; }
  if(env_var_0 == 41) { arr = [1 for arr[n] in std::max( n,n )]; }
  if(env_var_0 == 42) { arr = [1 for arr[n] in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 43) { arr = [1 for arr[n] in std::min( arr[n],n )]; }
  if(env_var_0 == 44) { arr = [1 for arr[n] in std::min( n,arr[n] )]; }
  if(env_var_0 == 45) { arr = [1 for arr[n] in std::min( n,n )]; }
  if(env_var_0 == 46) { arr = [1 for arr[n] in toupper( arr[n] )]; }
  if(env_var_0 == 47) { arr = [1 for arr[n] in toupper( n )]; }
  if(env_var_0 == 48) { arr = [1 for n in arr+n]; }
  if(env_var_0 == 49) { arr = [1 for n in arr[n]]; }
  if(env_var_0 == 50) { arr = [1 for n in arr]; }
  if(env_var_0 == 51) { arr = [1 for n in isupper( arr[n] )]; }
  if(env_var_0 == 52) { arr = [1 for n in isupper( n )]; }
  if(env_var_0 == 53) { arr = [1 for n in n]; }
  if(env_var_0 == 54) { arr = [1 for n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 55) { arr = [1 for n in std::max( arr[n],n )]; }
  if(env_var_0 == 56) { arr = [1 for n in std::max( n,arr[n] )]; }
  if(env_var_0 == 57) { arr = [1 for n in std::max( n,n )]; }
  if(env_var_0 == 58) { arr = [1 for n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 59) { arr = [1 for n in std::min( arr[n],n )]; }
  if(env_var_0 == 60) { arr = [1 for n in std::min( n,arr[n] )]; }
  if(env_var_0 == 61) { arr = [1 for n in std::min( n,n )]; }
  if(env_var_0 == 62) { arr = [1 for n in toupper( arr[n] )]; }
  if(env_var_0 == 63) { arr = [1 for n in toupper( n )]; }
  if(env_var_0 == 64) { arr+n = [1 for arr in arr+n]; }
  if(env_var_0 == 65) { arr+n = [1 for arr in arr[n]]; }
  if(env_var_0 == 66) { arr+n = [1 for arr in arr]; }
  if(env_var_0 == 67) { arr+n = [1 for arr in isupper( arr[n] )]; }
  if(env_var_0 == 68) { arr+n = [1 for arr in isupper( n )]; }
  if(env_var_0 == 69) { arr+n = [1 for arr in n]; }
  if(env_var_0 == 70) { arr+n = [1 for arr in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 71) { arr+n = [1 for arr in std::max( arr[n],n )]; }
  if(env_var_0 == 72) { arr+n = [1 for arr in std::max( n,arr[n] )]; }
  if(env_var_0 == 73) { arr+n = [1 for arr in std::max( n,n )]; }
  if(env_var_0 == 74) { arr+n = [1 for arr in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 75) { arr+n = [1 for arr in std::min( arr[n],n )]; }
  if(env_var_0 == 76) { arr+n = [1 for arr in std::min( n,arr[n] )]; }
  if(env_var_0 == 77) { arr+n = [1 for arr in std::min( n,n )]; }
  if(env_var_0 == 78) { arr+n = [1 for arr in toupper( arr[n] )]; }
  if(env_var_0 == 79) { arr+n = [1 for arr in toupper( n )]; }
  if(env_var_0 == 80) { arr+n = [1 for arr+n in arr+n]; }
  if(env_var_0 == 81) { arr+n = [1 for arr+n in arr[n]]; }
  if(env_var_0 == 82) { arr+n = [1 for arr+n in arr]; }
  if(env_var_0 == 83) { arr+n = [1 for arr+n in isupper( arr[n] )]; }
  if(env_var_0 == 84) { arr+n = [1 for arr+n in isupper( n )]; }
  if(env_var_0 == 85) { arr+n = [1 for arr+n in n]; }
  if(env_var_0 == 86) { arr+n = [1 for arr+n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 87) { arr+n = [1 for arr+n in std::max( arr[n],n )]; }
  if(env_var_0 == 88) { arr+n = [1 for arr+n in std::max( n,arr[n] )]; }
  if(env_var_0 == 89) { arr+n = [1 for arr+n in std::max( n,n )]; }
  if(env_var_0 == 90) { arr+n = [1 for arr+n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 91) { arr+n = [1 for arr+n in std::min( arr[n],n )]; }
  if(env_var_0 == 92) { arr+n = [1 for arr+n in std::min( n,arr[n] )]; }
  if(env_var_0 == 93) { arr+n = [1 for arr+n in std::min( n,n )]; }
  if(env_var_0 == 94) { arr+n = [1 for arr+n in toupper( arr[n] )]; }
  if(env_var_0 == 95) { arr+n = [1 for arr+n in toupper( n )]; }
  if(env_var_0 == 96) { arr+n = [1 for arr[n] in arr+n]; }
  if(env_var_0 == 97) { arr+n = [1 for arr[n] in arr[n]]; }
  if(env_var_0 == 98) { arr+n = [1 for arr[n] in arr]; }
  if(env_var_0 == 99) { arr+n = [1 for arr[n] in isupper( arr[n] )]; }
  if(env_var_0 == 100) { arr+n = [1 for arr[n] in isupper( n )]; }
  if(env_var_0 == 101) { arr+n = [1 for arr[n] in n]; }
  if(env_var_0 == 102) { arr+n = [1 for arr[n] in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 103) { arr+n = [1 for arr[n] in std::max( arr[n],n )]; }
  if(env_var_0 == 104) { arr+n = [1 for arr[n] in std::max( n,arr[n] )]; }
  if(env_var_0 == 105) { arr+n = [1 for arr[n] in std::max( n,n )]; }
  if(env_var_0 == 106) { arr+n = [1 for arr[n] in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 107) { arr+n = [1 for arr[n] in std::min( arr[n],n )]; }
  if(env_var_0 == 108) { arr+n = [1 for arr[n] in std::min( n,arr[n] )]; }
  if(env_var_0 == 109) { arr+n = [1 for arr[n] in std::min( n,n )]; }
  if(env_var_0 == 110) { arr+n = [1 for arr[n] in toupper( arr[n] )]; }
  if(env_var_0 == 111) { arr+n = [1 for arr[n] in toupper( n )]; }
  if(env_var_0 == 112) { arr+n = [1 for n in arr+n]; }
  if(env_var_0 == 113) { arr+n = [1 for n in arr[n]]; }
  if(env_var_0 == 114) { arr+n = [1 for n in arr]; }
  if(env_var_0 == 115) { arr+n = [1 for n in isupper( arr[n] )]; }
  if(env_var_0 == 116) { arr+n = [1 for n in isupper( n )]; }
  if(env_var_0 == 117) { arr+n = [1 for n in n]; }
  if(env_var_0 == 118) { arr+n = [1 for n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 119) { arr+n = [1 for n in std::max( arr[n],n )]; }
  if(env_var_0 == 120) { arr+n = [1 for n in std::max( n,arr[n] )]; }
  if(env_var_0 == 121) { arr+n = [1 for n in std::max( n,n )]; }
  if(env_var_0 == 122) { arr+n = [1 for n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 123) { arr+n = [1 for n in std::min( arr[n],n )]; }
  if(env_var_0 == 124) { arr+n = [1 for n in std::min( n,arr[n] )]; }
  if(env_var_0 == 125) { arr+n = [1 for n in std::min( n,n )]; }
  if(env_var_0 == 126) { arr+n = [1 for n in toupper( arr[n] )]; }
  if(env_var_0 == 127) { arr+n = [1 for n in toupper( n )]; }
  if(env_var_0 == 128) { arr[n] = [1 for arr in arr+n]; }
  if(env_var_0 == 129) { arr[n] = [1 for arr in arr[n]]; }
  if(env_var_0 == 130) { arr[n] = [1 for arr in arr]; }
  if(env_var_0 == 131) { arr[n] = [1 for arr in isupper( arr[n] )]; }
  if(env_var_0 == 132) { arr[n] = [1 for arr in isupper( n )]; }
  if(env_var_0 == 133) { arr[n] = [1 for arr in n]; }
  if(env_var_0 == 134) { arr[n] = [1 for arr in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 135) { arr[n] = [1 for arr in std::max( arr[n],n )]; }
  if(env_var_0 == 136) { arr[n] = [1 for arr in std::max( n,arr[n] )]; }
  if(env_var_0 == 137) { arr[n] = [1 for arr in std::max( n,n )]; }
  if(env_var_0 == 138) { arr[n] = [1 for arr in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 139) { arr[n] = [1 for arr in std::min( arr[n],n )]; }
  if(env_var_0 == 140) { arr[n] = [1 for arr in std::min( n,arr[n] )]; }
  if(env_var_0 == 141) { arr[n] = [1 for arr in std::min( n,n )]; }
  if(env_var_0 == 142) { arr[n] = [1 for arr in toupper( arr[n] )]; }
  if(env_var_0 == 143) { arr[n] = [1 for arr in toupper( n )]; }
  if(env_var_0 == 144) { arr[n] = [1 for arr+n in arr+n]; }
  if(env_var_0 == 145) { arr[n] = [1 for arr+n in arr[n]]; }
  if(env_var_0 == 146) { arr[n] = [1 for arr+n in arr]; }
  if(env_var_0 == 147) { arr[n] = [1 for arr+n in isupper( arr[n] )]; }
  if(env_var_0 == 148) { arr[n] = [1 for arr+n in isupper( n )]; }
  if(env_var_0 == 149) { arr[n] = [1 for arr+n in n]; }
  if(env_var_0 == 150) { arr[n] = [1 for arr+n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 151) { arr[n] = [1 for arr+n in std::max( arr[n],n )]; }
  if(env_var_0 == 152) { arr[n] = [1 for arr+n in std::max( n,arr[n] )]; }
  if(env_var_0 == 153) { arr[n] = [1 for arr+n in std::max( n,n )]; }
  if(env_var_0 == 154) { arr[n] = [1 for arr+n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 155) { arr[n] = [1 for arr+n in std::min( arr[n],n )]; }
  if(env_var_0 == 156) { arr[n] = [1 for arr+n in std::min( n,arr[n] )]; }
  if(env_var_0 == 157) { arr[n] = [1 for arr+n in std::min( n,n )]; }
  if(env_var_0 == 158) { arr[n] = [1 for arr+n in toupper( arr[n] )]; }
  if(env_var_0 == 159) { arr[n] = [1 for arr+n in toupper( n )]; }
  if(env_var_0 == 160) { arr[n] = [1 for arr[n] in arr+n]; }
  if(env_var_0 == 161) { arr[n] = [1 for arr[n] in arr[n]]; }
  if(env_var_0 == 162) { arr[n] = [1 for arr[n] in arr]; }
  if(env_var_0 == 163) { arr[n] = [1 for arr[n] in isupper( arr[n] )]; }
  if(env_var_0 == 164) { arr[n] = [1 for arr[n] in isupper( n )]; }
  if(env_var_0 == 165) { arr[n] = [1 for arr[n] in n]; }
  if(env_var_0 == 166) { arr[n] = [1 for arr[n] in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 167) { arr[n] = [1 for arr[n] in std::max( arr[n],n )]; }
  if(env_var_0 == 168) { arr[n] = [1 for arr[n] in std::max( n,arr[n] )]; }
  if(env_var_0 == 169) { arr[n] = [1 for arr[n] in std::max( n,n )]; }
  if(env_var_0 == 170) { arr[n] = [1 for arr[n] in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 171) { arr[n] = [1 for arr[n] in std::min( arr[n],n )]; }
  if(env_var_0 == 172) { arr[n] = [1 for arr[n] in std::min( n,arr[n] )]; }
  if(env_var_0 == 173) { arr[n] = [1 for arr[n] in std::min( n,n )]; }
  if(env_var_0 == 174) { arr[n] = [1 for arr[n] in toupper( arr[n] )]; }
  if(env_var_0 == 175) { arr[n] = [1 for arr[n] in toupper( n )]; }
  if(env_var_0 == 176) { arr[n] = [1 for n in arr+n]; }
  if(env_var_0 == 177) { arr[n] = [1 for n in arr[n]]; }
  if(env_var_0 == 178) { arr[n] = [1 for n in arr]; }
  if(env_var_0 == 179) { arr[n] = [1 for n in isupper( arr[n] )]; }
  if(env_var_0 == 180) { arr[n] = [1 for n in isupper( n )]; }
  if(env_var_0 == 181) { arr[n] = [1 for n in n]; }
  if(env_var_0 == 182) { arr[n] = [1 for n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 183) { arr[n] = [1 for n in std::max( arr[n],n )]; }
  if(env_var_0 == 184) { arr[n] = [1 for n in std::max( n,arr[n] )]; }
  if(env_var_0 == 185) { arr[n] = [1 for n in std::max( n,n )]; }
  if(env_var_0 == 186) { arr[n] = [1 for n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 187) { arr[n] = [1 for n in std::min( arr[n],n )]; }
  if(env_var_0 == 188) { arr[n] = [1 for n in std::min( n,arr[n] )]; }
  if(env_var_0 == 189) { arr[n] = [1 for n in std::min( n,n )]; }
  if(env_var_0 == 190) { arr[n] = [1 for n in toupper( arr[n] )]; }
  if(env_var_0 == 191) { arr[n] = [1 for n in toupper( n )]; }
  if(env_var_0 == 192) { n = [1 for arr in arr+n]; }
  if(env_var_0 == 193) { n = [1 for arr in arr[n]]; }
  if(env_var_0 == 194) { n = [1 for arr in arr]; }
  if(env_var_0 == 195) { n = [1 for arr in isupper( arr[n] )]; }
  if(env_var_0 == 196) { n = [1 for arr in isupper( n )]; }
  if(env_var_0 == 197) { n = [1 for arr in n]; }
  if(env_var_0 == 198) { n = [1 for arr in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 199) { n = [1 for arr in std::max( arr[n],n )]; }
  if(env_var_0 == 200) { n = [1 for arr in std::max( n,arr[n] )]; }
  if(env_var_0 == 201) { n = [1 for arr in std::max( n,n )]; }
  if(env_var_0 == 202) { n = [1 for arr in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 203) { n = [1 for arr in std::min( arr[n],n )]; }
  if(env_var_0 == 204) { n = [1 for arr in std::min( n,arr[n] )]; }
  if(env_var_0 == 205) { n = [1 for arr in std::min( n,n )]; }
  if(env_var_0 == 206) { n = [1 for arr in toupper( arr[n] )]; }
  if(env_var_0 == 207) { n = [1 for arr in toupper( n )]; }
  if(env_var_0 == 208) { n = [1 for arr+n in arr+n]; }
  if(env_var_0 == 209) { n = [1 for arr+n in arr[n]]; }
  if(env_var_0 == 210) { n = [1 for arr+n in arr]; }
  if(env_var_0 == 211) { n = [1 for arr+n in isupper( arr[n] )]; }
  if(env_var_0 == 212) { n = [1 for arr+n in isupper( n )]; }
  if(env_var_0 == 213) { n = [1 for arr+n in n]; }
  if(env_var_0 == 214) { n = [1 for arr+n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 215) { n = [1 for arr+n in std::max( arr[n],n )]; }
  if(env_var_0 == 216) { n = [1 for arr+n in std::max( n,arr[n] )]; }
  if(env_var_0 == 217) { n = [1 for arr+n in std::max( n,n )]; }
  if(env_var_0 == 218) { n = [1 for arr+n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 219) { n = [1 for arr+n in std::min( arr[n],n )]; }
  if(env_var_0 == 220) { n = [1 for arr+n in std::min( n,arr[n] )]; }
  if(env_var_0 == 221) { n = [1 for arr+n in std::min( n,n )]; }
  if(env_var_0 == 222) { n = [1 for arr+n in toupper( arr[n] )]; }
  if(env_var_0 == 223) { n = [1 for arr+n in toupper( n )]; }
  if(env_var_0 == 224) { n = [1 for arr[n] in arr+n]; }
  if(env_var_0 == 225) { n = [1 for arr[n] in arr[n]]; }
  if(env_var_0 == 226) { n = [1 for arr[n] in arr]; }
  if(env_var_0 == 227) { n = [1 for arr[n] in isupper( arr[n] )]; }
  if(env_var_0 == 228) { n = [1 for arr[n] in isupper( n )]; }
  if(env_var_0 == 229) { n = [1 for arr[n] in n]; }
  if(env_var_0 == 230) { n = [1 for arr[n] in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 231) { n = [1 for arr[n] in std::max( arr[n],n )]; }
  if(env_var_0 == 232) { n = [1 for arr[n] in std::max( n,arr[n] )]; }
  if(env_var_0 == 233) { n = [1 for arr[n] in std::max( n,n )]; }
  if(env_var_0 == 234) { n = [1 for arr[n] in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 235) { n = [1 for arr[n] in std::min( arr[n],n )]; }
  if(env_var_0 == 236) { n = [1 for arr[n] in std::min( n,arr[n] )]; }
  if(env_var_0 == 237) { n = [1 for arr[n] in std::min( n,n )]; }
  if(env_var_0 == 238) { n = [1 for arr[n] in toupper( arr[n] )]; }
  if(env_var_0 == 239) { n = [1 for arr[n] in toupper( n )]; }
  if(env_var_0 == 240) { n = [1 for n in arr+n]; }
  if(env_var_0 == 241) { n = [1 for n in arr[n]]; }
  if(env_var_0 == 242) { n = [1 for n in arr]; }
  if(env_var_0 == 243) { n = [1 for n in isupper( arr[n] )]; }
  if(env_var_0 == 244) { n = [1 for n in isupper( n )]; }
  if(env_var_0 == 245) { n = [1 for n in n]; }
  if(env_var_0 == 246) { n = [1 for n in std::max( arr[n],arr[n] )]; }
  if(env_var_0 == 247) { n = [1 for n in std::max( arr[n],n )]; }
  if(env_var_0 == 248) { n = [1 for n in std::max( n,arr[n] )]; }
  if(env_var_0 == 249) { n = [1 for n in std::max( n,n )]; }
  if(env_var_0 == 250) { n = [1 for n in std::min( arr[n],arr[n] )]; }
  if(env_var_0 == 251) { n = [1 for n in std::min( arr[n],n )]; }
  if(env_var_0 == 252) { n = [1 for n in std::min( n,arr[n] )]; }
  if(env_var_0 == 253) { n = [1 for n in std::min( n,n )]; }
  if(env_var_0 == 254) { n = [1 for n in toupper( arr[n] )]; }
  if(env_var_0 == 255) { n = [1 for n in toupper( n )]; }
  
  memset( dp,  1, sizeof( dp ));
  memset( dp,  1, sizeof( dp ));
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < i ;
    j ++ ) {
      if ( ( ( arr [ i ] == arr [ j ] + 1 ) || ( arr [ i ] == arr [ j ] - 1 ) ) && ( dp [ i ] == dp [ j ] + 1 ) ) dp [ i ] = max ( dp [ i ] , dp [ j ] + 1 ) ;
    }
  }
  int result = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( result < dp [ i ] ) && ( dp [ i ] > dp [ i ] ) ) result = dp [ i ] ;
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,13,15,17,18,20,22,24,28,34,37,43,46,47,49,51,52,54,58,64,65,77,78,79,87,90,92,93,94,97},{-86,-56,76,86,42,-40,8,34,-48,-54,-80,6,42,48,76,-26,6},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{5,22,15,26,29,47,22},{-90,-84,-76,-76,-74,-74,-66,-58,-58,-56,-56,-44,-38,-36,-34,-32,-16,-10,2,6,24,24,24,34,36,54,60,68,70,76,88},{0,1,1,1,0,0,1,0,1,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,0,1,1,1,1,0,0,0,1,0,0,1,1,1,0,0,1},{1,3,12,12,12,12,14,17,18,19,23,27,28,30,35,38,42,44,45,48,52,59,61,64,65,69,73,76,77,82,83,85,87,99},{-54,-20,24,-78,-58,64,34,70,-36,-24},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{5,35,75,21,82,32,28,53,20,27,42,92,32,70,81,75,72,66,97,60,11,83,14,30,5,68,17,27,62,86,26,20,97,91,44,69}};
    vector<int> param1 {23,15,16,5,17,26,23,8,27,20};
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

