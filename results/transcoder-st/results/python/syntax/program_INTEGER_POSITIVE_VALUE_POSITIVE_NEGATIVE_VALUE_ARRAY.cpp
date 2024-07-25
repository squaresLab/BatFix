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
  unordered_map < int, int > hash;
  int maximum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] < 0 ) hash [ abs ( arr [ i ] ) ] -= 1;
    else hash [ arr [ i ] ] += 1;
  }
  for ( int i = 0;
  i < n;
  i ++ ) if ( hash [ arr [ i ] ] != 0 ) return arr [ i ];
  return - 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  map < int , int > hash ;
  int maximum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = arr = arr; }
    if(env_var_0 == 1) { _res_key_if_0 = arr = arr+i; }
    if(env_var_0 == 2) { _res_key_if_0 = arr = arr+maximum; }
    if(env_var_0 == 3) { _res_key_if_0 = arr = arr+n; }
    if(env_var_0 == 4) { _res_key_if_0 = arr = arr[i]; }
    if(env_var_0 == 5) { _res_key_if_0 = arr = arr[maximum]; }
    if(env_var_0 == 6) { _res_key_if_0 = arr = arr[n]; }
    if(env_var_0 == 7) { _res_key_if_0 = arr = hash; }
    if(env_var_0 == 8) { _res_key_if_0 = arr = hash.begin(); }
    if(env_var_0 == 9) { _res_key_if_0 = arr = hash.cend(); }
    if(env_var_0 == 10) { _res_key_if_0 = arr = hash.crend(); }
    if(env_var_0 == 11) { _res_key_if_0 = arr = hash.end(); }
    if(env_var_0 == 12) { _res_key_if_0 = arr = hash.get_allocator(); }
    if(env_var_0 == 13) { _res_key_if_0 = arr = hash.rbegin(); }
    if(env_var_0 == 14) { _res_key_if_0 = arr = hash.rend(); }
    if(env_var_0 == 15) { _res_key_if_0 = arr = hash.size(); }
    if(env_var_0 == 16) { _res_key_if_0 = arr = hash.value_comp(); }
    if(env_var_0 == 17) { _res_key_if_0 = arr = i; }
    if(env_var_0 == 18) { _res_key_if_0 = arr = isupper(); }
    if(env_var_0 == 19) { _res_key_if_0 = arr = maximum; }
    if(env_var_0 == 20) { _res_key_if_0 = arr = n; }
    if(env_var_0 == 21) { _res_key_if_0 = arr = toupper( arr[i] ); }
    if(env_var_0 == 22) { _res_key_if_0 = arr = toupper( arr[maximum] ); }
    if(env_var_0 == 23) { _res_key_if_0 = arr = toupper( arr[n] ); }
    if(env_var_0 == 24) { _res_key_if_0 = arr = toupper( i ); }
    if(env_var_0 == 25) { _res_key_if_0 = arr = toupper( maximum ); }
    if(env_var_0 == 26) { _res_key_if_0 = arr = toupper( n ); }
    if(env_var_0 == 27) { _res_key_if_0 = arr+i = arr; }
    if(env_var_0 == 28) { _res_key_if_0 = arr+i = arr+i; }
    if(env_var_0 == 29) { _res_key_if_0 = arr+i = arr+maximum; }
    if(env_var_0 == 30) { _res_key_if_0 = arr+i = arr+n; }
    if(env_var_0 == 31) { _res_key_if_0 = arr+i = arr[i]; }
    if(env_var_0 == 32) { _res_key_if_0 = arr+i = arr[maximum]; }
    if(env_var_0 == 33) { _res_key_if_0 = arr+i = arr[n]; }
    if(env_var_0 == 34) { _res_key_if_0 = arr+i = hash; }
    if(env_var_0 == 35) { _res_key_if_0 = arr+i = hash.begin(); }
    if(env_var_0 == 36) { _res_key_if_0 = arr+i = hash.cend(); }
    if(env_var_0 == 37) { _res_key_if_0 = arr+i = hash.crend(); }
    if(env_var_0 == 38) { _res_key_if_0 = arr+i = hash.end(); }
    if(env_var_0 == 39) { _res_key_if_0 = arr+i = hash.get_allocator(); }
    if(env_var_0 == 40) { _res_key_if_0 = arr+i = hash.rbegin(); }
    if(env_var_0 == 41) { _res_key_if_0 = arr+i = hash.rend(); }
    if(env_var_0 == 42) { _res_key_if_0 = arr+i = hash.size(); }
    if(env_var_0 == 43) { _res_key_if_0 = arr+i = hash.value_comp(); }
    if(env_var_0 == 44) { _res_key_if_0 = arr+i = i; }
    if(env_var_0 == 45) { _res_key_if_0 = arr+i = isupper(); }
    if(env_var_0 == 46) { _res_key_if_0 = arr+i = maximum; }
    if(env_var_0 == 47) { _res_key_if_0 = arr+i = n; }
    if(env_var_0 == 48) { _res_key_if_0 = arr+i = toupper( arr[i] ); }
    if(env_var_0 == 49) { _res_key_if_0 = arr+i = toupper( arr[maximum] ); }
    if(env_var_0 == 50) { _res_key_if_0 = arr+i = toupper( arr[n] ); }
    if(env_var_0 == 51) { _res_key_if_0 = arr+i = toupper( i ); }
    if(env_var_0 == 52) { _res_key_if_0 = arr+i = toupper( maximum ); }
    if(env_var_0 == 53) { _res_key_if_0 = arr+i = toupper( n ); }
    if(env_var_0 == 54) { _res_key_if_0 = arr+maximum = arr; }
    if(env_var_0 == 55) { _res_key_if_0 = arr+maximum = arr+i; }
    if(env_var_0 == 56) { _res_key_if_0 = arr+maximum = arr+maximum; }
    if(env_var_0 == 57) { _res_key_if_0 = arr+maximum = arr+n; }
    if(env_var_0 == 58) { _res_key_if_0 = arr+maximum = arr[i]; }
    if(env_var_0 == 59) { _res_key_if_0 = arr+maximum = arr[maximum]; }
    if(env_var_0 == 60) { _res_key_if_0 = arr+maximum = arr[n]; }
    if(env_var_0 == 61) { _res_key_if_0 = arr+maximum = hash; }
    if(env_var_0 == 62) { _res_key_if_0 = arr+maximum = hash.begin(); }
    if(env_var_0 == 63) { _res_key_if_0 = arr+maximum = hash.cend(); }
    if(env_var_0 == 64) { _res_key_if_0 = arr+maximum = hash.crend(); }
    if(env_var_0 == 65) { _res_key_if_0 = arr+maximum = hash.end(); }
    if(env_var_0 == 66) { _res_key_if_0 = arr+maximum = hash.get_allocator(); }
    if(env_var_0 == 67) { _res_key_if_0 = arr+maximum = hash.rbegin(); }
    if(env_var_0 == 68) { _res_key_if_0 = arr+maximum = hash.rend(); }
    if(env_var_0 == 69) { _res_key_if_0 = arr+maximum = hash.size(); }
    if(env_var_0 == 70) { _res_key_if_0 = arr+maximum = hash.value_comp(); }
    if(env_var_0 == 71) { _res_key_if_0 = arr+maximum = i; }
    if(env_var_0 == 72) { _res_key_if_0 = arr+maximum = isupper(); }
    if(env_var_0 == 73) { _res_key_if_0 = arr+maximum = maximum; }
    if(env_var_0 == 74) { _res_key_if_0 = arr+maximum = n; }
    if(env_var_0 == 75) { _res_key_if_0 = arr+maximum = toupper( arr[i] ); }
    if(env_var_0 == 76) { _res_key_if_0 = arr+maximum = toupper( arr[maximum] ); }
    if(env_var_0 == 77) { _res_key_if_0 = arr+maximum = toupper( arr[n] ); }
    if(env_var_0 == 78) { _res_key_if_0 = arr+maximum = toupper( i ); }
    if(env_var_0 == 79) { _res_key_if_0 = arr+maximum = toupper( maximum ); }
    if(env_var_0 == 80) { _res_key_if_0 = arr+maximum = toupper( n ); }
    if(env_var_0 == 81) { _res_key_if_0 = arr+n = arr; }
    if(env_var_0 == 82) { _res_key_if_0 = arr+n = arr+i; }
    if(env_var_0 == 83) { _res_key_if_0 = arr+n = arr+maximum; }
    if(env_var_0 == 84) { _res_key_if_0 = arr+n = arr+n; }
    if(env_var_0 == 85) { _res_key_if_0 = arr+n = arr[i]; }
    if(env_var_0 == 86) { _res_key_if_0 = arr+n = arr[maximum]; }
    if(env_var_0 == 87) { _res_key_if_0 = arr+n = arr[n]; }
    if(env_var_0 == 88) { _res_key_if_0 = arr+n = hash; }
    if(env_var_0 == 89) { _res_key_if_0 = arr+n = hash.begin(); }
    if(env_var_0 == 90) { _res_key_if_0 = arr+n = hash.cend(); }
    if(env_var_0 == 91) { _res_key_if_0 = arr+n = hash.crend(); }
    if(env_var_0 == 92) { _res_key_if_0 = arr+n = hash.end(); }
    if(env_var_0 == 93) { _res_key_if_0 = arr+n = hash.get_allocator(); }
    if(env_var_0 == 94) { _res_key_if_0 = arr+n = hash.rbegin(); }
    if(env_var_0 == 95) { _res_key_if_0 = arr+n = hash.rend(); }
    if(env_var_0 == 96) { _res_key_if_0 = arr+n = hash.size(); }
    if(env_var_0 == 97) { _res_key_if_0 = arr+n = hash.value_comp(); }
    if(env_var_0 == 98) { _res_key_if_0 = arr+n = i; }
    if(env_var_0 == 99) { _res_key_if_0 = arr+n = isupper(); }
    if(env_var_0 == 100) { _res_key_if_0 = arr+n = maximum; }
    if(env_var_0 == 101) { _res_key_if_0 = arr+n = n; }
    if(env_var_0 == 102) { _res_key_if_0 = arr+n = toupper( arr[i] ); }
    if(env_var_0 == 103) { _res_key_if_0 = arr+n = toupper( arr[maximum] ); }
    if(env_var_0 == 104) { _res_key_if_0 = arr+n = toupper( arr[n] ); }
    if(env_var_0 == 105) { _res_key_if_0 = arr+n = toupper( i ); }
    if(env_var_0 == 106) { _res_key_if_0 = arr+n = toupper( maximum ); }
    if(env_var_0 == 107) { _res_key_if_0 = arr+n = toupper( n ); }
    if(env_var_0 == 108) { _res_key_if_0 = arr[i] = arr; }
    if(env_var_0 == 109) { _res_key_if_0 = arr[i] = arr+i; }
    if(env_var_0 == 110) { _res_key_if_0 = arr[i] = arr+maximum; }
    if(env_var_0 == 111) { _res_key_if_0 = arr[i] = arr+n; }
    if(env_var_0 == 112) { _res_key_if_0 = arr[i] = arr[i]; }
    if(env_var_0 == 113) { _res_key_if_0 = arr[i] = arr[maximum]; }
    if(env_var_0 == 114) { _res_key_if_0 = arr[i] = arr[n]; }
    if(env_var_0 == 115) { _res_key_if_0 = arr[i] = hash; }
    if(env_var_0 == 116) { _res_key_if_0 = arr[i] = hash.begin(); }
    if(env_var_0 == 117) { _res_key_if_0 = arr[i] = hash.cend(); }
    if(env_var_0 == 118) { _res_key_if_0 = arr[i] = hash.crend(); }
    if(env_var_0 == 119) { _res_key_if_0 = arr[i] = hash.end(); }
    if(env_var_0 == 120) { _res_key_if_0 = arr[i] = hash.get_allocator(); }
    if(env_var_0 == 121) { _res_key_if_0 = arr[i] = hash.rbegin(); }
    if(env_var_0 == 122) { _res_key_if_0 = arr[i] = hash.rend(); }
    if(env_var_0 == 123) { _res_key_if_0 = arr[i] = hash.size(); }
    if(env_var_0 == 124) { _res_key_if_0 = arr[i] = hash.value_comp(); }
    if(env_var_0 == 125) { _res_key_if_0 = arr[i] = i; }
    if(env_var_0 == 126) { _res_key_if_0 = arr[i] = isupper(); }
    if(env_var_0 == 127) { _res_key_if_0 = arr[i] = maximum; }
    if(env_var_0 == 128) { _res_key_if_0 = arr[i] = n; }
    if(env_var_0 == 129) { _res_key_if_0 = arr[i] = toupper( arr[i] ); }
    if(env_var_0 == 130) { _res_key_if_0 = arr[i] = toupper( arr[maximum] ); }
    if(env_var_0 == 131) { _res_key_if_0 = arr[i] = toupper( arr[n] ); }
    if(env_var_0 == 132) { _res_key_if_0 = arr[i] = toupper( i ); }
    if(env_var_0 == 133) { _res_key_if_0 = arr[i] = toupper( maximum ); }
    if(env_var_0 == 134) { _res_key_if_0 = arr[i] = toupper( n ); }
    if(env_var_0 == 135) { _res_key_if_0 = arr[maximum] = arr; }
    if(env_var_0 == 136) { _res_key_if_0 = arr[maximum] = arr+i; }
    if(env_var_0 == 137) { _res_key_if_0 = arr[maximum] = arr+maximum; }
    if(env_var_0 == 138) { _res_key_if_0 = arr[maximum] = arr+n; }
    if(env_var_0 == 139) { _res_key_if_0 = arr[maximum] = arr[i]; }
    if(env_var_0 == 140) { _res_key_if_0 = arr[maximum] = arr[maximum]; }
    if(env_var_0 == 141) { _res_key_if_0 = arr[maximum] = arr[n]; }
    if(env_var_0 == 142) { _res_key_if_0 = arr[maximum] = hash; }
    if(env_var_0 == 143) { _res_key_if_0 = arr[maximum] = hash.begin(); }
    if(env_var_0 == 144) { _res_key_if_0 = arr[maximum] = hash.cend(); }
    if(env_var_0 == 145) { _res_key_if_0 = arr[maximum] = hash.crend(); }
    if(env_var_0 == 146) { _res_key_if_0 = arr[maximum] = hash.end(); }
    if(env_var_0 == 147) { _res_key_if_0 = arr[maximum] = hash.get_allocator(); }
    if(env_var_0 == 148) { _res_key_if_0 = arr[maximum] = hash.rbegin(); }
    if(env_var_0 == 149) { _res_key_if_0 = arr[maximum] = hash.rend(); }
    if(env_var_0 == 150) { _res_key_if_0 = arr[maximum] = hash.size(); }
    if(env_var_0 == 151) { _res_key_if_0 = arr[maximum] = hash.value_comp(); }
    if(env_var_0 == 152) { _res_key_if_0 = arr[maximum] = i; }
    if(env_var_0 == 153) { _res_key_if_0 = arr[maximum] = isupper(); }
    if(env_var_0 == 154) { _res_key_if_0 = arr[maximum] = maximum; }
    if(env_var_0 == 155) { _res_key_if_0 = arr[maximum] = n; }
    if(env_var_0 == 156) { _res_key_if_0 = arr[maximum] = toupper( arr[i] ); }
    if(env_var_0 == 157) { _res_key_if_0 = arr[maximum] = toupper( arr[maximum] ); }
    if(env_var_0 == 158) { _res_key_if_0 = arr[maximum] = toupper( arr[n] ); }
    if(env_var_0 == 159) { _res_key_if_0 = arr[maximum] = toupper( i ); }
    if(env_var_0 == 160) { _res_key_if_0 = arr[maximum] = toupper( maximum ); }
    if(env_var_0 == 161) { _res_key_if_0 = arr[maximum] = toupper( n ); }
    if(env_var_0 == 162) { _res_key_if_0 = arr[n] = arr; }
    if(env_var_0 == 163) { _res_key_if_0 = arr[n] = arr+i; }
    if(env_var_0 == 164) { _res_key_if_0 = arr[n] = arr+maximum; }
    if(env_var_0 == 165) { _res_key_if_0 = arr[n] = arr+n; }
    if(env_var_0 == 166) { _res_key_if_0 = arr[n] = arr[i]; }
    if(env_var_0 == 167) { _res_key_if_0 = arr[n] = arr[maximum]; }
    if(env_var_0 == 168) { _res_key_if_0 = arr[n] = arr[n]; }
    if(env_var_0 == 169) { _res_key_if_0 = arr[n] = hash; }
    if(env_var_0 == 170) { _res_key_if_0 = arr[n] = hash.begin(); }
    if(env_var_0 == 171) { _res_key_if_0 = arr[n] = hash.cend(); }
    if(env_var_0 == 172) { _res_key_if_0 = arr[n] = hash.crend(); }
    if(env_var_0 == 173) { _res_key_if_0 = arr[n] = hash.end(); }
    if(env_var_0 == 174) { _res_key_if_0 = arr[n] = hash.get_allocator(); }
    if(env_var_0 == 175) { _res_key_if_0 = arr[n] = hash.rbegin(); }
    if(env_var_0 == 176) { _res_key_if_0 = arr[n] = hash.rend(); }
    if(env_var_0 == 177) { _res_key_if_0 = arr[n] = hash.size(); }
    if(env_var_0 == 178) { _res_key_if_0 = arr[n] = hash.value_comp(); }
    if(env_var_0 == 179) { _res_key_if_0 = arr[n] = i; }
    if(env_var_0 == 180) { _res_key_if_0 = arr[n] = isupper(); }
    if(env_var_0 == 181) { _res_key_if_0 = arr[n] = maximum; }
    if(env_var_0 == 182) { _res_key_if_0 = arr[n] = n; }
    if(env_var_0 == 183) { _res_key_if_0 = arr[n] = toupper( arr[i] ); }
    if(env_var_0 == 184) { _res_key_if_0 = arr[n] = toupper( arr[maximum] ); }
    if(env_var_0 == 185) { _res_key_if_0 = arr[n] = toupper( arr[n] ); }
    if(env_var_0 == 186) { _res_key_if_0 = arr[n] = toupper( i ); }
    if(env_var_0 == 187) { _res_key_if_0 = arr[n] = toupper( maximum ); }
    if(env_var_0 == 188) { _res_key_if_0 = arr[n] = toupper( n ); }
    if(env_var_0 == 189) { _res_key_if_0 = hash = arr; }
    if(env_var_0 == 190) { _res_key_if_0 = hash = arr+i; }
    if(env_var_0 == 191) { _res_key_if_0 = hash = arr+maximum; }
    if(env_var_0 == 192) { _res_key_if_0 = hash = arr+n; }
    if(env_var_0 == 193) { _res_key_if_0 = hash = arr[i]; }
    if(env_var_0 == 194) { _res_key_if_0 = hash = arr[maximum]; }
    if(env_var_0 == 195) { _res_key_if_0 = hash = arr[n]; }
    if(env_var_0 == 196) { _res_key_if_0 = hash = hash; }
    if(env_var_0 == 197) { _res_key_if_0 = hash = hash.begin(); }
    if(env_var_0 == 198) { _res_key_if_0 = hash = hash.cend(); }
    if(env_var_0 == 199) { _res_key_if_0 = hash = hash.crend(); }
    if(env_var_0 == 200) { _res_key_if_0 = hash = hash.end(); }
    if(env_var_0 == 201) { _res_key_if_0 = hash = hash.get_allocator(); }
    if(env_var_0 == 202) { _res_key_if_0 = hash = hash.rbegin(); }
    if(env_var_0 == 203) { _res_key_if_0 = hash = hash.rend(); }
    if(env_var_0 == 204) { _res_key_if_0 = hash = hash.size(); }
    if(env_var_0 == 205) { _res_key_if_0 = hash = hash.value_comp(); }
    if(env_var_0 == 206) { _res_key_if_0 = hash = i; }
    if(env_var_0 == 207) { _res_key_if_0 = hash = isupper(); }
    if(env_var_0 == 208) { _res_key_if_0 = hash = maximum; }
    if(env_var_0 == 209) { _res_key_if_0 = hash = n; }
    if(env_var_0 == 210) { _res_key_if_0 = hash = toupper( arr[i] ); }
    if(env_var_0 == 211) { _res_key_if_0 = hash = toupper( arr[maximum] ); }
    if(env_var_0 == 212) { _res_key_if_0 = hash = toupper( arr[n] ); }
    if(env_var_0 == 213) { _res_key_if_0 = hash = toupper( i ); }
    if(env_var_0 == 214) { _res_key_if_0 = hash = toupper( maximum ); }
    if(env_var_0 == 215) { _res_key_if_0 = hash = toupper( n ); }
    if(env_var_0 == 216) { _res_key_if_0 = hash.begin() = arr; }
    if(env_var_0 == 217) { _res_key_if_0 = hash.begin() = arr+i; }
    if(env_var_0 == 218) { _res_key_if_0 = hash.begin() = arr+maximum; }
    if(env_var_0 == 219) { _res_key_if_0 = hash.begin() = arr+n; }
    if(env_var_0 == 220) { _res_key_if_0 = hash.begin() = arr[i]; }
    if(env_var_0 == 221) { _res_key_if_0 = hash.begin() = arr[maximum]; }
    if(env_var_0 == 222) { _res_key_if_0 = hash.begin() = arr[n]; }
    if(env_var_0 == 223) { _res_key_if_0 = hash.begin() = hash; }
    if(env_var_0 == 224) { _res_key_if_0 = hash.begin() = hash.begin(); }
    if(env_var_0 == 225) { _res_key_if_0 = hash.begin() = hash.cend(); }
    if(env_var_0 == 226) { _res_key_if_0 = hash.begin() = hash.crend(); }
    if(env_var_0 == 227) { _res_key_if_0 = hash.begin() = hash.end(); }
    if(env_var_0 == 228) { _res_key_if_0 = hash.begin() = hash.get_allocator(); }
    if(env_var_0 == 229) { _res_key_if_0 = hash.begin() = hash.rbegin(); }
    if(env_var_0 == 230) { _res_key_if_0 = hash.begin() = hash.rend(); }
    if(env_var_0 == 231) { _res_key_if_0 = hash.begin() = hash.size(); }
    if(env_var_0 == 232) { _res_key_if_0 = hash.begin() = hash.value_comp(); }
    if(env_var_0 == 233) { _res_key_if_0 = hash.begin() = i; }
    if(env_var_0 == 234) { _res_key_if_0 = hash.begin() = isupper(); }
    if(env_var_0 == 235) { _res_key_if_0 = hash.begin() = maximum; }
    if(env_var_0 == 236) { _res_key_if_0 = hash.begin() = n; }
    if(env_var_0 == 237) { _res_key_if_0 = hash.begin() = toupper( arr[i] ); }
    if(env_var_0 == 238) { _res_key_if_0 = hash.begin() = toupper( arr[maximum] ); }
    if(env_var_0 == 239) { _res_key_if_0 = hash.begin() = toupper( arr[n] ); }
    if(env_var_0 == 240) { _res_key_if_0 = hash.begin() = toupper( i ); }
    if(env_var_0 == 241) { _res_key_if_0 = hash.begin() = toupper( maximum ); }
    if(env_var_0 == 242) { _res_key_if_0 = hash.begin() = toupper( n ); }
    if(env_var_0 == 243) { _res_key_if_0 = hash.end() = arr; }
    if(env_var_0 == 244) { _res_key_if_0 = hash.end() = arr+i; }
    if(env_var_0 == 245) { _res_key_if_0 = hash.end() = arr+maximum; }
    if(env_var_0 == 246) { _res_key_if_0 = hash.end() = arr+n; }
    if(env_var_0 == 247) { _res_key_if_0 = hash.end() = arr[i]; }
    if(env_var_0 == 248) { _res_key_if_0 = hash.end() = arr[maximum]; }
    if(env_var_0 == 249) { _res_key_if_0 = hash.end() = arr[n]; }
    if(env_var_0 == 250) { _res_key_if_0 = hash.end() = hash; }
    if(env_var_0 == 251) { _res_key_if_0 = hash.end() = hash.begin(); }
    if(env_var_0 == 252) { _res_key_if_0 = hash.end() = hash.cend(); }
    if(env_var_0 == 253) { _res_key_if_0 = hash.end() = hash.crend(); }
    if(env_var_0 == 254) { _res_key_if_0 = hash.end() = hash.end(); }
    if(env_var_0 == 255) { _res_key_if_0 = hash.end() = hash.get_allocator(); }
    if(env_var_0 == 256) { _res_key_if_0 = hash.end() = hash.rbegin(); }
    if(env_var_0 == 257) { _res_key_if_0 = hash.end() = hash.rend(); }
    if(env_var_0 == 258) { _res_key_if_0 = hash.end() = hash.size(); }
    if(env_var_0 == 259) { _res_key_if_0 = hash.end() = hash.value_comp(); }
    if(env_var_0 == 260) { _res_key_if_0 = hash.end() = i; }
    if(env_var_0 == 261) { _res_key_if_0 = hash.end() = isupper(); }
    if(env_var_0 == 262) { _res_key_if_0 = hash.end() = maximum; }
    if(env_var_0 == 263) { _res_key_if_0 = hash.end() = n; }
    if(env_var_0 == 264) { _res_key_if_0 = hash.end() = toupper( arr[i] ); }
    if(env_var_0 == 265) { _res_key_if_0 = hash.end() = toupper( arr[maximum] ); }
    if(env_var_0 == 266) { _res_key_if_0 = hash.end() = toupper( arr[n] ); }
    if(env_var_0 == 267) { _res_key_if_0 = hash.end() = toupper( i ); }
    if(env_var_0 == 268) { _res_key_if_0 = hash.end() = toupper( maximum ); }
    if(env_var_0 == 269) { _res_key_if_0 = hash.end() = toupper( n ); }
    if(env_var_0 == 270) { _res_key_if_0 = i = arr; }
    if(env_var_0 == 271) { _res_key_if_0 = i = arr+i; }
    if(env_var_0 == 272) { _res_key_if_0 = i = arr+maximum; }
    if(env_var_0 == 273) { _res_key_if_0 = i = arr+n; }
    if(env_var_0 == 274) { _res_key_if_0 = i = arr[i]; }
    if(env_var_0 == 275) { _res_key_if_0 = i = arr[maximum]; }
    if(env_var_0 == 276) { _res_key_if_0 = i = arr[n]; }
    if(env_var_0 == 277) { _res_key_if_0 = i = hash; }
    if(env_var_0 == 278) { _res_key_if_0 = i = hash.begin(); }
    if(env_var_0 == 279) { _res_key_if_0 = i = hash.cend(); }
    if(env_var_0 == 280) { _res_key_if_0 = i = hash.crend(); }
    if(env_var_0 == 281) { _res_key_if_0 = i = hash.end(); }
    if(env_var_0 == 282) { _res_key_if_0 = i = hash.get_allocator(); }
    if(env_var_0 == 283) { _res_key_if_0 = i = hash.rbegin(); }
    if(env_var_0 == 284) { _res_key_if_0 = i = hash.rend(); }
    if(env_var_0 == 285) { _res_key_if_0 = i = hash.size(); }
    if(env_var_0 == 286) { _res_key_if_0 = i = hash.value_comp(); }
    if(env_var_0 == 287) { _res_key_if_0 = i = i; }
    if(env_var_0 == 288) { _res_key_if_0 = i = isupper(); }
    if(env_var_0 == 289) { _res_key_if_0 = i = maximum; }
    if(env_var_0 == 290) { _res_key_if_0 = i = n; }
    if(env_var_0 == 291) { _res_key_if_0 = i = toupper( arr[i] ); }
    if(env_var_0 == 292) { _res_key_if_0 = i = toupper( arr[maximum] ); }
    if(env_var_0 == 293) { _res_key_if_0 = i = toupper( arr[n] ); }
    if(env_var_0 == 294) { _res_key_if_0 = i = toupper( i ); }
    if(env_var_0 == 295) { _res_key_if_0 = i = toupper( maximum ); }
    if(env_var_0 == 296) { _res_key_if_0 = i = toupper( n ); }
    if(env_var_0 == 297) { _res_key_if_0 = maximum = arr; }
    if(env_var_0 == 298) { _res_key_if_0 = maximum = arr+i; }
    if(env_var_0 == 299) { _res_key_if_0 = maximum = arr+maximum; }
    if(env_var_0 == 300) { _res_key_if_0 = maximum = arr+n; }
    if(env_var_0 == 301) { _res_key_if_0 = maximum = arr[i]; }
    if(env_var_0 == 302) { _res_key_if_0 = maximum = arr[maximum]; }
    if(env_var_0 == 303) { _res_key_if_0 = maximum = arr[n]; }
    if(env_var_0 == 304) { _res_key_if_0 = maximum = hash; }
    if(env_var_0 == 305) { _res_key_if_0 = maximum = hash.begin(); }
    if(env_var_0 == 306) { _res_key_if_0 = maximum = hash.cend(); }
    if(env_var_0 == 307) { _res_key_if_0 = maximum = hash.crend(); }
    if(env_var_0 == 308) { _res_key_if_0 = maximum = hash.end(); }
    if(env_var_0 == 309) { _res_key_if_0 = maximum = hash.get_allocator(); }
    if(env_var_0 == 310) { _res_key_if_0 = maximum = hash.rbegin(); }
    if(env_var_0 == 311) { _res_key_if_0 = maximum = hash.rend(); }
    if(env_var_0 == 312) { _res_key_if_0 = maximum = hash.size(); }
    if(env_var_0 == 313) { _res_key_if_0 = maximum = hash.value_comp(); }
    if(env_var_0 == 314) { _res_key_if_0 = maximum = i; }
    if(env_var_0 == 315) { _res_key_if_0 = maximum = isupper(); }
    if(env_var_0 == 316) { _res_key_if_0 = maximum = maximum; }
    if(env_var_0 == 317) { _res_key_if_0 = maximum = n; }
    if(env_var_0 == 318) { _res_key_if_0 = maximum = toupper( arr[i] ); }
    if(env_var_0 == 319) { _res_key_if_0 = maximum = toupper( arr[maximum] ); }
    if(env_var_0 == 320) { _res_key_if_0 = maximum = toupper( arr[n] ); }
    if(env_var_0 == 321) { _res_key_if_0 = maximum = toupper( i ); }
    if(env_var_0 == 322) { _res_key_if_0 = maximum = toupper( maximum ); }
    if(env_var_0 == 323) { _res_key_if_0 = maximum = toupper( n ); }
    if(env_var_0 == 324) { _res_key_if_0 = n = arr; }
    if(env_var_0 == 325) { _res_key_if_0 = n = arr+i; }
    if(env_var_0 == 326) { _res_key_if_0 = n = arr+maximum; }
    if(env_var_0 == 327) { _res_key_if_0 = n = arr+n; }
    if(env_var_0 == 328) { _res_key_if_0 = n = arr[i]; }
    if(env_var_0 == 329) { _res_key_if_0 = n = arr[maximum]; }
    if(env_var_0 == 330) { _res_key_if_0 = n = arr[n]; }
    if(env_var_0 == 331) { _res_key_if_0 = n = hash; }
    if(env_var_0 == 332) { _res_key_if_0 = n = hash.begin(); }
    if(env_var_0 == 333) { _res_key_if_0 = n = hash.cend(); }
    if(env_var_0 == 334) { _res_key_if_0 = n = hash.crend(); }
    if(env_var_0 == 335) { _res_key_if_0 = n = hash.end(); }
    if(env_var_0 == 336) { _res_key_if_0 = n = hash.get_allocator(); }
    if(env_var_0 == 337) { _res_key_if_0 = n = hash.rbegin(); }
    if(env_var_0 == 338) { _res_key_if_0 = n = hash.rend(); }
    if(env_var_0 == 339) { _res_key_if_0 = n = hash.size(); }
    if(env_var_0 == 340) { _res_key_if_0 = n = hash.value_comp(); }
    if(env_var_0 == 341) { _res_key_if_0 = n = i; }
    if(env_var_0 == 342) { _res_key_if_0 = n = isupper(); }
    if(env_var_0 == 343) { _res_key_if_0 = n = maximum; }
    if(env_var_0 == 344) { _res_key_if_0 = n = n; }
    if(env_var_0 == 345) { _res_key_if_0 = n = toupper( arr[i] ); }
    if(env_var_0 == 346) { _res_key_if_0 = n = toupper( arr[maximum] ); }
    if(env_var_0 == 347) { _res_key_if_0 = n = toupper( arr[n] ); }
    if(env_var_0 == 348) { _res_key_if_0 = n = toupper( i ); }
    if(env_var_0 == 349) { _res_key_if_0 = n = toupper( maximum ); }
    if(env_var_0 == 350) { _res_key_if_0 = n = toupper( n ); }
    if ( _res_key_if_0 ) {
      if ( abs ( i ) != hash . count ( abs ( i ) ) ) hash [ abs ( i ) ] = - 1 ;
      else hash [ abs ( i ) ] -- ;
    }
    else hash [ i ] = hash . count ( i ) + 1 ;
  }
  for ( int i = 0 ;
  i < arr [ 0 ] ;
  i ++ ) {
    if ( i < n && hash [ i ] > 0 ) return i ;
  }
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,7,10,14,15,24,27,32,33,38,39,40,42,42,47,58,75,76,78,79,83,85,89,96},{-36,14,-76,-70,52,18,64},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{35,50,36,50,82,54,10,45,13,22,1,41,13,11,4,43,50,27,94,57},{-88,-86,-84,-80,-80,-74,-72,-48,-46,-46,-44,-34,-32,-24,-22,-14,4,4,8,8,10,12,20,20,24,24,24,28,32,34,36,44,46,54,54,60,62,62,62,70,70,80,88,88,90},{0,0},{1,1,3,6,6,8,12,13,17,27,28,31,40,40,42,43,53,55,58,60,60,61,65,66,72,72,75,80,84,89,96,97,99},{52,-38,-82,30,-66,42,54,-96,-46,-30,18,-50,96,90,4,74,-22,8,34,74,-46,8,-32,88,-96,26,-80,50,92,-80,44,36},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{38,20,54,51,11,61,90,28,23,55,65,87,99,70,74,3,68,23,74,53,80,7,57,24,66,8,15,63,18,67,96,31,63,50}};
    vector<int> param1 {18,5,17,15,27,1,31,24,16,30};
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

