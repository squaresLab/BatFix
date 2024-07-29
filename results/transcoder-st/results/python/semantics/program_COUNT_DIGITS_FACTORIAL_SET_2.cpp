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
long long f_gold ( int n ) {
  if ( n < 0 ) return 0;
  if ( n <= 1 ) return 1;
  double x = ( ( n * log10 ( n / M_E ) + log10 ( 2 * M_PI * n ) / 2.0 ) );
  return floor ( x ) + 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  if ( ( n < 0 ) || ( n <= 1 ) ) return 0 ;
  ;
  if ( ( n <= 1 ) || ( n <= 2 ) ) return 1 ;
  ;
 double x ;
  if(env_var_0 == 0) { * isupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 1) { * isupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 2) { * isupper( n ) + n / 2.0; }
  if(env_var_0 == 3) { * isupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 4) { * isupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 5) { * isupper( n ) + x / 2.0; }
  if(env_var_0 == 6) { * isupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 7) { * isupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 8) { * isupper( x ) + n / 2.0; }
  if(env_var_0 == 9) { * isupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 10) { * isupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 11) { * isupper( x ) + x / 2.0; }
  if(env_var_0 == 12) { * n + isupper( n ) / 2.0; }
  if(env_var_0 == 13) { * n + isupper( x ) / 2.0; }
  if(env_var_0 == 14) { * n + n / 2.0; }
  if(env_var_0 == 15) { * n + toupper( n ) / 2.0; }
  if(env_var_0 == 16) { * n + toupper( x ) / 2.0; }
  if(env_var_0 == 17) { * n + x / 2.0; }
  if(env_var_0 == 18) { * std::max( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 19) { * std::max( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 20) { * std::max( n,n ) + n / 2.0; }
  if(env_var_0 == 21) { * std::max( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 22) { * std::max( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 23) { * std::max( n,n ) + x / 2.0; }
  if(env_var_0 == 24) { * std::max( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 25) { * std::max( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 26) { * std::max( n,x ) + n / 2.0; }
  if(env_var_0 == 27) { * std::max( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 28) { * std::max( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 29) { * std::max( n,x ) + x / 2.0; }
  if(env_var_0 == 30) { * std::max( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 31) { * std::max( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 32) { * std::max( x,n ) + n / 2.0; }
  if(env_var_0 == 33) { * std::max( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 34) { * std::max( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 35) { * std::max( x,n ) + x / 2.0; }
  if(env_var_0 == 36) { * std::max( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 37) { * std::max( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 38) { * std::max( x,x ) + n / 2.0; }
  if(env_var_0 == 39) { * std::max( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 40) { * std::max( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 41) { * std::max( x,x ) + x / 2.0; }
  if(env_var_0 == 42) { * std::min( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 43) { * std::min( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 44) { * std::min( n,n ) + n / 2.0; }
  if(env_var_0 == 45) { * std::min( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 46) { * std::min( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 47) { * std::min( n,n ) + x / 2.0; }
  if(env_var_0 == 48) { * std::min( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 49) { * std::min( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 50) { * std::min( n,x ) + n / 2.0; }
  if(env_var_0 == 51) { * std::min( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 52) { * std::min( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 53) { * std::min( n,x ) + x / 2.0; }
  if(env_var_0 == 54) { * std::min( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 55) { * std::min( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 56) { * std::min( x,n ) + n / 2.0; }
  if(env_var_0 == 57) { * std::min( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 58) { * std::min( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 59) { * std::min( x,n ) + x / 2.0; }
  if(env_var_0 == 60) { * std::min( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 61) { * std::min( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 62) { * std::min( x,x ) + n / 2.0; }
  if(env_var_0 == 63) { * std::min( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 64) { * std::min( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 65) { * std::min( x,x ) + x / 2.0; }
  if(env_var_0 == 66) { * toupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 67) { * toupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 68) { * toupper( n ) + n / 2.0; }
  if(env_var_0 == 69) { * toupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 70) { * toupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 71) { * toupper( n ) + x / 2.0; }
  if(env_var_0 == 72) { * toupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 73) { * toupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 74) { * toupper( x ) + n / 2.0; }
  if(env_var_0 == 75) { * toupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 76) { * toupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 77) { * toupper( x ) + x / 2.0; }
  if(env_var_0 == 78) { * x + isupper( n ) / 2.0; }
  if(env_var_0 == 79) { * x + isupper( x ) / 2.0; }
  if(env_var_0 == 80) { * x + n / 2.0; }
  if(env_var_0 == 81) { * x + toupper( n ) / 2.0; }
  if(env_var_0 == 82) { * x + toupper( x ) / 2.0; }
  if(env_var_0 == 83) { * x + x / 2.0; }
  if(env_var_0 == 84) { * isupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 85) { * isupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 86) { * isupper( n ) + n / 2.0; }
  if(env_var_0 == 87) { * isupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 88) { * isupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 89) { * isupper( n ) + x / 2.0; }
  if(env_var_0 == 90) { * isupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 91) { * isupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 92) { * isupper( x ) + n / 2.0; }
  if(env_var_0 == 93) { * isupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 94) { * isupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 95) { * isupper( x ) + x / 2.0; }
  if(env_var_0 == 96) { * n + isupper( n ) / 2.0; }
  if(env_var_0 == 97) { * n + isupper( x ) / 2.0; }
  if(env_var_0 == 98) { * n + n / 2.0; }
  if(env_var_0 == 99) { * n + toupper( n ) / 2.0; }
  if(env_var_0 == 100) { * n + toupper( x ) / 2.0; }
  if(env_var_0 == 101) { * n + x / 2.0; }
  if(env_var_0 == 102) { * std::max( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 103) { * std::max( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 104) { * std::max( n,n ) + n / 2.0; }
  if(env_var_0 == 105) { * std::max( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 106) { * std::max( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 107) { * std::max( n,n ) + x / 2.0; }
  if(env_var_0 == 108) { * std::max( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 109) { * std::max( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 110) { * std::max( n,x ) + n / 2.0; }
  if(env_var_0 == 111) { * std::max( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 112) { * std::max( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 113) { * std::max( n,x ) + x / 2.0; }
  if(env_var_0 == 114) { * std::max( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 115) { * std::max( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 116) { * std::max( x,n ) + n / 2.0; }
  if(env_var_0 == 117) { * std::max( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 118) { * std::max( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 119) { * std::max( x,n ) + x / 2.0; }
  if(env_var_0 == 120) { * std::max( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 121) { * std::max( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 122) { * std::max( x,x ) + n / 2.0; }
  if(env_var_0 == 123) { * std::max( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 124) { * std::max( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 125) { * std::max( x,x ) + x / 2.0; }
  if(env_var_0 == 126) { * std::min( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 127) { * std::min( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 128) { * std::min( n,n ) + n / 2.0; }
  if(env_var_0 == 129) { * std::min( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 130) { * std::min( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 131) { * std::min( n,n ) + x / 2.0; }
  if(env_var_0 == 132) { * std::min( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 133) { * std::min( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 134) { * std::min( n,x ) + n / 2.0; }
  if(env_var_0 == 135) { * std::min( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 136) { * std::min( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 137) { * std::min( n,x ) + x / 2.0; }
  if(env_var_0 == 138) { * std::min( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 139) { * std::min( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 140) { * std::min( x,n ) + n / 2.0; }
  if(env_var_0 == 141) { * std::min( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 142) { * std::min( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 143) { * std::min( x,n ) + x / 2.0; }
  if(env_var_0 == 144) { * std::min( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 145) { * std::min( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 146) { * std::min( x,x ) + n / 2.0; }
  if(env_var_0 == 147) { * std::min( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 148) { * std::min( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 149) { * std::min( x,x ) + x / 2.0; }
  if(env_var_0 == 150) { * toupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 151) { * toupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 152) { * toupper( n ) + n / 2.0; }
  if(env_var_0 == 153) { * toupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 154) { * toupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 155) { * toupper( n ) + x / 2.0; }
  if(env_var_0 == 156) { * toupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 157) { * toupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 158) { * toupper( x ) + n / 2.0; }
  if(env_var_0 == 159) { * toupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 160) { * toupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 161) { * toupper( x ) + x / 2.0; }
  if(env_var_0 == 162) { * x + isupper( n ) / 2.0; }
  if(env_var_0 == 163) { * x + isupper( x ) / 2.0; }
  if(env_var_0 == 164) { * x + n / 2.0; }
  if(env_var_0 == 165) { * x + toupper( n ) / 2.0; }
  if(env_var_0 == 166) { * x + toupper( x ) / 2.0; }
  if(env_var_0 == 167) { * x + x / 2.0; }
  if(env_var_0 == 168) { * isupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 169) { * isupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 170) { * isupper( n ) + n / 2.0; }
  if(env_var_0 == 171) { * isupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 172) { * isupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 173) { * isupper( n ) + x / 2.0; }
  if(env_var_0 == 174) { * isupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 175) { * isupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 176) { * isupper( x ) + n / 2.0; }
  if(env_var_0 == 177) { * isupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 178) { * isupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 179) { * isupper( x ) + x / 2.0; }
  if(env_var_0 == 180) { * n + isupper( n ) / 2.0; }
  if(env_var_0 == 181) { * n + isupper( x ) / 2.0; }
  if(env_var_0 == 182) { * n + n / 2.0; }
  if(env_var_0 == 183) { * n + toupper( n ) / 2.0; }
  if(env_var_0 == 184) { * n + toupper( x ) / 2.0; }
  if(env_var_0 == 185) { * n + x / 2.0; }
  if(env_var_0 == 186) { * std::max( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 187) { * std::max( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 188) { * std::max( n,n ) + n / 2.0; }
  if(env_var_0 == 189) { * std::max( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 190) { * std::max( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 191) { * std::max( n,n ) + x / 2.0; }
  if(env_var_0 == 192) { * std::max( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 193) { * std::max( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 194) { * std::max( n,x ) + n / 2.0; }
  if(env_var_0 == 195) { * std::max( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 196) { * std::max( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 197) { * std::max( n,x ) + x / 2.0; }
  if(env_var_0 == 198) { * std::max( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 199) { * std::max( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 200) { * std::max( x,n ) + n / 2.0; }
  if(env_var_0 == 201) { * std::max( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 202) { * std::max( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 203) { * std::max( x,n ) + x / 2.0; }
  if(env_var_0 == 204) { * std::max( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 205) { * std::max( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 206) { * std::max( x,x ) + n / 2.0; }
  if(env_var_0 == 207) { * std::max( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 208) { * std::max( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 209) { * std::max( x,x ) + x / 2.0; }
  if(env_var_0 == 210) { * std::min( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 211) { * std::min( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 212) { * std::min( n,n ) + n / 2.0; }
  if(env_var_0 == 213) { * std::min( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 214) { * std::min( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 215) { * std::min( n,n ) + x / 2.0; }
  if(env_var_0 == 216) { * std::min( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 217) { * std::min( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 218) { * std::min( n,x ) + n / 2.0; }
  if(env_var_0 == 219) { * std::min( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 220) { * std::min( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 221) { * std::min( n,x ) + x / 2.0; }
  if(env_var_0 == 222) { * std::min( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 223) { * std::min( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 224) { * std::min( x,n ) + n / 2.0; }
  if(env_var_0 == 225) { * std::min( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 226) { * std::min( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 227) { * std::min( x,n ) + x / 2.0; }
  if(env_var_0 == 228) { * std::min( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 229) { * std::min( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 230) { * std::min( x,x ) + n / 2.0; }
  if(env_var_0 == 231) { * std::min( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 232) { * std::min( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 233) { * std::min( x,x ) + x / 2.0; }
  if(env_var_0 == 234) { * toupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 235) { * toupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 236) { * toupper( n ) + n / 2.0; }
  if(env_var_0 == 237) { * toupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 238) { * toupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 239) { * toupper( n ) + x / 2.0; }
  if(env_var_0 == 240) { * toupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 241) { * toupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 242) { * toupper( x ) + n / 2.0; }
  if(env_var_0 == 243) { * toupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 244) { * toupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 245) { * toupper( x ) + x / 2.0; }
  if(env_var_0 == 246) { * x + isupper( n ) / 2.0; }
  if(env_var_0 == 247) { * x + isupper( x ) / 2.0; }
  if(env_var_0 == 248) { * x + n / 2.0; }
  if(env_var_0 == 249) { * x + toupper( n ) / 2.0; }
  if(env_var_0 == 250) { * x + toupper( x ) / 2.0; }
  if(env_var_0 == 251) { * x + x / 2.0; }
  if(env_var_0 == 252) { * isupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 253) { * isupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 254) { * isupper( n ) + n / 2.0; }
  if(env_var_0 == 255) { * isupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 256) { * isupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 257) { * isupper( n ) + x / 2.0; }
  if(env_var_0 == 258) { * isupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 259) { * isupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 260) { * isupper( x ) + n / 2.0; }
  if(env_var_0 == 261) { * isupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 262) { * isupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 263) { * isupper( x ) + x / 2.0; }
  if(env_var_0 == 264) { * n + isupper( n ) / 2.0; }
  if(env_var_0 == 265) { * n + isupper( x ) / 2.0; }
  if(env_var_0 == 266) { * n + n / 2.0; }
  if(env_var_0 == 267) { * n + toupper( n ) / 2.0; }
  if(env_var_0 == 268) { * n + toupper( x ) / 2.0; }
  if(env_var_0 == 269) { * n + x / 2.0; }
  if(env_var_0 == 270) { * std::max( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 271) { * std::max( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 272) { * std::max( n,n ) + n / 2.0; }
  if(env_var_0 == 273) { * std::max( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 274) { * std::max( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 275) { * std::max( n,n ) + x / 2.0; }
  if(env_var_0 == 276) { * std::max( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 277) { * std::max( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 278) { * std::max( n,x ) + n / 2.0; }
  if(env_var_0 == 279) { * std::max( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 280) { * std::max( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 281) { * std::max( n,x ) + x / 2.0; }
  if(env_var_0 == 282) { * std::max( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 283) { * std::max( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 284) { * std::max( x,n ) + n / 2.0; }
  if(env_var_0 == 285) { * std::max( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 286) { * std::max( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 287) { * std::max( x,n ) + x / 2.0; }
  if(env_var_0 == 288) { * std::max( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 289) { * std::max( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 290) { * std::max( x,x ) + n / 2.0; }
  if(env_var_0 == 291) { * std::max( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 292) { * std::max( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 293) { * std::max( x,x ) + x / 2.0; }
  if(env_var_0 == 294) { * std::min( n,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 295) { * std::min( n,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 296) { * std::min( n,n ) + n / 2.0; }
  if(env_var_0 == 297) { * std::min( n,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 298) { * std::min( n,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 299) { * std::min( n,n ) + x / 2.0; }
  if(env_var_0 == 300) { * std::min( n,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 301) { * std::min( n,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 302) { * std::min( n,x ) + n / 2.0; }
  if(env_var_0 == 303) { * std::min( n,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 304) { * std::min( n,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 305) { * std::min( n,x ) + x / 2.0; }
  if(env_var_0 == 306) { * std::min( x,n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 307) { * std::min( x,n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 308) { * std::min( x,n ) + n / 2.0; }
  if(env_var_0 == 309) { * std::min( x,n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 310) { * std::min( x,n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 311) { * std::min( x,n ) + x / 2.0; }
  if(env_var_0 == 312) { * std::min( x,x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 313) { * std::min( x,x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 314) { * std::min( x,x ) + n / 2.0; }
  if(env_var_0 == 315) { * std::min( x,x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 316) { * std::min( x,x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 317) { * std::min( x,x ) + x / 2.0; }
  if(env_var_0 == 318) { * toupper( n ) + isupper( n ) / 2.0; }
  if(env_var_0 == 319) { * toupper( n ) + isupper( x ) / 2.0; }
  if(env_var_0 == 320) { * toupper( n ) + n / 2.0; }
  if(env_var_0 == 321) { * toupper( n ) + toupper( n ) / 2.0; }
  if(env_var_0 == 322) { * toupper( n ) + toupper( x ) / 2.0; }
  if(env_var_0 == 323) { * toupper( n ) + x / 2.0; }
  if(env_var_0 == 324) { * toupper( x ) + isupper( n ) / 2.0; }
  if(env_var_0 == 325) { * toupper( x ) + isupper( x ) / 2.0; }
  if(env_var_0 == 326) { * toupper( x ) + n / 2.0; }
  if(env_var_0 == 327) { * toupper( x ) + toupper( n ) / 2.0; }
  if(env_var_0 == 328) { * toupper( x ) + toupper( x ) / 2.0; }
  if(env_var_0 == 329) { * toupper( x ) + x / 2.0; }
  if(env_var_0 == 330) { * x + isupper( n ) / 2.0; }
  if(env_var_0 == 331) { * x + isupper( x ) / 2.0; }
  if(env_var_0 == 332) { * x + n / 2.0; }
  if(env_var_0 == 333) { * x + toupper( n ) / 2.0; }
  if(env_var_0 == 334) { * x + toupper( x ) / 2.0; }
  if(env_var_0 == 335) { * x + x / 2.0; }

  ;
  return floor ( x ) + 1 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {56,92,52,96,96,63,51,79,70,9};
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
