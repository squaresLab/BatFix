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
string f_gold ( string s, char c1, char c2 ) {
  int l = s . length ( );
  for ( int i = 0;
  i < l;
  i ++ ) {
    if ( s [ i ] == c1 ) s [ i ] = c2;
    else if ( s [ i ] == c2 ) s [ i ] = c1;
  }
  return s;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string s, char c1, char c2 ) {
  int l = s . length ( );
 auto arr ;
  if(env_var_0 == 0) { [] arr = arr; }
  if(env_var_0 == 1) { [] arr = c1; }
  if(env_var_0 == 2) { [] arr = c2; }
  if(env_var_0 == 3) { [] arr = isupper( arr ); }
  if(env_var_0 == 4) { [] arr = isupper( c1 ); }
  if(env_var_0 == 5) { [] arr = isupper( c2 ); }
  if(env_var_0 == 6) { [] arr = isupper( l ); }
  if(env_var_0 == 7) { [] arr = isupper( s[arr] ); }
  if(env_var_0 == 8) { [] arr = isupper( s[l] ); }
  if(env_var_0 == 9) { [] arr = l; }
  if(env_var_0 == 10) { [] arr = s; }
  if(env_var_0 == 11) { [] arr = s.__clear_and_shrink(); }
  if(env_var_0 == 12) { [] arr = s.back(); }
  if(env_var_0 == 13) { [] arr = s.begin(); }
  if(env_var_0 == 14) { [] arr = s.cbegin(); }
  if(env_var_0 == 15) { [] arr = s.clear(); }
  if(env_var_0 == 16) { [] arr = s.crbegin(); }
  if(env_var_0 == 17) { [] arr = s.end(); }
  if(env_var_0 == 18) { [] arr = s.front(); }
  if(env_var_0 == 19) { [] arr = s.get_allocator(); }
  if(env_var_0 == 20) { [] arr = s.max_size(); }
  if(env_var_0 == 21) { [] arr = s.pop_back(); }
  if(env_var_0 == 22) { [] arr = s.rbegin(); }
  if(env_var_0 == 23) { [] arr = s.rend(); }
  if(env_var_0 == 24) { [] arr = s.reserve(); }
  if(env_var_0 == 25) { [] arr = s.size(); }
  if(env_var_0 == 26) { [] arr = s[arr]; }
  if(env_var_0 == 27) { [] arr = s[l]; }
  if(env_var_0 == 28) { [] arr = toupper( arr ); }
  if(env_var_0 == 29) { [] arr = toupper( c1 ); }
  if(env_var_0 == 30) { [] arr = toupper( c2 ); }
  if(env_var_0 == 31) { [] arr = toupper( l ); }
  if(env_var_0 == 32) { [] arr = toupper( s[arr] ); }
  if(env_var_0 == 33) { [] arr = toupper( s[l] ); }
   
  for ( int i = 0;
  i < l;
  i ++ ) {
  if(env_var_1 == 0) { arr == arr; }
  if(env_var_1 == 1) { arr == c1; }
  if(env_var_1 == 2) { arr == c2; }
  if(env_var_1 == 3) { arr == i; }
  if(env_var_1 == 4) { arr == l; }
  if(env_var_1 == 5) { arr == s; }
  if(env_var_1 == 6) { arr == s.begin(); }
  if(env_var_1 == 7) { arr == s.end(); }
  if(env_var_1 == 8) { arr == s[arr]; }
  if(env_var_1 == 9) { arr == s[i]; }
  if(env_var_1 == 10) { arr == s[l]; }
  if(env_var_1 == 11) { c1 == arr; }
  if(env_var_1 == 12) { c1 == c1; }
  if(env_var_1 == 13) { c1 == c2; }
  if(env_var_1 == 14) { c1 == i; }
  if(env_var_1 == 15) { c1 == l; }
  if(env_var_1 == 16) { c1 == s; }
  if(env_var_1 == 17) { c1 == s.begin(); }
  if(env_var_1 == 18) { c1 == s.end(); }
  if(env_var_1 == 19) { c1 == s[arr]; }
  if(env_var_1 == 20) { c1 == s[i]; }
  if(env_var_1 == 21) { c1 == s[l]; }
  if(env_var_1 == 22) { c2 == arr; }
  if(env_var_1 == 23) { c2 == c1; }
  if(env_var_1 == 24) { c2 == c2; }
  if(env_var_1 == 25) { c2 == i; }
  if(env_var_1 == 26) { c2 == l; }
  if(env_var_1 == 27) { c2 == s; }
  if(env_var_1 == 28) { c2 == s.begin(); }
  if(env_var_1 == 29) { c2 == s.end(); }
  if(env_var_1 == 30) { c2 == s[arr]; }
  if(env_var_1 == 31) { c2 == s[i]; }
  if(env_var_1 == 32) { c2 == s[l]; }
  if(env_var_1 == 33) { i == arr; }
  if(env_var_1 == 34) { i == c1; }
  if(env_var_1 == 35) { i == c2; }
  if(env_var_1 == 36) { i == i; }
  if(env_var_1 == 37) { i == l; }
  if(env_var_1 == 38) { i == s; }
  if(env_var_1 == 39) { i == s.begin(); }
  if(env_var_1 == 40) { i == s.end(); }
  if(env_var_1 == 41) { i == s[arr]; }
  if(env_var_1 == 42) { i == s[i]; }
  if(env_var_1 == 43) { i == s[l]; }
  if(env_var_1 == 44) { isupper( arr ) == arr; }
  if(env_var_1 == 45) { isupper( arr ) == c1; }
  if(env_var_1 == 46) { isupper( arr ) == c2; }
  if(env_var_1 == 47) { isupper( arr ) == i; }
  if(env_var_1 == 48) { isupper( arr ) == l; }
  if(env_var_1 == 49) { isupper( arr ) == s; }
  if(env_var_1 == 50) { isupper( arr ) == s.begin(); }
  if(env_var_1 == 51) { isupper( arr ) == s.end(); }
  if(env_var_1 == 52) { isupper( arr ) == s[arr]; }
  if(env_var_1 == 53) { isupper( arr ) == s[i]; }
  if(env_var_1 == 54) { isupper( arr ) == s[l]; }
  if(env_var_1 == 55) { isupper( c1 ) == arr; }
  if(env_var_1 == 56) { isupper( c1 ) == c1; }
  if(env_var_1 == 57) { isupper( c1 ) == c2; }
  if(env_var_1 == 58) { isupper( c1 ) == i; }
  if(env_var_1 == 59) { isupper( c1 ) == l; }
  if(env_var_1 == 60) { isupper( c1 ) == s; }
  if(env_var_1 == 61) { isupper( c1 ) == s.begin(); }
  if(env_var_1 == 62) { isupper( c1 ) == s.end(); }
  if(env_var_1 == 63) { isupper( c1 ) == s[arr]; }
  if(env_var_1 == 64) { isupper( c1 ) == s[i]; }
  if(env_var_1 == 65) { isupper( c1 ) == s[l]; }
  if(env_var_1 == 66) { isupper( c2 ) == arr; }
  if(env_var_1 == 67) { isupper( c2 ) == c1; }
  if(env_var_1 == 68) { isupper( c2 ) == c2; }
  if(env_var_1 == 69) { isupper( c2 ) == i; }
  if(env_var_1 == 70) { isupper( c2 ) == l; }
  if(env_var_1 == 71) { isupper( c2 ) == s; }
  if(env_var_1 == 72) { isupper( c2 ) == s.begin(); }
  if(env_var_1 == 73) { isupper( c2 ) == s.end(); }
  if(env_var_1 == 74) { isupper( c2 ) == s[arr]; }
  if(env_var_1 == 75) { isupper( c2 ) == s[i]; }
  if(env_var_1 == 76) { isupper( c2 ) == s[l]; }
  if(env_var_1 == 77) { isupper( i ) == arr; }
  if(env_var_1 == 78) { isupper( i ) == c1; }
  if(env_var_1 == 79) { isupper( i ) == c2; }
  if(env_var_1 == 80) { isupper( i ) == i; }
  if(env_var_1 == 81) { isupper( i ) == l; }
  if(env_var_1 == 82) { isupper( i ) == s; }
  if(env_var_1 == 83) { isupper( i ) == s.begin(); }
  if(env_var_1 == 84) { isupper( i ) == s.end(); }
  if(env_var_1 == 85) { isupper( i ) == s[arr]; }
  if(env_var_1 == 86) { isupper( i ) == s[i]; }
  if(env_var_1 == 87) { isupper( i ) == s[l]; }
  if(env_var_1 == 88) { isupper( l ) == arr; }
  if(env_var_1 == 89) { isupper( l ) == c1; }
  if(env_var_1 == 90) { isupper( l ) == c2; }
  if(env_var_1 == 91) { isupper( l ) == i; }
  if(env_var_1 == 92) { isupper( l ) == l; }
  if(env_var_1 == 93) { isupper( l ) == s; }
  if(env_var_1 == 94) { isupper( l ) == s.begin(); }
  if(env_var_1 == 95) { isupper( l ) == s.end(); }
  if(env_var_1 == 96) { isupper( l ) == s[arr]; }
  if(env_var_1 == 97) { isupper( l ) == s[i]; }
  if(env_var_1 == 98) { isupper( l ) == s[l]; }
  if(env_var_1 == 99) { isupper( s[arr] ) == arr; }
  if(env_var_1 == 100) { isupper( s[arr] ) == c1; }
  if(env_var_1 == 101) { isupper( s[arr] ) == c2; }
  if(env_var_1 == 102) { isupper( s[arr] ) == i; }
  if(env_var_1 == 103) { isupper( s[arr] ) == l; }
  if(env_var_1 == 104) { isupper( s[arr] ) == s; }
  if(env_var_1 == 105) { isupper( s[arr] ) == s.begin(); }
  if(env_var_1 == 106) { isupper( s[arr] ) == s.end(); }
  if(env_var_1 == 107) { isupper( s[arr] ) == s[arr]; }
  if(env_var_1 == 108) { isupper( s[arr] ) == s[i]; }
  if(env_var_1 == 109) { isupper( s[arr] ) == s[l]; }
  if(env_var_1 == 110) { isupper( s[i] ) == arr; }
  if(env_var_1 == 111) { isupper( s[i] ) == c1; }
  if(env_var_1 == 112) { isupper( s[i] ) == c2; }
  if(env_var_1 == 113) { isupper( s[i] ) == i; }
  if(env_var_1 == 114) { isupper( s[i] ) == l; }
  if(env_var_1 == 115) { isupper( s[i] ) == s; }
  if(env_var_1 == 116) { isupper( s[i] ) == s.begin(); }
  if(env_var_1 == 117) { isupper( s[i] ) == s.end(); }
  if(env_var_1 == 118) { isupper( s[i] ) == s[arr]; }
  if(env_var_1 == 119) { isupper( s[i] ) == s[i]; }
  if(env_var_1 == 120) { isupper( s[i] ) == s[l]; }
  if(env_var_1 == 121) { isupper( s[l] ) == arr; }
  if(env_var_1 == 122) { isupper( s[l] ) == c1; }
  if(env_var_1 == 123) { isupper( s[l] ) == c2; }
  if(env_var_1 == 124) { isupper( s[l] ) == i; }
  if(env_var_1 == 125) { isupper( s[l] ) == l; }
  if(env_var_1 == 126) { isupper( s[l] ) == s; }
  if(env_var_1 == 127) { isupper( s[l] ) == s.begin(); }
  if(env_var_1 == 128) { isupper( s[l] ) == s.end(); }
  if(env_var_1 == 129) { isupper( s[l] ) == s[arr]; }
  if(env_var_1 == 130) { isupper( s[l] ) == s[i]; }
  if(env_var_1 == 131) { isupper( s[l] ) == s[l]; }
  if(env_var_1 == 132) { l == arr; }
  if(env_var_1 == 133) { l == c1; }
  if(env_var_1 == 134) { l == c2; }
  if(env_var_1 == 135) { l == i; }
  if(env_var_1 == 136) { l == l; }
  if(env_var_1 == 137) { l == s; }
  if(env_var_1 == 138) { l == s.begin(); }
  if(env_var_1 == 139) { l == s.end(); }
  if(env_var_1 == 140) { l == s[arr]; }
  if(env_var_1 == 141) { l == s[i]; }
  if(env_var_1 == 142) { l == s[l]; }
  if(env_var_1 == 143) { s == arr; }
  if(env_var_1 == 144) { s == c1; }
  if(env_var_1 == 145) { s == c2; }
  if(env_var_1 == 146) { s == i; }
  if(env_var_1 == 147) { s == l; }
  if(env_var_1 == 148) { s == s; }
  if(env_var_1 == 149) { s == s.begin(); }
  if(env_var_1 == 150) { s == s.end(); }
  if(env_var_1 == 151) { s == s[arr]; }
  if(env_var_1 == 152) { s == s[i]; }
  if(env_var_1 == 153) { s == s[l]; }
  if(env_var_1 == 154) { s.__clear_and_shrink() == arr; }
  if(env_var_1 == 155) { s.__clear_and_shrink() == c1; }
  if(env_var_1 == 156) { s.__clear_and_shrink() == c2; }
  if(env_var_1 == 157) { s.__clear_and_shrink() == i; }
  if(env_var_1 == 158) { s.__clear_and_shrink() == l; }
  if(env_var_1 == 159) { s.__clear_and_shrink() == s; }
  if(env_var_1 == 160) { s.__clear_and_shrink() == s.begin(); }
  if(env_var_1 == 161) { s.__clear_and_shrink() == s.end(); }
  if(env_var_1 == 162) { s.__clear_and_shrink() == s[arr]; }
  if(env_var_1 == 163) { s.__clear_and_shrink() == s[i]; }
  if(env_var_1 == 164) { s.__clear_and_shrink() == s[l]; }
  if(env_var_1 == 165) { s.back() == arr; }
  if(env_var_1 == 166) { s.back() == c1; }
  if(env_var_1 == 167) { s.back() == c2; }
  if(env_var_1 == 168) { s.back() == i; }
  if(env_var_1 == 169) { s.back() == l; }
  if(env_var_1 == 170) { s.back() == s; }
  if(env_var_1 == 171) { s.back() == s.begin(); }
  if(env_var_1 == 172) { s.back() == s.end(); }
  if(env_var_1 == 173) { s.back() == s[arr]; }
  if(env_var_1 == 174) { s.back() == s[i]; }
  if(env_var_1 == 175) { s.back() == s[l]; }
  if(env_var_1 == 176) { s.begin() == arr; }
  if(env_var_1 == 177) { s.begin() == c1; }
  if(env_var_1 == 178) { s.begin() == c2; }
  if(env_var_1 == 179) { s.begin() == i; }
  if(env_var_1 == 180) { s.begin() == l; }
  if(env_var_1 == 181) { s.begin() == s; }
  if(env_var_1 == 182) { s.begin() == s.begin(); }
  if(env_var_1 == 183) { s.begin() == s.end(); }
  if(env_var_1 == 184) { s.begin() == s[arr]; }
  if(env_var_1 == 185) { s.begin() == s[i]; }
  if(env_var_1 == 186) { s.begin() == s[l]; }
  if(env_var_1 == 187) { s.cbegin() == arr; }
  if(env_var_1 == 188) { s.cbegin() == c1; }
  if(env_var_1 == 189) { s.cbegin() == c2; }
  if(env_var_1 == 190) { s.cbegin() == i; }
  if(env_var_1 == 191) { s.cbegin() == l; }
  if(env_var_1 == 192) { s.cbegin() == s; }
  if(env_var_1 == 193) { s.cbegin() == s.begin(); }
  if(env_var_1 == 194) { s.cbegin() == s.end(); }
  if(env_var_1 == 195) { s.cbegin() == s[arr]; }
  if(env_var_1 == 196) { s.cbegin() == s[i]; }
  if(env_var_1 == 197) { s.cbegin() == s[l]; }
  if(env_var_1 == 198) { s.clear() == arr; }
  if(env_var_1 == 199) { s.clear() == c1; }
  if(env_var_1 == 200) { s.clear() == c2; }
  if(env_var_1 == 201) { s.clear() == i; }
  if(env_var_1 == 202) { s.clear() == l; }
  if(env_var_1 == 203) { s.clear() == s; }
  if(env_var_1 == 204) { s.clear() == s.begin(); }
  if(env_var_1 == 205) { s.clear() == s.end(); }
  if(env_var_1 == 206) { s.clear() == s[arr]; }
  if(env_var_1 == 207) { s.clear() == s[i]; }
  if(env_var_1 == 208) { s.clear() == s[l]; }
  if(env_var_1 == 209) { s.crbegin() == arr; }
  if(env_var_1 == 210) { s.crbegin() == c1; }
  if(env_var_1 == 211) { s.crbegin() == c2; }
  if(env_var_1 == 212) { s.crbegin() == i; }
  if(env_var_1 == 213) { s.crbegin() == l; }
  if(env_var_1 == 214) { s.crbegin() == s; }
  if(env_var_1 == 215) { s.crbegin() == s.begin(); }
  if(env_var_1 == 216) { s.crbegin() == s.end(); }
  if(env_var_1 == 217) { s.crbegin() == s[arr]; }
  if(env_var_1 == 218) { s.crbegin() == s[i]; }
  if(env_var_1 == 219) { s.crbegin() == s[l]; }
  if(env_var_1 == 220) { s.end() == arr; }
  if(env_var_1 == 221) { s.end() == c1; }
  if(env_var_1 == 222) { s.end() == c2; }
  if(env_var_1 == 223) { s.end() == i; }
  if(env_var_1 == 224) { s.end() == l; }
  if(env_var_1 == 225) { s.end() == s; }
  if(env_var_1 == 226) { s.end() == s.begin(); }
  if(env_var_1 == 227) { s.end() == s.end(); }
  if(env_var_1 == 228) { s.end() == s[arr]; }
  if(env_var_1 == 229) { s.end() == s[i]; }
  if(env_var_1 == 230) { s.end() == s[l]; }
  if(env_var_1 == 231) { s.front() == arr; }
  if(env_var_1 == 232) { s.front() == c1; }
  if(env_var_1 == 233) { s.front() == c2; }
  if(env_var_1 == 234) { s.front() == i; }
  if(env_var_1 == 235) { s.front() == l; }
  if(env_var_1 == 236) { s.front() == s; }
  if(env_var_1 == 237) { s.front() == s.begin(); }
  if(env_var_1 == 238) { s.front() == s.end(); }
  if(env_var_1 == 239) { s.front() == s[arr]; }
  if(env_var_1 == 240) { s.front() == s[i]; }
  if(env_var_1 == 241) { s.front() == s[l]; }
  if(env_var_1 == 242) { s.get_allocator() == arr; }
  if(env_var_1 == 243) { s.get_allocator() == c1; }
  if(env_var_1 == 244) { s.get_allocator() == c2; }
  if(env_var_1 == 245) { s.get_allocator() == i; }
  if(env_var_1 == 246) { s.get_allocator() == l; }
  if(env_var_1 == 247) { s.get_allocator() == s; }
  if(env_var_1 == 248) { s.get_allocator() == s.begin(); }
  if(env_var_1 == 249) { s.get_allocator() == s.end(); }
  if(env_var_1 == 250) { s.get_allocator() == s[arr]; }
  if(env_var_1 == 251) { s.get_allocator() == s[i]; }
  if(env_var_1 == 252) { s.get_allocator() == s[l]; }
  if(env_var_1 == 253) { s.max_size() == arr; }
  if(env_var_1 == 254) { s.max_size() == c1; }
  if(env_var_1 == 255) { s.max_size() == c2; }
  if(env_var_1 == 256) { s.max_size() == i; }
  if(env_var_1 == 257) { s.max_size() == l; }
  if(env_var_1 == 258) { s.max_size() == s; }
  if(env_var_1 == 259) { s.max_size() == s.begin(); }
  if(env_var_1 == 260) { s.max_size() == s.end(); }
  if(env_var_1 == 261) { s.max_size() == s[arr]; }
  if(env_var_1 == 262) { s.max_size() == s[i]; }
  if(env_var_1 == 263) { s.max_size() == s[l]; }
  if(env_var_1 == 264) { s.pop_back() == arr; }
  if(env_var_1 == 265) { s.pop_back() == c1; }
  if(env_var_1 == 266) { s.pop_back() == c2; }
  if(env_var_1 == 267) { s.pop_back() == i; }
  if(env_var_1 == 268) { s.pop_back() == l; }
  if(env_var_1 == 269) { s.pop_back() == s; }
  if(env_var_1 == 270) { s.pop_back() == s.begin(); }
  if(env_var_1 == 271) { s.pop_back() == s.end(); }
  if(env_var_1 == 272) { s.pop_back() == s[arr]; }
  if(env_var_1 == 273) { s.pop_back() == s[i]; }
  if(env_var_1 == 274) { s.pop_back() == s[l]; }
  if(env_var_1 == 275) { s.rbegin() == arr; }
  if(env_var_1 == 276) { s.rbegin() == c1; }
  if(env_var_1 == 277) { s.rbegin() == c2; }
  if(env_var_1 == 278) { s.rbegin() == i; }
  if(env_var_1 == 279) { s.rbegin() == l; }
  if(env_var_1 == 280) { s.rbegin() == s; }
  if(env_var_1 == 281) { s.rbegin() == s.begin(); }
  if(env_var_1 == 282) { s.rbegin() == s.end(); }
  if(env_var_1 == 283) { s.rbegin() == s[arr]; }
  if(env_var_1 == 284) { s.rbegin() == s[i]; }
  if(env_var_1 == 285) { s.rbegin() == s[l]; }
  if(env_var_1 == 286) { s.rend() == arr; }
  if(env_var_1 == 287) { s.rend() == c1; }
  if(env_var_1 == 288) { s.rend() == c2; }
  if(env_var_1 == 289) { s.rend() == i; }
  if(env_var_1 == 290) { s.rend() == l; }
  if(env_var_1 == 291) { s.rend() == s; }
  if(env_var_1 == 292) { s.rend() == s.begin(); }
  if(env_var_1 == 293) { s.rend() == s.end(); }
  if(env_var_1 == 294) { s.rend() == s[arr]; }
  if(env_var_1 == 295) { s.rend() == s[i]; }
  if(env_var_1 == 296) { s.rend() == s[l]; }
  if(env_var_1 == 297) { s.reserve() == arr; }
  if(env_var_1 == 298) { s.reserve() == c1; }
  if(env_var_1 == 299) { s.reserve() == c2; }
  if(env_var_1 == 300) { s.reserve() == i; }
  if(env_var_1 == 301) { s.reserve() == l; }
  if(env_var_1 == 302) { s.reserve() == s; }
  if(env_var_1 == 303) { s.reserve() == s.begin(); }
  if(env_var_1 == 304) { s.reserve() == s.end(); }
  if(env_var_1 == 305) { s.reserve() == s[arr]; }
  if(env_var_1 == 306) { s.reserve() == s[i]; }
  if(env_var_1 == 307) { s.reserve() == s[l]; }
  if(env_var_1 == 308) { s.size() == arr; }
  if(env_var_1 == 309) { s.size() == c1; }
  if(env_var_1 == 310) { s.size() == c2; }
  if(env_var_1 == 311) { s.size() == i; }
  if(env_var_1 == 312) { s.size() == l; }
  if(env_var_1 == 313) { s.size() == s; }
  if(env_var_1 == 314) { s.size() == s.begin(); }
  if(env_var_1 == 315) { s.size() == s.end(); }
  if(env_var_1 == 316) { s.size() == s[arr]; }
  if(env_var_1 == 317) { s.size() == s[i]; }
  if(env_var_1 == 318) { s.size() == s[l]; }
  if(env_var_1 == 319) { s[arr] == arr; }
  if(env_var_1 == 320) { s[arr] == c1; }
  if(env_var_1 == 321) { s[arr] == c2; }
  if(env_var_1 == 322) { s[arr] == i; }
  if(env_var_1 == 323) { s[arr] == l; }
  if(env_var_1 == 324) { s[arr] == s; }
  if(env_var_1 == 325) { s[arr] == s.begin(); }
  if(env_var_1 == 326) { s[arr] == s.end(); }
  if(env_var_1 == 327) { s[arr] == s[arr]; }
  if(env_var_1 == 328) { s[arr] == s[i]; }
  if(env_var_1 == 329) { s[arr] == s[l]; }
  if(env_var_1 == 330) { s[i] == arr; }
  if(env_var_1 == 331) { s[i] == c1; }
  if(env_var_1 == 332) { s[i] == c2; }
  if(env_var_1 == 333) { s[i] == i; }
  if(env_var_1 == 334) { s[i] == l; }
  if(env_var_1 == 335) { s[i] == s; }
  if(env_var_1 == 336) { s[i] == s.begin(); }
  if(env_var_1 == 337) { s[i] == s.end(); }
  if(env_var_1 == 338) { s[i] == s[arr]; }
  if(env_var_1 == 339) { s[i] == s[i]; }
  if(env_var_1 == 340) { s[i] == s[l]; }
  if(env_var_1 == 341) { s[l] == arr; }
  if(env_var_1 == 342) { s[l] == c1; }
  if(env_var_1 == 343) { s[l] == c2; }
  if(env_var_1 == 344) { s[l] == i; }
  if(env_var_1 == 345) { s[l] == l; }
  if(env_var_1 == 346) { s[l] == s; }
  if(env_var_1 == 347) { s[l] == s.begin(); }
  if(env_var_1 == 348) { s[l] == s.end(); }
  if(env_var_1 == 349) { s[l] == s[arr]; }
  if(env_var_1 == 350) { s[l] == s[i]; }
  if(env_var_1 == 351) { s[l] == s[l]; }
  if(env_var_1 == 352) { toupper( arr ) == arr; }
  if(env_var_1 == 353) { toupper( arr ) == c1; }
  if(env_var_1 == 354) { toupper( arr ) == c2; }
  if(env_var_1 == 355) { toupper( arr ) == i; }
  if(env_var_1 == 356) { toupper( arr ) == l; }
  if(env_var_1 == 357) { toupper( arr ) == s; }
  if(env_var_1 == 358) { toupper( arr ) == s.begin(); }
  if(env_var_1 == 359) { toupper( arr ) == s.end(); }
  if(env_var_1 == 360) { toupper( arr ) == s[arr]; }
  if(env_var_1 == 361) { toupper( arr ) == s[i]; }
  if(env_var_1 == 362) { toupper( arr ) == s[l]; }
  if(env_var_1 == 363) { toupper( c1 ) == arr; }
  if(env_var_1 == 364) { toupper( c1 ) == c1; }
  if(env_var_1 == 365) { toupper( c1 ) == c2; }
  if(env_var_1 == 366) { toupper( c1 ) == i; }
  if(env_var_1 == 367) { toupper( c1 ) == l; }
  if(env_var_1 == 368) { toupper( c1 ) == s; }
  if(env_var_1 == 369) { toupper( c1 ) == s.begin(); }
  if(env_var_1 == 370) { toupper( c1 ) == s.end(); }
  if(env_var_1 == 371) { toupper( c1 ) == s[arr]; }
  if(env_var_1 == 372) { toupper( c1 ) == s[i]; }
  if(env_var_1 == 373) { toupper( c1 ) == s[l]; }
  if(env_var_1 == 374) { toupper( c2 ) == arr; }
  if(env_var_1 == 375) { toupper( c2 ) == c1; }
  if(env_var_1 == 376) { toupper( c2 ) == c2; }
  if(env_var_1 == 377) { toupper( c2 ) == i; }
  if(env_var_1 == 378) { toupper( c2 ) == l; }
  if(env_var_1 == 379) { toupper( c2 ) == s; }
  if(env_var_1 == 380) { toupper( c2 ) == s.begin(); }
  if(env_var_1 == 381) { toupper( c2 ) == s.end(); }
  if(env_var_1 == 382) { toupper( c2 ) == s[arr]; }
  if(env_var_1 == 383) { toupper( c2 ) == s[i]; }
  if(env_var_1 == 384) { toupper( c2 ) == s[l]; }
  if(env_var_1 == 385) { toupper( i ) == arr; }
  if(env_var_1 == 386) { toupper( i ) == c1; }
  if(env_var_1 == 387) { toupper( i ) == c2; }
  if(env_var_1 == 388) { toupper( i ) == i; }
  if(env_var_1 == 389) { toupper( i ) == l; }
  if(env_var_1 == 390) { toupper( i ) == s; }
  if(env_var_1 == 391) { toupper( i ) == s.begin(); }
  if(env_var_1 == 392) { toupper( i ) == s.end(); }
  if(env_var_1 == 393) { toupper( i ) == s[arr]; }
  if(env_var_1 == 394) { toupper( i ) == s[i]; }
  if(env_var_1 == 395) { toupper( i ) == s[l]; }
  if(env_var_1 == 396) { toupper( l ) == arr; }
  if(env_var_1 == 397) { toupper( l ) == c1; }
  if(env_var_1 == 398) { toupper( l ) == c2; }
  if(env_var_1 == 399) { toupper( l ) == i; }
  if(env_var_1 == 400) { toupper( l ) == l; }
  if(env_var_1 == 401) { toupper( l ) == s; }
  if(env_var_1 == 402) { toupper( l ) == s.begin(); }
  if(env_var_1 == 403) { toupper( l ) == s.end(); }
  if(env_var_1 == 404) { toupper( l ) == s[arr]; }
  if(env_var_1 == 405) { toupper( l ) == s[i]; }
  if(env_var_1 == 406) { toupper( l ) == s[l]; }
  if(env_var_1 == 407) { toupper( s[arr] ) == arr; }
  if(env_var_1 == 408) { toupper( s[arr] ) == c1; }
  if(env_var_1 == 409) { toupper( s[arr] ) == c2; }
  if(env_var_1 == 410) { toupper( s[arr] ) == i; }
  if(env_var_1 == 411) { toupper( s[arr] ) == l; }
  if(env_var_1 == 412) { toupper( s[arr] ) == s; }
  if(env_var_1 == 413) { toupper( s[arr] ) == s.begin(); }
  if(env_var_1 == 414) { toupper( s[arr] ) == s.end(); }
  if(env_var_1 == 415) { toupper( s[arr] ) == s[arr]; }
  if(env_var_1 == 416) { toupper( s[arr] ) == s[i]; }
  if(env_var_1 == 417) { toupper( s[arr] ) == s[l]; }
  if(env_var_1 == 418) { toupper( s[i] ) == arr; }
  if(env_var_1 == 419) { toupper( s[i] ) == c1; }
  if(env_var_1 == 420) { toupper( s[i] ) == c2; }
  if(env_var_1 == 421) { toupper( s[i] ) == i; }
  if(env_var_1 == 422) { toupper( s[i] ) == l; }
  if(env_var_1 == 423) { toupper( s[i] ) == s; }
  if(env_var_1 == 424) { toupper( s[i] ) == s.begin(); }
  if(env_var_1 == 425) { toupper( s[i] ) == s.end(); }
  if(env_var_1 == 426) { toupper( s[i] ) == s[arr]; }
  if(env_var_1 == 427) { toupper( s[i] ) == s[i]; }
  if(env_var_1 == 428) { toupper( s[i] ) == s[l]; }
  if(env_var_1 == 429) { toupper( s[l] ) == arr; }
  if(env_var_1 == 430) { toupper( s[l] ) == c1; }
  if(env_var_1 == 431) { toupper( s[l] ) == c2; }
  if(env_var_1 == 432) { toupper( s[l] ) == i; }
  if(env_var_1 == 433) { toupper( s[l] ) == l; }
  if(env_var_1 == 434) { toupper( s[l] ) == s; }
  if(env_var_1 == 435) { toupper( s[l] ) == s.begin(); }
  if(env_var_1 == 436) { toupper( s[l] ) == s.end(); }
  if(env_var_1 == 437) { toupper( s[l] ) == s[arr]; }
  if(env_var_1 == 438) { toupper( s[l] ) == s[i]; }
  if(env_var_1 == 439) { toupper( s[l] ) == s[l]; }
  ;
  }
  return foo;
}

int main() {
    int n_success = 0;
    vector<string> param0 {"IZTSMw j","7288334","010110000","b gJX","734","1","xCaUKdhA","4370992644981","01010","ZNIFGshaWA"};
    vector<char> param1 {'W','6','1','t','4','1','X','5','0','Q'};
    vector<char> param2 {'k','9','1','P','4','1','S','6','1','x'};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

