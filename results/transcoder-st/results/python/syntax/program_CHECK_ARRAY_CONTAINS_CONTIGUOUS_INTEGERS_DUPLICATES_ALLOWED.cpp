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
bool f_gold ( int arr [ ], int n ) {
  int max = * max_element ( arr, arr + n );
  int min = * min_element ( arr, arr + n );
  int m = max - min + 1;
  if ( m > n ) return false;
  bool visited [ m ];
  memset ( visited, false, sizeof ( visited ) );
  for ( int i = 0;
  i < n;
  i ++ ) visited [ arr [ i ] - min ] = true;
  for ( int i = 0;
  i < m;
  i ++ ) if ( visited [ i ] == false ) return false;
  return true;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int * arr , int n ) {
 auto max1 ;
  if(env_var_0 == 0) { = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 1) { = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 2) { = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 3) { = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 4) { = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 5) { = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 6) { = *std::max_element( arr,arr ); }
  if(env_var_0 == 7) { = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 8) { = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 9) { = *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 10) { = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 11) { = *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 12) { = *std::min_element( arr+n,arr ); }
  if(env_var_0 == 13) { = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 14) { = *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 15) { = *std::min_element( arr,arr ); }
  if(env_var_0 == 16) { = *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 17) { = *std::min_element( arr,arr+n ); }
  if(env_var_0 == 18) { = arr; }
  if(env_var_0 == 19) { = arr+max1; }
  if(env_var_0 == 20) { = arr+n; }
  if(env_var_0 == 21) { = arr[max1]; }
  if(env_var_0 == 22) { = arr[n]; }
  if(env_var_0 == 23) { = isupper( arr[max1] ); }
  if(env_var_0 == 24) { = isupper( arr[n] ); }
  if(env_var_0 == 25) { = isupper( max1 ); }
  if(env_var_0 == 26) { = isupper( n ); }
  if(env_var_0 == 27) { = max1; }
  if(env_var_0 == 28) { = n; }
  if(env_var_0 == 29) { = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 30) { = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 31) { = std::max( arr[max1],max1 ); }
  if(env_var_0 == 32) { = std::max( arr[max1],n ); }
  if(env_var_0 == 33) { = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 34) { = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 35) { = std::max( arr[n],max1 ); }
  if(env_var_0 == 36) { = std::max( arr[n],n ); }
  if(env_var_0 == 37) { = std::max( max1,arr[max1] ); }
  if(env_var_0 == 38) { = std::max( max1,arr[n] ); }
  if(env_var_0 == 39) { = std::max( max1,max1 ); }
  if(env_var_0 == 40) { = std::max( max1,n ); }
  if(env_var_0 == 41) { = std::max( n,arr[max1] ); }
  if(env_var_0 == 42) { = std::max( n,arr[n] ); }
  if(env_var_0 == 43) { = std::max( n,max1 ); }
  if(env_var_0 == 44) { = std::max( n,n ); }
  if(env_var_0 == 45) { = std::max(); }
  if(env_var_0 == 46) { = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 47) { = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 48) { = std::min( arr[max1],max1 ); }
  if(env_var_0 == 49) { = std::min( arr[max1],n ); }
  if(env_var_0 == 50) { = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 51) { = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 52) { = std::min( arr[n],max1 ); }
  if(env_var_0 == 53) { = std::min( arr[n],n ); }
  if(env_var_0 == 54) { = std::min( max1,arr[max1] ); }
  if(env_var_0 == 55) { = std::min( max1,arr[n] ); }
  if(env_var_0 == 56) { = std::min( max1,max1 ); }
  if(env_var_0 == 57) { = std::min( max1,n ); }
  if(env_var_0 == 58) { = std::min( n,arr[max1] ); }
  if(env_var_0 == 59) { = std::min( n,arr[n] ); }
  if(env_var_0 == 60) { = std::min( n,max1 ); }
  if(env_var_0 == 61) { = std::min( n,n ); }
  if(env_var_0 == 62) { = toupper( arr[max1] ); }
  if(env_var_0 == 63) { = toupper( arr[n] ); }
  if(env_var_0 == 64) { = toupper( max1 ); }
  if(env_var_0 == 65) { = toupper( n ); }
  if(env_var_0 == 66) { max1 = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 67) { max1 = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 68) { max1 = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 69) { max1 = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 70) { max1 = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 71) { max1 = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 72) { max1 = *std::max_element( arr,arr ); }
  if(env_var_0 == 73) { max1 = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 74) { max1 = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 75) { max1 = *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 76) { max1 = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 77) { max1 = *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 78) { max1 = *std::min_element( arr+n,arr ); }
  if(env_var_0 == 79) { max1 = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 80) { max1 = *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 81) { max1 = *std::min_element( arr,arr ); }
  if(env_var_0 == 82) { max1 = *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 83) { max1 = *std::min_element( arr,arr+n ); }
  if(env_var_0 == 84) { max1 = arr; }
  if(env_var_0 == 85) { max1 = arr+max1; }
  if(env_var_0 == 86) { max1 = arr+n; }
  if(env_var_0 == 87) { max1 = arr[max1]; }
  if(env_var_0 == 88) { max1 = arr[n]; }
  if(env_var_0 == 89) { max1 = isupper( arr[max1] ); }
  if(env_var_0 == 90) { max1 = isupper( arr[n] ); }
  if(env_var_0 == 91) { max1 = isupper( max1 ); }
  if(env_var_0 == 92) { max1 = isupper( n ); }
  if(env_var_0 == 93) { max1 = max1; }
  if(env_var_0 == 94) { max1 = n; }
  if(env_var_0 == 95) { max1 = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 96) { max1 = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 97) { max1 = std::max( arr[max1],max1 ); }
  if(env_var_0 == 98) { max1 = std::max( arr[max1],n ); }
  if(env_var_0 == 99) { max1 = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 100) { max1 = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 101) { max1 = std::max( arr[n],max1 ); }
  if(env_var_0 == 102) { max1 = std::max( arr[n],n ); }
  if(env_var_0 == 103) { max1 = std::max( max1,arr[max1] ); }
  if(env_var_0 == 104) { max1 = std::max( max1,arr[n] ); }
  if(env_var_0 == 105) { max1 = std::max( max1,max1 ); }
  if(env_var_0 == 106) { max1 = std::max( max1,n ); }
  if(env_var_0 == 107) { max1 = std::max( n,arr[max1] ); }
  if(env_var_0 == 108) { max1 = std::max( n,arr[n] ); }
  if(env_var_0 == 109) { max1 = std::max( n,max1 ); }
  if(env_var_0 == 110) { max1 = std::max( n,n ); }
  if(env_var_0 == 111) { max1 = std::max(); }
  if(env_var_0 == 112) { max1 = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 113) { max1 = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 114) { max1 = std::min( arr[max1],max1 ); }
  if(env_var_0 == 115) { max1 = std::min( arr[max1],n ); }
  if(env_var_0 == 116) { max1 = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 117) { max1 = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 118) { max1 = std::min( arr[n],max1 ); }
  if(env_var_0 == 119) { max1 = std::min( arr[n],n ); }
  if(env_var_0 == 120) { max1 = std::min( max1,arr[max1] ); }
  if(env_var_0 == 121) { max1 = std::min( max1,arr[n] ); }
  if(env_var_0 == 122) { max1 = std::min( max1,max1 ); }
  if(env_var_0 == 123) { max1 = std::min( max1,n ); }
  if(env_var_0 == 124) { max1 = std::min( n,arr[max1] ); }
  if(env_var_0 == 125) { max1 = std::min( n,arr[n] ); }
  if(env_var_0 == 126) { max1 = std::min( n,max1 ); }
  if(env_var_0 == 127) { max1 = std::min( n,n ); }
  if(env_var_0 == 128) { max1 = toupper( arr[max1] ); }
  if(env_var_0 == 129) { max1 = toupper( arr[n] ); }
  if(env_var_0 == 130) { max1 = toupper( max1 ); }
  if(env_var_0 == 131) { max1 = toupper( n ); }
  if(env_var_0 == 132) { n = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 133) { n = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 134) { n = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 135) { n = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 136) { n = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 137) { n = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 138) { n = *std::max_element( arr,arr ); }
  if(env_var_0 == 139) { n = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 140) { n = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 141) { n = *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 142) { n = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 143) { n = *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 144) { n = *std::min_element( arr+n,arr ); }
  if(env_var_0 == 145) { n = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 146) { n = *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 147) { n = *std::min_element( arr,arr ); }
  if(env_var_0 == 148) { n = *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 149) { n = *std::min_element( arr,arr+n ); }
  if(env_var_0 == 150) { n = arr; }
  if(env_var_0 == 151) { n = arr+max1; }
  if(env_var_0 == 152) { n = arr+n; }
  if(env_var_0 == 153) { n = arr[max1]; }
  if(env_var_0 == 154) { n = arr[n]; }
  if(env_var_0 == 155) { n = isupper( arr[max1] ); }
  if(env_var_0 == 156) { n = isupper( arr[n] ); }
  if(env_var_0 == 157) { n = isupper( max1 ); }
  if(env_var_0 == 158) { n = isupper( n ); }
  if(env_var_0 == 159) { n = max1; }
  if(env_var_0 == 160) { n = n; }
  if(env_var_0 == 161) { n = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 162) { n = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 163) { n = std::max( arr[max1],max1 ); }
  if(env_var_0 == 164) { n = std::max( arr[max1],n ); }
  if(env_var_0 == 165) { n = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 166) { n = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 167) { n = std::max( arr[n],max1 ); }
  if(env_var_0 == 168) { n = std::max( arr[n],n ); }
  if(env_var_0 == 169) { n = std::max( max1,arr[max1] ); }
  if(env_var_0 == 170) { n = std::max( max1,arr[n] ); }
  if(env_var_0 == 171) { n = std::max( max1,max1 ); }
  if(env_var_0 == 172) { n = std::max( max1,n ); }
  if(env_var_0 == 173) { n = std::max( n,arr[max1] ); }
  if(env_var_0 == 174) { n = std::max( n,arr[n] ); }
  if(env_var_0 == 175) { n = std::max( n,max1 ); }
  if(env_var_0 == 176) { n = std::max( n,n ); }
  if(env_var_0 == 177) { n = std::max(); }
  if(env_var_0 == 178) { n = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 179) { n = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 180) { n = std::min( arr[max1],max1 ); }
  if(env_var_0 == 181) { n = std::min( arr[max1],n ); }
  if(env_var_0 == 182) { n = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 183) { n = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 184) { n = std::min( arr[n],max1 ); }
  if(env_var_0 == 185) { n = std::min( arr[n],n ); }
  if(env_var_0 == 186) { n = std::min( max1,arr[max1] ); }
  if(env_var_0 == 187) { n = std::min( max1,arr[n] ); }
  if(env_var_0 == 188) { n = std::min( max1,max1 ); }
  if(env_var_0 == 189) { n = std::min( max1,n ); }
  if(env_var_0 == 190) { n = std::min( n,arr[max1] ); }
  if(env_var_0 == 191) { n = std::min( n,arr[n] ); }
  if(env_var_0 == 192) { n = std::min( n,max1 ); }
  if(env_var_0 == 193) { n = std::min( n,n ); }
  if(env_var_0 == 194) { n = toupper( arr[max1] ); }
  if(env_var_0 == 195) { n = toupper( arr[n] ); }
  if(env_var_0 == 196) { n = toupper( max1 ); }
  if(env_var_0 == 197) { n = toupper( n ); }
  if(env_var_0 == 198) { max1] = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 199) { max1] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 200) { max1] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 201) { max1] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 202) { max1] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 203) { max1] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 204) { max1] = *std::max_element( arr,arr ); }
  if(env_var_0 == 205) { max1] = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 206) { max1] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 207) { max1] = *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 208) { max1] = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 209) { max1] = *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 210) { max1] = *std::min_element( arr+n,arr ); }
  if(env_var_0 == 211) { max1] = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 212) { max1] = *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 213) { max1] = *std::min_element( arr,arr ); }
  if(env_var_0 == 214) { max1] = *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 215) { max1] = *std::min_element( arr,arr+n ); }
  if(env_var_0 == 216) { max1] = arr; }
  if(env_var_0 == 217) { max1] = arr+max1; }
  if(env_var_0 == 218) { max1] = arr+n; }
  if(env_var_0 == 219) { max1] = arr[max1]; }
  if(env_var_0 == 220) { max1] = arr[n]; }
  if(env_var_0 == 221) { max1] = isupper( arr[max1] ); }
  if(env_var_0 == 222) { max1] = isupper( arr[n] ); }
  if(env_var_0 == 223) { max1] = isupper( max1 ); }
  if(env_var_0 == 224) { max1] = isupper( n ); }
  if(env_var_0 == 225) { max1] = max1; }
  if(env_var_0 == 226) { max1] = n; }
  if(env_var_0 == 227) { max1] = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 228) { max1] = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 229) { max1] = std::max( arr[max1],max1 ); }
  if(env_var_0 == 230) { max1] = std::max( arr[max1],n ); }
  if(env_var_0 == 231) { max1] = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 232) { max1] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 233) { max1] = std::max( arr[n],max1 ); }
  if(env_var_0 == 234) { max1] = std::max( arr[n],n ); }
  if(env_var_0 == 235) { max1] = std::max( max1,arr[max1] ); }
  if(env_var_0 == 236) { max1] = std::max( max1,arr[n] ); }
  if(env_var_0 == 237) { max1] = std::max( max1,max1 ); }
  if(env_var_0 == 238) { max1] = std::max( max1,n ); }
  if(env_var_0 == 239) { max1] = std::max( n,arr[max1] ); }
  if(env_var_0 == 240) { max1] = std::max( n,arr[n] ); }
  if(env_var_0 == 241) { max1] = std::max( n,max1 ); }
  if(env_var_0 == 242) { max1] = std::max( n,n ); }
  if(env_var_0 == 243) { max1] = std::max(); }
  if(env_var_0 == 244) { max1] = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 245) { max1] = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 246) { max1] = std::min( arr[max1],max1 ); }
  if(env_var_0 == 247) { max1] = std::min( arr[max1],n ); }
  if(env_var_0 == 248) { max1] = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 249) { max1] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 250) { max1] = std::min( arr[n],max1 ); }
  if(env_var_0 == 251) { max1] = std::min( arr[n],n ); }
  if(env_var_0 == 252) { max1] = std::min( max1,arr[max1] ); }
  if(env_var_0 == 253) { max1] = std::min( max1,arr[n] ); }
  if(env_var_0 == 254) { max1] = std::min( max1,max1 ); }
  if(env_var_0 == 255) { max1] = std::min( max1,n ); }
  if(env_var_0 == 256) { max1] = std::min( n,arr[max1] ); }
  if(env_var_0 == 257) { max1] = std::min( n,arr[n] ); }
  if(env_var_0 == 258) { max1] = std::min( n,max1 ); }
  if(env_var_0 == 259) { max1] = std::min( n,n ); }
  if(env_var_0 == 260) { max1] = toupper( arr[max1] ); }
  if(env_var_0 == 261) { max1] = toupper( arr[n] ); }
  if(env_var_0 == 262) { max1] = toupper( max1 ); }
  if(env_var_0 == 263) { max1] = toupper( n ); }
  if(env_var_0 == 264) { n] = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 265) { n] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 266) { n] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 267) { n] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 268) { n] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 269) { n] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 270) { n] = *std::max_element( arr,arr ); }
  if(env_var_0 == 271) { n] = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 272) { n] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 273) { n] = *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 274) { n] = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 275) { n] = *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 276) { n] = *std::min_element( arr+n,arr ); }
  if(env_var_0 == 277) { n] = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 278) { n] = *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 279) { n] = *std::min_element( arr,arr ); }
  if(env_var_0 == 280) { n] = *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 281) { n] = *std::min_element( arr,arr+n ); }
  if(env_var_0 == 282) { n] = arr; }
  if(env_var_0 == 283) { n] = arr+max1; }
  if(env_var_0 == 284) { n] = arr+n; }
  if(env_var_0 == 285) { n] = arr[max1]; }
  if(env_var_0 == 286) { n] = arr[n]; }
  if(env_var_0 == 287) { n] = isupper( arr[max1] ); }
  if(env_var_0 == 288) { n] = isupper( arr[n] ); }
  if(env_var_0 == 289) { n] = isupper( max1 ); }
  if(env_var_0 == 290) { n] = isupper( n ); }
  if(env_var_0 == 291) { n] = max1; }
  if(env_var_0 == 292) { n] = n; }
  if(env_var_0 == 293) { n] = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 294) { n] = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 295) { n] = std::max( arr[max1],max1 ); }
  if(env_var_0 == 296) { n] = std::max( arr[max1],n ); }
  if(env_var_0 == 297) { n] = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 298) { n] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 299) { n] = std::max( arr[n],max1 ); }
  if(env_var_0 == 300) { n] = std::max( arr[n],n ); }
  if(env_var_0 == 301) { n] = std::max( max1,arr[max1] ); }
  if(env_var_0 == 302) { n] = std::max( max1,arr[n] ); }
  if(env_var_0 == 303) { n] = std::max( max1,max1 ); }
  if(env_var_0 == 304) { n] = std::max( max1,n ); }
  if(env_var_0 == 305) { n] = std::max( n,arr[max1] ); }
  if(env_var_0 == 306) { n] = std::max( n,arr[n] ); }
  if(env_var_0 == 307) { n] = std::max( n,max1 ); }
  if(env_var_0 == 308) { n] = std::max( n,n ); }
  if(env_var_0 == 309) { n] = std::max(); }
  if(env_var_0 == 310) { n] = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 311) { n] = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 312) { n] = std::min( arr[max1],max1 ); }
  if(env_var_0 == 313) { n] = std::min( arr[max1],n ); }
  if(env_var_0 == 314) { n] = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 315) { n] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 316) { n] = std::min( arr[n],max1 ); }
  if(env_var_0 == 317) { n] = std::min( arr[n],n ); }
  if(env_var_0 == 318) { n] = std::min( max1,arr[max1] ); }
  if(env_var_0 == 319) { n] = std::min( max1,arr[n] ); }
  if(env_var_0 == 320) { n] = std::min( max1,max1 ); }
  if(env_var_0 == 321) { n] = std::min( max1,n ); }
  if(env_var_0 == 322) { n] = std::min( n,arr[max1] ); }
  if(env_var_0 == 323) { n] = std::min( n,arr[n] ); }
  if(env_var_0 == 324) { n] = std::min( n,max1 ); }
  if(env_var_0 == 325) { n] = std::min( n,n ); }
  if(env_var_0 == 326) { n] = toupper( arr[max1] ); }
  if(env_var_0 == 327) { n] = toupper( arr[n] ); }
  if(env_var_0 == 328) { n] = toupper( max1 ); }
  if(env_var_0 == 329) { n] = toupper( n ); }
  if(env_var_0 == 330) {  = *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 331) {  = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 332) {  = *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 333) {  = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 334) {  = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 335) {  = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 336) {  = *std::max_element( arr,arr ); }
  if(env_var_0 == 337) {  = *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 338) {  = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 339) {  = *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 340) {  = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 341) {  = *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 342) {  = *std::min_element( arr+n,arr ); }
  if(env_var_0 == 343) {  = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 344) {  = *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 345) {  = *std::min_element( arr,arr ); }
  if(env_var_0 == 346) {  = *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 347) {  = *std::min_element( arr,arr+n ); }
  if(env_var_0 == 348) {  = arr; }
  if(env_var_0 == 349) {  = arr+max1; }
  if(env_var_0 == 350) {  = arr+n; }
  if(env_var_0 == 351) {  = arr[max1]; }
  if(env_var_0 == 352) {  = arr[n]; }
  if(env_var_0 == 353) {  = isupper( arr[max1] ); }
  if(env_var_0 == 354) {  = isupper( arr[n] ); }
  if(env_var_0 == 355) {  = isupper( max1 ); }
  if(env_var_0 == 356) {  = isupper( n ); }
  if(env_var_0 == 357) {  = max1; }
  if(env_var_0 == 358) {  = n; }
  if(env_var_0 == 359) {  = std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 360) {  = std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 361) {  = std::max( arr[max1],max1 ); }
  if(env_var_0 == 362) {  = std::max( arr[max1],n ); }
  if(env_var_0 == 363) {  = std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 364) {  = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 365) {  = std::max( arr[n],max1 ); }
  if(env_var_0 == 366) {  = std::max( arr[n],n ); }
  if(env_var_0 == 367) {  = std::max( max1,arr[max1] ); }
  if(env_var_0 == 368) {  = std::max( max1,arr[n] ); }
  if(env_var_0 == 369) {  = std::max( max1,max1 ); }
  if(env_var_0 == 370) {  = std::max( max1,n ); }
  if(env_var_0 == 371) {  = std::max( n,arr[max1] ); }
  if(env_var_0 == 372) {  = std::max( n,arr[n] ); }
  if(env_var_0 == 373) {  = std::max( n,max1 ); }
  if(env_var_0 == 374) {  = std::max( n,n ); }
  if(env_var_0 == 375) {  = std::max(); }
  if(env_var_0 == 376) {  = std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 377) {  = std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 378) {  = std::min( arr[max1],max1 ); }
  if(env_var_0 == 379) {  = std::min( arr[max1],n ); }
  if(env_var_0 == 380) {  = std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 381) {  = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 382) {  = std::min( arr[n],max1 ); }
  if(env_var_0 == 383) {  = std::min( arr[n],n ); }
  if(env_var_0 == 384) {  = std::min( max1,arr[max1] ); }
  if(env_var_0 == 385) {  = std::min( max1,arr[n] ); }
  if(env_var_0 == 386) {  = std::min( max1,max1 ); }
  if(env_var_0 == 387) {  = std::min( max1,n ); }
  if(env_var_0 == 388) {  = std::min( n,arr[max1] ); }
  if(env_var_0 == 389) {  = std::min( n,arr[n] ); }
  if(env_var_0 == 390) {  = std::min( n,max1 ); }
  if(env_var_0 == 391) {  = std::min( n,n ); }
  if(env_var_0 == 392) {  = toupper( arr[max1] ); }
  if(env_var_0 == 393) {  = toupper( arr[n] ); }
  if(env_var_0 == 394) {  = toupper( max1 ); }
  if(env_var_0 == 395) {  = toupper( n ); }
  if(env_var_0 == 396) { *std::max_element( arr+max1,arr ); }
  if(env_var_0 == 397) { *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 398) { *std::max_element( arr+max1,arr+n ); }
  if(env_var_0 == 399) { *std::max_element( arr+n,arr ); }
  if(env_var_0 == 400) { *std::max_element( arr+n,arr+max1 ); }
  if(env_var_0 == 401) { *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 402) { *std::max_element( arr,arr ); }
  if(env_var_0 == 403) { *std::max_element( arr,arr+max1 ); }
  if(env_var_0 == 404) { *std::max_element( arr,arr+n ); }
  if(env_var_0 == 405) { *std::min_element( arr+max1,arr ); }
  if(env_var_0 == 406) { *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_0 == 407) { *std::min_element( arr+max1,arr+n ); }
  if(env_var_0 == 408) { *std::min_element( arr+n,arr ); }
  if(env_var_0 == 409) { *std::min_element( arr+n,arr+max1 ); }
  if(env_var_0 == 410) { *std::min_element( arr+n,arr+n ); }
  if(env_var_0 == 411) { *std::min_element( arr,arr ); }
  if(env_var_0 == 412) { *std::min_element( arr,arr+max1 ); }
  if(env_var_0 == 413) { *std::min_element( arr,arr+n ); }
  if(env_var_0 == 414) { arr; }
  if(env_var_0 == 415) { arr+max1; }
  if(env_var_0 == 416) { arr+n; }
  if(env_var_0 == 417) { arr[max1]; }
  if(env_var_0 == 418) { arr[n]; }
  if(env_var_0 == 419) { isupper( arr[max1] ); }
  if(env_var_0 == 420) { isupper( arr[n] ); }
  if(env_var_0 == 421) { isupper( max1 ); }
  if(env_var_0 == 422) { isupper( n ); }
  if(env_var_0 == 423) { max1; }
  if(env_var_0 == 424) { n; }
  if(env_var_0 == 425) { std::max( arr[max1],arr[max1] ); }
  if(env_var_0 == 426) { std::max( arr[max1],arr[n] ); }
  if(env_var_0 == 427) { std::max( arr[max1],max1 ); }
  if(env_var_0 == 428) { std::max( arr[max1],n ); }
  if(env_var_0 == 429) { std::max( arr[n],arr[max1] ); }
  if(env_var_0 == 430) { std::max( arr[n],arr[n] ); }
  if(env_var_0 == 431) { std::max( arr[n],max1 ); }
  if(env_var_0 == 432) { std::max( arr[n],n ); }
  if(env_var_0 == 433) { std::max( max1,arr[max1] ); }
  if(env_var_0 == 434) { std::max( max1,arr[n] ); }
  if(env_var_0 == 435) { std::max( max1,max1 ); }
  if(env_var_0 == 436) { std::max( max1,n ); }
  if(env_var_0 == 437) { std::max( n,arr[max1] ); }
  if(env_var_0 == 438) { std::max( n,arr[n] ); }
  if(env_var_0 == 439) { std::max( n,max1 ); }
  if(env_var_0 == 440) { std::max( n,n ); }
  if(env_var_0 == 441) { std::max(); }
  if(env_var_0 == 442) { std::min( arr[max1],arr[max1] ); }
  if(env_var_0 == 443) { std::min( arr[max1],arr[n] ); }
  if(env_var_0 == 444) { std::min( arr[max1],max1 ); }
  if(env_var_0 == 445) { std::min( arr[max1],n ); }
  if(env_var_0 == 446) { std::min( arr[n],arr[max1] ); }
  if(env_var_0 == 447) { std::min( arr[n],arr[n] ); }
  if(env_var_0 == 448) { std::min( arr[n],max1 ); }
  if(env_var_0 == 449) { std::min( arr[n],n ); }
  if(env_var_0 == 450) { std::min( max1,arr[max1] ); }
  if(env_var_0 == 451) { std::min( max1,arr[n] ); }
  if(env_var_0 == 452) { std::min( max1,max1 ); }
  if(env_var_0 == 453) { std::min( max1,n ); }
  if(env_var_0 == 454) { std::min( n,arr[max1] ); }
  if(env_var_0 == 455) { std::min( n,arr[n] ); }
  if(env_var_0 == 456) { std::min( n,max1 ); }
  if(env_var_0 == 457) { std::min( n,n ); }
  if(env_var_0 == 458) { toupper( arr[max1] ); }
  if(env_var_0 == 459) { toupper( arr[n] ); }
  if(env_var_0 == 460) { toupper( max1 ); }
  if(env_var_0 == 461) { toupper( n ); }
   
 auto min1 ;
  if(env_var_1 == 0) { = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 1) { = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 2) { = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 3) { = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 4) { = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 5) { = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 6) { = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 7) { = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 8) { = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 9) { = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 10) { = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 11) { = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 12) { = *std::max_element( arr,arr ); }
  if(env_var_1 == 13) { = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 14) { = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 15) { = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 16) { = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 17) { = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 18) { = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 19) { = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 20) { = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 21) { = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 22) { = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 23) { = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 24) { = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 25) { = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 26) { = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 27) { = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 28) { = *std::min_element( arr,arr ); }
  if(env_var_1 == 29) { = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 30) { = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 31) { = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 32) { = arr; }
  if(env_var_1 == 33) { = arr+max1; }
  if(env_var_1 == 34) { = arr+min1; }
  if(env_var_1 == 35) { = arr+n; }
  if(env_var_1 == 36) { = arr[max1]; }
  if(env_var_1 == 37) { = arr[min1]; }
  if(env_var_1 == 38) { = arr[n]; }
  if(env_var_1 == 39) { = isupper( arr[max1] ); }
  if(env_var_1 == 40) { = isupper( arr[min1] ); }
  if(env_var_1 == 41) { = isupper( arr[n] ); }
  if(env_var_1 == 42) { = isupper( max1 ); }
  if(env_var_1 == 43) { = isupper( min1 ); }
  if(env_var_1 == 44) { = isupper( n ); }
  if(env_var_1 == 45) { = max1; }
  if(env_var_1 == 46) { = min1; }
  if(env_var_1 == 47) { = n; }
  if(env_var_1 == 48) { = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 49) { = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 50) { = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 51) { = std::max( arr[max1],max1 ); }
  if(env_var_1 == 52) { = std::max( arr[max1],min1 ); }
  if(env_var_1 == 53) { = std::max( arr[max1],n ); }
  if(env_var_1 == 54) { = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 55) { = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 56) { = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 57) { = std::max( arr[min1],max1 ); }
  if(env_var_1 == 58) { = std::max( arr[min1],min1 ); }
  if(env_var_1 == 59) { = std::max( arr[min1],n ); }
  if(env_var_1 == 60) { = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 61) { = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 62) { = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 63) { = std::max( arr[n],max1 ); }
  if(env_var_1 == 64) { = std::max( arr[n],min1 ); }
  if(env_var_1 == 65) { = std::max( arr[n],n ); }
  if(env_var_1 == 66) { = std::max( max1,arr[max1] ); }
  if(env_var_1 == 67) { = std::max( max1,arr[min1] ); }
  if(env_var_1 == 68) { = std::max( max1,arr[n] ); }
  if(env_var_1 == 69) { = std::max( max1,max1 ); }
  if(env_var_1 == 70) { = std::max( max1,min1 ); }
  if(env_var_1 == 71) { = std::max( max1,n ); }
  if(env_var_1 == 72) { = std::max( min1,arr[max1] ); }
  if(env_var_1 == 73) { = std::max( min1,arr[min1] ); }
  if(env_var_1 == 74) { = std::max( min1,arr[n] ); }
  if(env_var_1 == 75) { = std::max( min1,max1 ); }
  if(env_var_1 == 76) { = std::max( min1,min1 ); }
  if(env_var_1 == 77) { = std::max( min1,n ); }
  if(env_var_1 == 78) { = std::max( n,arr[max1] ); }
  if(env_var_1 == 79) { = std::max( n,arr[min1] ); }
  if(env_var_1 == 80) { = std::max( n,arr[n] ); }
  if(env_var_1 == 81) { = std::max( n,max1 ); }
  if(env_var_1 == 82) { = std::max( n,min1 ); }
  if(env_var_1 == 83) { = std::max( n,n ); }
  if(env_var_1 == 84) { = std::max(); }
  if(env_var_1 == 85) { = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 86) { = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 87) { = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 88) { = std::min( arr[max1],max1 ); }
  if(env_var_1 == 89) { = std::min( arr[max1],min1 ); }
  if(env_var_1 == 90) { = std::min( arr[max1],n ); }
  if(env_var_1 == 91) { = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 92) { = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 93) { = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 94) { = std::min( arr[min1],max1 ); }
  if(env_var_1 == 95) { = std::min( arr[min1],min1 ); }
  if(env_var_1 == 96) { = std::min( arr[min1],n ); }
  if(env_var_1 == 97) { = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 98) { = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 99) { = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 100) { = std::min( arr[n],max1 ); }
  if(env_var_1 == 101) { = std::min( arr[n],min1 ); }
  if(env_var_1 == 102) { = std::min( arr[n],n ); }
  if(env_var_1 == 103) { = std::min( max1,arr[max1] ); }
  if(env_var_1 == 104) { = std::min( max1,arr[min1] ); }
  if(env_var_1 == 105) { = std::min( max1,arr[n] ); }
  if(env_var_1 == 106) { = std::min( max1,max1 ); }
  if(env_var_1 == 107) { = std::min( max1,min1 ); }
  if(env_var_1 == 108) { = std::min( max1,n ); }
  if(env_var_1 == 109) { = std::min( min1,arr[max1] ); }
  if(env_var_1 == 110) { = std::min( min1,arr[min1] ); }
  if(env_var_1 == 111) { = std::min( min1,arr[n] ); }
  if(env_var_1 == 112) { = std::min( min1,max1 ); }
  if(env_var_1 == 113) { = std::min( min1,min1 ); }
  if(env_var_1 == 114) { = std::min( min1,n ); }
  if(env_var_1 == 115) { = std::min( n,arr[max1] ); }
  if(env_var_1 == 116) { = std::min( n,arr[min1] ); }
  if(env_var_1 == 117) { = std::min( n,arr[n] ); }
  if(env_var_1 == 118) { = std::min( n,max1 ); }
  if(env_var_1 == 119) { = std::min( n,min1 ); }
  if(env_var_1 == 120) { = std::min( n,n ); }
  if(env_var_1 == 121) { = toupper( arr[max1] ); }
  if(env_var_1 == 122) { = toupper( arr[min1] ); }
  if(env_var_1 == 123) { = toupper( arr[n] ); }
  if(env_var_1 == 124) { = toupper( max1 ); }
  if(env_var_1 == 125) { = toupper( min1 ); }
  if(env_var_1 == 126) { = toupper( n ); }
  if(env_var_1 == 127) { max1 = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 128) { max1 = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 129) { max1 = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 130) { max1 = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 131) { max1 = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 132) { max1 = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 133) { max1 = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 134) { max1 = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 135) { max1 = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 136) { max1 = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 137) { max1 = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 138) { max1 = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 139) { max1 = *std::max_element( arr,arr ); }
  if(env_var_1 == 140) { max1 = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 141) { max1 = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 142) { max1 = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 143) { max1 = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 144) { max1 = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 145) { max1 = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 146) { max1 = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 147) { max1 = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 148) { max1 = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 149) { max1 = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 150) { max1 = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 151) { max1 = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 152) { max1 = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 153) { max1 = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 154) { max1 = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 155) { max1 = *std::min_element( arr,arr ); }
  if(env_var_1 == 156) { max1 = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 157) { max1 = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 158) { max1 = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 159) { max1 = arr; }
  if(env_var_1 == 160) { max1 = arr+max1; }
  if(env_var_1 == 161) { max1 = arr+min1; }
  if(env_var_1 == 162) { max1 = arr+n; }
  if(env_var_1 == 163) { max1 = arr[max1]; }
  if(env_var_1 == 164) { max1 = arr[min1]; }
  if(env_var_1 == 165) { max1 = arr[n]; }
  if(env_var_1 == 166) { max1 = isupper( arr[max1] ); }
  if(env_var_1 == 167) { max1 = isupper( arr[min1] ); }
  if(env_var_1 == 168) { max1 = isupper( arr[n] ); }
  if(env_var_1 == 169) { max1 = isupper( max1 ); }
  if(env_var_1 == 170) { max1 = isupper( min1 ); }
  if(env_var_1 == 171) { max1 = isupper( n ); }
  if(env_var_1 == 172) { max1 = max1; }
  if(env_var_1 == 173) { max1 = min1; }
  if(env_var_1 == 174) { max1 = n; }
  if(env_var_1 == 175) { max1 = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 176) { max1 = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 177) { max1 = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 178) { max1 = std::max( arr[max1],max1 ); }
  if(env_var_1 == 179) { max1 = std::max( arr[max1],min1 ); }
  if(env_var_1 == 180) { max1 = std::max( arr[max1],n ); }
  if(env_var_1 == 181) { max1 = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 182) { max1 = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 183) { max1 = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 184) { max1 = std::max( arr[min1],max1 ); }
  if(env_var_1 == 185) { max1 = std::max( arr[min1],min1 ); }
  if(env_var_1 == 186) { max1 = std::max( arr[min1],n ); }
  if(env_var_1 == 187) { max1 = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 188) { max1 = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 189) { max1 = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 190) { max1 = std::max( arr[n],max1 ); }
  if(env_var_1 == 191) { max1 = std::max( arr[n],min1 ); }
  if(env_var_1 == 192) { max1 = std::max( arr[n],n ); }
  if(env_var_1 == 193) { max1 = std::max( max1,arr[max1] ); }
  if(env_var_1 == 194) { max1 = std::max( max1,arr[min1] ); }
  if(env_var_1 == 195) { max1 = std::max( max1,arr[n] ); }
  if(env_var_1 == 196) { max1 = std::max( max1,max1 ); }
  if(env_var_1 == 197) { max1 = std::max( max1,min1 ); }
  if(env_var_1 == 198) { max1 = std::max( max1,n ); }
  if(env_var_1 == 199) { max1 = std::max( min1,arr[max1] ); }
  if(env_var_1 == 200) { max1 = std::max( min1,arr[min1] ); }
  if(env_var_1 == 201) { max1 = std::max( min1,arr[n] ); }
  if(env_var_1 == 202) { max1 = std::max( min1,max1 ); }
  if(env_var_1 == 203) { max1 = std::max( min1,min1 ); }
  if(env_var_1 == 204) { max1 = std::max( min1,n ); }
  if(env_var_1 == 205) { max1 = std::max( n,arr[max1] ); }
  if(env_var_1 == 206) { max1 = std::max( n,arr[min1] ); }
  if(env_var_1 == 207) { max1 = std::max( n,arr[n] ); }
  if(env_var_1 == 208) { max1 = std::max( n,max1 ); }
  if(env_var_1 == 209) { max1 = std::max( n,min1 ); }
  if(env_var_1 == 210) { max1 = std::max( n,n ); }
  if(env_var_1 == 211) { max1 = std::max(); }
  if(env_var_1 == 212) { max1 = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 213) { max1 = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 214) { max1 = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 215) { max1 = std::min( arr[max1],max1 ); }
  if(env_var_1 == 216) { max1 = std::min( arr[max1],min1 ); }
  if(env_var_1 == 217) { max1 = std::min( arr[max1],n ); }
  if(env_var_1 == 218) { max1 = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 219) { max1 = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 220) { max1 = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 221) { max1 = std::min( arr[min1],max1 ); }
  if(env_var_1 == 222) { max1 = std::min( arr[min1],min1 ); }
  if(env_var_1 == 223) { max1 = std::min( arr[min1],n ); }
  if(env_var_1 == 224) { max1 = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 225) { max1 = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 226) { max1 = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 227) { max1 = std::min( arr[n],max1 ); }
  if(env_var_1 == 228) { max1 = std::min( arr[n],min1 ); }
  if(env_var_1 == 229) { max1 = std::min( arr[n],n ); }
  if(env_var_1 == 230) { max1 = std::min( max1,arr[max1] ); }
  if(env_var_1 == 231) { max1 = std::min( max1,arr[min1] ); }
  if(env_var_1 == 232) { max1 = std::min( max1,arr[n] ); }
  if(env_var_1 == 233) { max1 = std::min( max1,max1 ); }
  if(env_var_1 == 234) { max1 = std::min( max1,min1 ); }
  if(env_var_1 == 235) { max1 = std::min( max1,n ); }
  if(env_var_1 == 236) { max1 = std::min( min1,arr[max1] ); }
  if(env_var_1 == 237) { max1 = std::min( min1,arr[min1] ); }
  if(env_var_1 == 238) { max1 = std::min( min1,arr[n] ); }
  if(env_var_1 == 239) { max1 = std::min( min1,max1 ); }
  if(env_var_1 == 240) { max1 = std::min( min1,min1 ); }
  if(env_var_1 == 241) { max1 = std::min( min1,n ); }
  if(env_var_1 == 242) { max1 = std::min( n,arr[max1] ); }
  if(env_var_1 == 243) { max1 = std::min( n,arr[min1] ); }
  if(env_var_1 == 244) { max1 = std::min( n,arr[n] ); }
  if(env_var_1 == 245) { max1 = std::min( n,max1 ); }
  if(env_var_1 == 246) { max1 = std::min( n,min1 ); }
  if(env_var_1 == 247) { max1 = std::min( n,n ); }
  if(env_var_1 == 248) { max1 = toupper( arr[max1] ); }
  if(env_var_1 == 249) { max1 = toupper( arr[min1] ); }
  if(env_var_1 == 250) { max1 = toupper( arr[n] ); }
  if(env_var_1 == 251) { max1 = toupper( max1 ); }
  if(env_var_1 == 252) { max1 = toupper( min1 ); }
  if(env_var_1 == 253) { max1 = toupper( n ); }
  if(env_var_1 == 254) { min1 = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 255) { min1 = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 256) { min1 = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 257) { min1 = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 258) { min1 = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 259) { min1 = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 260) { min1 = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 261) { min1 = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 262) { min1 = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 263) { min1 = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 264) { min1 = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 265) { min1 = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 266) { min1 = *std::max_element( arr,arr ); }
  if(env_var_1 == 267) { min1 = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 268) { min1 = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 269) { min1 = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 270) { min1 = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 271) { min1 = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 272) { min1 = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 273) { min1 = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 274) { min1 = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 275) { min1 = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 276) { min1 = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 277) { min1 = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 278) { min1 = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 279) { min1 = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 280) { min1 = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 281) { min1 = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 282) { min1 = *std::min_element( arr,arr ); }
  if(env_var_1 == 283) { min1 = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 284) { min1 = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 285) { min1 = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 286) { min1 = arr; }
  if(env_var_1 == 287) { min1 = arr+max1; }
  if(env_var_1 == 288) { min1 = arr+min1; }
  if(env_var_1 == 289) { min1 = arr+n; }
  if(env_var_1 == 290) { min1 = arr[max1]; }
  if(env_var_1 == 291) { min1 = arr[min1]; }
  if(env_var_1 == 292) { min1 = arr[n]; }
  if(env_var_1 == 293) { min1 = isupper( arr[max1] ); }
  if(env_var_1 == 294) { min1 = isupper( arr[min1] ); }
  if(env_var_1 == 295) { min1 = isupper( arr[n] ); }
  if(env_var_1 == 296) { min1 = isupper( max1 ); }
  if(env_var_1 == 297) { min1 = isupper( min1 ); }
  if(env_var_1 == 298) { min1 = isupper( n ); }
  if(env_var_1 == 299) { min1 = max1; }
  if(env_var_1 == 300) { min1 = min1; }
  if(env_var_1 == 301) { min1 = n; }
  if(env_var_1 == 302) { min1 = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 303) { min1 = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 304) { min1 = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 305) { min1 = std::max( arr[max1],max1 ); }
  if(env_var_1 == 306) { min1 = std::max( arr[max1],min1 ); }
  if(env_var_1 == 307) { min1 = std::max( arr[max1],n ); }
  if(env_var_1 == 308) { min1 = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 309) { min1 = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 310) { min1 = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 311) { min1 = std::max( arr[min1],max1 ); }
  if(env_var_1 == 312) { min1 = std::max( arr[min1],min1 ); }
  if(env_var_1 == 313) { min1 = std::max( arr[min1],n ); }
  if(env_var_1 == 314) { min1 = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 315) { min1 = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 316) { min1 = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 317) { min1 = std::max( arr[n],max1 ); }
  if(env_var_1 == 318) { min1 = std::max( arr[n],min1 ); }
  if(env_var_1 == 319) { min1 = std::max( arr[n],n ); }
  if(env_var_1 == 320) { min1 = std::max( max1,arr[max1] ); }
  if(env_var_1 == 321) { min1 = std::max( max1,arr[min1] ); }
  if(env_var_1 == 322) { min1 = std::max( max1,arr[n] ); }
  if(env_var_1 == 323) { min1 = std::max( max1,max1 ); }
  if(env_var_1 == 324) { min1 = std::max( max1,min1 ); }
  if(env_var_1 == 325) { min1 = std::max( max1,n ); }
  if(env_var_1 == 326) { min1 = std::max( min1,arr[max1] ); }
  if(env_var_1 == 327) { min1 = std::max( min1,arr[min1] ); }
  if(env_var_1 == 328) { min1 = std::max( min1,arr[n] ); }
  if(env_var_1 == 329) { min1 = std::max( min1,max1 ); }
  if(env_var_1 == 330) { min1 = std::max( min1,min1 ); }
  if(env_var_1 == 331) { min1 = std::max( min1,n ); }
  if(env_var_1 == 332) { min1 = std::max( n,arr[max1] ); }
  if(env_var_1 == 333) { min1 = std::max( n,arr[min1] ); }
  if(env_var_1 == 334) { min1 = std::max( n,arr[n] ); }
  if(env_var_1 == 335) { min1 = std::max( n,max1 ); }
  if(env_var_1 == 336) { min1 = std::max( n,min1 ); }
  if(env_var_1 == 337) { min1 = std::max( n,n ); }
  if(env_var_1 == 338) { min1 = std::max(); }
  if(env_var_1 == 339) { min1 = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 340) { min1 = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 341) { min1 = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 342) { min1 = std::min( arr[max1],max1 ); }
  if(env_var_1 == 343) { min1 = std::min( arr[max1],min1 ); }
  if(env_var_1 == 344) { min1 = std::min( arr[max1],n ); }
  if(env_var_1 == 345) { min1 = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 346) { min1 = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 347) { min1 = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 348) { min1 = std::min( arr[min1],max1 ); }
  if(env_var_1 == 349) { min1 = std::min( arr[min1],min1 ); }
  if(env_var_1 == 350) { min1 = std::min( arr[min1],n ); }
  if(env_var_1 == 351) { min1 = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 352) { min1 = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 353) { min1 = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 354) { min1 = std::min( arr[n],max1 ); }
  if(env_var_1 == 355) { min1 = std::min( arr[n],min1 ); }
  if(env_var_1 == 356) { min1 = std::min( arr[n],n ); }
  if(env_var_1 == 357) { min1 = std::min( max1,arr[max1] ); }
  if(env_var_1 == 358) { min1 = std::min( max1,arr[min1] ); }
  if(env_var_1 == 359) { min1 = std::min( max1,arr[n] ); }
  if(env_var_1 == 360) { min1 = std::min( max1,max1 ); }
  if(env_var_1 == 361) { min1 = std::min( max1,min1 ); }
  if(env_var_1 == 362) { min1 = std::min( max1,n ); }
  if(env_var_1 == 363) { min1 = std::min( min1,arr[max1] ); }
  if(env_var_1 == 364) { min1 = std::min( min1,arr[min1] ); }
  if(env_var_1 == 365) { min1 = std::min( min1,arr[n] ); }
  if(env_var_1 == 366) { min1 = std::min( min1,max1 ); }
  if(env_var_1 == 367) { min1 = std::min( min1,min1 ); }
  if(env_var_1 == 368) { min1 = std::min( min1,n ); }
  if(env_var_1 == 369) { min1 = std::min( n,arr[max1] ); }
  if(env_var_1 == 370) { min1 = std::min( n,arr[min1] ); }
  if(env_var_1 == 371) { min1 = std::min( n,arr[n] ); }
  if(env_var_1 == 372) { min1 = std::min( n,max1 ); }
  if(env_var_1 == 373) { min1 = std::min( n,min1 ); }
  if(env_var_1 == 374) { min1 = std::min( n,n ); }
  if(env_var_1 == 375) { min1 = toupper( arr[max1] ); }
  if(env_var_1 == 376) { min1 = toupper( arr[min1] ); }
  if(env_var_1 == 377) { min1 = toupper( arr[n] ); }
  if(env_var_1 == 378) { min1 = toupper( max1 ); }
  if(env_var_1 == 379) { min1 = toupper( min1 ); }
  if(env_var_1 == 380) { min1 = toupper( n ); }
  if(env_var_1 == 381) { n = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 382) { n = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 383) { n = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 384) { n = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 385) { n = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 386) { n = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 387) { n = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 388) { n = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 389) { n = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 390) { n = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 391) { n = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 392) { n = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 393) { n = *std::max_element( arr,arr ); }
  if(env_var_1 == 394) { n = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 395) { n = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 396) { n = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 397) { n = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 398) { n = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 399) { n = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 400) { n = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 401) { n = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 402) { n = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 403) { n = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 404) { n = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 405) { n = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 406) { n = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 407) { n = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 408) { n = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 409) { n = *std::min_element( arr,arr ); }
  if(env_var_1 == 410) { n = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 411) { n = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 412) { n = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 413) { n = arr; }
  if(env_var_1 == 414) { n = arr+max1; }
  if(env_var_1 == 415) { n = arr+min1; }
  if(env_var_1 == 416) { n = arr+n; }
  if(env_var_1 == 417) { n = arr[max1]; }
  if(env_var_1 == 418) { n = arr[min1]; }
  if(env_var_1 == 419) { n = arr[n]; }
  if(env_var_1 == 420) { n = isupper( arr[max1] ); }
  if(env_var_1 == 421) { n = isupper( arr[min1] ); }
  if(env_var_1 == 422) { n = isupper( arr[n] ); }
  if(env_var_1 == 423) { n = isupper( max1 ); }
  if(env_var_1 == 424) { n = isupper( min1 ); }
  if(env_var_1 == 425) { n = isupper( n ); }
  if(env_var_1 == 426) { n = max1; }
  if(env_var_1 == 427) { n = min1; }
  if(env_var_1 == 428) { n = n; }
  if(env_var_1 == 429) { n = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 430) { n = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 431) { n = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 432) { n = std::max( arr[max1],max1 ); }
  if(env_var_1 == 433) { n = std::max( arr[max1],min1 ); }
  if(env_var_1 == 434) { n = std::max( arr[max1],n ); }
  if(env_var_1 == 435) { n = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 436) { n = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 437) { n = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 438) { n = std::max( arr[min1],max1 ); }
  if(env_var_1 == 439) { n = std::max( arr[min1],min1 ); }
  if(env_var_1 == 440) { n = std::max( arr[min1],n ); }
  if(env_var_1 == 441) { n = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 442) { n = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 443) { n = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 444) { n = std::max( arr[n],max1 ); }
  if(env_var_1 == 445) { n = std::max( arr[n],min1 ); }
  if(env_var_1 == 446) { n = std::max( arr[n],n ); }
  if(env_var_1 == 447) { n = std::max( max1,arr[max1] ); }
  if(env_var_1 == 448) { n = std::max( max1,arr[min1] ); }
  if(env_var_1 == 449) { n = std::max( max1,arr[n] ); }
  if(env_var_1 == 450) { n = std::max( max1,max1 ); }
  if(env_var_1 == 451) { n = std::max( max1,min1 ); }
  if(env_var_1 == 452) { n = std::max( max1,n ); }
  if(env_var_1 == 453) { n = std::max( min1,arr[max1] ); }
  if(env_var_1 == 454) { n = std::max( min1,arr[min1] ); }
  if(env_var_1 == 455) { n = std::max( min1,arr[n] ); }
  if(env_var_1 == 456) { n = std::max( min1,max1 ); }
  if(env_var_1 == 457) { n = std::max( min1,min1 ); }
  if(env_var_1 == 458) { n = std::max( min1,n ); }
  if(env_var_1 == 459) { n = std::max( n,arr[max1] ); }
  if(env_var_1 == 460) { n = std::max( n,arr[min1] ); }
  if(env_var_1 == 461) { n = std::max( n,arr[n] ); }
  if(env_var_1 == 462) { n = std::max( n,max1 ); }
  if(env_var_1 == 463) { n = std::max( n,min1 ); }
  if(env_var_1 == 464) { n = std::max( n,n ); }
  if(env_var_1 == 465) { n = std::max(); }
  if(env_var_1 == 466) { n = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 467) { n = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 468) { n = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 469) { n = std::min( arr[max1],max1 ); }
  if(env_var_1 == 470) { n = std::min( arr[max1],min1 ); }
  if(env_var_1 == 471) { n = std::min( arr[max1],n ); }
  if(env_var_1 == 472) { n = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 473) { n = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 474) { n = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 475) { n = std::min( arr[min1],max1 ); }
  if(env_var_1 == 476) { n = std::min( arr[min1],min1 ); }
  if(env_var_1 == 477) { n = std::min( arr[min1],n ); }
  if(env_var_1 == 478) { n = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 479) { n = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 480) { n = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 481) { n = std::min( arr[n],max1 ); }
  if(env_var_1 == 482) { n = std::min( arr[n],min1 ); }
  if(env_var_1 == 483) { n = std::min( arr[n],n ); }
  if(env_var_1 == 484) { n = std::min( max1,arr[max1] ); }
  if(env_var_1 == 485) { n = std::min( max1,arr[min1] ); }
  if(env_var_1 == 486) { n = std::min( max1,arr[n] ); }
  if(env_var_1 == 487) { n = std::min( max1,max1 ); }
  if(env_var_1 == 488) { n = std::min( max1,min1 ); }
  if(env_var_1 == 489) { n = std::min( max1,n ); }
  if(env_var_1 == 490) { n = std::min( min1,arr[max1] ); }
  if(env_var_1 == 491) { n = std::min( min1,arr[min1] ); }
  if(env_var_1 == 492) { n = std::min( min1,arr[n] ); }
  if(env_var_1 == 493) { n = std::min( min1,max1 ); }
  if(env_var_1 == 494) { n = std::min( min1,min1 ); }
  if(env_var_1 == 495) { n = std::min( min1,n ); }
  if(env_var_1 == 496) { n = std::min( n,arr[max1] ); }
  if(env_var_1 == 497) { n = std::min( n,arr[min1] ); }
  if(env_var_1 == 498) { n = std::min( n,arr[n] ); }
  if(env_var_1 == 499) { n = std::min( n,max1 ); }
  if(env_var_1 == 500) { n = std::min( n,min1 ); }
  if(env_var_1 == 501) { n = std::min( n,n ); }
  if(env_var_1 == 502) { n = toupper( arr[max1] ); }
  if(env_var_1 == 503) { n = toupper( arr[min1] ); }
  if(env_var_1 == 504) { n = toupper( arr[n] ); }
  if(env_var_1 == 505) { n = toupper( max1 ); }
  if(env_var_1 == 506) { n = toupper( min1 ); }
  if(env_var_1 == 507) { n = toupper( n ); }
  if(env_var_1 == 508) { max1] = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 509) { max1] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 510) { max1] = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 511) { max1] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 512) { max1] = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 513) { max1] = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 514) { max1] = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 515) { max1] = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 516) { max1] = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 517) { max1] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 518) { max1] = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 519) { max1] = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 520) { max1] = *std::max_element( arr,arr ); }
  if(env_var_1 == 521) { max1] = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 522) { max1] = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 523) { max1] = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 524) { max1] = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 525) { max1] = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 526) { max1] = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 527) { max1] = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 528) { max1] = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 529) { max1] = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 530) { max1] = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 531) { max1] = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 532) { max1] = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 533) { max1] = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 534) { max1] = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 535) { max1] = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 536) { max1] = *std::min_element( arr,arr ); }
  if(env_var_1 == 537) { max1] = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 538) { max1] = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 539) { max1] = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 540) { max1] = arr; }
  if(env_var_1 == 541) { max1] = arr+max1; }
  if(env_var_1 == 542) { max1] = arr+min1; }
  if(env_var_1 == 543) { max1] = arr+n; }
  if(env_var_1 == 544) { max1] = arr[max1]; }
  if(env_var_1 == 545) { max1] = arr[min1]; }
  if(env_var_1 == 546) { max1] = arr[n]; }
  if(env_var_1 == 547) { max1] = isupper( arr[max1] ); }
  if(env_var_1 == 548) { max1] = isupper( arr[min1] ); }
  if(env_var_1 == 549) { max1] = isupper( arr[n] ); }
  if(env_var_1 == 550) { max1] = isupper( max1 ); }
  if(env_var_1 == 551) { max1] = isupper( min1 ); }
  if(env_var_1 == 552) { max1] = isupper( n ); }
  if(env_var_1 == 553) { max1] = max1; }
  if(env_var_1 == 554) { max1] = min1; }
  if(env_var_1 == 555) { max1] = n; }
  if(env_var_1 == 556) { max1] = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 557) { max1] = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 558) { max1] = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 559) { max1] = std::max( arr[max1],max1 ); }
  if(env_var_1 == 560) { max1] = std::max( arr[max1],min1 ); }
  if(env_var_1 == 561) { max1] = std::max( arr[max1],n ); }
  if(env_var_1 == 562) { max1] = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 563) { max1] = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 564) { max1] = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 565) { max1] = std::max( arr[min1],max1 ); }
  if(env_var_1 == 566) { max1] = std::max( arr[min1],min1 ); }
  if(env_var_1 == 567) { max1] = std::max( arr[min1],n ); }
  if(env_var_1 == 568) { max1] = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 569) { max1] = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 570) { max1] = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 571) { max1] = std::max( arr[n],max1 ); }
  if(env_var_1 == 572) { max1] = std::max( arr[n],min1 ); }
  if(env_var_1 == 573) { max1] = std::max( arr[n],n ); }
  if(env_var_1 == 574) { max1] = std::max( max1,arr[max1] ); }
  if(env_var_1 == 575) { max1] = std::max( max1,arr[min1] ); }
  if(env_var_1 == 576) { max1] = std::max( max1,arr[n] ); }
  if(env_var_1 == 577) { max1] = std::max( max1,max1 ); }
  if(env_var_1 == 578) { max1] = std::max( max1,min1 ); }
  if(env_var_1 == 579) { max1] = std::max( max1,n ); }
  if(env_var_1 == 580) { max1] = std::max( min1,arr[max1] ); }
  if(env_var_1 == 581) { max1] = std::max( min1,arr[min1] ); }
  if(env_var_1 == 582) { max1] = std::max( min1,arr[n] ); }
  if(env_var_1 == 583) { max1] = std::max( min1,max1 ); }
  if(env_var_1 == 584) { max1] = std::max( min1,min1 ); }
  if(env_var_1 == 585) { max1] = std::max( min1,n ); }
  if(env_var_1 == 586) { max1] = std::max( n,arr[max1] ); }
  if(env_var_1 == 587) { max1] = std::max( n,arr[min1] ); }
  if(env_var_1 == 588) { max1] = std::max( n,arr[n] ); }
  if(env_var_1 == 589) { max1] = std::max( n,max1 ); }
  if(env_var_1 == 590) { max1] = std::max( n,min1 ); }
  if(env_var_1 == 591) { max1] = std::max( n,n ); }
  if(env_var_1 == 592) { max1] = std::max(); }
  if(env_var_1 == 593) { max1] = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 594) { max1] = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 595) { max1] = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 596) { max1] = std::min( arr[max1],max1 ); }
  if(env_var_1 == 597) { max1] = std::min( arr[max1],min1 ); }
  if(env_var_1 == 598) { max1] = std::min( arr[max1],n ); }
  if(env_var_1 == 599) { max1] = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 600) { max1] = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 601) { max1] = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 602) { max1] = std::min( arr[min1],max1 ); }
  if(env_var_1 == 603) { max1] = std::min( arr[min1],min1 ); }
  if(env_var_1 == 604) { max1] = std::min( arr[min1],n ); }
  if(env_var_1 == 605) { max1] = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 606) { max1] = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 607) { max1] = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 608) { max1] = std::min( arr[n],max1 ); }
  if(env_var_1 == 609) { max1] = std::min( arr[n],min1 ); }
  if(env_var_1 == 610) { max1] = std::min( arr[n],n ); }
  if(env_var_1 == 611) { max1] = std::min( max1,arr[max1] ); }
  if(env_var_1 == 612) { max1] = std::min( max1,arr[min1] ); }
  if(env_var_1 == 613) { max1] = std::min( max1,arr[n] ); }
  if(env_var_1 == 614) { max1] = std::min( max1,max1 ); }
  if(env_var_1 == 615) { max1] = std::min( max1,min1 ); }
  if(env_var_1 == 616) { max1] = std::min( max1,n ); }
  if(env_var_1 == 617) { max1] = std::min( min1,arr[max1] ); }
  if(env_var_1 == 618) { max1] = std::min( min1,arr[min1] ); }
  if(env_var_1 == 619) { max1] = std::min( min1,arr[n] ); }
  if(env_var_1 == 620) { max1] = std::min( min1,max1 ); }
  if(env_var_1 == 621) { max1] = std::min( min1,min1 ); }
  if(env_var_1 == 622) { max1] = std::min( min1,n ); }
  if(env_var_1 == 623) { max1] = std::min( n,arr[max1] ); }
  if(env_var_1 == 624) { max1] = std::min( n,arr[min1] ); }
  if(env_var_1 == 625) { max1] = std::min( n,arr[n] ); }
  if(env_var_1 == 626) { max1] = std::min( n,max1 ); }
  if(env_var_1 == 627) { max1] = std::min( n,min1 ); }
  if(env_var_1 == 628) { max1] = std::min( n,n ); }
  if(env_var_1 == 629) { max1] = toupper( arr[max1] ); }
  if(env_var_1 == 630) { max1] = toupper( arr[min1] ); }
  if(env_var_1 == 631) { max1] = toupper( arr[n] ); }
  if(env_var_1 == 632) { max1] = toupper( max1 ); }
  if(env_var_1 == 633) { max1] = toupper( min1 ); }
  if(env_var_1 == 634) { max1] = toupper( n ); }
  if(env_var_1 == 635) { min1] = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 636) { min1] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 637) { min1] = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 638) { min1] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 639) { min1] = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 640) { min1] = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 641) { min1] = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 642) { min1] = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 643) { min1] = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 644) { min1] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 645) { min1] = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 646) { min1] = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 647) { min1] = *std::max_element( arr,arr ); }
  if(env_var_1 == 648) { min1] = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 649) { min1] = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 650) { min1] = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 651) { min1] = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 652) { min1] = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 653) { min1] = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 654) { min1] = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 655) { min1] = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 656) { min1] = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 657) { min1] = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 658) { min1] = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 659) { min1] = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 660) { min1] = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 661) { min1] = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 662) { min1] = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 663) { min1] = *std::min_element( arr,arr ); }
  if(env_var_1 == 664) { min1] = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 665) { min1] = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 666) { min1] = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 667) { min1] = arr; }
  if(env_var_1 == 668) { min1] = arr+max1; }
  if(env_var_1 == 669) { min1] = arr+min1; }
  if(env_var_1 == 670) { min1] = arr+n; }
  if(env_var_1 == 671) { min1] = arr[max1]; }
  if(env_var_1 == 672) { min1] = arr[min1]; }
  if(env_var_1 == 673) { min1] = arr[n]; }
  if(env_var_1 == 674) { min1] = isupper( arr[max1] ); }
  if(env_var_1 == 675) { min1] = isupper( arr[min1] ); }
  if(env_var_1 == 676) { min1] = isupper( arr[n] ); }
  if(env_var_1 == 677) { min1] = isupper( max1 ); }
  if(env_var_1 == 678) { min1] = isupper( min1 ); }
  if(env_var_1 == 679) { min1] = isupper( n ); }
  if(env_var_1 == 680) { min1] = max1; }
  if(env_var_1 == 681) { min1] = min1; }
  if(env_var_1 == 682) { min1] = n; }
  if(env_var_1 == 683) { min1] = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 684) { min1] = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 685) { min1] = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 686) { min1] = std::max( arr[max1],max1 ); }
  if(env_var_1 == 687) { min1] = std::max( arr[max1],min1 ); }
  if(env_var_1 == 688) { min1] = std::max( arr[max1],n ); }
  if(env_var_1 == 689) { min1] = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 690) { min1] = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 691) { min1] = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 692) { min1] = std::max( arr[min1],max1 ); }
  if(env_var_1 == 693) { min1] = std::max( arr[min1],min1 ); }
  if(env_var_1 == 694) { min1] = std::max( arr[min1],n ); }
  if(env_var_1 == 695) { min1] = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 696) { min1] = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 697) { min1] = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 698) { min1] = std::max( arr[n],max1 ); }
  if(env_var_1 == 699) { min1] = std::max( arr[n],min1 ); }
  if(env_var_1 == 700) { min1] = std::max( arr[n],n ); }
  if(env_var_1 == 701) { min1] = std::max( max1,arr[max1] ); }
  if(env_var_1 == 702) { min1] = std::max( max1,arr[min1] ); }
  if(env_var_1 == 703) { min1] = std::max( max1,arr[n] ); }
  if(env_var_1 == 704) { min1] = std::max( max1,max1 ); }
  if(env_var_1 == 705) { min1] = std::max( max1,min1 ); }
  if(env_var_1 == 706) { min1] = std::max( max1,n ); }
  if(env_var_1 == 707) { min1] = std::max( min1,arr[max1] ); }
  if(env_var_1 == 708) { min1] = std::max( min1,arr[min1] ); }
  if(env_var_1 == 709) { min1] = std::max( min1,arr[n] ); }
  if(env_var_1 == 710) { min1] = std::max( min1,max1 ); }
  if(env_var_1 == 711) { min1] = std::max( min1,min1 ); }
  if(env_var_1 == 712) { min1] = std::max( min1,n ); }
  if(env_var_1 == 713) { min1] = std::max( n,arr[max1] ); }
  if(env_var_1 == 714) { min1] = std::max( n,arr[min1] ); }
  if(env_var_1 == 715) { min1] = std::max( n,arr[n] ); }
  if(env_var_1 == 716) { min1] = std::max( n,max1 ); }
  if(env_var_1 == 717) { min1] = std::max( n,min1 ); }
  if(env_var_1 == 718) { min1] = std::max( n,n ); }
  if(env_var_1 == 719) { min1] = std::max(); }
  if(env_var_1 == 720) { min1] = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 721) { min1] = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 722) { min1] = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 723) { min1] = std::min( arr[max1],max1 ); }
  if(env_var_1 == 724) { min1] = std::min( arr[max1],min1 ); }
  if(env_var_1 == 725) { min1] = std::min( arr[max1],n ); }
  if(env_var_1 == 726) { min1] = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 727) { min1] = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 728) { min1] = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 729) { min1] = std::min( arr[min1],max1 ); }
  if(env_var_1 == 730) { min1] = std::min( arr[min1],min1 ); }
  if(env_var_1 == 731) { min1] = std::min( arr[min1],n ); }
  if(env_var_1 == 732) { min1] = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 733) { min1] = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 734) { min1] = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 735) { min1] = std::min( arr[n],max1 ); }
  if(env_var_1 == 736) { min1] = std::min( arr[n],min1 ); }
  if(env_var_1 == 737) { min1] = std::min( arr[n],n ); }
  if(env_var_1 == 738) { min1] = std::min( max1,arr[max1] ); }
  if(env_var_1 == 739) { min1] = std::min( max1,arr[min1] ); }
  if(env_var_1 == 740) { min1] = std::min( max1,arr[n] ); }
  if(env_var_1 == 741) { min1] = std::min( max1,max1 ); }
  if(env_var_1 == 742) { min1] = std::min( max1,min1 ); }
  if(env_var_1 == 743) { min1] = std::min( max1,n ); }
  if(env_var_1 == 744) { min1] = std::min( min1,arr[max1] ); }
  if(env_var_1 == 745) { min1] = std::min( min1,arr[min1] ); }
  if(env_var_1 == 746) { min1] = std::min( min1,arr[n] ); }
  if(env_var_1 == 747) { min1] = std::min( min1,max1 ); }
  if(env_var_1 == 748) { min1] = std::min( min1,min1 ); }
  if(env_var_1 == 749) { min1] = std::min( min1,n ); }
  if(env_var_1 == 750) { min1] = std::min( n,arr[max1] ); }
  if(env_var_1 == 751) { min1] = std::min( n,arr[min1] ); }
  if(env_var_1 == 752) { min1] = std::min( n,arr[n] ); }
  if(env_var_1 == 753) { min1] = std::min( n,max1 ); }
  if(env_var_1 == 754) { min1] = std::min( n,min1 ); }
  if(env_var_1 == 755) { min1] = std::min( n,n ); }
  if(env_var_1 == 756) { min1] = toupper( arr[max1] ); }
  if(env_var_1 == 757) { min1] = toupper( arr[min1] ); }
  if(env_var_1 == 758) { min1] = toupper( arr[n] ); }
  if(env_var_1 == 759) { min1] = toupper( max1 ); }
  if(env_var_1 == 760) { min1] = toupper( min1 ); }
  if(env_var_1 == 761) { min1] = toupper( n ); }
  if(env_var_1 == 762) { n] = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 763) { n] = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 764) { n] = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 765) { n] = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 766) { n] = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 767) { n] = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 768) { n] = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 769) { n] = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 770) { n] = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 771) { n] = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 772) { n] = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 773) { n] = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 774) { n] = *std::max_element( arr,arr ); }
  if(env_var_1 == 775) { n] = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 776) { n] = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 777) { n] = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 778) { n] = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 779) { n] = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 780) { n] = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 781) { n] = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 782) { n] = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 783) { n] = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 784) { n] = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 785) { n] = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 786) { n] = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 787) { n] = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 788) { n] = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 789) { n] = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 790) { n] = *std::min_element( arr,arr ); }
  if(env_var_1 == 791) { n] = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 792) { n] = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 793) { n] = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 794) { n] = arr; }
  if(env_var_1 == 795) { n] = arr+max1; }
  if(env_var_1 == 796) { n] = arr+min1; }
  if(env_var_1 == 797) { n] = arr+n; }
  if(env_var_1 == 798) { n] = arr[max1]; }
  if(env_var_1 == 799) { n] = arr[min1]; }
  if(env_var_1 == 800) { n] = arr[n]; }
  if(env_var_1 == 801) { n] = isupper( arr[max1] ); }
  if(env_var_1 == 802) { n] = isupper( arr[min1] ); }
  if(env_var_1 == 803) { n] = isupper( arr[n] ); }
  if(env_var_1 == 804) { n] = isupper( max1 ); }
  if(env_var_1 == 805) { n] = isupper( min1 ); }
  if(env_var_1 == 806) { n] = isupper( n ); }
  if(env_var_1 == 807) { n] = max1; }
  if(env_var_1 == 808) { n] = min1; }
  if(env_var_1 == 809) { n] = n; }
  if(env_var_1 == 810) { n] = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 811) { n] = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 812) { n] = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 813) { n] = std::max( arr[max1],max1 ); }
  if(env_var_1 == 814) { n] = std::max( arr[max1],min1 ); }
  if(env_var_1 == 815) { n] = std::max( arr[max1],n ); }
  if(env_var_1 == 816) { n] = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 817) { n] = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 818) { n] = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 819) { n] = std::max( arr[min1],max1 ); }
  if(env_var_1 == 820) { n] = std::max( arr[min1],min1 ); }
  if(env_var_1 == 821) { n] = std::max( arr[min1],n ); }
  if(env_var_1 == 822) { n] = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 823) { n] = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 824) { n] = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 825) { n] = std::max( arr[n],max1 ); }
  if(env_var_1 == 826) { n] = std::max( arr[n],min1 ); }
  if(env_var_1 == 827) { n] = std::max( arr[n],n ); }
  if(env_var_1 == 828) { n] = std::max( max1,arr[max1] ); }
  if(env_var_1 == 829) { n] = std::max( max1,arr[min1] ); }
  if(env_var_1 == 830) { n] = std::max( max1,arr[n] ); }
  if(env_var_1 == 831) { n] = std::max( max1,max1 ); }
  if(env_var_1 == 832) { n] = std::max( max1,min1 ); }
  if(env_var_1 == 833) { n] = std::max( max1,n ); }
  if(env_var_1 == 834) { n] = std::max( min1,arr[max1] ); }
  if(env_var_1 == 835) { n] = std::max( min1,arr[min1] ); }
  if(env_var_1 == 836) { n] = std::max( min1,arr[n] ); }
  if(env_var_1 == 837) { n] = std::max( min1,max1 ); }
  if(env_var_1 == 838) { n] = std::max( min1,min1 ); }
  if(env_var_1 == 839) { n] = std::max( min1,n ); }
  if(env_var_1 == 840) { n] = std::max( n,arr[max1] ); }
  if(env_var_1 == 841) { n] = std::max( n,arr[min1] ); }
  if(env_var_1 == 842) { n] = std::max( n,arr[n] ); }
  if(env_var_1 == 843) { n] = std::max( n,max1 ); }
  if(env_var_1 == 844) { n] = std::max( n,min1 ); }
  if(env_var_1 == 845) { n] = std::max( n,n ); }
  if(env_var_1 == 846) { n] = std::max(); }
  if(env_var_1 == 847) { n] = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 848) { n] = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 849) { n] = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 850) { n] = std::min( arr[max1],max1 ); }
  if(env_var_1 == 851) { n] = std::min( arr[max1],min1 ); }
  if(env_var_1 == 852) { n] = std::min( arr[max1],n ); }
  if(env_var_1 == 853) { n] = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 854) { n] = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 855) { n] = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 856) { n] = std::min( arr[min1],max1 ); }
  if(env_var_1 == 857) { n] = std::min( arr[min1],min1 ); }
  if(env_var_1 == 858) { n] = std::min( arr[min1],n ); }
  if(env_var_1 == 859) { n] = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 860) { n] = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 861) { n] = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 862) { n] = std::min( arr[n],max1 ); }
  if(env_var_1 == 863) { n] = std::min( arr[n],min1 ); }
  if(env_var_1 == 864) { n] = std::min( arr[n],n ); }
  if(env_var_1 == 865) { n] = std::min( max1,arr[max1] ); }
  if(env_var_1 == 866) { n] = std::min( max1,arr[min1] ); }
  if(env_var_1 == 867) { n] = std::min( max1,arr[n] ); }
  if(env_var_1 == 868) { n] = std::min( max1,max1 ); }
  if(env_var_1 == 869) { n] = std::min( max1,min1 ); }
  if(env_var_1 == 870) { n] = std::min( max1,n ); }
  if(env_var_1 == 871) { n] = std::min( min1,arr[max1] ); }
  if(env_var_1 == 872) { n] = std::min( min1,arr[min1] ); }
  if(env_var_1 == 873) { n] = std::min( min1,arr[n] ); }
  if(env_var_1 == 874) { n] = std::min( min1,max1 ); }
  if(env_var_1 == 875) { n] = std::min( min1,min1 ); }
  if(env_var_1 == 876) { n] = std::min( min1,n ); }
  if(env_var_1 == 877) { n] = std::min( n,arr[max1] ); }
  if(env_var_1 == 878) { n] = std::min( n,arr[min1] ); }
  if(env_var_1 == 879) { n] = std::min( n,arr[n] ); }
  if(env_var_1 == 880) { n] = std::min( n,max1 ); }
  if(env_var_1 == 881) { n] = std::min( n,min1 ); }
  if(env_var_1 == 882) { n] = std::min( n,n ); }
  if(env_var_1 == 883) { n] = toupper( arr[max1] ); }
  if(env_var_1 == 884) { n] = toupper( arr[min1] ); }
  if(env_var_1 == 885) { n] = toupper( arr[n] ); }
  if(env_var_1 == 886) { n] = toupper( max1 ); }
  if(env_var_1 == 887) { n] = toupper( min1 ); }
  if(env_var_1 == 888) { n] = toupper( n ); }
  if(env_var_1 == 889) {  = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 890) {  = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 891) {  = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 892) {  = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 893) {  = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 894) {  = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 895) {  = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 896) {  = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 897) {  = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 898) {  = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 899) {  = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 900) {  = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 901) {  = *std::max_element( arr,arr ); }
  if(env_var_1 == 902) {  = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 903) {  = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 904) {  = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 905) {  = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 906) {  = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 907) {  = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 908) {  = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 909) {  = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 910) {  = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 911) {  = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 912) {  = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 913) {  = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 914) {  = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 915) {  = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 916) {  = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 917) {  = *std::min_element( arr,arr ); }
  if(env_var_1 == 918) {  = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 919) {  = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 920) {  = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 921) {  = arr; }
  if(env_var_1 == 922) {  = arr+max1; }
  if(env_var_1 == 923) {  = arr+min1; }
  if(env_var_1 == 924) {  = arr+n; }
  if(env_var_1 == 925) {  = arr[max1]; }
  if(env_var_1 == 926) {  = arr[min1]; }
  if(env_var_1 == 927) {  = arr[n]; }
  if(env_var_1 == 928) {  = isupper( arr[max1] ); }
  if(env_var_1 == 929) {  = isupper( arr[min1] ); }
  if(env_var_1 == 930) {  = isupper( arr[n] ); }
  if(env_var_1 == 931) {  = isupper( max1 ); }
  if(env_var_1 == 932) {  = isupper( min1 ); }
  if(env_var_1 == 933) {  = isupper( n ); }
  if(env_var_1 == 934) {  = max1; }
  if(env_var_1 == 935) {  = min1; }
  if(env_var_1 == 936) {  = n; }
  if(env_var_1 == 937) {  = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 938) {  = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 939) {  = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 940) {  = std::max( arr[max1],max1 ); }
  if(env_var_1 == 941) {  = std::max( arr[max1],min1 ); }
  if(env_var_1 == 942) {  = std::max( arr[max1],n ); }
  if(env_var_1 == 943) {  = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 944) {  = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 945) {  = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 946) {  = std::max( arr[min1],max1 ); }
  if(env_var_1 == 947) {  = std::max( arr[min1],min1 ); }
  if(env_var_1 == 948) {  = std::max( arr[min1],n ); }
  if(env_var_1 == 949) {  = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 950) {  = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 951) {  = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 952) {  = std::max( arr[n],max1 ); }
  if(env_var_1 == 953) {  = std::max( arr[n],min1 ); }
  if(env_var_1 == 954) {  = std::max( arr[n],n ); }
  if(env_var_1 == 955) {  = std::max( max1,arr[max1] ); }
  if(env_var_1 == 956) {  = std::max( max1,arr[min1] ); }
  if(env_var_1 == 957) {  = std::max( max1,arr[n] ); }
  if(env_var_1 == 958) {  = std::max( max1,max1 ); }
  if(env_var_1 == 959) {  = std::max( max1,min1 ); }
  if(env_var_1 == 960) {  = std::max( max1,n ); }
  if(env_var_1 == 961) {  = std::max( min1,arr[max1] ); }
  if(env_var_1 == 962) {  = std::max( min1,arr[min1] ); }
  if(env_var_1 == 963) {  = std::max( min1,arr[n] ); }
  if(env_var_1 == 964) {  = std::max( min1,max1 ); }
  if(env_var_1 == 965) {  = std::max( min1,min1 ); }
  if(env_var_1 == 966) {  = std::max( min1,n ); }
  if(env_var_1 == 967) {  = std::max( n,arr[max1] ); }
  if(env_var_1 == 968) {  = std::max( n,arr[min1] ); }
  if(env_var_1 == 969) {  = std::max( n,arr[n] ); }
  if(env_var_1 == 970) {  = std::max( n,max1 ); }
  if(env_var_1 == 971) {  = std::max( n,min1 ); }
  if(env_var_1 == 972) {  = std::max( n,n ); }
  if(env_var_1 == 973) {  = std::max(); }
  if(env_var_1 == 974) {  = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 975) {  = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 976) {  = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 977) {  = std::min( arr[max1],max1 ); }
  if(env_var_1 == 978) {  = std::min( arr[max1],min1 ); }
  if(env_var_1 == 979) {  = std::min( arr[max1],n ); }
  if(env_var_1 == 980) {  = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 981) {  = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 982) {  = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 983) {  = std::min( arr[min1],max1 ); }
  if(env_var_1 == 984) {  = std::min( arr[min1],min1 ); }
  if(env_var_1 == 985) {  = std::min( arr[min1],n ); }
  if(env_var_1 == 986) {  = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 987) {  = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 988) {  = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 989) {  = std::min( arr[n],max1 ); }
  if(env_var_1 == 990) {  = std::min( arr[n],min1 ); }
  if(env_var_1 == 991) {  = std::min( arr[n],n ); }
  if(env_var_1 == 992) {  = std::min( max1,arr[max1] ); }
  if(env_var_1 == 993) {  = std::min( max1,arr[min1] ); }
  if(env_var_1 == 994) {  = std::min( max1,arr[n] ); }
  if(env_var_1 == 995) {  = std::min( max1,max1 ); }
  if(env_var_1 == 996) {  = std::min( max1,min1 ); }
  if(env_var_1 == 997) {  = std::min( max1,n ); }
  if(env_var_1 == 998) {  = std::min( min1,arr[max1] ); }
  if(env_var_1 == 999) {  = std::min( min1,arr[min1] ); }
  if(env_var_1 == 1000) {  = std::min( min1,arr[n] ); }
  if(env_var_1 == 1001) {  = std::min( min1,max1 ); }
  if(env_var_1 == 1002) {  = std::min( min1,min1 ); }
  if(env_var_1 == 1003) {  = std::min( min1,n ); }
  if(env_var_1 == 1004) {  = std::min( n,arr[max1] ); }
  if(env_var_1 == 1005) {  = std::min( n,arr[min1] ); }
  if(env_var_1 == 1006) {  = std::min( n,arr[n] ); }
  if(env_var_1 == 1007) {  = std::min( n,max1 ); }
  if(env_var_1 == 1008) {  = std::min( n,min1 ); }
  if(env_var_1 == 1009) {  = std::min( n,n ); }
  if(env_var_1 == 1010) {  = toupper( arr[max1] ); }
  if(env_var_1 == 1011) {  = toupper( arr[min1] ); }
  if(env_var_1 == 1012) {  = toupper( arr[n] ); }
  if(env_var_1 == 1013) {  = toupper( max1 ); }
  if(env_var_1 == 1014) {  = toupper( min1 ); }
  if(env_var_1 == 1015) {  = toupper( n ); }
  if(env_var_1 == 1016) {  = *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 1017) {  = *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 1018) {  = *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 1019) {  = *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 1020) {  = *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 1021) {  = *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 1022) {  = *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 1023) {  = *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 1024) {  = *std::max_element( arr+n,arr ); }
  if(env_var_1 == 1025) {  = *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 1026) {  = *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 1027) {  = *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 1028) {  = *std::max_element( arr,arr ); }
  if(env_var_1 == 1029) {  = *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 1030) {  = *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 1031) {  = *std::max_element( arr,arr+n ); }
  if(env_var_1 == 1032) {  = *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 1033) {  = *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 1034) {  = *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 1035) {  = *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 1036) {  = *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 1037) {  = *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 1038) {  = *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 1039) {  = *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 1040) {  = *std::min_element( arr+n,arr ); }
  if(env_var_1 == 1041) {  = *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 1042) {  = *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 1043) {  = *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 1044) {  = *std::min_element( arr,arr ); }
  if(env_var_1 == 1045) {  = *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 1046) {  = *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 1047) {  = *std::min_element( arr,arr+n ); }
  if(env_var_1 == 1048) {  = arr; }
  if(env_var_1 == 1049) {  = arr+max1; }
  if(env_var_1 == 1050) {  = arr+min1; }
  if(env_var_1 == 1051) {  = arr+n; }
  if(env_var_1 == 1052) {  = arr[max1]; }
  if(env_var_1 == 1053) {  = arr[min1]; }
  if(env_var_1 == 1054) {  = arr[n]; }
  if(env_var_1 == 1055) {  = isupper( arr[max1] ); }
  if(env_var_1 == 1056) {  = isupper( arr[min1] ); }
  if(env_var_1 == 1057) {  = isupper( arr[n] ); }
  if(env_var_1 == 1058) {  = isupper( max1 ); }
  if(env_var_1 == 1059) {  = isupper( min1 ); }
  if(env_var_1 == 1060) {  = isupper( n ); }
  if(env_var_1 == 1061) {  = max1; }
  if(env_var_1 == 1062) {  = min1; }
  if(env_var_1 == 1063) {  = n; }
  if(env_var_1 == 1064) {  = std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 1065) {  = std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 1066) {  = std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 1067) {  = std::max( arr[max1],max1 ); }
  if(env_var_1 == 1068) {  = std::max( arr[max1],min1 ); }
  if(env_var_1 == 1069) {  = std::max( arr[max1],n ); }
  if(env_var_1 == 1070) {  = std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 1071) {  = std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 1072) {  = std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 1073) {  = std::max( arr[min1],max1 ); }
  if(env_var_1 == 1074) {  = std::max( arr[min1],min1 ); }
  if(env_var_1 == 1075) {  = std::max( arr[min1],n ); }
  if(env_var_1 == 1076) {  = std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 1077) {  = std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 1078) {  = std::max( arr[n],arr[n] ); }
  if(env_var_1 == 1079) {  = std::max( arr[n],max1 ); }
  if(env_var_1 == 1080) {  = std::max( arr[n],min1 ); }
  if(env_var_1 == 1081) {  = std::max( arr[n],n ); }
  if(env_var_1 == 1082) {  = std::max( max1,arr[max1] ); }
  if(env_var_1 == 1083) {  = std::max( max1,arr[min1] ); }
  if(env_var_1 == 1084) {  = std::max( max1,arr[n] ); }
  if(env_var_1 == 1085) {  = std::max( max1,max1 ); }
  if(env_var_1 == 1086) {  = std::max( max1,min1 ); }
  if(env_var_1 == 1087) {  = std::max( max1,n ); }
  if(env_var_1 == 1088) {  = std::max( min1,arr[max1] ); }
  if(env_var_1 == 1089) {  = std::max( min1,arr[min1] ); }
  if(env_var_1 == 1090) {  = std::max( min1,arr[n] ); }
  if(env_var_1 == 1091) {  = std::max( min1,max1 ); }
  if(env_var_1 == 1092) {  = std::max( min1,min1 ); }
  if(env_var_1 == 1093) {  = std::max( min1,n ); }
  if(env_var_1 == 1094) {  = std::max( n,arr[max1] ); }
  if(env_var_1 == 1095) {  = std::max( n,arr[min1] ); }
  if(env_var_1 == 1096) {  = std::max( n,arr[n] ); }
  if(env_var_1 == 1097) {  = std::max( n,max1 ); }
  if(env_var_1 == 1098) {  = std::max( n,min1 ); }
  if(env_var_1 == 1099) {  = std::max( n,n ); }
  if(env_var_1 == 1100) {  = std::max(); }
  if(env_var_1 == 1101) {  = std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 1102) {  = std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 1103) {  = std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 1104) {  = std::min( arr[max1],max1 ); }
  if(env_var_1 == 1105) {  = std::min( arr[max1],min1 ); }
  if(env_var_1 == 1106) {  = std::min( arr[max1],n ); }
  if(env_var_1 == 1107) {  = std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 1108) {  = std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 1109) {  = std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 1110) {  = std::min( arr[min1],max1 ); }
  if(env_var_1 == 1111) {  = std::min( arr[min1],min1 ); }
  if(env_var_1 == 1112) {  = std::min( arr[min1],n ); }
  if(env_var_1 == 1113) {  = std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 1114) {  = std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 1115) {  = std::min( arr[n],arr[n] ); }
  if(env_var_1 == 1116) {  = std::min( arr[n],max1 ); }
  if(env_var_1 == 1117) {  = std::min( arr[n],min1 ); }
  if(env_var_1 == 1118) {  = std::min( arr[n],n ); }
  if(env_var_1 == 1119) {  = std::min( max1,arr[max1] ); }
  if(env_var_1 == 1120) {  = std::min( max1,arr[min1] ); }
  if(env_var_1 == 1121) {  = std::min( max1,arr[n] ); }
  if(env_var_1 == 1122) {  = std::min( max1,max1 ); }
  if(env_var_1 == 1123) {  = std::min( max1,min1 ); }
  if(env_var_1 == 1124) {  = std::min( max1,n ); }
  if(env_var_1 == 1125) {  = std::min( min1,arr[max1] ); }
  if(env_var_1 == 1126) {  = std::min( min1,arr[min1] ); }
  if(env_var_1 == 1127) {  = std::min( min1,arr[n] ); }
  if(env_var_1 == 1128) {  = std::min( min1,max1 ); }
  if(env_var_1 == 1129) {  = std::min( min1,min1 ); }
  if(env_var_1 == 1130) {  = std::min( min1,n ); }
  if(env_var_1 == 1131) {  = std::min( n,arr[max1] ); }
  if(env_var_1 == 1132) {  = std::min( n,arr[min1] ); }
  if(env_var_1 == 1133) {  = std::min( n,arr[n] ); }
  if(env_var_1 == 1134) {  = std::min( n,max1 ); }
  if(env_var_1 == 1135) {  = std::min( n,min1 ); }
  if(env_var_1 == 1136) {  = std::min( n,n ); }
  if(env_var_1 == 1137) {  = toupper( arr[max1] ); }
  if(env_var_1 == 1138) {  = toupper( arr[min1] ); }
  if(env_var_1 == 1139) {  = toupper( arr[n] ); }
  if(env_var_1 == 1140) {  = toupper( max1 ); }
  if(env_var_1 == 1141) {  = toupper( min1 ); }
  if(env_var_1 == 1142) {  = toupper( n ); }
  if(env_var_1 == 1143) { *std::max_element( arr+max1,arr ); }
  if(env_var_1 == 1144) { *std::max_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 1145) { *std::max_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 1146) { *std::max_element( arr+max1,arr+n ); }
  if(env_var_1 == 1147) { *std::max_element( arr+min1,arr ); }
  if(env_var_1 == 1148) { *std::max_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 1149) { *std::max_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 1150) { *std::max_element( arr+min1,arr+n ); }
  if(env_var_1 == 1151) { *std::max_element( arr+n,arr ); }
  if(env_var_1 == 1152) { *std::max_element( arr+n,arr+max1 ); }
  if(env_var_1 == 1153) { *std::max_element( arr+n,arr+min1 ); }
  if(env_var_1 == 1154) { *std::max_element( arr+n,arr+n ); }
  if(env_var_1 == 1155) { *std::max_element( arr,arr ); }
  if(env_var_1 == 1156) { *std::max_element( arr,arr+max1 ); }
  if(env_var_1 == 1157) { *std::max_element( arr,arr+min1 ); }
  if(env_var_1 == 1158) { *std::max_element( arr,arr+n ); }
  if(env_var_1 == 1159) { *std::min_element( arr+max1,arr ); }
  if(env_var_1 == 1160) { *std::min_element( arr+max1,arr+max1 ); }
  if(env_var_1 == 1161) { *std::min_element( arr+max1,arr+min1 ); }
  if(env_var_1 == 1162) { *std::min_element( arr+max1,arr+n ); }
  if(env_var_1 == 1163) { *std::min_element( arr+min1,arr ); }
  if(env_var_1 == 1164) { *std::min_element( arr+min1,arr+max1 ); }
  if(env_var_1 == 1165) { *std::min_element( arr+min1,arr+min1 ); }
  if(env_var_1 == 1166) { *std::min_element( arr+min1,arr+n ); }
  if(env_var_1 == 1167) { *std::min_element( arr+n,arr ); }
  if(env_var_1 == 1168) { *std::min_element( arr+n,arr+max1 ); }
  if(env_var_1 == 1169) { *std::min_element( arr+n,arr+min1 ); }
  if(env_var_1 == 1170) { *std::min_element( arr+n,arr+n ); }
  if(env_var_1 == 1171) { *std::min_element( arr,arr ); }
  if(env_var_1 == 1172) { *std::min_element( arr,arr+max1 ); }
  if(env_var_1 == 1173) { *std::min_element( arr,arr+min1 ); }
  if(env_var_1 == 1174) { *std::min_element( arr,arr+n ); }
  if(env_var_1 == 1175) { arr; }
  if(env_var_1 == 1176) { arr+max1; }
  if(env_var_1 == 1177) { arr+min1; }
  if(env_var_1 == 1178) { arr+n; }
  if(env_var_1 == 1179) { arr[max1]; }
  if(env_var_1 == 1180) { arr[min1]; }
  if(env_var_1 == 1181) { arr[n]; }
  if(env_var_1 == 1182) { isupper( arr[max1] ); }
  if(env_var_1 == 1183) { isupper( arr[min1] ); }
  if(env_var_1 == 1184) { isupper( arr[n] ); }
  if(env_var_1 == 1185) { isupper( max1 ); }
  if(env_var_1 == 1186) { isupper( min1 ); }
  if(env_var_1 == 1187) { isupper( n ); }
  if(env_var_1 == 1188) { max1; }
  if(env_var_1 == 1189) { min1; }
  if(env_var_1 == 1190) { n; }
  if(env_var_1 == 1191) { std::max( arr[max1],arr[max1] ); }
  if(env_var_1 == 1192) { std::max( arr[max1],arr[min1] ); }
  if(env_var_1 == 1193) { std::max( arr[max1],arr[n] ); }
  if(env_var_1 == 1194) { std::max( arr[max1],max1 ); }
  if(env_var_1 == 1195) { std::max( arr[max1],min1 ); }
  if(env_var_1 == 1196) { std::max( arr[max1],n ); }
  if(env_var_1 == 1197) { std::max( arr[min1],arr[max1] ); }
  if(env_var_1 == 1198) { std::max( arr[min1],arr[min1] ); }
  if(env_var_1 == 1199) { std::max( arr[min1],arr[n] ); }
  if(env_var_1 == 1200) { std::max( arr[min1],max1 ); }
  if(env_var_1 == 1201) { std::max( arr[min1],min1 ); }
  if(env_var_1 == 1202) { std::max( arr[min1],n ); }
  if(env_var_1 == 1203) { std::max( arr[n],arr[max1] ); }
  if(env_var_1 == 1204) { std::max( arr[n],arr[min1] ); }
  if(env_var_1 == 1205) { std::max( arr[n],arr[n] ); }
  if(env_var_1 == 1206) { std::max( arr[n],max1 ); }
  if(env_var_1 == 1207) { std::max( arr[n],min1 ); }
  if(env_var_1 == 1208) { std::max( arr[n],n ); }
  if(env_var_1 == 1209) { std::max( max1,arr[max1] ); }
  if(env_var_1 == 1210) { std::max( max1,arr[min1] ); }
  if(env_var_1 == 1211) { std::max( max1,arr[n] ); }
  if(env_var_1 == 1212) { std::max( max1,max1 ); }
  if(env_var_1 == 1213) { std::max( max1,min1 ); }
  if(env_var_1 == 1214) { std::max( max1,n ); }
  if(env_var_1 == 1215) { std::max( min1,arr[max1] ); }
  if(env_var_1 == 1216) { std::max( min1,arr[min1] ); }
  if(env_var_1 == 1217) { std::max( min1,arr[n] ); }
  if(env_var_1 == 1218) { std::max( min1,max1 ); }
  if(env_var_1 == 1219) { std::max( min1,min1 ); }
  if(env_var_1 == 1220) { std::max( min1,n ); }
  if(env_var_1 == 1221) { std::max( n,arr[max1] ); }
  if(env_var_1 == 1222) { std::max( n,arr[min1] ); }
  if(env_var_1 == 1223) { std::max( n,arr[n] ); }
  if(env_var_1 == 1224) { std::max( n,max1 ); }
  if(env_var_1 == 1225) { std::max( n,min1 ); }
  if(env_var_1 == 1226) { std::max( n,n ); }
  if(env_var_1 == 1227) { std::max(); }
  if(env_var_1 == 1228) { std::min( arr[max1],arr[max1] ); }
  if(env_var_1 == 1229) { std::min( arr[max1],arr[min1] ); }
  if(env_var_1 == 1230) { std::min( arr[max1],arr[n] ); }
  if(env_var_1 == 1231) { std::min( arr[max1],max1 ); }
  if(env_var_1 == 1232) { std::min( arr[max1],min1 ); }
  if(env_var_1 == 1233) { std::min( arr[max1],n ); }
  if(env_var_1 == 1234) { std::min( arr[min1],arr[max1] ); }
  if(env_var_1 == 1235) { std::min( arr[min1],arr[min1] ); }
  if(env_var_1 == 1236) { std::min( arr[min1],arr[n] ); }
  if(env_var_1 == 1237) { std::min( arr[min1],max1 ); }
  if(env_var_1 == 1238) { std::min( arr[min1],min1 ); }
  if(env_var_1 == 1239) { std::min( arr[min1],n ); }
  if(env_var_1 == 1240) { std::min( arr[n],arr[max1] ); }
  if(env_var_1 == 1241) { std::min( arr[n],arr[min1] ); }
  if(env_var_1 == 1242) { std::min( arr[n],arr[n] ); }
  if(env_var_1 == 1243) { std::min( arr[n],max1 ); }
  if(env_var_1 == 1244) { std::min( arr[n],min1 ); }
  if(env_var_1 == 1245) { std::min( arr[n],n ); }
  if(env_var_1 == 1246) { std::min( max1,arr[max1] ); }
  if(env_var_1 == 1247) { std::min( max1,arr[min1] ); }
  if(env_var_1 == 1248) { std::min( max1,arr[n] ); }
  if(env_var_1 == 1249) { std::min( max1,max1 ); }
  if(env_var_1 == 1250) { std::min( max1,min1 ); }
  if(env_var_1 == 1251) { std::min( max1,n ); }
  if(env_var_1 == 1252) { std::min( min1,arr[max1] ); }
  if(env_var_1 == 1253) { std::min( min1,arr[min1] ); }
  if(env_var_1 == 1254) { std::min( min1,arr[n] ); }
  if(env_var_1 == 1255) { std::min( min1,max1 ); }
  if(env_var_1 == 1256) { std::min( min1,min1 ); }
  if(env_var_1 == 1257) { std::min( min1,n ); }
  if(env_var_1 == 1258) { std::min( n,arr[max1] ); }
  if(env_var_1 == 1259) { std::min( n,arr[min1] ); }
  if(env_var_1 == 1260) { std::min( n,arr[n] ); }
  if(env_var_1 == 1261) { std::min( n,max1 ); }
  if(env_var_1 == 1262) { std::min( n,min1 ); }
  if(env_var_1 == 1263) { std::min( n,n ); }
  if(env_var_1 == 1264) { toupper( arr[max1] ); }
  if(env_var_1 == 1265) { toupper( arr[min1] ); }
  if(env_var_1 == 1266) { toupper( arr[n] ); }
  if(env_var_1 == 1267) { toupper( max1 ); }
  if(env_var_1 == 1268) { toupper( min1 ); }
  if(env_var_1 == 1269) { toupper( n ); }
   
  int m = max1 - min1 + 1 ;
  if ( ( m > n ) || ( m < 0 ) ) return false ;
  bool visited [ m ] ;
  memset ( visited , 0 , m ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) visited [ arr [ i ] - min1 ] = true ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    if ( ( visited [ i ] == false ) == false ) return false ;
  }
  return true ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,4,19,25,65,72,75,83,90,92},{46,2,28,-44,74,-36,-8,30,-96,60,52,-58,16,-38,78,38,-28,16,26,-42,48,40,6,72},{0,1,1,1},{50,21,9,29,86,2,82,49,34,18,77,83,44,67,85,58,15,85,22,3,39,67,42,37,6,35,18,57,41,32,39,30,41,68,84,36,64,36},{-92,-82,-80,-78,-66,-66,-62,-58,-54,-52,-48,-30,-26,-22,-20,-20,-18,-14,-2,12,20,24,26,26,28,28,32,36,42,48,50,52,56,64,70,72,72,80,82,84,86,92},{1,0,0,1,0,0,1,0,0,1,1,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,1,1,0,0,1,1,0,1,1,1,0,0,1,0,1,0,0,0,0},{18,19,21,23,30,33,38,40,45,56,63,68,93,96},{20,-90,-42,48,18,-46,82,-12,-88,82,62,24,20,64,-68,-34,-38,8,-54,-20,-92,34,-90,78,18,8,-6,10,98,-24,72,-92,76,-22,12,-44,2,68,-72,42,34,20,-48},{0,0,0,0,0,1,1,1,1},{81,25,50,48,35,38,49,21,47,94,94,55,23,45,92,23,93,33,64,9,90,64,81,17,2,73,8,7,35,36,72}};
    vector<int> param1 {8,14,2,23,26,43,8,34,8,27};
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

