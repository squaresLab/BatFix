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
  return accumulate ( arr, arr + n, 0 ) - ( ( n - 1 ) * n / 2 );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int n ) {
  if(env_var_0 == 0) { return arr - (arr - 1) * arr // 2; }
  if(env_var_0 == 1) { return arr - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 2) { return arr - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 3) { return arr - (arr - 1) * n // 2; }
  if(env_var_0 == 4) { return arr - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 5) { return arr - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 6) { return arr - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 7) { return arr - (arr+n - 1) * n // 2; }
  if(env_var_0 == 8) { return arr - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 9) { return arr - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 10) { return arr - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 11) { return arr - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 12) { return arr - (n - 1) * arr // 2; }
  if(env_var_0 == 13) { return arr - (n - 1) * arr+n // 2; }
  if(env_var_0 == 14) { return arr - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 15) { return arr - (n - 1) * n // 2; }
  if(env_var_0 == 16) { return arr+n - (arr - 1) * arr // 2; }
  if(env_var_0 == 17) { return arr+n - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 18) { return arr+n - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 19) { return arr+n - (arr - 1) * n // 2; }
  if(env_var_0 == 20) { return arr+n - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 21) { return arr+n - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 22) { return arr+n - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 23) { return arr+n - (arr+n - 1) * n // 2; }
  if(env_var_0 == 24) { return arr+n - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 25) { return arr+n - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 26) { return arr+n - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 27) { return arr+n - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 28) { return arr+n - (n - 1) * arr // 2; }
  if(env_var_0 == 29) { return arr+n - (n - 1) * arr+n // 2; }
  if(env_var_0 == 30) { return arr+n - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 31) { return arr+n - (n - 1) * n // 2; }
  if(env_var_0 == 32) { return arr[n] - (arr - 1) * arr // 2; }
  if(env_var_0 == 33) { return arr[n] - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 34) { return arr[n] - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 35) { return arr[n] - (arr - 1) * n // 2; }
  if(env_var_0 == 36) { return arr[n] - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 37) { return arr[n] - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 38) { return arr[n] - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 39) { return arr[n] - (arr+n - 1) * n // 2; }
  if(env_var_0 == 40) { return arr[n] - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 41) { return arr[n] - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 42) { return arr[n] - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 43) { return arr[n] - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 44) { return arr[n] - (n - 1) * arr // 2; }
  if(env_var_0 == 45) { return arr[n] - (n - 1) * arr+n // 2; }
  if(env_var_0 == 46) { return arr[n] - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 47) { return arr[n] - (n - 1) * n // 2; }
  if(env_var_0 == 48) { return isupper( arr[n] ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 49) { return isupper( arr[n] ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 50) { return isupper( arr[n] ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 51) { return isupper( arr[n] ) - (arr - 1) * n // 2; }
  if(env_var_0 == 52) { return isupper( arr[n] ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 53) { return isupper( arr[n] ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 54) { return isupper( arr[n] ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 55) { return isupper( arr[n] ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 56) { return isupper( arr[n] ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 57) { return isupper( arr[n] ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 58) { return isupper( arr[n] ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 59) { return isupper( arr[n] ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 60) { return isupper( arr[n] ) - (n - 1) * arr // 2; }
  if(env_var_0 == 61) { return isupper( arr[n] ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 62) { return isupper( arr[n] ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 63) { return isupper( arr[n] ) - (n - 1) * n // 2; }
  if(env_var_0 == 64) { return isupper( n ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 65) { return isupper( n ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 66) { return isupper( n ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 67) { return isupper( n ) - (arr - 1) * n // 2; }
  if(env_var_0 == 68) { return isupper( n ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 69) { return isupper( n ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 70) { return isupper( n ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 71) { return isupper( n ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 72) { return isupper( n ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 73) { return isupper( n ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 74) { return isupper( n ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 75) { return isupper( n ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 76) { return isupper( n ) - (n - 1) * arr // 2; }
  if(env_var_0 == 77) { return isupper( n ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 78) { return isupper( n ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 79) { return isupper( n ) - (n - 1) * n // 2; }
  if(env_var_0 == 80) { return n - (arr - 1) * arr // 2; }
  if(env_var_0 == 81) { return n - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 82) { return n - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 83) { return n - (arr - 1) * n // 2; }
  if(env_var_0 == 84) { return n - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 85) { return n - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 86) { return n - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 87) { return n - (arr+n - 1) * n // 2; }
  if(env_var_0 == 88) { return n - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 89) { return n - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 90) { return n - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 91) { return n - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 92) { return n - (n - 1) * arr // 2; }
  if(env_var_0 == 93) { return n - (n - 1) * arr+n // 2; }
  if(env_var_0 == 94) { return n - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 95) { return n - (n - 1) * n // 2; }
  if(env_var_0 == 96) { return std::max( arr[n],arr[n] ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 97) { return std::max( arr[n],arr[n] ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 98) { return std::max( arr[n],arr[n] ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 99) { return std::max( arr[n],arr[n] ) - (arr - 1) * n // 2; }
  if(env_var_0 == 100) { return std::max( arr[n],arr[n] ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 101) { return std::max( arr[n],arr[n] ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 102) { return std::max( arr[n],arr[n] ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 103) { return std::max( arr[n],arr[n] ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 104) { return std::max( arr[n],arr[n] ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 105) { return std::max( arr[n],arr[n] ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 106) { return std::max( arr[n],arr[n] ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 107) { return std::max( arr[n],arr[n] ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 108) { return std::max( arr[n],arr[n] ) - (n - 1) * arr // 2; }
  if(env_var_0 == 109) { return std::max( arr[n],arr[n] ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 110) { return std::max( arr[n],arr[n] ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 111) { return std::max( arr[n],arr[n] ) - (n - 1) * n // 2; }
  if(env_var_0 == 112) { return std::max( arr[n],n ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 113) { return std::max( arr[n],n ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 114) { return std::max( arr[n],n ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 115) { return std::max( arr[n],n ) - (arr - 1) * n // 2; }
  if(env_var_0 == 116) { return std::max( arr[n],n ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 117) { return std::max( arr[n],n ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 118) { return std::max( arr[n],n ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 119) { return std::max( arr[n],n ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 120) { return std::max( arr[n],n ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 121) { return std::max( arr[n],n ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 122) { return std::max( arr[n],n ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 123) { return std::max( arr[n],n ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 124) { return std::max( arr[n],n ) - (n - 1) * arr // 2; }
  if(env_var_0 == 125) { return std::max( arr[n],n ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 126) { return std::max( arr[n],n ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 127) { return std::max( arr[n],n ) - (n - 1) * n // 2; }
  if(env_var_0 == 128) { return std::max( n,arr[n] ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 129) { return std::max( n,arr[n] ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 130) { return std::max( n,arr[n] ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 131) { return std::max( n,arr[n] ) - (arr - 1) * n // 2; }
  if(env_var_0 == 132) { return std::max( n,arr[n] ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 133) { return std::max( n,arr[n] ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 134) { return std::max( n,arr[n] ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 135) { return std::max( n,arr[n] ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 136) { return std::max( n,arr[n] ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 137) { return std::max( n,arr[n] ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 138) { return std::max( n,arr[n] ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 139) { return std::max( n,arr[n] ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 140) { return std::max( n,arr[n] ) - (n - 1) * arr // 2; }
  if(env_var_0 == 141) { return std::max( n,arr[n] ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 142) { return std::max( n,arr[n] ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 143) { return std::max( n,arr[n] ) - (n - 1) * n // 2; }
  if(env_var_0 == 144) { return std::max( n,n ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 145) { return std::max( n,n ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 146) { return std::max( n,n ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 147) { return std::max( n,n ) - (arr - 1) * n // 2; }
  if(env_var_0 == 148) { return std::max( n,n ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 149) { return std::max( n,n ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 150) { return std::max( n,n ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 151) { return std::max( n,n ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 152) { return std::max( n,n ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 153) { return std::max( n,n ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 154) { return std::max( n,n ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 155) { return std::max( n,n ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 156) { return std::max( n,n ) - (n - 1) * arr // 2; }
  if(env_var_0 == 157) { return std::max( n,n ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 158) { return std::max( n,n ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 159) { return std::max( n,n ) - (n - 1) * n // 2; }
  if(env_var_0 == 160) { return std::min( arr[n],arr[n] ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 161) { return std::min( arr[n],arr[n] ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 162) { return std::min( arr[n],arr[n] ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 163) { return std::min( arr[n],arr[n] ) - (arr - 1) * n // 2; }
  if(env_var_0 == 164) { return std::min( arr[n],arr[n] ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 165) { return std::min( arr[n],arr[n] ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 166) { return std::min( arr[n],arr[n] ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 167) { return std::min( arr[n],arr[n] ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 168) { return std::min( arr[n],arr[n] ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 169) { return std::min( arr[n],arr[n] ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 170) { return std::min( arr[n],arr[n] ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 171) { return std::min( arr[n],arr[n] ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 172) { return std::min( arr[n],arr[n] ) - (n - 1) * arr // 2; }
  if(env_var_0 == 173) { return std::min( arr[n],arr[n] ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 174) { return std::min( arr[n],arr[n] ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 175) { return std::min( arr[n],arr[n] ) - (n - 1) * n // 2; }
  if(env_var_0 == 176) { return std::min( arr[n],n ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 177) { return std::min( arr[n],n ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 178) { return std::min( arr[n],n ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 179) { return std::min( arr[n],n ) - (arr - 1) * n // 2; }
  if(env_var_0 == 180) { return std::min( arr[n],n ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 181) { return std::min( arr[n],n ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 182) { return std::min( arr[n],n ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 183) { return std::min( arr[n],n ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 184) { return std::min( arr[n],n ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 185) { return std::min( arr[n],n ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 186) { return std::min( arr[n],n ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 187) { return std::min( arr[n],n ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 188) { return std::min( arr[n],n ) - (n - 1) * arr // 2; }
  if(env_var_0 == 189) { return std::min( arr[n],n ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 190) { return std::min( arr[n],n ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 191) { return std::min( arr[n],n ) - (n - 1) * n // 2; }
  if(env_var_0 == 192) { return std::min( n,arr[n] ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 193) { return std::min( n,arr[n] ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 194) { return std::min( n,arr[n] ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 195) { return std::min( n,arr[n] ) - (arr - 1) * n // 2; }
  if(env_var_0 == 196) { return std::min( n,arr[n] ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 197) { return std::min( n,arr[n] ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 198) { return std::min( n,arr[n] ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 199) { return std::min( n,arr[n] ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 200) { return std::min( n,arr[n] ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 201) { return std::min( n,arr[n] ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 202) { return std::min( n,arr[n] ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 203) { return std::min( n,arr[n] ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 204) { return std::min( n,arr[n] ) - (n - 1) * arr // 2; }
  if(env_var_0 == 205) { return std::min( n,arr[n] ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 206) { return std::min( n,arr[n] ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 207) { return std::min( n,arr[n] ) - (n - 1) * n // 2; }
  if(env_var_0 == 208) { return std::min( n,n ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 209) { return std::min( n,n ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 210) { return std::min( n,n ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 211) { return std::min( n,n ) - (arr - 1) * n // 2; }
  if(env_var_0 == 212) { return std::min( n,n ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 213) { return std::min( n,n ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 214) { return std::min( n,n ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 215) { return std::min( n,n ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 216) { return std::min( n,n ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 217) { return std::min( n,n ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 218) { return std::min( n,n ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 219) { return std::min( n,n ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 220) { return std::min( n,n ) - (n - 1) * arr // 2; }
  if(env_var_0 == 221) { return std::min( n,n ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 222) { return std::min( n,n ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 223) { return std::min( n,n ) - (n - 1) * n // 2; }
  if(env_var_0 == 224) { return toupper( arr[n] ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 225) { return toupper( arr[n] ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 226) { return toupper( arr[n] ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 227) { return toupper( arr[n] ) - (arr - 1) * n // 2; }
  if(env_var_0 == 228) { return toupper( arr[n] ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 229) { return toupper( arr[n] ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 230) { return toupper( arr[n] ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 231) { return toupper( arr[n] ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 232) { return toupper( arr[n] ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 233) { return toupper( arr[n] ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 234) { return toupper( arr[n] ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 235) { return toupper( arr[n] ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 236) { return toupper( arr[n] ) - (n - 1) * arr // 2; }
  if(env_var_0 == 237) { return toupper( arr[n] ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 238) { return toupper( arr[n] ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 239) { return toupper( arr[n] ) - (n - 1) * n // 2; }
  if(env_var_0 == 240) { return toupper( n ) - (arr - 1) * arr // 2; }
  if(env_var_0 == 241) { return toupper( n ) - (arr - 1) * arr+n // 2; }
  if(env_var_0 == 242) { return toupper( n ) - (arr - 1) * arr[n] // 2; }
  if(env_var_0 == 243) { return toupper( n ) - (arr - 1) * n // 2; }
  if(env_var_0 == 244) { return toupper( n ) - (arr+n - 1) * arr // 2; }
  if(env_var_0 == 245) { return toupper( n ) - (arr+n - 1) * arr+n // 2; }
  if(env_var_0 == 246) { return toupper( n ) - (arr+n - 1) * arr[n] // 2; }
  if(env_var_0 == 247) { return toupper( n ) - (arr+n - 1) * n // 2; }
  if(env_var_0 == 248) { return toupper( n ) - (arr[n] - 1) * arr // 2; }
  if(env_var_0 == 249) { return toupper( n ) - (arr[n] - 1) * arr+n // 2; }
  if(env_var_0 == 250) { return toupper( n ) - (arr[n] - 1) * arr[n] // 2; }
  if(env_var_0 == 251) { return toupper( n ) - (arr[n] - 1) * n // 2; }
  if(env_var_0 == 252) { return toupper( n ) - (n - 1) * arr // 2; }
  if(env_var_0 == 253) { return toupper( n ) - (n - 1) * arr+n // 2; }
  if(env_var_0 == 254) { return toupper( n ) - (n - 1) * arr[n] // 2; }
  if(env_var_0 == 255) { return toupper( n ) - (n - 1) * n // 2; }
   ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,8,27,34,39,42,43,54,72},{-38,-66,-38,-48,-96,74,-32,-62,-34,-32,-88,-12,-8,-4},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},{88,86,23,81,76,16,94,64,59,50,71,62,10,89,73,64,65,96,83,40,99,40,77,33,14,62,6,89,74,96,93,29,15,93,9,58,98,76,23,23,70,99},{-96,-94,-82,-64,-56,-40,-36,-34,-32,-24,-24,-22,-20,-20,-20,-18,-18,-12,-10,-6,16,20,20,22,26,30,36,46,46,50,50,52,64,64,64,68,72,74,76,92,96,98},{0,1,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,0,1,1},{2,6,7,13,19,23,37,39,42,42,43,45,52,53,55,56,59,63,66,71,76,85,86,89,92,94,96,99},{52,-56,-12,78,6,32,0,36,34,-54,-74,-32},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{10,42,50,5,74,81,30,76,6,34,86,4,77,71,96,22,34,50,35,16,60,11,21,38}};
    vector<int> param1 {5,9,8,31,28,25,27,11,15,13};
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

