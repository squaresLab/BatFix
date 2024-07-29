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
  int leftMax [ n ];
  leftMax [ 0 ] = INT_MIN;
  for ( int i = 1;
  i < n;
  i ++ ) leftMax [ i ] = max ( leftMax [ i - 1 ], arr [ i - 1 ] );
  int rightMin = INT_MAX;
  for ( int i = n - 1;
  i >= 0;
  i -- ) {
    if ( leftMax [ i ] < arr [ i ] && rightMin > arr [ i ] ) return i;
    rightMin = min ( rightMin, arr [ i ] );
  }
  return - 1;
}


int foo;
int FLT_MAX;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(float *arr, int n) {
    float *leftMax = new float [nif(env_var_0 == 0) { arr = arr; }
    if(env_var_0 == 1) { arr = arr+n; }
    if(env_var_0 == 2) { arr = arr[n]; }
    if(env_var_0 == 3) { arr = isupper( arr[n] ); }
    if(env_var_0 == 4) { arr = isupper( leftMax[n] ); }
    if(env_var_0 == 5) { arr = isupper( n ); }
    if(env_var_0 == 6) { arr = leftMax; }
    if(env_var_0 == 7) { arr = leftMax+n; }
    if(env_var_0 == 8) { arr = leftMax[n]; }
    if(env_var_0 == 9) { arr = n; }
    if(env_var_0 == 10) { arr = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 11) { arr = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 12) { arr = std::max( arr[n],n ); }
    if(env_var_0 == 13) { arr = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 14) { arr = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 15) { arr = std::max( leftMax[n],n ); }
    if(env_var_0 == 16) { arr = std::max( n,arr[n] ); }
    if(env_var_0 == 17) { arr = std::max( n,leftMax[n] ); }
    if(env_var_0 == 18) { arr = std::max( n,n ); }
    if(env_var_0 == 19) { arr = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 20) { arr = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 21) { arr = std::min( arr[n],n ); }
    if(env_var_0 == 22) { arr = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 23) { arr = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 24) { arr = std::min( leftMax[n],n ); }
    if(env_var_0 == 25) { arr = std::min( n,arr[n] ); }
    if(env_var_0 == 26) { arr = std::min( n,leftMax[n] ); }
    if(env_var_0 == 27) { arr = std::min( n,n ); }
    if(env_var_0 == 28) { arr = toupper( arr[n] ); }
    if(env_var_0 == 29) { arr = toupper( leftMax[n] ); }
    if(env_var_0 == 30) { arr = toupper( n ); }
    if(env_var_0 == 31) { arr+n = arr; }
    if(env_var_0 == 32) { arr+n = arr+n; }
    if(env_var_0 == 33) { arr+n = arr[n]; }
    if(env_var_0 == 34) { arr+n = isupper( arr[n] ); }
    if(env_var_0 == 35) { arr+n = isupper( leftMax[n] ); }
    if(env_var_0 == 36) { arr+n = isupper( n ); }
    if(env_var_0 == 37) { arr+n = leftMax; }
    if(env_var_0 == 38) { arr+n = leftMax+n; }
    if(env_var_0 == 39) { arr+n = leftMax[n]; }
    if(env_var_0 == 40) { arr+n = n; }
    if(env_var_0 == 41) { arr+n = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 42) { arr+n = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 43) { arr+n = std::max( arr[n],n ); }
    if(env_var_0 == 44) { arr+n = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 45) { arr+n = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 46) { arr+n = std::max( leftMax[n],n ); }
    if(env_var_0 == 47) { arr+n = std::max( n,arr[n] ); }
    if(env_var_0 == 48) { arr+n = std::max( n,leftMax[n] ); }
    if(env_var_0 == 49) { arr+n = std::max( n,n ); }
    if(env_var_0 == 50) { arr+n = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 51) { arr+n = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 52) { arr+n = std::min( arr[n],n ); }
    if(env_var_0 == 53) { arr+n = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 54) { arr+n = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 55) { arr+n = std::min( leftMax[n],n ); }
    if(env_var_0 == 56) { arr+n = std::min( n,arr[n] ); }
    if(env_var_0 == 57) { arr+n = std::min( n,leftMax[n] ); }
    if(env_var_0 == 58) { arr+n = std::min( n,n ); }
    if(env_var_0 == 59) { arr+n = toupper( arr[n] ); }
    if(env_var_0 == 60) { arr+n = toupper( leftMax[n] ); }
    if(env_var_0 == 61) { arr+n = toupper( n ); }
    if(env_var_0 == 62) { arr[n] = arr; }
    if(env_var_0 == 63) { arr[n] = arr+n; }
    if(env_var_0 == 64) { arr[n] = arr[n]; }
    if(env_var_0 == 65) { arr[n] = isupper( arr[n] ); }
    if(env_var_0 == 66) { arr[n] = isupper( leftMax[n] ); }
    if(env_var_0 == 67) { arr[n] = isupper( n ); }
    if(env_var_0 == 68) { arr[n] = leftMax; }
    if(env_var_0 == 69) { arr[n] = leftMax+n; }
    if(env_var_0 == 70) { arr[n] = leftMax[n]; }
    if(env_var_0 == 71) { arr[n] = n; }
    if(env_var_0 == 72) { arr[n] = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 73) { arr[n] = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 74) { arr[n] = std::max( arr[n],n ); }
    if(env_var_0 == 75) { arr[n] = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 76) { arr[n] = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 77) { arr[n] = std::max( leftMax[n],n ); }
    if(env_var_0 == 78) { arr[n] = std::max( n,arr[n] ); }
    if(env_var_0 == 79) { arr[n] = std::max( n,leftMax[n] ); }
    if(env_var_0 == 80) { arr[n] = std::max( n,n ); }
    if(env_var_0 == 81) { arr[n] = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 82) { arr[n] = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 83) { arr[n] = std::min( arr[n],n ); }
    if(env_var_0 == 84) { arr[n] = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 85) { arr[n] = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 86) { arr[n] = std::min( leftMax[n],n ); }
    if(env_var_0 == 87) { arr[n] = std::min( n,arr[n] ); }
    if(env_var_0 == 88) { arr[n] = std::min( n,leftMax[n] ); }
    if(env_var_0 == 89) { arr[n] = std::min( n,n ); }
    if(env_var_0 == 90) { arr[n] = toupper( arr[n] ); }
    if(env_var_0 == 91) { arr[n] = toupper( leftMax[n] ); }
    if(env_var_0 == 92) { arr[n] = toupper( n ); }
    if(env_var_0 == 93) { isupper( arr[n] ) = arr; }
    if(env_var_0 == 94) { isupper( arr[n] ) = arr+n; }
    if(env_var_0 == 95) { isupper( arr[n] ) = arr[n]; }
    if(env_var_0 == 96) { isupper( arr[n] ) = isupper( arr[n] ); }
    if(env_var_0 == 97) { isupper( arr[n] ) = isupper( leftMax[n] ); }
    if(env_var_0 == 98) { isupper( arr[n] ) = isupper( n ); }
    if(env_var_0 == 99) { isupper( arr[n] ) = leftMax; }
    if(env_var_0 == 100) { isupper( arr[n] ) = leftMax+n; }
    if(env_var_0 == 101) { isupper( arr[n] ) = leftMax[n]; }
    if(env_var_0 == 102) { isupper( arr[n] ) = n; }
    if(env_var_0 == 103) { isupper( arr[n] ) = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 104) { isupper( arr[n] ) = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 105) { isupper( arr[n] ) = std::max( arr[n],n ); }
    if(env_var_0 == 106) { isupper( arr[n] ) = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 107) { isupper( arr[n] ) = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 108) { isupper( arr[n] ) = std::max( leftMax[n],n ); }
    if(env_var_0 == 109) { isupper( arr[n] ) = std::max( n,arr[n] ); }
    if(env_var_0 == 110) { isupper( arr[n] ) = std::max( n,leftMax[n] ); }
    if(env_var_0 == 111) { isupper( arr[n] ) = std::max( n,n ); }
    if(env_var_0 == 112) { isupper( arr[n] ) = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 113) { isupper( arr[n] ) = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 114) { isupper( arr[n] ) = std::min( arr[n],n ); }
    if(env_var_0 == 115) { isupper( arr[n] ) = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 116) { isupper( arr[n] ) = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 117) { isupper( arr[n] ) = std::min( leftMax[n],n ); }
    if(env_var_0 == 118) { isupper( arr[n] ) = std::min( n,arr[n] ); }
    if(env_var_0 == 119) { isupper( arr[n] ) = std::min( n,leftMax[n] ); }
    if(env_var_0 == 120) { isupper( arr[n] ) = std::min( n,n ); }
    if(env_var_0 == 121) { isupper( arr[n] ) = toupper( arr[n] ); }
    if(env_var_0 == 122) { isupper( arr[n] ) = toupper( leftMax[n] ); }
    if(env_var_0 == 123) { isupper( arr[n] ) = toupper( n ); }
    if(env_var_0 == 124) { isupper( leftMax[n] ) = arr; }
    if(env_var_0 == 125) { isupper( leftMax[n] ) = arr+n; }
    if(env_var_0 == 126) { isupper( leftMax[n] ) = arr[n]; }
    if(env_var_0 == 127) { isupper( leftMax[n] ) = isupper( arr[n] ); }
    if(env_var_0 == 128) { isupper( leftMax[n] ) = isupper( leftMax[n] ); }
    if(env_var_0 == 129) { isupper( leftMax[n] ) = isupper( n ); }
    if(env_var_0 == 130) { isupper( leftMax[n] ) = leftMax; }
    if(env_var_0 == 131) { isupper( leftMax[n] ) = leftMax+n; }
    if(env_var_0 == 132) { isupper( leftMax[n] ) = leftMax[n]; }
    if(env_var_0 == 133) { isupper( leftMax[n] ) = n; }
    if(env_var_0 == 134) { isupper( leftMax[n] ) = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 135) { isupper( leftMax[n] ) = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 136) { isupper( leftMax[n] ) = std::max( arr[n],n ); }
    if(env_var_0 == 137) { isupper( leftMax[n] ) = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 138) { isupper( leftMax[n] ) = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 139) { isupper( leftMax[n] ) = std::max( leftMax[n],n ); }
    if(env_var_0 == 140) { isupper( leftMax[n] ) = std::max( n,arr[n] ); }
    if(env_var_0 == 141) { isupper( leftMax[n] ) = std::max( n,leftMax[n] ); }
    if(env_var_0 == 142) { isupper( leftMax[n] ) = std::max( n,n ); }
    if(env_var_0 == 143) { isupper( leftMax[n] ) = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 144) { isupper( leftMax[n] ) = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 145) { isupper( leftMax[n] ) = std::min( arr[n],n ); }
    if(env_var_0 == 146) { isupper( leftMax[n] ) = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 147) { isupper( leftMax[n] ) = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 148) { isupper( leftMax[n] ) = std::min( leftMax[n],n ); }
    if(env_var_0 == 149) { isupper( leftMax[n] ) = std::min( n,arr[n] ); }
    if(env_var_0 == 150) { isupper( leftMax[n] ) = std::min( n,leftMax[n] ); }
    if(env_var_0 == 151) { isupper( leftMax[n] ) = std::min( n,n ); }
    if(env_var_0 == 152) { isupper( leftMax[n] ) = toupper( arr[n] ); }
    if(env_var_0 == 153) { isupper( leftMax[n] ) = toupper( leftMax[n] ); }
    if(env_var_0 == 154) { isupper( leftMax[n] ) = toupper( n ); }
    if(env_var_0 == 155) { isupper( n ) = arr; }
    if(env_var_0 == 156) { isupper( n ) = arr+n; }
    if(env_var_0 == 157) { isupper( n ) = arr[n]; }
    if(env_var_0 == 158) { isupper( n ) = isupper( arr[n] ); }
    if(env_var_0 == 159) { isupper( n ) = isupper( leftMax[n] ); }
    if(env_var_0 == 160) { isupper( n ) = isupper( n ); }
    if(env_var_0 == 161) { isupper( n ) = leftMax; }
    if(env_var_0 == 162) { isupper( n ) = leftMax+n; }
    if(env_var_0 == 163) { isupper( n ) = leftMax[n]; }
    if(env_var_0 == 164) { isupper( n ) = n; }
    if(env_var_0 == 165) { isupper( n ) = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 166) { isupper( n ) = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 167) { isupper( n ) = std::max( arr[n],n ); }
    if(env_var_0 == 168) { isupper( n ) = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 169) { isupper( n ) = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 170) { isupper( n ) = std::max( leftMax[n],n ); }
    if(env_var_0 == 171) { isupper( n ) = std::max( n,arr[n] ); }
    if(env_var_0 == 172) { isupper( n ) = std::max( n,leftMax[n] ); }
    if(env_var_0 == 173) { isupper( n ) = std::max( n,n ); }
    if(env_var_0 == 174) { isupper( n ) = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 175) { isupper( n ) = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 176) { isupper( n ) = std::min( arr[n],n ); }
    if(env_var_0 == 177) { isupper( n ) = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 178) { isupper( n ) = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 179) { isupper( n ) = std::min( leftMax[n],n ); }
    if(env_var_0 == 180) { isupper( n ) = std::min( n,arr[n] ); }
    if(env_var_0 == 181) { isupper( n ) = std::min( n,leftMax[n] ); }
    if(env_var_0 == 182) { isupper( n ) = std::min( n,n ); }
    if(env_var_0 == 183) { isupper( n ) = toupper( arr[n] ); }
    if(env_var_0 == 184) { isupper( n ) = toupper( leftMax[n] ); }
    if(env_var_0 == 185) { isupper( n ) = toupper( n ); }
    if(env_var_0 == 186) { leftMax = arr; }
    if(env_var_0 == 187) { leftMax = arr+n; }
    if(env_var_0 == 188) { leftMax = arr[n]; }
    if(env_var_0 == 189) { leftMax = isupper( arr[n] ); }
    if(env_var_0 == 190) { leftMax = isupper( leftMax[n] ); }
    if(env_var_0 == 191) { leftMax = isupper( n ); }
    if(env_var_0 == 192) { leftMax = leftMax; }
    if(env_var_0 == 193) { leftMax = leftMax+n; }
    if(env_var_0 == 194) { leftMax = leftMax[n]; }
    if(env_var_0 == 195) { leftMax = n; }
    if(env_var_0 == 196) { leftMax = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 197) { leftMax = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 198) { leftMax = std::max( arr[n],n ); }
    if(env_var_0 == 199) { leftMax = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 200) { leftMax = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 201) { leftMax = std::max( leftMax[n],n ); }
    if(env_var_0 == 202) { leftMax = std::max( n,arr[n] ); }
    if(env_var_0 == 203) { leftMax = std::max( n,leftMax[n] ); }
    if(env_var_0 == 204) { leftMax = std::max( n,n ); }
    if(env_var_0 == 205) { leftMax = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 206) { leftMax = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 207) { leftMax = std::min( arr[n],n ); }
    if(env_var_0 == 208) { leftMax = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 209) { leftMax = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 210) { leftMax = std::min( leftMax[n],n ); }
    if(env_var_0 == 211) { leftMax = std::min( n,arr[n] ); }
    if(env_var_0 == 212) { leftMax = std::min( n,leftMax[n] ); }
    if(env_var_0 == 213) { leftMax = std::min( n,n ); }
    if(env_var_0 == 214) { leftMax = toupper( arr[n] ); }
    if(env_var_0 == 215) { leftMax = toupper( leftMax[n] ); }
    if(env_var_0 == 216) { leftMax = toupper( n ); }
    if(env_var_0 == 217) { leftMax+n = arr; }
    if(env_var_0 == 218) { leftMax+n = arr+n; }
    if(env_var_0 == 219) { leftMax+n = arr[n]; }
    if(env_var_0 == 220) { leftMax+n = isupper( arr[n] ); }
    if(env_var_0 == 221) { leftMax+n = isupper( leftMax[n] ); }
    if(env_var_0 == 222) { leftMax+n = isupper( n ); }
    if(env_var_0 == 223) { leftMax+n = leftMax; }
    if(env_var_0 == 224) { leftMax+n = leftMax+n; }
    if(env_var_0 == 225) { leftMax+n = leftMax[n]; }
    if(env_var_0 == 226) { leftMax+n = n; }
    if(env_var_0 == 227) { leftMax+n = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 228) { leftMax+n = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 229) { leftMax+n = std::max( arr[n],n ); }
    if(env_var_0 == 230) { leftMax+n = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 231) { leftMax+n = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 232) { leftMax+n = std::max( leftMax[n],n ); }
    if(env_var_0 == 233) { leftMax+n = std::max( n,arr[n] ); }
    if(env_var_0 == 234) { leftMax+n = std::max( n,leftMax[n] ); }
    if(env_var_0 == 235) { leftMax+n = std::max( n,n ); }
    if(env_var_0 == 236) { leftMax+n = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 237) { leftMax+n = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 238) { leftMax+n = std::min( arr[n],n ); }
    if(env_var_0 == 239) { leftMax+n = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 240) { leftMax+n = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 241) { leftMax+n = std::min( leftMax[n],n ); }
    if(env_var_0 == 242) { leftMax+n = std::min( n,arr[n] ); }
    if(env_var_0 == 243) { leftMax+n = std::min( n,leftMax[n] ); }
    if(env_var_0 == 244) { leftMax+n = std::min( n,n ); }
    if(env_var_0 == 245) { leftMax+n = toupper( arr[n] ); }
    if(env_var_0 == 246) { leftMax+n = toupper( leftMax[n] ); }
    if(env_var_0 == 247) { leftMax+n = toupper( n ); }
    if(env_var_0 == 248) { leftMax[n] = arr; }
    if(env_var_0 == 249) { leftMax[n] = arr+n; }
    if(env_var_0 == 250) { leftMax[n] = arr[n]; }
    if(env_var_0 == 251) { leftMax[n] = isupper( arr[n] ); }
    if(env_var_0 == 252) { leftMax[n] = isupper( leftMax[n] ); }
    if(env_var_0 == 253) { leftMax[n] = isupper( n ); }
    if(env_var_0 == 254) { leftMax[n] = leftMax; }
    if(env_var_0 == 255) { leftMax[n] = leftMax+n; }
    if(env_var_0 == 256) { leftMax[n] = leftMax[n]; }
    if(env_var_0 == 257) { leftMax[n] = n; }
    if(env_var_0 == 258) { leftMax[n] = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 259) { leftMax[n] = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 260) { leftMax[n] = std::max( arr[n],n ); }
    if(env_var_0 == 261) { leftMax[n] = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 262) { leftMax[n] = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 263) { leftMax[n] = std::max( leftMax[n],n ); }
    if(env_var_0 == 264) { leftMax[n] = std::max( n,arr[n] ); }
    if(env_var_0 == 265) { leftMax[n] = std::max( n,leftMax[n] ); }
    if(env_var_0 == 266) { leftMax[n] = std::max( n,n ); }
    if(env_var_0 == 267) { leftMax[n] = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 268) { leftMax[n] = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 269) { leftMax[n] = std::min( arr[n],n ); }
    if(env_var_0 == 270) { leftMax[n] = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 271) { leftMax[n] = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 272) { leftMax[n] = std::min( leftMax[n],n ); }
    if(env_var_0 == 273) { leftMax[n] = std::min( n,arr[n] ); }
    if(env_var_0 == 274) { leftMax[n] = std::min( n,leftMax[n] ); }
    if(env_var_0 == 275) { leftMax[n] = std::min( n,n ); }
    if(env_var_0 == 276) { leftMax[n] = toupper( arr[n] ); }
    if(env_var_0 == 277) { leftMax[n] = toupper( leftMax[n] ); }
    if(env_var_0 == 278) { leftMax[n] = toupper( n ); }
    if(env_var_0 == 279) { n = arr; }
    if(env_var_0 == 280) { n = arr+n; }
    if(env_var_0 == 281) { n = arr[n]; }
    if(env_var_0 == 282) { n = isupper( arr[n] ); }
    if(env_var_0 == 283) { n = isupper( leftMax[n] ); }
    if(env_var_0 == 284) { n = isupper( n ); }
    if(env_var_0 == 285) { n = leftMax; }
    if(env_var_0 == 286) { n = leftMax+n; }
    if(env_var_0 == 287) { n = leftMax[n]; }
    if(env_var_0 == 288) { n = n; }
    if(env_var_0 == 289) { n = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 290) { n = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 291) { n = std::max( arr[n],n ); }
    if(env_var_0 == 292) { n = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 293) { n = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 294) { n = std::max( leftMax[n],n ); }
    if(env_var_0 == 295) { n = std::max( n,arr[n] ); }
    if(env_var_0 == 296) { n = std::max( n,leftMax[n] ); }
    if(env_var_0 == 297) { n = std::max( n,n ); }
    if(env_var_0 == 298) { n = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 299) { n = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 300) { n = std::min( arr[n],n ); }
    if(env_var_0 == 301) { n = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 302) { n = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 303) { n = std::min( leftMax[n],n ); }
    if(env_var_0 == 304) { n = std::min( n,arr[n] ); }
    if(env_var_0 == 305) { n = std::min( n,leftMax[n] ); }
    if(env_var_0 == 306) { n = std::min( n,n ); }
    if(env_var_0 == 307) { n = toupper( arr[n] ); }
    if(env_var_0 == 308) { n = toupper( leftMax[n] ); }
    if(env_var_0 == 309) { n = toupper( n ); }
    if(env_var_0 == 310) { toupper( arr[n] ) = arr; }
    if(env_var_0 == 311) { toupper( arr[n] ) = arr+n; }
    if(env_var_0 == 312) { toupper( arr[n] ) = arr[n]; }
    if(env_var_0 == 313) { toupper( arr[n] ) = isupper( arr[n] ); }
    if(env_var_0 == 314) { toupper( arr[n] ) = isupper( leftMax[n] ); }
    if(env_var_0 == 315) { toupper( arr[n] ) = isupper( n ); }
    if(env_var_0 == 316) { toupper( arr[n] ) = leftMax; }
    if(env_var_0 == 317) { toupper( arr[n] ) = leftMax+n; }
    if(env_var_0 == 318) { toupper( arr[n] ) = leftMax[n]; }
    if(env_var_0 == 319) { toupper( arr[n] ) = n; }
    if(env_var_0 == 320) { toupper( arr[n] ) = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 321) { toupper( arr[n] ) = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 322) { toupper( arr[n] ) = std::max( arr[n],n ); }
    if(env_var_0 == 323) { toupper( arr[n] ) = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 324) { toupper( arr[n] ) = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 325) { toupper( arr[n] ) = std::max( leftMax[n],n ); }
    if(env_var_0 == 326) { toupper( arr[n] ) = std::max( n,arr[n] ); }
    if(env_var_0 == 327) { toupper( arr[n] ) = std::max( n,leftMax[n] ); }
    if(env_var_0 == 328) { toupper( arr[n] ) = std::max( n,n ); }
    if(env_var_0 == 329) { toupper( arr[n] ) = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 330) { toupper( arr[n] ) = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 331) { toupper( arr[n] ) = std::min( arr[n],n ); }
    if(env_var_0 == 332) { toupper( arr[n] ) = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 333) { toupper( arr[n] ) = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 334) { toupper( arr[n] ) = std::min( leftMax[n],n ); }
    if(env_var_0 == 335) { toupper( arr[n] ) = std::min( n,arr[n] ); }
    if(env_var_0 == 336) { toupper( arr[n] ) = std::min( n,leftMax[n] ); }
    if(env_var_0 == 337) { toupper( arr[n] ) = std::min( n,n ); }
    if(env_var_0 == 338) { toupper( arr[n] ) = toupper( arr[n] ); }
    if(env_var_0 == 339) { toupper( arr[n] ) = toupper( leftMax[n] ); }
    if(env_var_0 == 340) { toupper( arr[n] ) = toupper( n ); }
    if(env_var_0 == 341) { toupper( leftMax[n] ) = arr; }
    if(env_var_0 == 342) { toupper( leftMax[n] ) = arr+n; }
    if(env_var_0 == 343) { toupper( leftMax[n] ) = arr[n]; }
    if(env_var_0 == 344) { toupper( leftMax[n] ) = isupper( arr[n] ); }
    if(env_var_0 == 345) { toupper( leftMax[n] ) = isupper( leftMax[n] ); }
    if(env_var_0 == 346) { toupper( leftMax[n] ) = isupper( n ); }
    if(env_var_0 == 347) { toupper( leftMax[n] ) = leftMax; }
    if(env_var_0 == 348) { toupper( leftMax[n] ) = leftMax+n; }
    if(env_var_0 == 349) { toupper( leftMax[n] ) = leftMax[n]; }
    if(env_var_0 == 350) { toupper( leftMax[n] ) = n; }
    if(env_var_0 == 351) { toupper( leftMax[n] ) = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 352) { toupper( leftMax[n] ) = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 353) { toupper( leftMax[n] ) = std::max( arr[n],n ); }
    if(env_var_0 == 354) { toupper( leftMax[n] ) = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 355) { toupper( leftMax[n] ) = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 356) { toupper( leftMax[n] ) = std::max( leftMax[n],n ); }
    if(env_var_0 == 357) { toupper( leftMax[n] ) = std::max( n,arr[n] ); }
    if(env_var_0 == 358) { toupper( leftMax[n] ) = std::max( n,leftMax[n] ); }
    if(env_var_0 == 359) { toupper( leftMax[n] ) = std::max( n,n ); }
    if(env_var_0 == 360) { toupper( leftMax[n] ) = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 361) { toupper( leftMax[n] ) = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 362) { toupper( leftMax[n] ) = std::min( arr[n],n ); }
    if(env_var_0 == 363) { toupper( leftMax[n] ) = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 364) { toupper( leftMax[n] ) = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 365) { toupper( leftMax[n] ) = std::min( leftMax[n],n ); }
    if(env_var_0 == 366) { toupper( leftMax[n] ) = std::min( n,arr[n] ); }
    if(env_var_0 == 367) { toupper( leftMax[n] ) = std::min( n,leftMax[n] ); }
    if(env_var_0 == 368) { toupper( leftMax[n] ) = std::min( n,n ); }
    if(env_var_0 == 369) { toupper( leftMax[n] ) = toupper( arr[n] ); }
    if(env_var_0 == 370) { toupper( leftMax[n] ) = toupper( leftMax[n] ); }
    if(env_var_0 == 371) { toupper( leftMax[n] ) = toupper( n ); }
    if(env_var_0 == 372) { toupper( n ) = arr; }
    if(env_var_0 == 373) { toupper( n ) = arr+n; }
    if(env_var_0 == 374) { toupper( n ) = arr[n]; }
    if(env_var_0 == 375) { toupper( n ) = isupper( arr[n] ); }
    if(env_var_0 == 376) { toupper( n ) = isupper( leftMax[n] ); }
    if(env_var_0 == 377) { toupper( n ) = isupper( n ); }
    if(env_var_0 == 378) { toupper( n ) = leftMax; }
    if(env_var_0 == 379) { toupper( n ) = leftMax+n; }
    if(env_var_0 == 380) { toupper( n ) = leftMax[n]; }
    if(env_var_0 == 381) { toupper( n ) = n; }
    if(env_var_0 == 382) { toupper( n ) = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 383) { toupper( n ) = std::max( arr[n],leftMax[n] ); }
    if(env_var_0 == 384) { toupper( n ) = std::max( arr[n],n ); }
    if(env_var_0 == 385) { toupper( n ) = std::max( leftMax[n],arr[n] ); }
    if(env_var_0 == 386) { toupper( n ) = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 387) { toupper( n ) = std::max( leftMax[n],n ); }
    if(env_var_0 == 388) { toupper( n ) = std::max( n,arr[n] ); }
    if(env_var_0 == 389) { toupper( n ) = std::max( n,leftMax[n] ); }
    if(env_var_0 == 390) { toupper( n ) = std::max( n,n ); }
    if(env_var_0 == 391) { toupper( n ) = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 392) { toupper( n ) = std::min( arr[n],leftMax[n] ); }
    if(env_var_0 == 393) { toupper( n ) = std::min( arr[n],n ); }
    if(env_var_0 == 394) { toupper( n ) = std::min( leftMax[n],arr[n] ); }
    if(env_var_0 == 395) { toupper( n ) = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_0 == 396) { toupper( n ) = std::min( leftMax[n],n ); }
    if(env_var_0 == 397) { toupper( n ) = std::min( n,arr[n] ); }
    if(env_var_0 == 398) { toupper( n ) = std::min( n,leftMax[n] ); }
    if(env_var_0 == 399) { toupper( n ) = std::min( n,n ); }
    if(env_var_0 == 400) { toupper( n ) = toupper( arr[n] ); }
    if(env_var_0 == 401) { toupper( n ) = toupper( leftMax[n] ); }
    if(env_var_0 == 402) { toupper( n ) = toupper( n ); }
    ];
    ;
    for (int i = 1; i < n; i++)
        leftMax[i] = std::max(leftMax[i - 1], arr[i - 1]);
   float rightMin ;
    if(env_var_1 == 0) {  arr; }
    if(env_var_1 == 1) {  arr+n; }
    if(env_var_1 == 2) {  arr[n]; }
    if(env_var_1 == 3) {  isupper( arr[n] ); }
    if(env_var_1 == 4) {  isupper( leftMax[n] ); }
    if(env_var_1 == 5) {  isupper( n ); }
    if(env_var_1 == 6) {  isupper( rightMin ); }
    if(env_var_1 == 7) {  leftMax; }
    if(env_var_1 == 8) {  leftMax+n; }
    if(env_var_1 == 9) {  leftMax[n]; }
    if(env_var_1 == 10) {  n; }
    if(env_var_1 == 11) {  rightMin; }
    if(env_var_1 == 12) {  std::max( arr[n],arr[n] ); }
    if(env_var_1 == 13) {  std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 14) {  std::max( arr[n],n ); }
    if(env_var_1 == 15) {  std::max( arr[n],rightMin ); }
    if(env_var_1 == 16) {  std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 17) {  std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 18) {  std::max( leftMax[n],n ); }
    if(env_var_1 == 19) {  std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 20) {  std::max( n,arr[n] ); }
    if(env_var_1 == 21) {  std::max( n,leftMax[n] ); }
    if(env_var_1 == 22) {  std::max( n,n ); }
    if(env_var_1 == 23) {  std::max( n,rightMin ); }
    if(env_var_1 == 24) {  std::max( rightMin,arr[n] ); }
    if(env_var_1 == 25) {  std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 26) {  std::max( rightMin,n ); }
    if(env_var_1 == 27) {  std::max( rightMin,rightMin ); }
    if(env_var_1 == 28) {  std::min( arr[n],arr[n] ); }
    if(env_var_1 == 29) {  std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 30) {  std::min( arr[n],n ); }
    if(env_var_1 == 31) {  std::min( arr[n],rightMin ); }
    if(env_var_1 == 32) {  std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 33) {  std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 34) {  std::min( leftMax[n],n ); }
    if(env_var_1 == 35) {  std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 36) {  std::min( n,arr[n] ); }
    if(env_var_1 == 37) {  std::min( n,leftMax[n] ); }
    if(env_var_1 == 38) {  std::min( n,n ); }
    if(env_var_1 == 39) {  std::min( n,rightMin ); }
    if(env_var_1 == 40) {  std::min( rightMin,arr[n] ); }
    if(env_var_1 == 41) {  std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 42) {  std::min( rightMin,n ); }
    if(env_var_1 == 43) {  std::min( rightMin,rightMin ); }
    if(env_var_1 == 44) {  toupper( arr[n] ); }
    if(env_var_1 == 45) {  toupper( leftMax[n] ); }
    if(env_var_1 == 46) {  toupper( n ); }
    if(env_var_1 == 47) {  toupper( rightMin ); }
    if(env_var_1 == 48) {  = arr; }
    if(env_var_1 == 49) {  = arr+n; }
    if(env_var_1 == 50) {  = arr[n]; }
    if(env_var_1 == 51) {  = isupper( arr[n] ); }
    if(env_var_1 == 52) {  = isupper( leftMax[n] ); }
    if(env_var_1 == 53) {  = isupper( n ); }
    if(env_var_1 == 54) {  = isupper( rightMin ); }
    if(env_var_1 == 55) {  = leftMax; }
    if(env_var_1 == 56) {  = leftMax+n; }
    if(env_var_1 == 57) {  = leftMax[n]; }
    if(env_var_1 == 58) {  = n; }
    if(env_var_1 == 59) {  = rightMin; }
    if(env_var_1 == 60) {  = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 61) {  = std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 62) {  = std::max( arr[n],n ); }
    if(env_var_1 == 63) {  = std::max( arr[n],rightMin ); }
    if(env_var_1 == 64) {  = std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 65) {  = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 66) {  = std::max( leftMax[n],n ); }
    if(env_var_1 == 67) {  = std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 68) {  = std::max( n,arr[n] ); }
    if(env_var_1 == 69) {  = std::max( n,leftMax[n] ); }
    if(env_var_1 == 70) {  = std::max( n,n ); }
    if(env_var_1 == 71) {  = std::max( n,rightMin ); }
    if(env_var_1 == 72) {  = std::max( rightMin,arr[n] ); }
    if(env_var_1 == 73) {  = std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 74) {  = std::max( rightMin,n ); }
    if(env_var_1 == 75) {  = std::max( rightMin,rightMin ); }
    if(env_var_1 == 76) {  = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 77) {  = std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 78) {  = std::min( arr[n],n ); }
    if(env_var_1 == 79) {  = std::min( arr[n],rightMin ); }
    if(env_var_1 == 80) {  = std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 81) {  = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 82) {  = std::min( leftMax[n],n ); }
    if(env_var_1 == 83) {  = std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 84) {  = std::min( n,arr[n] ); }
    if(env_var_1 == 85) {  = std::min( n,leftMax[n] ); }
    if(env_var_1 == 86) {  = std::min( n,n ); }
    if(env_var_1 == 87) {  = std::min( n,rightMin ); }
    if(env_var_1 == 88) {  = std::min( rightMin,arr[n] ); }
    if(env_var_1 == 89) {  = std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 90) {  = std::min( rightMin,n ); }
    if(env_var_1 == 91) {  = std::min( rightMin,rightMin ); }
    if(env_var_1 == 92) {  = toupper( arr[n] ); }
    if(env_var_1 == 93) {  = toupper( leftMax[n] ); }
    if(env_var_1 == 94) {  = toupper( n ); }
    if(env_var_1 == 95) {  = toupper( rightMin ); }
    if(env_var_1 == 96) { ] = arr; }
    if(env_var_1 == 97) { ] = arr+n; }
    if(env_var_1 == 98) { ] = arr[n]; }
    if(env_var_1 == 99) { ] = isupper( arr[n] ); }
    if(env_var_1 == 100) { ] = isupper( leftMax[n] ); }
    if(env_var_1 == 101) { ] = isupper( n ); }
    if(env_var_1 == 102) { ] = isupper( rightMin ); }
    if(env_var_1 == 103) { ] = leftMax; }
    if(env_var_1 == 104) { ] = leftMax+n; }
    if(env_var_1 == 105) { ] = leftMax[n]; }
    if(env_var_1 == 106) { ] = n; }
    if(env_var_1 == 107) { ] = rightMin; }
    if(env_var_1 == 108) { ] = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 109) { ] = std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 110) { ] = std::max( arr[n],n ); }
    if(env_var_1 == 111) { ] = std::max( arr[n],rightMin ); }
    if(env_var_1 == 112) { ] = std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 113) { ] = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 114) { ] = std::max( leftMax[n],n ); }
    if(env_var_1 == 115) { ] = std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 116) { ] = std::max( n,arr[n] ); }
    if(env_var_1 == 117) { ] = std::max( n,leftMax[n] ); }
    if(env_var_1 == 118) { ] = std::max( n,n ); }
    if(env_var_1 == 119) { ] = std::max( n,rightMin ); }
    if(env_var_1 == 120) { ] = std::max( rightMin,arr[n] ); }
    if(env_var_1 == 121) { ] = std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 122) { ] = std::max( rightMin,n ); }
    if(env_var_1 == 123) { ] = std::max( rightMin,rightMin ); }
    if(env_var_1 == 124) { ] = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 125) { ] = std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 126) { ] = std::min( arr[n],n ); }
    if(env_var_1 == 127) { ] = std::min( arr[n],rightMin ); }
    if(env_var_1 == 128) { ] = std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 129) { ] = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 130) { ] = std::min( leftMax[n],n ); }
    if(env_var_1 == 131) { ] = std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 132) { ] = std::min( n,arr[n] ); }
    if(env_var_1 == 133) { ] = std::min( n,leftMax[n] ); }
    if(env_var_1 == 134) { ] = std::min( n,n ); }
    if(env_var_1 == 135) { ] = std::min( n,rightMin ); }
    if(env_var_1 == 136) { ] = std::min( rightMin,arr[n] ); }
    if(env_var_1 == 137) { ] = std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 138) { ] = std::min( rightMin,n ); }
    if(env_var_1 == 139) { ] = std::min( rightMin,rightMin ); }
    if(env_var_1 == 140) { ] = toupper( arr[n] ); }
    if(env_var_1 == 141) { ] = toupper( leftMax[n] ); }
    if(env_var_1 == 142) { ] = toupper( n ); }
    if(env_var_1 == 143) { ] = toupper( rightMin ); }
    if(env_var_1 == 144) { ax = arr; }
    if(env_var_1 == 145) { ax = arr+n; }
    if(env_var_1 == 146) { ax = arr[n]; }
    if(env_var_1 == 147) { ax = isupper( arr[n] ); }
    if(env_var_1 == 148) { ax = isupper( leftMax[n] ); }
    if(env_var_1 == 149) { ax = isupper( n ); }
    if(env_var_1 == 150) { ax = isupper( rightMin ); }
    if(env_var_1 == 151) { ax = leftMax; }
    if(env_var_1 == 152) { ax = leftMax+n; }
    if(env_var_1 == 153) { ax = leftMax[n]; }
    if(env_var_1 == 154) { ax = n; }
    if(env_var_1 == 155) { ax = rightMin; }
    if(env_var_1 == 156) { ax = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 157) { ax = std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 158) { ax = std::max( arr[n],n ); }
    if(env_var_1 == 159) { ax = std::max( arr[n],rightMin ); }
    if(env_var_1 == 160) { ax = std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 161) { ax = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 162) { ax = std::max( leftMax[n],n ); }
    if(env_var_1 == 163) { ax = std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 164) { ax = std::max( n,arr[n] ); }
    if(env_var_1 == 165) { ax = std::max( n,leftMax[n] ); }
    if(env_var_1 == 166) { ax = std::max( n,n ); }
    if(env_var_1 == 167) { ax = std::max( n,rightMin ); }
    if(env_var_1 == 168) { ax = std::max( rightMin,arr[n] ); }
    if(env_var_1 == 169) { ax = std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 170) { ax = std::max( rightMin,n ); }
    if(env_var_1 == 171) { ax = std::max( rightMin,rightMin ); }
    if(env_var_1 == 172) { ax = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 173) { ax = std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 174) { ax = std::min( arr[n],n ); }
    if(env_var_1 == 175) { ax = std::min( arr[n],rightMin ); }
    if(env_var_1 == 176) { ax = std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 177) { ax = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 178) { ax = std::min( leftMax[n],n ); }
    if(env_var_1 == 179) { ax = std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 180) { ax = std::min( n,arr[n] ); }
    if(env_var_1 == 181) { ax = std::min( n,leftMax[n] ); }
    if(env_var_1 == 182) { ax = std::min( n,n ); }
    if(env_var_1 == 183) { ax = std::min( n,rightMin ); }
    if(env_var_1 == 184) { ax = std::min( rightMin,arr[n] ); }
    if(env_var_1 == 185) { ax = std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 186) { ax = std::min( rightMin,n ); }
    if(env_var_1 == 187) { ax = std::min( rightMin,rightMin ); }
    if(env_var_1 == 188) { ax = toupper( arr[n] ); }
    if(env_var_1 == 189) { ax = toupper( leftMax[n] ); }
    if(env_var_1 == 190) { ax = toupper( n ); }
    if(env_var_1 == 191) { ax = toupper( rightMin ); }
    if(env_var_1 == 192) { ax+n = arr; }
    if(env_var_1 == 193) { ax+n = arr+n; }
    if(env_var_1 == 194) { ax+n = arr[n]; }
    if(env_var_1 == 195) { ax+n = isupper( arr[n] ); }
    if(env_var_1 == 196) { ax+n = isupper( leftMax[n] ); }
    if(env_var_1 == 197) { ax+n = isupper( n ); }
    if(env_var_1 == 198) { ax+n = isupper( rightMin ); }
    if(env_var_1 == 199) { ax+n = leftMax; }
    if(env_var_1 == 200) { ax+n = leftMax+n; }
    if(env_var_1 == 201) { ax+n = leftMax[n]; }
    if(env_var_1 == 202) { ax+n = n; }
    if(env_var_1 == 203) { ax+n = rightMin; }
    if(env_var_1 == 204) { ax+n = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 205) { ax+n = std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 206) { ax+n = std::max( arr[n],n ); }
    if(env_var_1 == 207) { ax+n = std::max( arr[n],rightMin ); }
    if(env_var_1 == 208) { ax+n = std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 209) { ax+n = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 210) { ax+n = std::max( leftMax[n],n ); }
    if(env_var_1 == 211) { ax+n = std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 212) { ax+n = std::max( n,arr[n] ); }
    if(env_var_1 == 213) { ax+n = std::max( n,leftMax[n] ); }
    if(env_var_1 == 214) { ax+n = std::max( n,n ); }
    if(env_var_1 == 215) { ax+n = std::max( n,rightMin ); }
    if(env_var_1 == 216) { ax+n = std::max( rightMin,arr[n] ); }
    if(env_var_1 == 217) { ax+n = std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 218) { ax+n = std::max( rightMin,n ); }
    if(env_var_1 == 219) { ax+n = std::max( rightMin,rightMin ); }
    if(env_var_1 == 220) { ax+n = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 221) { ax+n = std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 222) { ax+n = std::min( arr[n],n ); }
    if(env_var_1 == 223) { ax+n = std::min( arr[n],rightMin ); }
    if(env_var_1 == 224) { ax+n = std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 225) { ax+n = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 226) { ax+n = std::min( leftMax[n],n ); }
    if(env_var_1 == 227) { ax+n = std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 228) { ax+n = std::min( n,arr[n] ); }
    if(env_var_1 == 229) { ax+n = std::min( n,leftMax[n] ); }
    if(env_var_1 == 230) { ax+n = std::min( n,n ); }
    if(env_var_1 == 231) { ax+n = std::min( n,rightMin ); }
    if(env_var_1 == 232) { ax+n = std::min( rightMin,arr[n] ); }
    if(env_var_1 == 233) { ax+n = std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 234) { ax+n = std::min( rightMin,n ); }
    if(env_var_1 == 235) { ax+n = std::min( rightMin,rightMin ); }
    if(env_var_1 == 236) { ax+n = toupper( arr[n] ); }
    if(env_var_1 == 237) { ax+n = toupper( leftMax[n] ); }
    if(env_var_1 == 238) { ax+n = toupper( n ); }
    if(env_var_1 == 239) { ax+n = toupper( rightMin ); }
    if(env_var_1 == 240) { ax[n] = arr; }
    if(env_var_1 == 241) { ax[n] = arr+n; }
    if(env_var_1 == 242) { ax[n] = arr[n]; }
    if(env_var_1 == 243) { ax[n] = isupper( arr[n] ); }
    if(env_var_1 == 244) { ax[n] = isupper( leftMax[n] ); }
    if(env_var_1 == 245) { ax[n] = isupper( n ); }
    if(env_var_1 == 246) { ax[n] = isupper( rightMin ); }
    if(env_var_1 == 247) { ax[n] = leftMax; }
    if(env_var_1 == 248) { ax[n] = leftMax+n; }
    if(env_var_1 == 249) { ax[n] = leftMax[n]; }
    if(env_var_1 == 250) { ax[n] = n; }
    if(env_var_1 == 251) { ax[n] = rightMin; }
    if(env_var_1 == 252) { ax[n] = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 253) { ax[n] = std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 254) { ax[n] = std::max( arr[n],n ); }
    if(env_var_1 == 255) { ax[n] = std::max( arr[n],rightMin ); }
    if(env_var_1 == 256) { ax[n] = std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 257) { ax[n] = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 258) { ax[n] = std::max( leftMax[n],n ); }
    if(env_var_1 == 259) { ax[n] = std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 260) { ax[n] = std::max( n,arr[n] ); }
    if(env_var_1 == 261) { ax[n] = std::max( n,leftMax[n] ); }
    if(env_var_1 == 262) { ax[n] = std::max( n,n ); }
    if(env_var_1 == 263) { ax[n] = std::max( n,rightMin ); }
    if(env_var_1 == 264) { ax[n] = std::max( rightMin,arr[n] ); }
    if(env_var_1 == 265) { ax[n] = std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 266) { ax[n] = std::max( rightMin,n ); }
    if(env_var_1 == 267) { ax[n] = std::max( rightMin,rightMin ); }
    if(env_var_1 == 268) { ax[n] = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 269) { ax[n] = std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 270) { ax[n] = std::min( arr[n],n ); }
    if(env_var_1 == 271) { ax[n] = std::min( arr[n],rightMin ); }
    if(env_var_1 == 272) { ax[n] = std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 273) { ax[n] = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 274) { ax[n] = std::min( leftMax[n],n ); }
    if(env_var_1 == 275) { ax[n] = std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 276) { ax[n] = std::min( n,arr[n] ); }
    if(env_var_1 == 277) { ax[n] = std::min( n,leftMax[n] ); }
    if(env_var_1 == 278) { ax[n] = std::min( n,n ); }
    if(env_var_1 == 279) { ax[n] = std::min( n,rightMin ); }
    if(env_var_1 == 280) { ax[n] = std::min( rightMin,arr[n] ); }
    if(env_var_1 == 281) { ax[n] = std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 282) { ax[n] = std::min( rightMin,n ); }
    if(env_var_1 == 283) { ax[n] = std::min( rightMin,rightMin ); }
    if(env_var_1 == 284) { ax[n] = toupper( arr[n] ); }
    if(env_var_1 == 285) { ax[n] = toupper( leftMax[n] ); }
    if(env_var_1 == 286) { ax[n] = toupper( n ); }
    if(env_var_1 == 287) { ax[n] = toupper( rightMin ); }
    if(env_var_1 == 288) { rr; }
    if(env_var_1 == 289) { rr+n; }
    if(env_var_1 == 290) { rr[n]; }
    if(env_var_1 == 291) { supper( arr[n] ); }
    if(env_var_1 == 292) { supper( leftMax[n] ); }
    if(env_var_1 == 293) { supper( n ); }
    if(env_var_1 == 294) { supper( rightMin ); }
    if(env_var_1 == 295) { eftMax; }
    if(env_var_1 == 296) { eftMax+n; }
    if(env_var_1 == 297) { eftMax[n]; }
    if(env_var_1 == 298) { ; }
    if(env_var_1 == 299) { ightMin; }
    if(env_var_1 == 300) { td::max( arr[n],arr[n] ); }
    if(env_var_1 == 301) { td::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 302) { td::max( arr[n],n ); }
    if(env_var_1 == 303) { td::max( arr[n],rightMin ); }
    if(env_var_1 == 304) { td::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 305) { td::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 306) { td::max( leftMax[n],n ); }
    if(env_var_1 == 307) { td::max( leftMax[n],rightMin ); }
    if(env_var_1 == 308) { td::max( n,arr[n] ); }
    if(env_var_1 == 309) { td::max( n,leftMax[n] ); }
    if(env_var_1 == 310) { td::max( n,n ); }
    if(env_var_1 == 311) { td::max( n,rightMin ); }
    if(env_var_1 == 312) { td::max( rightMin,arr[n] ); }
    if(env_var_1 == 313) { td::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 314) { td::max( rightMin,n ); }
    if(env_var_1 == 315) { td::max( rightMin,rightMin ); }
    if(env_var_1 == 316) { td::min( arr[n],arr[n] ); }
    if(env_var_1 == 317) { td::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 318) { td::min( arr[n],n ); }
    if(env_var_1 == 319) { td::min( arr[n],rightMin ); }
    if(env_var_1 == 320) { td::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 321) { td::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 322) { td::min( leftMax[n],n ); }
    if(env_var_1 == 323) { td::min( leftMax[n],rightMin ); }
    if(env_var_1 == 324) { td::min( n,arr[n] ); }
    if(env_var_1 == 325) { td::min( n,leftMax[n] ); }
    if(env_var_1 == 326) { td::min( n,n ); }
    if(env_var_1 == 327) { td::min( n,rightMin ); }
    if(env_var_1 == 328) { td::min( rightMin,arr[n] ); }
    if(env_var_1 == 329) { td::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 330) { td::min( rightMin,n ); }
    if(env_var_1 == 331) { td::min( rightMin,rightMin ); }
    if(env_var_1 == 332) { oupper( arr[n] ); }
    if(env_var_1 == 333) { oupper( leftMax[n] ); }
    if(env_var_1 == 334) { oupper( n ); }
    if(env_var_1 == 335) { oupper( rightMin ); }
    if(env_var_1 == 336) { Min = arr; }
    if(env_var_1 == 337) { Min = arr+n; }
    if(env_var_1 == 338) { Min = arr[n]; }
    if(env_var_1 == 339) { Min = isupper( arr[n] ); }
    if(env_var_1 == 340) { Min = isupper( leftMax[n] ); }
    if(env_var_1 == 341) { Min = isupper( n ); }
    if(env_var_1 == 342) { Min = isupper( rightMin ); }
    if(env_var_1 == 343) { Min = leftMax; }
    if(env_var_1 == 344) { Min = leftMax+n; }
    if(env_var_1 == 345) { Min = leftMax[n]; }
    if(env_var_1 == 346) { Min = n; }
    if(env_var_1 == 347) { Min = rightMin; }
    if(env_var_1 == 348) { Min = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 349) { Min = std::max( arr[n],leftMax[n] ); }
    if(env_var_1 == 350) { Min = std::max( arr[n],n ); }
    if(env_var_1 == 351) { Min = std::max( arr[n],rightMin ); }
    if(env_var_1 == 352) { Min = std::max( leftMax[n],arr[n] ); }
    if(env_var_1 == 353) { Min = std::max( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 354) { Min = std::max( leftMax[n],n ); }
    if(env_var_1 == 355) { Min = std::max( leftMax[n],rightMin ); }
    if(env_var_1 == 356) { Min = std::max( n,arr[n] ); }
    if(env_var_1 == 357) { Min = std::max( n,leftMax[n] ); }
    if(env_var_1 == 358) { Min = std::max( n,n ); }
    if(env_var_1 == 359) { Min = std::max( n,rightMin ); }
    if(env_var_1 == 360) { Min = std::max( rightMin,arr[n] ); }
    if(env_var_1 == 361) { Min = std::max( rightMin,leftMax[n] ); }
    if(env_var_1 == 362) { Min = std::max( rightMin,n ); }
    if(env_var_1 == 363) { Min = std::max( rightMin,rightMin ); }
    if(env_var_1 == 364) { Min = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 365) { Min = std::min( arr[n],leftMax[n] ); }
    if(env_var_1 == 366) { Min = std::min( arr[n],n ); }
    if(env_var_1 == 367) { Min = std::min( arr[n],rightMin ); }
    if(env_var_1 == 368) { Min = std::min( leftMax[n],arr[n] ); }
    if(env_var_1 == 369) { Min = std::min( leftMax[n],leftMax[n] ); }
    if(env_var_1 == 370) { Min = std::min( leftMax[n],n ); }
    if(env_var_1 == 371) { Min = std::min( leftMax[n],rightMin ); }
    if(env_var_1 == 372) { Min = std::min( n,arr[n] ); }
    if(env_var_1 == 373) { Min = std::min( n,leftMax[n] ); }
    if(env_var_1 == 374) { Min = std::min( n,n ); }
    if(env_var_1 == 375) { Min = std::min( n,rightMin ); }
    if(env_var_1 == 376) { Min = std::min( rightMin,arr[n] ); }
    if(env_var_1 == 377) { Min = std::min( rightMin,leftMax[n] ); }
    if(env_var_1 == 378) { Min = std::min( rightMin,n ); }
    if(env_var_1 == 379) { Min = std::min( rightMin,rightMin ); }
    if(env_var_1 == 380) { Min = toupper( arr[n] ); }
    if(env_var_1 == 381) { Min = toupper( leftMax[n] ); }
    if(env_var_1 == 382) { Min = toupper( n ); }
    if(env_var_1 == 383) { Min = toupper( rightMin ); }

    for (int i = n - 1; i >= 0; i--) {
        if (leftMax[i] < arr[i] && rightMin > arr[i])
            return i;
        rightMin = std::min(rightMin, arr[i]);
    }
    return -1;
}







int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,24,30,33,56,67,87,90},{72,-48,12,4,46,36,2,58,82,-88,-14,56,90,76,18,-6,-28,18,88,90,40,-68,-10,-82,-28,16,32,-90,12,-86,-16,78,-98,-52,-26,80,6,50,40,-12,52,38,-92,94,-32,14,-80,-88,48},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{51,87,46,76,2,89,56,34,49,61,44,73,14,60,89},{-90,-90,-80,-72,-68,-64,-62,-62,-60,-46,-44,-44,-44,-42,-42,-32,-22,-22,-18,-2,4,6,10,12,14,30,34,34,40,56,56,56,58,68,74,78,78,82,84,86,88,90,92},{0,0,0,1,1,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,0,1,0,0,0,0,0,1,0,0,1,1,1,0,0,0,1,1,0},{7,8,11,12,15,17,28,34,57,61,66,76,92},{-22,-96,-78,-60,34,-18,86,-42,-78,76,8,28,-80,80,6,-72,34,66,84,50,-4,18,72,-66,-68,-24,56,-12,-70,24,-82},{0,0,0,0,0,0,1,1,1,1,1},{79,81,55,6,78,93,81,33,29,1,27,49,21,58,22,65,44,95,6,51,75,42,14,55,79,82,90,8,15,15,53,98,76,43,33}};
    vector<int> param1 {4,28,30,11,29,26,9,19,9,30};
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
