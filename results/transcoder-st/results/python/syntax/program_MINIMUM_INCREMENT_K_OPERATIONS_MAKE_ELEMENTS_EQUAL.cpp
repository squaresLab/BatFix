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
int f_gold ( int arr [ ], int n, int k ) {
  int max = * max_element ( arr, arr + n );
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ( max - arr [ i ] ) % k != 0 ) return - 1;
    else res += ( max - arr [ i ] ) / k;
  }
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int n , int k ) {
 auto max1 ;
  if(env_var_0 == 0) { = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 1) { = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 2) { = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 3) { = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 4) { = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 5) { = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 6) { = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 7) { = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 8) { = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 9) { = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 10) { = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 11) { = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 12) { = *std::max_element( arr,arr ); }
  if(env_var_0 == 13) { = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 14) { = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 15) { = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 16) { = arr; }
  if(env_var_0 == 17) { = arr+k; }
  if(env_var_0 == 18) { = arr+max1; }
  if(env_var_0 == 19) { = arr+n; }
  if(env_var_0 == 20) { = arr[k]; }
  if(env_var_0 == 21) { = arr[max1]; }
  if(env_var_0 == 22) { = arr[n]; }
  if(env_var_0 == 23) { = isupper( arr[k] ); }
  if(env_var_0 == 24) { = isupper( arr[max1] ); }
  if(env_var_0 == 25) { = isupper( arr[n] ); }
  if(env_var_0 == 26) { = isupper( k ); }
  if(env_var_0 == 27) { = isupper( max1 ); }
  if(env_var_0 == 28) { = isupper( n ); }
  if(env_var_0 == 29) { = k; }
  if(env_var_0 == 30) { = max1; }
  if(env_var_0 == 31) { = n; }
  if(env_var_0 == 32) { = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 33) { = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 34) { = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 35) { = std::max( arr[k],k ); }
  if(env_var_0 == 36) { = std::max( arr[k],max1 ); }
  if(env_var_0 == 37) { = std::max( arr[k],n ); }
  if(env_var_0 == 38) { = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 39) { = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 40) { = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 41) { = std::max( arr[max1],k ); }
  if(env_var_0 == 42) { = std::max( arr[max1],max1 ); }
  if(env_var_0 == 43) { = std::max( arr[max1],n ); }
  if(env_var_0 == 44) { = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 45) { = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 46) { = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 47) { = std::max( arr[n],k ); }
  if(env_var_0 == 48) { = std::max( arr[n],max1 ); }
  if(env_var_0 == 49) { = std::max( arr[n],n ); }
  if(env_var_0 == 50) { = std::max( k,arr[k] ); }
  if(env_var_0 == 51) { = std::max( k,arr[max1] ); }
  if(env_var_0 == 52) { = std::max( k,arr[n] ); }
  if(env_var_0 == 53) { = std::max( k,k ); }
  if(env_var_0 == 54) { = std::max( k,max1 ); }
  if(env_var_0 == 55) { = std::max( k,n ); }
  if(env_var_0 == 56) { = std::max( max1,arr[k] ); }
  if(env_var_0 == 57) { = std::max( max1,arr[max1] ); }
  if(env_var_0 == 58) { = std::max( max1,arr[n] ); }
  if(env_var_0 == 59) { = std::max( max1,k ); }
  if(env_var_0 == 60) { = std::max( max1,max1 ); }
  if(env_var_0 == 61) { = std::max( max1,n ); }
  if(env_var_0 == 62) { = std::max( n,arr[k] ); }
  if(env_var_0 == 63) { = std::max( n,arr[max1] ); }
  if(env_var_0 == 64) { = std::max( n,arr[n] ); }
  if(env_var_0 == 65) { = std::max( n,k ); }
  if(env_var_0 == 66) { = std::max( n,max1 ); }
  if(env_var_0 == 67) { = std::max( n,n ); }
  if(env_var_0 == 68) { = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 69) { = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 70) { = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 71) { = std::min( arr[k],k ); }
  if(env_var_0 == 72) { = std::min( arr[k],max1 ); }
  if(env_var_0 == 73) { = std::min( arr[k],n ); }
  if(env_var_0 == 74) { = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 75) { = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 76) { = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 77) { = std::min( arr[max1],k ); }
  if(env_var_0 == 78) { = std::min( arr[max1],max1 ); }
  if(env_var_0 == 79) { = std::min( arr[max1],n ); }
  if(env_var_0 == 80) { = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 81) { = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 82) { = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 83) { = std::min( arr[n],k ); }
  if(env_var_0 == 84) { = std::min( arr[n],max1 ); }
  if(env_var_0 == 85) { = std::min( arr[n],n ); }
  if(env_var_0 == 86) { = std::min( k,arr[k] ); }
  if(env_var_0 == 87) { = std::min( k,arr[max1] ); }
  if(env_var_0 == 88) { = std::min( k,arr[n] ); }
  if(env_var_0 == 89) { = std::min( k,k ); }
  if(env_var_0 == 90) { = std::min( k,max1 ); }
  if(env_var_0 == 91) { = std::min( k,n ); }
  if(env_var_0 == 92) { = std::min( max1,arr[k] ); }
  if(env_var_0 == 93) { = std::min( max1,arr[max1] ); }
  if(env_var_0 == 94) { = std::min( max1,arr[n] ); }
  if(env_var_0 == 95) { = std::min( max1,k ); }
  if(env_var_0 == 96) { = std::min( max1,max1 ); }
  if(env_var_0 == 97) { = std::min( max1,n ); }
  if(env_var_0 == 98) { = std::min( n,arr[k] ); }
  if(env_var_0 == 99) { = std::min( n,arr[max1] ); }
  if(env_var_0 == 100) { = std::min( n,arr[n] ); }
  if(env_var_0 == 101) { = std::min( n,k ); }
  if(env_var_0 == 102) { = std::min( n,max1 ); }
  if(env_var_0 == 103) { = std::min( n,n ); }
  if(env_var_0 == 104) { = toupper( arr[k] ); }
  if(env_var_0 == 105) { = toupper( arr[max1] ); }
  if(env_var_0 == 106) { = toupper( arr[n] ); }
  if(env_var_0 == 107) { = toupper( k ); }
  if(env_var_0 == 108) { = toupper( max1 ); }
  if(env_var_0 == 109) { = toupper( n ); }
  if(env_var_0 == 110) { k = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 111) { k = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 112) { k = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 113) { k = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 114) { k = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 115) { k = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 116) { k = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 117) { k = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 118) { k = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 119) { k = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 120) { k = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 121) { k = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 122) { k = *std::max_element( arr,arr ); }
  if(env_var_0 == 123) { k = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 124) { k = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 125) { k = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 126) { k = arr; }
  if(env_var_0 == 127) { k = arr+k; }
  if(env_var_0 == 128) { k = arr+max1; }
  if(env_var_0 == 129) { k = arr+n; }
  if(env_var_0 == 130) { k = arr[k]; }
  if(env_var_0 == 131) { k = arr[max1]; }
  if(env_var_0 == 132) { k = arr[n]; }
  if(env_var_0 == 133) { k = isupper( arr[k] ); }
  if(env_var_0 == 134) { k = isupper( arr[max1] ); }
  if(env_var_0 == 135) { k = isupper( arr[n] ); }
  if(env_var_0 == 136) { k = isupper( k ); }
  if(env_var_0 == 137) { k = isupper( max1 ); }
  if(env_var_0 == 138) { k = isupper( n ); }
  if(env_var_0 == 139) { k = k; }
  if(env_var_0 == 140) { k = max1; }
  if(env_var_0 == 141) { k = n; }
  if(env_var_0 == 142) { k = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 143) { k = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 144) { k = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 145) { k = std::max( arr[k],k ); }
  if(env_var_0 == 146) { k = std::max( arr[k],max1 ); }
  if(env_var_0 == 147) { k = std::max( arr[k],n ); }
  if(env_var_0 == 148) { k = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 149) { k = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 150) { k = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 151) { k = std::max( arr[max1],k ); }
  if(env_var_0 == 152) { k = std::max( arr[max1],max1 ); }
  if(env_var_0 == 153) { k = std::max( arr[max1],n ); }
  if(env_var_0 == 154) { k = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 155) { k = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 156) { k = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 157) { k = std::max( arr[n],k ); }
  if(env_var_0 == 158) { k = std::max( arr[n],max1 ); }
  if(env_var_0 == 159) { k = std::max( arr[n],n ); }
  if(env_var_0 == 160) { k = std::max( k,arr[k] ); }
  if(env_var_0 == 161) { k = std::max( k,arr[max1] ); }
  if(env_var_0 == 162) { k = std::max( k,arr[n] ); }
  if(env_var_0 == 163) { k = std::max( k,k ); }
  if(env_var_0 == 164) { k = std::max( k,max1 ); }
  if(env_var_0 == 165) { k = std::max( k,n ); }
  if(env_var_0 == 166) { k = std::max( max1,arr[k] ); }
  if(env_var_0 == 167) { k = std::max( max1,arr[max1] ); }
  if(env_var_0 == 168) { k = std::max( max1,arr[n] ); }
  if(env_var_0 == 169) { k = std::max( max1,k ); }
  if(env_var_0 == 170) { k = std::max( max1,max1 ); }
  if(env_var_0 == 171) { k = std::max( max1,n ); }
  if(env_var_0 == 172) { k = std::max( n,arr[k] ); }
  if(env_var_0 == 173) { k = std::max( n,arr[max1] ); }
  if(env_var_0 == 174) { k = std::max( n,arr[n] ); }
  if(env_var_0 == 175) { k = std::max( n,k ); }
  if(env_var_0 == 176) { k = std::max( n,max1 ); }
  if(env_var_0 == 177) { k = std::max( n,n ); }
  if(env_var_0 == 178) { k = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 179) { k = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 180) { k = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 181) { k = std::min( arr[k],k ); }
  if(env_var_0 == 182) { k = std::min( arr[k],max1 ); }
  if(env_var_0 == 183) { k = std::min( arr[k],n ); }
  if(env_var_0 == 184) { k = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 185) { k = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 186) { k = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 187) { k = std::min( arr[max1],k ); }
  if(env_var_0 == 188) { k = std::min( arr[max1],max1 ); }
  if(env_var_0 == 189) { k = std::min( arr[max1],n ); }
  if(env_var_0 == 190) { k = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 191) { k = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 192) { k = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 193) { k = std::min( arr[n],k ); }
  if(env_var_0 == 194) { k = std::min( arr[n],max1 ); }
  if(env_var_0 == 195) { k = std::min( arr[n],n ); }
  if(env_var_0 == 196) { k = std::min( k,arr[k] ); }
  if(env_var_0 == 197) { k = std::min( k,arr[max1] ); }
  if(env_var_0 == 198) { k = std::min( k,arr[n] ); }
  if(env_var_0 == 199) { k = std::min( k,k ); }
  if(env_var_0 == 200) { k = std::min( k,max1 ); }
  if(env_var_0 == 201) { k = std::min( k,n ); }
  if(env_var_0 == 202) { k = std::min( max1,arr[k] ); }
  if(env_var_0 == 203) { k = std::min( max1,arr[max1] ); }
  if(env_var_0 == 204) { k = std::min( max1,arr[n] ); }
  if(env_var_0 == 205) { k = std::min( max1,k ); }
  if(env_var_0 == 206) { k = std::min( max1,max1 ); }
  if(env_var_0 == 207) { k = std::min( max1,n ); }
  if(env_var_0 == 208) { k = std::min( n,arr[k] ); }
  if(env_var_0 == 209) { k = std::min( n,arr[max1] ); }
  if(env_var_0 == 210) { k = std::min( n,arr[n] ); }
  if(env_var_0 == 211) { k = std::min( n,k ); }
  if(env_var_0 == 212) { k = std::min( n,max1 ); }
  if(env_var_0 == 213) { k = std::min( n,n ); }
  if(env_var_0 == 214) { k = toupper( arr[k] ); }
  if(env_var_0 == 215) { k = toupper( arr[max1] ); }
  if(env_var_0 == 216) { k = toupper( arr[n] ); }
  if(env_var_0 == 217) { k = toupper( k ); }
  if(env_var_0 == 218) { k = toupper( max1 ); }
  if(env_var_0 == 219) { k = toupper( n ); }
  if(env_var_0 == 220) { max1 = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 221) { max1 = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 222) { max1 = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 223) { max1 = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 224) { max1 = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 225) { max1 = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 226) { max1 = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 227) { max1 = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 228) { max1 = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 229) { max1 = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 230) { max1 = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 231) { max1 = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 232) { max1 = *std::max_element( arr,arr ); }
  if(env_var_0 == 233) { max1 = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 234) { max1 = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 235) { max1 = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 236) { max1 = arr; }
  if(env_var_0 == 237) { max1 = arr+k; }
  if(env_var_0 == 238) { max1 = arr+max1; }
  if(env_var_0 == 239) { max1 = arr+n; }
  if(env_var_0 == 240) { max1 = arr[k]; }
  if(env_var_0 == 241) { max1 = arr[max1]; }
  if(env_var_0 == 242) { max1 = arr[n]; }
  if(env_var_0 == 243) { max1 = isupper( arr[k] ); }
  if(env_var_0 == 244) { max1 = isupper( arr[max1] ); }
  if(env_var_0 == 245) { max1 = isupper( arr[n] ); }
  if(env_var_0 == 246) { max1 = isupper( k ); }
  if(env_var_0 == 247) { max1 = isupper( max1 ); }
  if(env_var_0 == 248) { max1 = isupper( n ); }
  if(env_var_0 == 249) { max1 = k; }
  if(env_var_0 == 250) { max1 = max1; }
  if(env_var_0 == 251) { max1 = n; }
  if(env_var_0 == 252) { max1 = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 253) { max1 = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 254) { max1 = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 255) { max1 = std::max( arr[k],k ); }
  if(env_var_0 == 256) { max1 = std::max( arr[k],max1 ); }
  if(env_var_0 == 257) { max1 = std::max( arr[k],n ); }
  if(env_var_0 == 258) { max1 = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 259) { max1 = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 260) { max1 = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 261) { max1 = std::max( arr[max1],k ); }
  if(env_var_0 == 262) { max1 = std::max( arr[max1],max1 ); }
  if(env_var_0 == 263) { max1 = std::max( arr[max1],n ); }
  if(env_var_0 == 264) { max1 = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 265) { max1 = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 266) { max1 = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 267) { max1 = std::max( arr[n],k ); }
  if(env_var_0 == 268) { max1 = std::max( arr[n],max1 ); }
  if(env_var_0 == 269) { max1 = std::max( arr[n],n ); }
  if(env_var_0 == 270) { max1 = std::max( k,arr[k] ); }
  if(env_var_0 == 271) { max1 = std::max( k,arr[max1] ); }
  if(env_var_0 == 272) { max1 = std::max( k,arr[n] ); }
  if(env_var_0 == 273) { max1 = std::max( k,k ); }
  if(env_var_0 == 274) { max1 = std::max( k,max1 ); }
  if(env_var_0 == 275) { max1 = std::max( k,n ); }
  if(env_var_0 == 276) { max1 = std::max( max1,arr[k] ); }
  if(env_var_0 == 277) { max1 = std::max( max1,arr[max1] ); }
  if(env_var_0 == 278) { max1 = std::max( max1,arr[n] ); }
  if(env_var_0 == 279) { max1 = std::max( max1,k ); }
  if(env_var_0 == 280) { max1 = std::max( max1,max1 ); }
  if(env_var_0 == 281) { max1 = std::max( max1,n ); }
  if(env_var_0 == 282) { max1 = std::max( n,arr[k] ); }
  if(env_var_0 == 283) { max1 = std::max( n,arr[max1] ); }
  if(env_var_0 == 284) { max1 = std::max( n,arr[n] ); }
  if(env_var_0 == 285) { max1 = std::max( n,k ); }
  if(env_var_0 == 286) { max1 = std::max( n,max1 ); }
  if(env_var_0 == 287) { max1 = std::max( n,n ); }
  if(env_var_0 == 288) { max1 = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 289) { max1 = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 290) { max1 = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 291) { max1 = std::min( arr[k],k ); }
  if(env_var_0 == 292) { max1 = std::min( arr[k],max1 ); }
  if(env_var_0 == 293) { max1 = std::min( arr[k],n ); }
  if(env_var_0 == 294) { max1 = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 295) { max1 = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 296) { max1 = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 297) { max1 = std::min( arr[max1],k ); }
  if(env_var_0 == 298) { max1 = std::min( arr[max1],max1 ); }
  if(env_var_0 == 299) { max1 = std::min( arr[max1],n ); }
  if(env_var_0 == 300) { max1 = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 301) { max1 = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 302) { max1 = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 303) { max1 = std::min( arr[n],k ); }
  if(env_var_0 == 304) { max1 = std::min( arr[n],max1 ); }
  if(env_var_0 == 305) { max1 = std::min( arr[n],n ); }
  if(env_var_0 == 306) { max1 = std::min( k,arr[k] ); }
  if(env_var_0 == 307) { max1 = std::min( k,arr[max1] ); }
  if(env_var_0 == 308) { max1 = std::min( k,arr[n] ); }
  if(env_var_0 == 309) { max1 = std::min( k,k ); }
  if(env_var_0 == 310) { max1 = std::min( k,max1 ); }
  if(env_var_0 == 311) { max1 = std::min( k,n ); }
  if(env_var_0 == 312) { max1 = std::min( max1,arr[k] ); }
  if(env_var_0 == 313) { max1 = std::min( max1,arr[max1] ); }
  if(env_var_0 == 314) { max1 = std::min( max1,arr[n] ); }
  if(env_var_0 == 315) { max1 = std::min( max1,k ); }
  if(env_var_0 == 316) { max1 = std::min( max1,max1 ); }
  if(env_var_0 == 317) { max1 = std::min( max1,n ); }
  if(env_var_0 == 318) { max1 = std::min( n,arr[k] ); }
  if(env_var_0 == 319) { max1 = std::min( n,arr[max1] ); }
  if(env_var_0 == 320) { max1 = std::min( n,arr[n] ); }
  if(env_var_0 == 321) { max1 = std::min( n,k ); }
  if(env_var_0 == 322) { max1 = std::min( n,max1 ); }
  if(env_var_0 == 323) { max1 = std::min( n,n ); }
  if(env_var_0 == 324) { max1 = toupper( arr[k] ); }
  if(env_var_0 == 325) { max1 = toupper( arr[max1] ); }
  if(env_var_0 == 326) { max1 = toupper( arr[n] ); }
  if(env_var_0 == 327) { max1 = toupper( k ); }
  if(env_var_0 == 328) { max1 = toupper( max1 ); }
  if(env_var_0 == 329) { max1 = toupper( n ); }
  if(env_var_0 == 330) { n = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 331) { n = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 332) { n = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 333) { n = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 334) { n = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 335) { n = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 336) { n = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 337) { n = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 338) { n = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 339) { n = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 340) { n = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 341) { n = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 342) { n = *std::max_element( arr,arr ); }
  if(env_var_0 == 343) { n = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 344) { n = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 345) { n = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 346) { n = arr; }
  if(env_var_0 == 347) { n = arr+k; }
  if(env_var_0 == 348) { n = arr+max1; }
  if(env_var_0 == 349) { n = arr+n; }
  if(env_var_0 == 350) { n = arr[k]; }
  if(env_var_0 == 351) { n = arr[max1]; }
  if(env_var_0 == 352) { n = arr[n]; }
  if(env_var_0 == 353) { n = isupper( arr[k] ); }
  if(env_var_0 == 354) { n = isupper( arr[max1] ); }
  if(env_var_0 == 355) { n = isupper( arr[n] ); }
  if(env_var_0 == 356) { n = isupper( k ); }
  if(env_var_0 == 357) { n = isupper( max1 ); }
  if(env_var_0 == 358) { n = isupper( n ); }
  if(env_var_0 == 359) { n = k; }
  if(env_var_0 == 360) { n = max1; }
  if(env_var_0 == 361) { n = n; }
  if(env_var_0 == 362) { n = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 363) { n = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 364) { n = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 365) { n = std::max( arr[k],k ); }
  if(env_var_0 == 366) { n = std::max( arr[k],max1 ); }
  if(env_var_0 == 367) { n = std::max( arr[k],n ); }
  if(env_var_0 == 368) { n = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 369) { n = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 370) { n = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 371) { n = std::max( arr[max1],k ); }
  if(env_var_0 == 372) { n = std::max( arr[max1],max1 ); }
  if(env_var_0 == 373) { n = std::max( arr[max1],n ); }
  if(env_var_0 == 374) { n = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 375) { n = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 376) { n = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 377) { n = std::max( arr[n],k ); }
  if(env_var_0 == 378) { n = std::max( arr[n],max1 ); }
  if(env_var_0 == 379) { n = std::max( arr[n],n ); }
  if(env_var_0 == 380) { n = std::max( k,arr[k] ); }
  if(env_var_0 == 381) { n = std::max( k,arr[max1] ); }
  if(env_var_0 == 382) { n = std::max( k,arr[n] ); }
  if(env_var_0 == 383) { n = std::max( k,k ); }
  if(env_var_0 == 384) { n = std::max( k,max1 ); }
  if(env_var_0 == 385) { n = std::max( k,n ); }
  if(env_var_0 == 386) { n = std::max( max1,arr[k] ); }
  if(env_var_0 == 387) { n = std::max( max1,arr[max1] ); }
  if(env_var_0 == 388) { n = std::max( max1,arr[n] ); }
  if(env_var_0 == 389) { n = std::max( max1,k ); }
  if(env_var_0 == 390) { n = std::max( max1,max1 ); }
  if(env_var_0 == 391) { n = std::max( max1,n ); }
  if(env_var_0 == 392) { n = std::max( n,arr[k] ); }
  if(env_var_0 == 393) { n = std::max( n,arr[max1] ); }
  if(env_var_0 == 394) { n = std::max( n,arr[n] ); }
  if(env_var_0 == 395) { n = std::max( n,k ); }
  if(env_var_0 == 396) { n = std::max( n,max1 ); }
  if(env_var_0 == 397) { n = std::max( n,n ); }
  if(env_var_0 == 398) { n = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 399) { n = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 400) { n = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 401) { n = std::min( arr[k],k ); }
  if(env_var_0 == 402) { n = std::min( arr[k],max1 ); }
  if(env_var_0 == 403) { n = std::min( arr[k],n ); }
  if(env_var_0 == 404) { n = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 405) { n = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 406) { n = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 407) { n = std::min( arr[max1],k ); }
  if(env_var_0 == 408) { n = std::min( arr[max1],max1 ); }
  if(env_var_0 == 409) { n = std::min( arr[max1],n ); }
  if(env_var_0 == 410) { n = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 411) { n = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 412) { n = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 413) { n = std::min( arr[n],k ); }
  if(env_var_0 == 414) { n = std::min( arr[n],max1 ); }
  if(env_var_0 == 415) { n = std::min( arr[n],n ); }
  if(env_var_0 == 416) { n = std::min( k,arr[k] ); }
  if(env_var_0 == 417) { n = std::min( k,arr[max1] ); }
  if(env_var_0 == 418) { n = std::min( k,arr[n] ); }
  if(env_var_0 == 419) { n = std::min( k,k ); }
  if(env_var_0 == 420) { n = std::min( k,max1 ); }
  if(env_var_0 == 421) { n = std::min( k,n ); }
  if(env_var_0 == 422) { n = std::min( max1,arr[k] ); }
  if(env_var_0 == 423) { n = std::min( max1,arr[max1] ); }
  if(env_var_0 == 424) { n = std::min( max1,arr[n] ); }
  if(env_var_0 == 425) { n = std::min( max1,k ); }
  if(env_var_0 == 426) { n = std::min( max1,max1 ); }
  if(env_var_0 == 427) { n = std::min( max1,n ); }
  if(env_var_0 == 428) { n = std::min( n,arr[k] ); }
  if(env_var_0 == 429) { n = std::min( n,arr[max1] ); }
  if(env_var_0 == 430) { n = std::min( n,arr[n] ); }
  if(env_var_0 == 431) { n = std::min( n,k ); }
  if(env_var_0 == 432) { n = std::min( n,max1 ); }
  if(env_var_0 == 433) { n = std::min( n,n ); }
  if(env_var_0 == 434) { n = toupper( arr[k] ); }
  if(env_var_0 == 435) { n = toupper( arr[max1] ); }
  if(env_var_0 == 436) { n = toupper( arr[n] ); }
  if(env_var_0 == 437) { n = toupper( k ); }
  if(env_var_0 == 438) { n = toupper( max1 ); }
  if(env_var_0 == 439) { n = toupper( n ); }
  if(env_var_0 == 440) { k] = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 441) { k] = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 442) { k] = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 443) { k] = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 444) { k] = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 445) { k] = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 446) { k] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 447) { k] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 448) { k] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 449) { k] = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 450) { k] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 451) { k] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 452) { k] = *std::max_element( arr,arr ); }
  if(env_var_0 == 453) { k] = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 454) { k] = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 455) { k] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 456) { k] = arr; }
  if(env_var_0 == 457) { k] = arr+k; }
  if(env_var_0 == 458) { k] = arr+max1; }
  if(env_var_0 == 459) { k] = arr+n; }
  if(env_var_0 == 460) { k] = arr[k]; }
  if(env_var_0 == 461) { k] = arr[max1]; }
  if(env_var_0 == 462) { k] = arr[n]; }
  if(env_var_0 == 463) { k] = isupper( arr[k] ); }
  if(env_var_0 == 464) { k] = isupper( arr[max1] ); }
  if(env_var_0 == 465) { k] = isupper( arr[n] ); }
  if(env_var_0 == 466) { k] = isupper( k ); }
  if(env_var_0 == 467) { k] = isupper( max1 ); }
  if(env_var_0 == 468) { k] = isupper( n ); }
  if(env_var_0 == 469) { k] = k; }
  if(env_var_0 == 470) { k] = max1; }
  if(env_var_0 == 471) { k] = n; }
  if(env_var_0 == 472) { k] = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 473) { k] = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 474) { k] = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 475) { k] = std::max( arr[k],k ); }
  if(env_var_0 == 476) { k] = std::max( arr[k],max1 ); }
  if(env_var_0 == 477) { k] = std::max( arr[k],n ); }
  if(env_var_0 == 478) { k] = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 479) { k] = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 480) { k] = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 481) { k] = std::max( arr[max1],k ); }
  if(env_var_0 == 482) { k] = std::max( arr[max1],max1 ); }
  if(env_var_0 == 483) { k] = std::max( arr[max1],n ); }
  if(env_var_0 == 484) { k] = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 485) { k] = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 486) { k] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 487) { k] = std::max( arr[n],k ); }
  if(env_var_0 == 488) { k] = std::max( arr[n],max1 ); }
  if(env_var_0 == 489) { k] = std::max( arr[n],n ); }
  if(env_var_0 == 490) { k] = std::max( k,arr[k] ); }
  if(env_var_0 == 491) { k] = std::max( k,arr[max1] ); }
  if(env_var_0 == 492) { k] = std::max( k,arr[n] ); }
  if(env_var_0 == 493) { k] = std::max( k,k ); }
  if(env_var_0 == 494) { k] = std::max( k,max1 ); }
  if(env_var_0 == 495) { k] = std::max( k,n ); }
  if(env_var_0 == 496) { k] = std::max( max1,arr[k] ); }
  if(env_var_0 == 497) { k] = std::max( max1,arr[max1] ); }
  if(env_var_0 == 498) { k] = std::max( max1,arr[n] ); }
  if(env_var_0 == 499) { k] = std::max( max1,k ); }
  if(env_var_0 == 500) { k] = std::max( max1,max1 ); }
  if(env_var_0 == 501) { k] = std::max( max1,n ); }
  if(env_var_0 == 502) { k] = std::max( n,arr[k] ); }
  if(env_var_0 == 503) { k] = std::max( n,arr[max1] ); }
  if(env_var_0 == 504) { k] = std::max( n,arr[n] ); }
  if(env_var_0 == 505) { k] = std::max( n,k ); }
  if(env_var_0 == 506) { k] = std::max( n,max1 ); }
  if(env_var_0 == 507) { k] = std::max( n,n ); }
  if(env_var_0 == 508) { k] = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 509) { k] = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 510) { k] = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 511) { k] = std::min( arr[k],k ); }
  if(env_var_0 == 512) { k] = std::min( arr[k],max1 ); }
  if(env_var_0 == 513) { k] = std::min( arr[k],n ); }
  if(env_var_0 == 514) { k] = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 515) { k] = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 516) { k] = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 517) { k] = std::min( arr[max1],k ); }
  if(env_var_0 == 518) { k] = std::min( arr[max1],max1 ); }
  if(env_var_0 == 519) { k] = std::min( arr[max1],n ); }
  if(env_var_0 == 520) { k] = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 521) { k] = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 522) { k] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 523) { k] = std::min( arr[n],k ); }
  if(env_var_0 == 524) { k] = std::min( arr[n],max1 ); }
  if(env_var_0 == 525) { k] = std::min( arr[n],n ); }
  if(env_var_0 == 526) { k] = std::min( k,arr[k] ); }
  if(env_var_0 == 527) { k] = std::min( k,arr[max1] ); }
  if(env_var_0 == 528) { k] = std::min( k,arr[n] ); }
  if(env_var_0 == 529) { k] = std::min( k,k ); }
  if(env_var_0 == 530) { k] = std::min( k,max1 ); }
  if(env_var_0 == 531) { k] = std::min( k,n ); }
  if(env_var_0 == 532) { k] = std::min( max1,arr[k] ); }
  if(env_var_0 == 533) { k] = std::min( max1,arr[max1] ); }
  if(env_var_0 == 534) { k] = std::min( max1,arr[n] ); }
  if(env_var_0 == 535) { k] = std::min( max1,k ); }
  if(env_var_0 == 536) { k] = std::min( max1,max1 ); }
  if(env_var_0 == 537) { k] = std::min( max1,n ); }
  if(env_var_0 == 538) { k] = std::min( n,arr[k] ); }
  if(env_var_0 == 539) { k] = std::min( n,arr[max1] ); }
  if(env_var_0 == 540) { k] = std::min( n,arr[n] ); }
  if(env_var_0 == 541) { k] = std::min( n,k ); }
  if(env_var_0 == 542) { k] = std::min( n,max1 ); }
  if(env_var_0 == 543) { k] = std::min( n,n ); }
  if(env_var_0 == 544) { k] = toupper( arr[k] ); }
  if(env_var_0 == 545) { k] = toupper( arr[max1] ); }
  if(env_var_0 == 546) { k] = toupper( arr[n] ); }
  if(env_var_0 == 547) { k] = toupper( k ); }
  if(env_var_0 == 548) { k] = toupper( max1 ); }
  if(env_var_0 == 549) { k] = toupper( n ); }
  if(env_var_0 == 550) { max1] = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 551) { max1] = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 552) { max1] = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 553) { max1] = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 554) { max1] = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 555) { max1] = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 556) { max1] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 557) { max1] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 558) { max1] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 559) { max1] = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 560) { max1] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 561) { max1] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 562) { max1] = *std::max_element( arr,arr ); }
  if(env_var_0 == 563) { max1] = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 564) { max1] = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 565) { max1] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 566) { max1] = arr; }
  if(env_var_0 == 567) { max1] = arr+k; }
  if(env_var_0 == 568) { max1] = arr+max1; }
  if(env_var_0 == 569) { max1] = arr+n; }
  if(env_var_0 == 570) { max1] = arr[k]; }
  if(env_var_0 == 571) { max1] = arr[max1]; }
  if(env_var_0 == 572) { max1] = arr[n]; }
  if(env_var_0 == 573) { max1] = isupper( arr[k] ); }
  if(env_var_0 == 574) { max1] = isupper( arr[max1] ); }
  if(env_var_0 == 575) { max1] = isupper( arr[n] ); }
  if(env_var_0 == 576) { max1] = isupper( k ); }
  if(env_var_0 == 577) { max1] = isupper( max1 ); }
  if(env_var_0 == 578) { max1] = isupper( n ); }
  if(env_var_0 == 579) { max1] = k; }
  if(env_var_0 == 580) { max1] = max1; }
  if(env_var_0 == 581) { max1] = n; }
  if(env_var_0 == 582) { max1] = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 583) { max1] = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 584) { max1] = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 585) { max1] = std::max( arr[k],k ); }
  if(env_var_0 == 586) { max1] = std::max( arr[k],max1 ); }
  if(env_var_0 == 587) { max1] = std::max( arr[k],n ); }
  if(env_var_0 == 588) { max1] = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 589) { max1] = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 590) { max1] = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 591) { max1] = std::max( arr[max1],k ); }
  if(env_var_0 == 592) { max1] = std::max( arr[max1],max1 ); }
  if(env_var_0 == 593) { max1] = std::max( arr[max1],n ); }
  if(env_var_0 == 594) { max1] = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 595) { max1] = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 596) { max1] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 597) { max1] = std::max( arr[n],k ); }
  if(env_var_0 == 598) { max1] = std::max( arr[n],max1 ); }
  if(env_var_0 == 599) { max1] = std::max( arr[n],n ); }
  if(env_var_0 == 600) { max1] = std::max( k,arr[k] ); }
  if(env_var_0 == 601) { max1] = std::max( k,arr[max1] ); }
  if(env_var_0 == 602) { max1] = std::max( k,arr[n] ); }
  if(env_var_0 == 603) { max1] = std::max( k,k ); }
  if(env_var_0 == 604) { max1] = std::max( k,max1 ); }
  if(env_var_0 == 605) { max1] = std::max( k,n ); }
  if(env_var_0 == 606) { max1] = std::max( max1,arr[k] ); }
  if(env_var_0 == 607) { max1] = std::max( max1,arr[max1] ); }
  if(env_var_0 == 608) { max1] = std::max( max1,arr[n] ); }
  if(env_var_0 == 609) { max1] = std::max( max1,k ); }
  if(env_var_0 == 610) { max1] = std::max( max1,max1 ); }
  if(env_var_0 == 611) { max1] = std::max( max1,n ); }
  if(env_var_0 == 612) { max1] = std::max( n,arr[k] ); }
  if(env_var_0 == 613) { max1] = std::max( n,arr[max1] ); }
  if(env_var_0 == 614) { max1] = std::max( n,arr[n] ); }
  if(env_var_0 == 615) { max1] = std::max( n,k ); }
  if(env_var_0 == 616) { max1] = std::max( n,max1 ); }
  if(env_var_0 == 617) { max1] = std::max( n,n ); }
  if(env_var_0 == 618) { max1] = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 619) { max1] = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 620) { max1] = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 621) { max1] = std::min( arr[k],k ); }
  if(env_var_0 == 622) { max1] = std::min( arr[k],max1 ); }
  if(env_var_0 == 623) { max1] = std::min( arr[k],n ); }
  if(env_var_0 == 624) { max1] = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 625) { max1] = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 626) { max1] = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 627) { max1] = std::min( arr[max1],k ); }
  if(env_var_0 == 628) { max1] = std::min( arr[max1],max1 ); }
  if(env_var_0 == 629) { max1] = std::min( arr[max1],n ); }
  if(env_var_0 == 630) { max1] = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 631) { max1] = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 632) { max1] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 633) { max1] = std::min( arr[n],k ); }
  if(env_var_0 == 634) { max1] = std::min( arr[n],max1 ); }
  if(env_var_0 == 635) { max1] = std::min( arr[n],n ); }
  if(env_var_0 == 636) { max1] = std::min( k,arr[k] ); }
  if(env_var_0 == 637) { max1] = std::min( k,arr[max1] ); }
  if(env_var_0 == 638) { max1] = std::min( k,arr[n] ); }
  if(env_var_0 == 639) { max1] = std::min( k,k ); }
  if(env_var_0 == 640) { max1] = std::min( k,max1 ); }
  if(env_var_0 == 641) { max1] = std::min( k,n ); }
  if(env_var_0 == 642) { max1] = std::min( max1,arr[k] ); }
  if(env_var_0 == 643) { max1] = std::min( max1,arr[max1] ); }
  if(env_var_0 == 644) { max1] = std::min( max1,arr[n] ); }
  if(env_var_0 == 645) { max1] = std::min( max1,k ); }
  if(env_var_0 == 646) { max1] = std::min( max1,max1 ); }
  if(env_var_0 == 647) { max1] = std::min( max1,n ); }
  if(env_var_0 == 648) { max1] = std::min( n,arr[k] ); }
  if(env_var_0 == 649) { max1] = std::min( n,arr[max1] ); }
  if(env_var_0 == 650) { max1] = std::min( n,arr[n] ); }
  if(env_var_0 == 651) { max1] = std::min( n,k ); }
  if(env_var_0 == 652) { max1] = std::min( n,max1 ); }
  if(env_var_0 == 653) { max1] = std::min( n,n ); }
  if(env_var_0 == 654) { max1] = toupper( arr[k] ); }
  if(env_var_0 == 655) { max1] = toupper( arr[max1] ); }
  if(env_var_0 == 656) { max1] = toupper( arr[n] ); }
  if(env_var_0 == 657) { max1] = toupper( k ); }
  if(env_var_0 == 658) { max1] = toupper( max1 ); }
  if(env_var_0 == 659) { max1] = toupper( n ); }
  if(env_var_0 == 660) { n] = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 661) { n] = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 662) { n] = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 663) { n] = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 664) { n] = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 665) { n] = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 666) { n] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 667) { n] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 668) { n] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 669) { n] = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 670) { n] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 671) { n] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 672) { n] = *std::max_element( arr,arr ); }
  if(env_var_0 == 673) { n] = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 674) { n] = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 675) { n] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 676) { n] = arr; }
  if(env_var_0 == 677) { n] = arr+k; }
  if(env_var_0 == 678) { n] = arr+max1; }
  if(env_var_0 == 679) { n] = arr+n; }
  if(env_var_0 == 680) { n] = arr[k]; }
  if(env_var_0 == 681) { n] = arr[max1]; }
  if(env_var_0 == 682) { n] = arr[n]; }
  if(env_var_0 == 683) { n] = isupper( arr[k] ); }
  if(env_var_0 == 684) { n] = isupper( arr[max1] ); }
  if(env_var_0 == 685) { n] = isupper( arr[n] ); }
  if(env_var_0 == 686) { n] = isupper( k ); }
  if(env_var_0 == 687) { n] = isupper( max1 ); }
  if(env_var_0 == 688) { n] = isupper( n ); }
  if(env_var_0 == 689) { n] = k; }
  if(env_var_0 == 690) { n] = max1; }
  if(env_var_0 == 691) { n] = n; }
  if(env_var_0 == 692) { n] = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 693) { n] = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 694) { n] = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 695) { n] = std::max( arr[k],k ); }
  if(env_var_0 == 696) { n] = std::max( arr[k],max1 ); }
  if(env_var_0 == 697) { n] = std::max( arr[k],n ); }
  if(env_var_0 == 698) { n] = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 699) { n] = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 700) { n] = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 701) { n] = std::max( arr[max1],k ); }
  if(env_var_0 == 702) { n] = std::max( arr[max1],max1 ); }
  if(env_var_0 == 703) { n] = std::max( arr[max1],n ); }
  if(env_var_0 == 704) { n] = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 705) { n] = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 706) { n] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 707) { n] = std::max( arr[n],k ); }
  if(env_var_0 == 708) { n] = std::max( arr[n],max1 ); }
  if(env_var_0 == 709) { n] = std::max( arr[n],n ); }
  if(env_var_0 == 710) { n] = std::max( k,arr[k] ); }
  if(env_var_0 == 711) { n] = std::max( k,arr[max1] ); }
  if(env_var_0 == 712) { n] = std::max( k,arr[n] ); }
  if(env_var_0 == 713) { n] = std::max( k,k ); }
  if(env_var_0 == 714) { n] = std::max( k,max1 ); }
  if(env_var_0 == 715) { n] = std::max( k,n ); }
  if(env_var_0 == 716) { n] = std::max( max1,arr[k] ); }
  if(env_var_0 == 717) { n] = std::max( max1,arr[max1] ); }
  if(env_var_0 == 718) { n] = std::max( max1,arr[n] ); }
  if(env_var_0 == 719) { n] = std::max( max1,k ); }
  if(env_var_0 == 720) { n] = std::max( max1,max1 ); }
  if(env_var_0 == 721) { n] = std::max( max1,n ); }
  if(env_var_0 == 722) { n] = std::max( n,arr[k] ); }
  if(env_var_0 == 723) { n] = std::max( n,arr[max1] ); }
  if(env_var_0 == 724) { n] = std::max( n,arr[n] ); }
  if(env_var_0 == 725) { n] = std::max( n,k ); }
  if(env_var_0 == 726) { n] = std::max( n,max1 ); }
  if(env_var_0 == 727) { n] = std::max( n,n ); }
  if(env_var_0 == 728) { n] = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 729) { n] = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 730) { n] = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 731) { n] = std::min( arr[k],k ); }
  if(env_var_0 == 732) { n] = std::min( arr[k],max1 ); }
  if(env_var_0 == 733) { n] = std::min( arr[k],n ); }
  if(env_var_0 == 734) { n] = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 735) { n] = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 736) { n] = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 737) { n] = std::min( arr[max1],k ); }
  if(env_var_0 == 738) { n] = std::min( arr[max1],max1 ); }
  if(env_var_0 == 739) { n] = std::min( arr[max1],n ); }
  if(env_var_0 == 740) { n] = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 741) { n] = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 742) { n] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 743) { n] = std::min( arr[n],k ); }
  if(env_var_0 == 744) { n] = std::min( arr[n],max1 ); }
  if(env_var_0 == 745) { n] = std::min( arr[n],n ); }
  if(env_var_0 == 746) { n] = std::min( k,arr[k] ); }
  if(env_var_0 == 747) { n] = std::min( k,arr[max1] ); }
  if(env_var_0 == 748) { n] = std::min( k,arr[n] ); }
  if(env_var_0 == 749) { n] = std::min( k,k ); }
  if(env_var_0 == 750) { n] = std::min( k,max1 ); }
  if(env_var_0 == 751) { n] = std::min( k,n ); }
  if(env_var_0 == 752) { n] = std::min( max1,arr[k] ); }
  if(env_var_0 == 753) { n] = std::min( max1,arr[max1] ); }
  if(env_var_0 == 754) { n] = std::min( max1,arr[n] ); }
  if(env_var_0 == 755) { n] = std::min( max1,k ); }
  if(env_var_0 == 756) { n] = std::min( max1,max1 ); }
  if(env_var_0 == 757) { n] = std::min( max1,n ); }
  if(env_var_0 == 758) { n] = std::min( n,arr[k] ); }
  if(env_var_0 == 759) { n] = std::min( n,arr[max1] ); }
  if(env_var_0 == 760) { n] = std::min( n,arr[n] ); }
  if(env_var_0 == 761) { n] = std::min( n,k ); }
  if(env_var_0 == 762) { n] = std::min( n,max1 ); }
  if(env_var_0 == 763) { n] = std::min( n,n ); }
  if(env_var_0 == 764) { n] = toupper( arr[k] ); }
  if(env_var_0 == 765) { n] = toupper( arr[max1] ); }
  if(env_var_0 == 766) { n] = toupper( arr[n] ); }
  if(env_var_0 == 767) { n] = toupper( k ); }
  if(env_var_0 == 768) { n] = toupper( max1 ); }
  if(env_var_0 == 769) { n] = toupper( n ); }
  if(env_var_0 == 770) { *std::max_element( arr+k,arr ); }
  if(env_var_0 == 771) { *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 772) { *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 773) { *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 774) { *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 775) { *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 776) { *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 777) { *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 778) { *std::max_element( arr+n,arr ); }
  if(env_var_0 == 779) { *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 780) { *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 781) { *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 782) { *std::max_element( arr,arr ); }
  if(env_var_0 == 783) { *std::max_element( arr,arr+k ); }
  if(env_var_0 == 784) { *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 785) { *std::max_element( arr,arr+n ); }
  if(env_var_0 == 786) { arr; }
  if(env_var_0 == 787) { arr+k; }
  if(env_var_0 == 788) { arr+max1; }
  if(env_var_0 == 789) { arr+n; }
  if(env_var_0 == 790) { arr[k]; }
  if(env_var_0 == 791) { arr[max1]; }
  if(env_var_0 == 792) { arr[n]; }
  if(env_var_0 == 793) { isupper( arr[k] ); }
  if(env_var_0 == 794) { isupper( arr[max1] ); }
  if(env_var_0 == 795) { isupper( arr[n] ); }
  if(env_var_0 == 796) { isupper( k ); }
  if(env_var_0 == 797) { isupper( max1 ); }
  if(env_var_0 == 798) { isupper( n ); }
  if(env_var_0 == 799) { k; }
  if(env_var_0 == 800) { max1; }
  if(env_var_0 == 801) { n; }
  if(env_var_0 == 802) { std::max( arr[k],arr[k] ); }
  if(env_var_0 == 803) { std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 804) { std::max( arr[k],arr[n] ); }
  if(env_var_0 == 805) { std::max( arr[k],k ); }
  if(env_var_0 == 806) { std::max( arr[k],max1 ); }
  if(env_var_0 == 807) { std::max( arr[k],n ); }
  if(env_var_0 == 808) { std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 809) { std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 810) { std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 811) { std::max( arr[max1],k ); }
  if(env_var_0 == 812) { std::max( arr[max1],max1 ); }
  if(env_var_0 == 813) { std::max( arr[max1],n ); }
  if(env_var_0 == 814) { std::max( arr[n],arr[k] ); }
  if(env_var_0 == 815) { std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 816) { std::max( arr[n],arr[n] ); }
  if(env_var_0 == 817) { std::max( arr[n],k ); }
  if(env_var_0 == 818) { std::max( arr[n],max1 ); }
  if(env_var_0 == 819) { std::max( arr[n],n ); }
  if(env_var_0 == 820) { std::max( k,arr[k] ); }
  if(env_var_0 == 821) { std::max( k,arr[max1] ); }
  if(env_var_0 == 822) { std::max( k,arr[n] ); }
  if(env_var_0 == 823) { std::max( k,k ); }
  if(env_var_0 == 824) { std::max( k,max1 ); }
  if(env_var_0 == 825) { std::max( k,n ); }
  if(env_var_0 == 826) { std::max( max1,arr[k] ); }
  if(env_var_0 == 827) { std::max( max1,arr[max1] ); }
  if(env_var_0 == 828) { std::max( max1,arr[n] ); }
  if(env_var_0 == 829) { std::max( max1,k ); }
  if(env_var_0 == 830) { std::max( max1,max1 ); }
  if(env_var_0 == 831) { std::max( max1,n ); }
  if(env_var_0 == 832) { std::max( n,arr[k] ); }
  if(env_var_0 == 833) { std::max( n,arr[max1] ); }
  if(env_var_0 == 834) { std::max( n,arr[n] ); }
  if(env_var_0 == 835) { std::max( n,k ); }
  if(env_var_0 == 836) { std::max( n,max1 ); }
  if(env_var_0 == 837) { std::max( n,n ); }
  if(env_var_0 == 838) { std::min( arr[k],arr[k] ); }
  if(env_var_0 == 839) { std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 840) { std::min( arr[k],arr[n] ); }
  if(env_var_0 == 841) { std::min( arr[k],k ); }
  if(env_var_0 == 842) { std::min( arr[k],max1 ); }
  if(env_var_0 == 843) { std::min( arr[k],n ); }
  if(env_var_0 == 844) { std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 845) { std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 846) { std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 847) { std::min( arr[max1],k ); }
  if(env_var_0 == 848) { std::min( arr[max1],max1 ); }
  if(env_var_0 == 849) { std::min( arr[max1],n ); }
  if(env_var_0 == 850) { std::min( arr[n],arr[k] ); }
  if(env_var_0 == 851) { std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 852) { std::min( arr[n],arr[n] ); }
  if(env_var_0 == 853) { std::min( arr[n],k ); }
  if(env_var_0 == 854) { std::min( arr[n],max1 ); }
  if(env_var_0 == 855) { std::min( arr[n],n ); }
  if(env_var_0 == 856) { std::min( k,arr[k] ); }
  if(env_var_0 == 857) { std::min( k,arr[max1] ); }
  if(env_var_0 == 858) { std::min( k,arr[n] ); }
  if(env_var_0 == 859) { std::min( k,k ); }
  if(env_var_0 == 860) { std::min( k,max1 ); }
  if(env_var_0 == 861) { std::min( k,n ); }
  if(env_var_0 == 862) { std::min( max1,arr[k] ); }
  if(env_var_0 == 863) { std::min( max1,arr[max1] ); }
  if(env_var_0 == 864) { std::min( max1,arr[n] ); }
  if(env_var_0 == 865) { std::min( max1,k ); }
  if(env_var_0 == 866) { std::min( max1,max1 ); }
  if(env_var_0 == 867) { std::min( max1,n ); }
  if(env_var_0 == 868) { std::min( n,arr[k] ); }
  if(env_var_0 == 869) { std::min( n,arr[max1] ); }
  if(env_var_0 == 870) { std::min( n,arr[n] ); }
  if(env_var_0 == 871) { std::min( n,k ); }
  if(env_var_0 == 872) { std::min( n,max1 ); }
  if(env_var_0 == 873) { std::min( n,n ); }
  if(env_var_0 == 874) { toupper( arr[k] ); }
  if(env_var_0 == 875) { toupper( arr[max1] ); }
  if(env_var_0 == 876) { toupper( arr[n] ); }
  if(env_var_0 == 877) { toupper( k ); }
  if(env_var_0 == 878) { toupper( max1 ); }
  if(env_var_0 == 879) { toupper( n ); }
  if(env_var_0 == 880) {  = *std::max_element( arr+k,arr ); }
  if(env_var_0 == 881) {  = *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 882) {  = *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 883) {  = *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 884) {  = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 885) {  = *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 886) {  = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 887) {  = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 888) {  = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 889) {  = *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 890) {  = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 891) {  = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 892) {  = *std::max_element( arr,arr ); }
  if(env_var_0 == 893) {  = *std::max_element( arr,arr+k ); }
  if(env_var_0 == 894) {  = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 895) {  = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 896) {  = arr; }
  if(env_var_0 == 897) {  = arr+k; }
  if(env_var_0 == 898) {  = arr+max1; }
  if(env_var_0 == 899) {  = arr+n; }
  if(env_var_0 == 900) {  = arr[k]; }
  if(env_var_0 == 901) {  = arr[max1]; }
  if(env_var_0 == 902) {  = arr[n]; }
  if(env_var_0 == 903) {  = isupper( arr[k] ); }
  if(env_var_0 == 904) {  = isupper( arr[max1] ); }
  if(env_var_0 == 905) {  = isupper( arr[n] ); }
  if(env_var_0 == 906) {  = isupper( k ); }
  if(env_var_0 == 907) {  = isupper( max1 ); }
  if(env_var_0 == 908) {  = isupper( n ); }
  if(env_var_0 == 909) {  = k; }
  if(env_var_0 == 910) {  = max1; }
  if(env_var_0 == 911) {  = n; }
  if(env_var_0 == 912) {  = std::max( arr[k],arr[k] ); }
  if(env_var_0 == 913) {  = std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 914) {  = std::max( arr[k],arr[n] ); }
  if(env_var_0 == 915) {  = std::max( arr[k],k ); }
  if(env_var_0 == 916) {  = std::max( arr[k],max1 ); }
  if(env_var_0 == 917) {  = std::max( arr[k],n ); }
  if(env_var_0 == 918) {  = std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 919) {  = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 920) {  = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 921) {  = std::max( arr[max1],k ); }
  if(env_var_0 == 922) {  = std::max( arr[max1],max1 ); }
  if(env_var_0 == 923) {  = std::max( arr[max1],n ); }
  if(env_var_0 == 924) {  = std::max( arr[n],arr[k] ); }
  if(env_var_0 == 925) {  = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 926) {  = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 927) {  = std::max( arr[n],k ); }
  if(env_var_0 == 928) {  = std::max( arr[n],max1 ); }
  if(env_var_0 == 929) {  = std::max( arr[n],n ); }
  if(env_var_0 == 930) {  = std::max( k,arr[k] ); }
  if(env_var_0 == 931) {  = std::max( k,arr[max1] ); }
  if(env_var_0 == 932) {  = std::max( k,arr[n] ); }
  if(env_var_0 == 933) {  = std::max( k,k ); }
  if(env_var_0 == 934) {  = std::max( k,max1 ); }
  if(env_var_0 == 935) {  = std::max( k,n ); }
  if(env_var_0 == 936) {  = std::max( max1,arr[k] ); }
  if(env_var_0 == 937) {  = std::max( max1,arr[max1] ); }
  if(env_var_0 == 938) {  = std::max( max1,arr[n] ); }
  if(env_var_0 == 939) {  = std::max( max1,k ); }
  if(env_var_0 == 940) {  = std::max( max1,max1 ); }
  if(env_var_0 == 941) {  = std::max( max1,n ); }
  if(env_var_0 == 942) {  = std::max( n,arr[k] ); }
  if(env_var_0 == 943) {  = std::max( n,arr[max1] ); }
  if(env_var_0 == 944) {  = std::max( n,arr[n] ); }
  if(env_var_0 == 945) {  = std::max( n,k ); }
  if(env_var_0 == 946) {  = std::max( n,max1 ); }
  if(env_var_0 == 947) {  = std::max( n,n ); }
  if(env_var_0 == 948) {  = std::min( arr[k],arr[k] ); }
  if(env_var_0 == 949) {  = std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 950) {  = std::min( arr[k],arr[n] ); }
  if(env_var_0 == 951) {  = std::min( arr[k],k ); }
  if(env_var_0 == 952) {  = std::min( arr[k],max1 ); }
  if(env_var_0 == 953) {  = std::min( arr[k],n ); }
  if(env_var_0 == 954) {  = std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 955) {  = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 956) {  = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 957) {  = std::min( arr[max1],k ); }
  if(env_var_0 == 958) {  = std::min( arr[max1],max1 ); }
  if(env_var_0 == 959) {  = std::min( arr[max1],n ); }
  if(env_var_0 == 960) {  = std::min( arr[n],arr[k] ); }
  if(env_var_0 == 961) {  = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 962) {  = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 963) {  = std::min( arr[n],k ); }
  if(env_var_0 == 964) {  = std::min( arr[n],max1 ); }
  if(env_var_0 == 965) {  = std::min( arr[n],n ); }
  if(env_var_0 == 966) {  = std::min( k,arr[k] ); }
  if(env_var_0 == 967) {  = std::min( k,arr[max1] ); }
  if(env_var_0 == 968) {  = std::min( k,arr[n] ); }
  if(env_var_0 == 969) {  = std::min( k,k ); }
  if(env_var_0 == 970) {  = std::min( k,max1 ); }
  if(env_var_0 == 971) {  = std::min( k,n ); }
  if(env_var_0 == 972) {  = std::min( max1,arr[k] ); }
  if(env_var_0 == 973) {  = std::min( max1,arr[max1] ); }
  if(env_var_0 == 974) {  = std::min( max1,arr[n] ); }
  if(env_var_0 == 975) {  = std::min( max1,k ); }
  if(env_var_0 == 976) {  = std::min( max1,max1 ); }
  if(env_var_0 == 977) {  = std::min( max1,n ); }
  if(env_var_0 == 978) {  = std::min( n,arr[k] ); }
  if(env_var_0 == 979) {  = std::min( n,arr[max1] ); }
  if(env_var_0 == 980) {  = std::min( n,arr[n] ); }
  if(env_var_0 == 981) {  = std::min( n,k ); }
  if(env_var_0 == 982) {  = std::min( n,max1 ); }
  if(env_var_0 == 983) {  = std::min( n,n ); }
  if(env_var_0 == 984) {  = toupper( arr[k] ); }
  if(env_var_0 == 985) {  = toupper( arr[max1] ); }
  if(env_var_0 == 986) {  = toupper( arr[n] ); }
  if(env_var_0 == 987) {  = toupper( k ); }
  if(env_var_0 == 988) {  = toupper( max1 ); }
  if(env_var_0 == 989) {  = toupper( n ); }
  if(env_var_0 == 990) { *std::max_element( arr+k,arr ); }
  if(env_var_0 == 991) { *std::max_element( arr+k,arr+k ); }
  if(env_var_0 == 992) { *std::max_element( arr+k,arr+max1 ); }
  if(env_var_0 == 993) { *std::max_element( arr+k,arr+n ); }
  if(env_var_0 == 994) { *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 995) { *std::max_element( arr+max1,arr+k ); }
  if(env_var_0 == 996) { *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 997) { *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 998) { *std::max_element( arr+n,arr ); }
  if(env_var_0 == 999) { *std::max_element( arr+n,arr+k ); }
  if(env_var_0 == 1000) { *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 1001) { *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 1002) { *std::max_element( arr,arr ); }
  if(env_var_0 == 1003) { *std::max_element( arr,arr+k ); }
  if(env_var_0 == 1004) { *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 1005) { *std::max_element( arr,arr+n ); }
  if(env_var_0 == 1006) { arr; }
  if(env_var_0 == 1007) { arr+k; }
  if(env_var_0 == 1008) { arr+max1; }
  if(env_var_0 == 1009) { arr+n; }
  if(env_var_0 == 1010) { arr[k]; }
  if(env_var_0 == 1011) { arr[max1]; }
  if(env_var_0 == 1012) { arr[n]; }
  if(env_var_0 == 1013) { isupper( arr[k] ); }
  if(env_var_0 == 1014) { isupper( arr[max1] ); }
  if(env_var_0 == 1015) { isupper( arr[n] ); }
  if(env_var_0 == 1016) { isupper( k ); }
  if(env_var_0 == 1017) { isupper( max1 ); }
  if(env_var_0 == 1018) { isupper( n ); }
  if(env_var_0 == 1019) { k; }
  if(env_var_0 == 1020) { max1; }
  if(env_var_0 == 1021) { n; }
  if(env_var_0 == 1022) { std::max( arr[k],arr[k] ); }
  if(env_var_0 == 1023) { std::max( arr[k],arr[max1] ); }
  if(env_var_0 == 1024) { std::max( arr[k],arr[n] ); }
  if(env_var_0 == 1025) { std::max( arr[k],k ); }
  if(env_var_0 == 1026) { std::max( arr[k],max1 ); }
  if(env_var_0 == 1027) { std::max( arr[k],n ); }
  if(env_var_0 == 1028) { std::max( arr[max1],arr[k] ); }
  if(env_var_0 == 1029) { std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 1030) { std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 1031) { std::max( arr[max1],k ); }
  if(env_var_0 == 1032) { std::max( arr[max1],max1 ); }
  if(env_var_0 == 1033) { std::max( arr[max1],n ); }
  if(env_var_0 == 1034) { std::max( arr[n],arr[k] ); }
  if(env_var_0 == 1035) { std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 1036) { std::max( arr[n],arr[n] ); }
  if(env_var_0 == 1037) { std::max( arr[n],k ); }
  if(env_var_0 == 1038) { std::max( arr[n],max1 ); }
  if(env_var_0 == 1039) { std::max( arr[n],n ); }
  if(env_var_0 == 1040) { std::max( k,arr[k] ); }
  if(env_var_0 == 1041) { std::max( k,arr[max1] ); }
  if(env_var_0 == 1042) { std::max( k,arr[n] ); }
  if(env_var_0 == 1043) { std::max( k,k ); }
  if(env_var_0 == 1044) { std::max( k,max1 ); }
  if(env_var_0 == 1045) { std::max( k,n ); }
  if(env_var_0 == 1046) { std::max( max1,arr[k] ); }
  if(env_var_0 == 1047) { std::max( max1,arr[max1] ); }
  if(env_var_0 == 1048) { std::max( max1,arr[n] ); }
  if(env_var_0 == 1049) { std::max( max1,k ); }
  if(env_var_0 == 1050) { std::max( max1,max1 ); }
  if(env_var_0 == 1051) { std::max( max1,n ); }
  if(env_var_0 == 1052) { std::max( n,arr[k] ); }
  if(env_var_0 == 1053) { std::max( n,arr[max1] ); }
  if(env_var_0 == 1054) { std::max( n,arr[n] ); }
  if(env_var_0 == 1055) { std::max( n,k ); }
  if(env_var_0 == 1056) { std::max( n,max1 ); }
  if(env_var_0 == 1057) { std::max( n,n ); }
  if(env_var_0 == 1058) { std::min( arr[k],arr[k] ); }
  if(env_var_0 == 1059) { std::min( arr[k],arr[max1] ); }
  if(env_var_0 == 1060) { std::min( arr[k],arr[n] ); }
  if(env_var_0 == 1061) { std::min( arr[k],k ); }
  if(env_var_0 == 1062) { std::min( arr[k],max1 ); }
  if(env_var_0 == 1063) { std::min( arr[k],n ); }
  if(env_var_0 == 1064) { std::min( arr[max1],arr[k] ); }
  if(env_var_0 == 1065) { std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 1066) { std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 1067) { std::min( arr[max1],k ); }
  if(env_var_0 == 1068) { std::min( arr[max1],max1 ); }
  if(env_var_0 == 1069) { std::min( arr[max1],n ); }
  if(env_var_0 == 1070) { std::min( arr[n],arr[k] ); }
  if(env_var_0 == 1071) { std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 1072) { std::min( arr[n],arr[n] ); }
  if(env_var_0 == 1073) { std::min( arr[n],k ); }
  if(env_var_0 == 1074) { std::min( arr[n],max1 ); }
  if(env_var_0 == 1075) { std::min( arr[n],n ); }
  if(env_var_0 == 1076) { std::min( k,arr[k] ); }
  if(env_var_0 == 1077) { std::min( k,arr[max1] ); }
  if(env_var_0 == 1078) { std::min( k,arr[n] ); }
  if(env_var_0 == 1079) { std::min( k,k ); }
  if(env_var_0 == 1080) { std::min( k,max1 ); }
  if(env_var_0 == 1081) { std::min( k,n ); }
  if(env_var_0 == 1082) { std::min( max1,arr[k] ); }
  if(env_var_0 == 1083) { std::min( max1,arr[max1] ); }
  if(env_var_0 == 1084) { std::min( max1,arr[n] ); }
  if(env_var_0 == 1085) { std::min( max1,k ); }
  if(env_var_0 == 1086) { std::min( max1,max1 ); }
  if(env_var_0 == 1087) { std::min( max1,n ); }
  if(env_var_0 == 1088) { std::min( n,arr[k] ); }
  if(env_var_0 == 1089) { std::min( n,arr[max1] ); }
  if(env_var_0 == 1090) { std::min( n,arr[n] ); }
  if(env_var_0 == 1091) { std::min( n,k ); }
  if(env_var_0 == 1092) { std::min( n,max1 ); }
  if(env_var_0 == 1093) { std::min( n,n ); }
  if(env_var_0 == 1094) { toupper( arr[k] ); }
  if(env_var_0 == 1095) { toupper( arr[max1] ); }
  if(env_var_0 == 1096) { toupper( arr[n] ); }
  if(env_var_0 == 1097) { toupper( k ); }
  if(env_var_0 == 1098) { toupper( max1 ); }
  if(env_var_0 == 1099) { toupper( n ); }
   
  double res = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( ( max1 - arr [ i ] ) % k != 0 ) || ( ( max1 - arr [ i ] ) / k != 0 ) ) return - 1 ;
    else res += ( max1 - arr [ i ] ) / k ;
  }
  return ( int ) res ;
}


int main() {
    int n_success = 0;
   vector<vector<int>> param0 {{4, 7, 19, 16},{4,4,4,4,4},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{85,36,52,8,52,15,16},{-10,-5,-5,-20,10,30},{0,1,0,0,1,1,1,0,0,0,0,1,1,0,0,1,0},{1,5,5,9,11,12,12,13,13,14,16,18,26,26,28,28,30,31,32,37,37,38,40,43,44,45,47,47,55,58,60,62,63,64,69,78,83,84,92,96,96,99},{76,-78,92,-98,16,44,86,96,-8,2,-96,74,-28,12,54,-40,-64,-12,4,48,68,-82,8,0,-4,88,48,-54,90,62,-84,76,-48,62,-80,-94,38,-4,36},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{62,99,29,23,55,30,79,63,1,88,59,8,11,80,23,51,97,32,80,48,84,36,73,59,1,34,92,10}};
    vector<int> param1 {4,5,39,5,6,10,26,34,39,18};
    vector<int> param2 {3,3,1,6,5,15,33,3,10,1};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

