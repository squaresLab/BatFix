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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
bool f_gold ( int a [ ], int n ) {
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) mp [ a [ i ] ] ++;
  for ( auto x : mp ) if ( x . second >= n / 2 ) return true;
  return false;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int a [ ], int n ) {
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) if ( mp . count ( a [ i ] ) ) mp [ a [ i ] ] = mp [ a [ i ] ] + 1;
  else mp [ a [ i ] ] = 1;
  for ( auto x : mp ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = a >= (a / 2); }
  if(env_var_0 == 1) { _res_key_if_0 = a >= (a+n / 2); }
  if(env_var_0 == 2) { _res_key_if_0 = a >= (a+x.second / 2); }
  if(env_var_0 == 3) { _res_key_if_0 = a >= (a[n] / 2); }
  if(env_var_0 == 4) { _res_key_if_0 = a >= (a[x.second] / 2); }
  if(env_var_0 == 5) { _res_key_if_0 = a >= (mp / 2); }
  if(env_var_0 == 6) { _res_key_if_0 = a >= (mp.begin() / 2); }
  if(env_var_0 == 7) { _res_key_if_0 = a >= (mp.end() / 2); }
  if(env_var_0 == 8) { _res_key_if_0 = a >= (n / 2); }
  if(env_var_0 == 9) { _res_key_if_0 = a >= (x / 2); }
  if(env_var_0 == 10) { _res_key_if_0 = a >= (x.first / 2); }
  if(env_var_0 == 11) { _res_key_if_0 = a >= (x.second / 2); }
  if(env_var_0 == 12) { _res_key_if_0 = a+n >= (a / 2); }
  if(env_var_0 == 13) { _res_key_if_0 = a+n >= (a+n / 2); }
  if(env_var_0 == 14) { _res_key_if_0 = a+n >= (a+x.second / 2); }
  if(env_var_0 == 15) { _res_key_if_0 = a+n >= (a[n] / 2); }
  if(env_var_0 == 16) { _res_key_if_0 = a+n >= (a[x.second] / 2); }
  if(env_var_0 == 17) { _res_key_if_0 = a+n >= (mp / 2); }
  if(env_var_0 == 18) { _res_key_if_0 = a+n >= (mp.begin() / 2); }
  if(env_var_0 == 19) { _res_key_if_0 = a+n >= (mp.end() / 2); }
  if(env_var_0 == 20) { _res_key_if_0 = a+n >= (n / 2); }
  if(env_var_0 == 21) { _res_key_if_0 = a+n >= (x / 2); }
  if(env_var_0 == 22) { _res_key_if_0 = a+n >= (x.first / 2); }
  if(env_var_0 == 23) { _res_key_if_0 = a+n >= (x.second / 2); }
  if(env_var_0 == 24) { _res_key_if_0 = a+x.second >= (a / 2); }
  if(env_var_0 == 25) { _res_key_if_0 = a+x.second >= (a+n / 2); }
  if(env_var_0 == 26) { _res_key_if_0 = a+x.second >= (a+x.second / 2); }
  if(env_var_0 == 27) { _res_key_if_0 = a+x.second >= (a[n] / 2); }
  if(env_var_0 == 28) { _res_key_if_0 = a+x.second >= (a[x.second] / 2); }
  if(env_var_0 == 29) { _res_key_if_0 = a+x.second >= (mp / 2); }
  if(env_var_0 == 30) { _res_key_if_0 = a+x.second >= (mp.begin() / 2); }
  if(env_var_0 == 31) { _res_key_if_0 = a+x.second >= (mp.end() / 2); }
  if(env_var_0 == 32) { _res_key_if_0 = a+x.second >= (n / 2); }
  if(env_var_0 == 33) { _res_key_if_0 = a+x.second >= (x / 2); }
  if(env_var_0 == 34) { _res_key_if_0 = a+x.second >= (x.first / 2); }
  if(env_var_0 == 35) { _res_key_if_0 = a+x.second >= (x.second / 2); }
  if(env_var_0 == 36) { _res_key_if_0 = a[n] >= (a / 2); }
  if(env_var_0 == 37) { _res_key_if_0 = a[n] >= (a+n / 2); }
  if(env_var_0 == 38) { _res_key_if_0 = a[n] >= (a+x.second / 2); }
  if(env_var_0 == 39) { _res_key_if_0 = a[n] >= (a[n] / 2); }
  if(env_var_0 == 40) { _res_key_if_0 = a[n] >= (a[x.second] / 2); }
  if(env_var_0 == 41) { _res_key_if_0 = a[n] >= (mp / 2); }
  if(env_var_0 == 42) { _res_key_if_0 = a[n] >= (mp.begin() / 2); }
  if(env_var_0 == 43) { _res_key_if_0 = a[n] >= (mp.end() / 2); }
  if(env_var_0 == 44) { _res_key_if_0 = a[n] >= (n / 2); }
  if(env_var_0 == 45) { _res_key_if_0 = a[n] >= (x / 2); }
  if(env_var_0 == 46) { _res_key_if_0 = a[n] >= (x.first / 2); }
  if(env_var_0 == 47) { _res_key_if_0 = a[n] >= (x.second / 2); }
  if(env_var_0 == 48) { _res_key_if_0 = a[x.second] >= (a / 2); }
  if(env_var_0 == 49) { _res_key_if_0 = a[x.second] >= (a+n / 2); }
  if(env_var_0 == 50) { _res_key_if_0 = a[x.second] >= (a+x.second / 2); }
  if(env_var_0 == 51) { _res_key_if_0 = a[x.second] >= (a[n] / 2); }
  if(env_var_0 == 52) { _res_key_if_0 = a[x.second] >= (a[x.second] / 2); }
  if(env_var_0 == 53) { _res_key_if_0 = a[x.second] >= (mp / 2); }
  if(env_var_0 == 54) { _res_key_if_0 = a[x.second] >= (mp.begin() / 2); }
  if(env_var_0 == 55) { _res_key_if_0 = a[x.second] >= (mp.end() / 2); }
  if(env_var_0 == 56) { _res_key_if_0 = a[x.second] >= (n / 2); }
  if(env_var_0 == 57) { _res_key_if_0 = a[x.second] >= (x / 2); }
  if(env_var_0 == 58) { _res_key_if_0 = a[x.second] >= (x.first / 2); }
  if(env_var_0 == 59) { _res_key_if_0 = a[x.second] >= (x.second / 2); }
  if(env_var_0 == 60) { _res_key_if_0 = isupper() >= (a / 2); }
  if(env_var_0 == 61) { _res_key_if_0 = isupper() >= (a+n / 2); }
  if(env_var_0 == 62) { _res_key_if_0 = isupper() >= (a+x.second / 2); }
  if(env_var_0 == 63) { _res_key_if_0 = isupper() >= (a[n] / 2); }
  if(env_var_0 == 64) { _res_key_if_0 = isupper() >= (a[x.second] / 2); }
  if(env_var_0 == 65) { _res_key_if_0 = isupper() >= (mp / 2); }
  if(env_var_0 == 66) { _res_key_if_0 = isupper() >= (mp.begin() / 2); }
  if(env_var_0 == 67) { _res_key_if_0 = isupper() >= (mp.end() / 2); }
  if(env_var_0 == 68) { _res_key_if_0 = isupper() >= (n / 2); }
  if(env_var_0 == 69) { _res_key_if_0 = isupper() >= (x / 2); }
  if(env_var_0 == 70) { _res_key_if_0 = isupper() >= (x.first / 2); }
  if(env_var_0 == 71) { _res_key_if_0 = isupper() >= (x.second / 2); }
  if(env_var_0 == 72) { _res_key_if_0 = mp >= (a / 2); }
  if(env_var_0 == 73) { _res_key_if_0 = mp >= (a+n / 2); }
  if(env_var_0 == 74) { _res_key_if_0 = mp >= (a+x.second / 2); }
  if(env_var_0 == 75) { _res_key_if_0 = mp >= (a[n] / 2); }
  if(env_var_0 == 76) { _res_key_if_0 = mp >= (a[x.second] / 2); }
  if(env_var_0 == 77) { _res_key_if_0 = mp >= (mp / 2); }
  if(env_var_0 == 78) { _res_key_if_0 = mp >= (mp.begin() / 2); }
  if(env_var_0 == 79) { _res_key_if_0 = mp >= (mp.end() / 2); }
  if(env_var_0 == 80) { _res_key_if_0 = mp >= (n / 2); }
  if(env_var_0 == 81) { _res_key_if_0 = mp >= (x / 2); }
  if(env_var_0 == 82) { _res_key_if_0 = mp >= (x.first / 2); }
  if(env_var_0 == 83) { _res_key_if_0 = mp >= (x.second / 2); }
  if(env_var_0 == 84) { _res_key_if_0 = mp.begin() >= (a / 2); }
  if(env_var_0 == 85) { _res_key_if_0 = mp.begin() >= (a+n / 2); }
  if(env_var_0 == 86) { _res_key_if_0 = mp.begin() >= (a+x.second / 2); }
  if(env_var_0 == 87) { _res_key_if_0 = mp.begin() >= (a[n] / 2); }
  if(env_var_0 == 88) { _res_key_if_0 = mp.begin() >= (a[x.second] / 2); }
  if(env_var_0 == 89) { _res_key_if_0 = mp.begin() >= (mp / 2); }
  if(env_var_0 == 90) { _res_key_if_0 = mp.begin() >= (mp.begin() / 2); }
  if(env_var_0 == 91) { _res_key_if_0 = mp.begin() >= (mp.end() / 2); }
  if(env_var_0 == 92) { _res_key_if_0 = mp.begin() >= (n / 2); }
  if(env_var_0 == 93) { _res_key_if_0 = mp.begin() >= (x / 2); }
  if(env_var_0 == 94) { _res_key_if_0 = mp.begin() >= (x.first / 2); }
  if(env_var_0 == 95) { _res_key_if_0 = mp.begin() >= (x.second / 2); }
  if(env_var_0 == 96) { _res_key_if_0 = mp.bucket_count() >= (a / 2); }
  if(env_var_0 == 97) { _res_key_if_0 = mp.bucket_count() >= (a+n / 2); }
  if(env_var_0 == 98) { _res_key_if_0 = mp.bucket_count() >= (a+x.second / 2); }
  if(env_var_0 == 99) { _res_key_if_0 = mp.bucket_count() >= (a[n] / 2); }
  if(env_var_0 == 100) { _res_key_if_0 = mp.bucket_count() >= (a[x.second] / 2); }
  if(env_var_0 == 101) { _res_key_if_0 = mp.bucket_count() >= (mp / 2); }
  if(env_var_0 == 102) { _res_key_if_0 = mp.bucket_count() >= (mp.begin() / 2); }
  if(env_var_0 == 103) { _res_key_if_0 = mp.bucket_count() >= (mp.end() / 2); }
  if(env_var_0 == 104) { _res_key_if_0 = mp.bucket_count() >= (n / 2); }
  if(env_var_0 == 105) { _res_key_if_0 = mp.bucket_count() >= (x / 2); }
  if(env_var_0 == 106) { _res_key_if_0 = mp.bucket_count() >= (x.first / 2); }
  if(env_var_0 == 107) { _res_key_if_0 = mp.bucket_count() >= (x.second / 2); }
  if(env_var_0 == 108) { _res_key_if_0 = mp.cend() >= (a / 2); }
  if(env_var_0 == 109) { _res_key_if_0 = mp.cend() >= (a+n / 2); }
  if(env_var_0 == 110) { _res_key_if_0 = mp.cend() >= (a+x.second / 2); }
  if(env_var_0 == 111) { _res_key_if_0 = mp.cend() >= (a[n] / 2); }
  if(env_var_0 == 112) { _res_key_if_0 = mp.cend() >= (a[x.second] / 2); }
  if(env_var_0 == 113) { _res_key_if_0 = mp.cend() >= (mp / 2); }
  if(env_var_0 == 114) { _res_key_if_0 = mp.cend() >= (mp.begin() / 2); }
  if(env_var_0 == 115) { _res_key_if_0 = mp.cend() >= (mp.end() / 2); }
  if(env_var_0 == 116) { _res_key_if_0 = mp.cend() >= (n / 2); }
  if(env_var_0 == 117) { _res_key_if_0 = mp.cend() >= (x / 2); }
  if(env_var_0 == 118) { _res_key_if_0 = mp.cend() >= (x.first / 2); }
  if(env_var_0 == 119) { _res_key_if_0 = mp.cend() >= (x.second / 2); }
  if(env_var_0 == 120) { _res_key_if_0 = mp.empty() >= (a / 2); }
  if(env_var_0 == 121) { _res_key_if_0 = mp.empty() >= (a+n / 2); }
  if(env_var_0 == 122) { _res_key_if_0 = mp.empty() >= (a+x.second / 2); }
  if(env_var_0 == 123) { _res_key_if_0 = mp.empty() >= (a[n] / 2); }
  if(env_var_0 == 124) { _res_key_if_0 = mp.empty() >= (a[x.second] / 2); }
  if(env_var_0 == 125) { _res_key_if_0 = mp.empty() >= (mp / 2); }
  if(env_var_0 == 126) { _res_key_if_0 = mp.empty() >= (mp.begin() / 2); }
  if(env_var_0 == 127) { _res_key_if_0 = mp.empty() >= (mp.end() / 2); }
  if(env_var_0 == 128) { _res_key_if_0 = mp.empty() >= (n / 2); }
  if(env_var_0 == 129) { _res_key_if_0 = mp.empty() >= (x / 2); }
  if(env_var_0 == 130) { _res_key_if_0 = mp.empty() >= (x.first / 2); }
  if(env_var_0 == 131) { _res_key_if_0 = mp.empty() >= (x.second / 2); }
  if(env_var_0 == 132) { _res_key_if_0 = mp.end() >= (a / 2); }
  if(env_var_0 == 133) { _res_key_if_0 = mp.end() >= (a+n / 2); }
  if(env_var_0 == 134) { _res_key_if_0 = mp.end() >= (a+x.second / 2); }
  if(env_var_0 == 135) { _res_key_if_0 = mp.end() >= (a[n] / 2); }
  if(env_var_0 == 136) { _res_key_if_0 = mp.end() >= (a[x.second] / 2); }
  if(env_var_0 == 137) { _res_key_if_0 = mp.end() >= (mp / 2); }
  if(env_var_0 == 138) { _res_key_if_0 = mp.end() >= (mp.begin() / 2); }
  if(env_var_0 == 139) { _res_key_if_0 = mp.end() >= (mp.end() / 2); }
  if(env_var_0 == 140) { _res_key_if_0 = mp.end() >= (n / 2); }
  if(env_var_0 == 141) { _res_key_if_0 = mp.end() >= (x / 2); }
  if(env_var_0 == 142) { _res_key_if_0 = mp.end() >= (x.first / 2); }
  if(env_var_0 == 143) { _res_key_if_0 = mp.end() >= (x.second / 2); }
  if(env_var_0 == 144) { _res_key_if_0 = mp.hash_function() >= (a / 2); }
  if(env_var_0 == 145) { _res_key_if_0 = mp.hash_function() >= (a+n / 2); }
  if(env_var_0 == 146) { _res_key_if_0 = mp.hash_function() >= (a+x.second / 2); }
  if(env_var_0 == 147) { _res_key_if_0 = mp.hash_function() >= (a[n] / 2); }
  if(env_var_0 == 148) { _res_key_if_0 = mp.hash_function() >= (a[x.second] / 2); }
  if(env_var_0 == 149) { _res_key_if_0 = mp.hash_function() >= (mp / 2); }
  if(env_var_0 == 150) { _res_key_if_0 = mp.hash_function() >= (mp.begin() / 2); }
  if(env_var_0 == 151) { _res_key_if_0 = mp.hash_function() >= (mp.end() / 2); }
  if(env_var_0 == 152) { _res_key_if_0 = mp.hash_function() >= (n / 2); }
  if(env_var_0 == 153) { _res_key_if_0 = mp.hash_function() >= (x / 2); }
  if(env_var_0 == 154) { _res_key_if_0 = mp.hash_function() >= (x.first / 2); }
  if(env_var_0 == 155) { _res_key_if_0 = mp.hash_function() >= (x.second / 2); }
  if(env_var_0 == 156) { _res_key_if_0 = mp.load_factor() >= (a / 2); }
  if(env_var_0 == 157) { _res_key_if_0 = mp.load_factor() >= (a+n / 2); }
  if(env_var_0 == 158) { _res_key_if_0 = mp.load_factor() >= (a+x.second / 2); }
  if(env_var_0 == 159) { _res_key_if_0 = mp.load_factor() >= (a[n] / 2); }
  if(env_var_0 == 160) { _res_key_if_0 = mp.load_factor() >= (a[x.second] / 2); }
  if(env_var_0 == 161) { _res_key_if_0 = mp.load_factor() >= (mp / 2); }
  if(env_var_0 == 162) { _res_key_if_0 = mp.load_factor() >= (mp.begin() / 2); }
  if(env_var_0 == 163) { _res_key_if_0 = mp.load_factor() >= (mp.end() / 2); }
  if(env_var_0 == 164) { _res_key_if_0 = mp.load_factor() >= (n / 2); }
  if(env_var_0 == 165) { _res_key_if_0 = mp.load_factor() >= (x / 2); }
  if(env_var_0 == 166) { _res_key_if_0 = mp.load_factor() >= (x.first / 2); }
  if(env_var_0 == 167) { _res_key_if_0 = mp.load_factor() >= (x.second / 2); }
  if(env_var_0 == 168) { _res_key_if_0 = mp.max_size() >= (a / 2); }
  if(env_var_0 == 169) { _res_key_if_0 = mp.max_size() >= (a+n / 2); }
  if(env_var_0 == 170) { _res_key_if_0 = mp.max_size() >= (a+x.second / 2); }
  if(env_var_0 == 171) { _res_key_if_0 = mp.max_size() >= (a[n] / 2); }
  if(env_var_0 == 172) { _res_key_if_0 = mp.max_size() >= (a[x.second] / 2); }
  if(env_var_0 == 173) { _res_key_if_0 = mp.max_size() >= (mp / 2); }
  if(env_var_0 == 174) { _res_key_if_0 = mp.max_size() >= (mp.begin() / 2); }
  if(env_var_0 == 175) { _res_key_if_0 = mp.max_size() >= (mp.end() / 2); }
  if(env_var_0 == 176) { _res_key_if_0 = mp.max_size() >= (n / 2); }
  if(env_var_0 == 177) { _res_key_if_0 = mp.max_size() >= (x / 2); }
  if(env_var_0 == 178) { _res_key_if_0 = mp.max_size() >= (x.first / 2); }
  if(env_var_0 == 179) { _res_key_if_0 = mp.max_size() >= (x.second / 2); }
  if(env_var_0 == 180) { _res_key_if_0 = n >= (a / 2); }
  if(env_var_0 == 181) { _res_key_if_0 = n >= (a+n / 2); }
  if(env_var_0 == 182) { _res_key_if_0 = n >= (a+x.second / 2); }
  if(env_var_0 == 183) { _res_key_if_0 = n >= (a[n] / 2); }
  if(env_var_0 == 184) { _res_key_if_0 = n >= (a[x.second] / 2); }
  if(env_var_0 == 185) { _res_key_if_0 = n >= (mp / 2); }
  if(env_var_0 == 186) { _res_key_if_0 = n >= (mp.begin() / 2); }
  if(env_var_0 == 187) { _res_key_if_0 = n >= (mp.end() / 2); }
  if(env_var_0 == 188) { _res_key_if_0 = n >= (n / 2); }
  if(env_var_0 == 189) { _res_key_if_0 = n >= (x / 2); }
  if(env_var_0 == 190) { _res_key_if_0 = n >= (x.first / 2); }
  if(env_var_0 == 191) { _res_key_if_0 = n >= (x.second / 2); }
  if(env_var_0 == 192) { _res_key_if_0 = toupper( a[n] ) >= (a / 2); }
  if(env_var_0 == 193) { _res_key_if_0 = toupper( a[n] ) >= (a+n / 2); }
  if(env_var_0 == 194) { _res_key_if_0 = toupper( a[n] ) >= (a+x.second / 2); }
  if(env_var_0 == 195) { _res_key_if_0 = toupper( a[n] ) >= (a[n] / 2); }
  if(env_var_0 == 196) { _res_key_if_0 = toupper( a[n] ) >= (a[x.second] / 2); }
  if(env_var_0 == 197) { _res_key_if_0 = toupper( a[n] ) >= (mp / 2); }
  if(env_var_0 == 198) { _res_key_if_0 = toupper( a[n] ) >= (mp.begin() / 2); }
  if(env_var_0 == 199) { _res_key_if_0 = toupper( a[n] ) >= (mp.end() / 2); }
  if(env_var_0 == 200) { _res_key_if_0 = toupper( a[n] ) >= (n / 2); }
  if(env_var_0 == 201) { _res_key_if_0 = toupper( a[n] ) >= (x / 2); }
  if(env_var_0 == 202) { _res_key_if_0 = toupper( a[n] ) >= (x.first / 2); }
  if(env_var_0 == 203) { _res_key_if_0 = toupper( a[n] ) >= (x.second / 2); }
  if(env_var_0 == 204) { _res_key_if_0 = toupper( a[x.second] ) >= (a / 2); }
  if(env_var_0 == 205) { _res_key_if_0 = toupper( a[x.second] ) >= (a+n / 2); }
  if(env_var_0 == 206) { _res_key_if_0 = toupper( a[x.second] ) >= (a+x.second / 2); }
  if(env_var_0 == 207) { _res_key_if_0 = toupper( a[x.second] ) >= (a[n] / 2); }
  if(env_var_0 == 208) { _res_key_if_0 = toupper( a[x.second] ) >= (a[x.second] / 2); }
  if(env_var_0 == 209) { _res_key_if_0 = toupper( a[x.second] ) >= (mp / 2); }
  if(env_var_0 == 210) { _res_key_if_0 = toupper( a[x.second] ) >= (mp.begin() / 2); }
  if(env_var_0 == 211) { _res_key_if_0 = toupper( a[x.second] ) >= (mp.end() / 2); }
  if(env_var_0 == 212) { _res_key_if_0 = toupper( a[x.second] ) >= (n / 2); }
  if(env_var_0 == 213) { _res_key_if_0 = toupper( a[x.second] ) >= (x / 2); }
  if(env_var_0 == 214) { _res_key_if_0 = toupper( a[x.second] ) >= (x.first / 2); }
  if(env_var_0 == 215) { _res_key_if_0 = toupper( a[x.second] ) >= (x.second / 2); }
  if(env_var_0 == 216) { _res_key_if_0 = toupper( n ) >= (a / 2); }
  if(env_var_0 == 217) { _res_key_if_0 = toupper( n ) >= (a+n / 2); }
  if(env_var_0 == 218) { _res_key_if_0 = toupper( n ) >= (a+x.second / 2); }
  if(env_var_0 == 219) { _res_key_if_0 = toupper( n ) >= (a[n] / 2); }
  if(env_var_0 == 220) { _res_key_if_0 = toupper( n ) >= (a[x.second] / 2); }
  if(env_var_0 == 221) { _res_key_if_0 = toupper( n ) >= (mp / 2); }
  if(env_var_0 == 222) { _res_key_if_0 = toupper( n ) >= (mp.begin() / 2); }
  if(env_var_0 == 223) { _res_key_if_0 = toupper( n ) >= (mp.end() / 2); }
  if(env_var_0 == 224) { _res_key_if_0 = toupper( n ) >= (n / 2); }
  if(env_var_0 == 225) { _res_key_if_0 = toupper( n ) >= (x / 2); }
  if(env_var_0 == 226) { _res_key_if_0 = toupper( n ) >= (x.first / 2); }
  if(env_var_0 == 227) { _res_key_if_0 = toupper( n ) >= (x.second / 2); }
  if(env_var_0 == 228) { _res_key_if_0 = toupper( x.first ) >= (a / 2); }
  if(env_var_0 == 229) { _res_key_if_0 = toupper( x.first ) >= (a+n / 2); }
  if(env_var_0 == 230) { _res_key_if_0 = toupper( x.first ) >= (a+x.second / 2); }
  if(env_var_0 == 231) { _res_key_if_0 = toupper( x.first ) >= (a[n] / 2); }
  if(env_var_0 == 232) { _res_key_if_0 = toupper( x.first ) >= (a[x.second] / 2); }
  if(env_var_0 == 233) { _res_key_if_0 = toupper( x.first ) >= (mp / 2); }
  if(env_var_0 == 234) { _res_key_if_0 = toupper( x.first ) >= (mp.begin() / 2); }
  if(env_var_0 == 235) { _res_key_if_0 = toupper( x.first ) >= (mp.end() / 2); }
  if(env_var_0 == 236) { _res_key_if_0 = toupper( x.first ) >= (n / 2); }
  if(env_var_0 == 237) { _res_key_if_0 = toupper( x.first ) >= (x / 2); }
  if(env_var_0 == 238) { _res_key_if_0 = toupper( x.first ) >= (x.first / 2); }
  if(env_var_0 == 239) { _res_key_if_0 = toupper( x.first ) >= (x.second / 2); }
  if(env_var_0 == 240) { _res_key_if_0 = toupper( x.second ) >= (a / 2); }
  if(env_var_0 == 241) { _res_key_if_0 = toupper( x.second ) >= (a+n / 2); }
  if(env_var_0 == 242) { _res_key_if_0 = toupper( x.second ) >= (a+x.second / 2); }
  if(env_var_0 == 243) { _res_key_if_0 = toupper( x.second ) >= (a[n] / 2); }
  if(env_var_0 == 244) { _res_key_if_0 = toupper( x.second ) >= (a[x.second] / 2); }
  if(env_var_0 == 245) { _res_key_if_0 = toupper( x.second ) >= (mp / 2); }
  if(env_var_0 == 246) { _res_key_if_0 = toupper( x.second ) >= (mp.begin() / 2); }
  if(env_var_0 == 247) { _res_key_if_0 = toupper( x.second ) >= (mp.end() / 2); }
  if(env_var_0 == 248) { _res_key_if_0 = toupper( x.second ) >= (n / 2); }
  if(env_var_0 == 249) { _res_key_if_0 = toupper( x.second ) >= (x / 2); }
  if(env_var_0 == 250) { _res_key_if_0 = toupper( x.second ) >= (x.first / 2); }
  if(env_var_0 == 251) { _res_key_if_0 = toupper( x.second ) >= (x.second / 2); }
  if(env_var_0 == 252) { _res_key_if_0 = x >= (a / 2); }
  if(env_var_0 == 253) { _res_key_if_0 = x >= (a+n / 2); }
  if(env_var_0 == 254) { _res_key_if_0 = x >= (a+x.second / 2); }
  if(env_var_0 == 255) { _res_key_if_0 = x >= (a[n] / 2); }
  if(env_var_0 == 256) { _res_key_if_0 = x >= (a[x.second] / 2); }
  if(env_var_0 == 257) { _res_key_if_0 = x >= (mp / 2); }
  if(env_var_0 == 258) { _res_key_if_0 = x >= (mp.begin() / 2); }
  if(env_var_0 == 259) { _res_key_if_0 = x >= (mp.end() / 2); }
  if(env_var_0 == 260) { _res_key_if_0 = x >= (n / 2); }
  if(env_var_0 == 261) { _res_key_if_0 = x >= (x / 2); }
  if(env_var_0 == 262) { _res_key_if_0 = x >= (x.first / 2); }
  if(env_var_0 == 263) { _res_key_if_0 = x >= (x.second / 2); }
  if(env_var_0 == 264) { _res_key_if_0 = x.first >= (a / 2); }
  if(env_var_0 == 265) { _res_key_if_0 = x.first >= (a+n / 2); }
  if(env_var_0 == 266) { _res_key_if_0 = x.first >= (a+x.second / 2); }
  if(env_var_0 == 267) { _res_key_if_0 = x.first >= (a[n] / 2); }
  if(env_var_0 == 268) { _res_key_if_0 = x.first >= (a[x.second] / 2); }
  if(env_var_0 == 269) { _res_key_if_0 = x.first >= (mp / 2); }
  if(env_var_0 == 270) { _res_key_if_0 = x.first >= (mp.begin() / 2); }
  if(env_var_0 == 271) { _res_key_if_0 = x.first >= (mp.end() / 2); }
  if(env_var_0 == 272) { _res_key_if_0 = x.first >= (n / 2); }
  if(env_var_0 == 273) { _res_key_if_0 = x.first >= (x / 2); }
  if(env_var_0 == 274) { _res_key_if_0 = x.first >= (x.first / 2); }
  if(env_var_0 == 275) { _res_key_if_0 = x.first >= (x.second / 2); }
  if(env_var_0 == 276) { _res_key_if_0 = x.second >= (a / 2); }
  if(env_var_0 == 277) { _res_key_if_0 = x.second >= (a+n / 2); }
  if(env_var_0 == 278) { _res_key_if_0 = x.second >= (a+x.second / 2); }
  if(env_var_0 == 279) { _res_key_if_0 = x.second >= (a[n] / 2); }
  if(env_var_0 == 280) { _res_key_if_0 = x.second >= (a[x.second] / 2); }
  if(env_var_0 == 281) { _res_key_if_0 = x.second >= (mp / 2); }
  if(env_var_0 == 282) { _res_key_if_0 = x.second >= (mp.begin() / 2); }
  if(env_var_0 == 283) { _res_key_if_0 = x.second >= (mp.end() / 2); }
  if(env_var_0 == 284) { _res_key_if_0 = x.second >= (n / 2); }
  if(env_var_0 == 285) { _res_key_if_0 = x.second >= (x / 2); }
  if(env_var_0 == 286) { _res_key_if_0 = x.second >= (x.first / 2); }
  if(env_var_0 == 287) { _res_key_if_0 = x.second >= (x.second / 2); }
  if ( _res_key_if_0 ) return true;
  }
  return false;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{6,14,20,26,32,33,34,35,35,49,51,55,57,64,64,68,70,72,74,77,78,78,78,80,91,91,94},{-14,-98,-36,68,-20,18,16,-50,66,98,12,-2,-68},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{29,96,94,67,87,65,27,21,60,49,73,85,9,17,72,3,73,69,95,3,30,88,54,94,40},{-86,-80,-76,-76,-74,-62,-62,-56,-48,-36,-28,-22,-18,-18,-18,-16,-14,-12,-6,-2,10,14,18,24,32,32,40,40,40,42,46,48,50,56,56,56,68,76,84,94,96,96},{0,1,1,1,0},{5,8,9,12,14,16,19,29,32,32,37,38,38,39,40,41,43,45,47,51,53,58,58,63,64,65,69,83,84,86,92,93,96,98},{-68,-50,-20,22,90,86,4,60,-88,82,-4,-54,36,-44,86},{0,0,0,0,1,1,1,1},{85,64,25,64,46,35,31,45,93,81,49,33,96,48,37}};
    vector<int> param1 {15,11,22,15,23,3,17,13,6,13};
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
