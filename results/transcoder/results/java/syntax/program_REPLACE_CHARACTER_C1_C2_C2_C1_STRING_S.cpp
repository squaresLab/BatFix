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
  auto arr = s . c_str ( );
  for ( int i = 0;
  i < l;
  i ++ ) {
    if ( arr [ i ] == c1 ) {
      if(env_var_0 == 0) { *s.c_str() = arr; }
      if(env_var_0 == 1) { *s.c_str() = arr+i; }
      if(env_var_0 == 2) { *s.c_str() = arr+l; }
      if(env_var_0 == 3) { *s.c_str() = arr[i]; }
      if(env_var_0 == 4) { *s.c_str() = arr[l]; }
      if(env_var_0 == 5) { *s.c_str() = c1; }
      if(env_var_0 == 6) { *s.c_str() = c2; }
      if(env_var_0 == 7) { *s.c_str() = i; }
      if(env_var_0 == 8) { *s.c_str() = l; }
      if(env_var_0 == 9) { *s.c_str() = s; }
      if(env_var_0 == 10) { *s.c_str() = s.begin(); }
      if(env_var_0 == 11) { *s.c_str() = s.end(); }
      if(env_var_0 == 12) { *s.c_str() = s[i]; }
      if(env_var_0 == 13) { *s.c_str() = s[l]; }
      if(env_var_0 == 14) { arr = arr; }
      if(env_var_0 == 15) { arr = arr+i; }
      if(env_var_0 == 16) { arr = arr+l; }
      if(env_var_0 == 17) { arr = arr[i]; }
      if(env_var_0 == 18) { arr = arr[l]; }
      if(env_var_0 == 19) { arr = c1; }
      if(env_var_0 == 20) { arr = c2; }
      if(env_var_0 == 21) { arr = i; }
      if(env_var_0 == 22) { arr = l; }
      if(env_var_0 == 23) { arr = s; }
      if(env_var_0 == 24) { arr = s.begin(); }
      if(env_var_0 == 25) { arr = s.end(); }
      if(env_var_0 == 26) { arr = s[i]; }
      if(env_var_0 == 27) { arr = s[l]; }
      if(env_var_0 == 28) { arr+i = arr; }
      if(env_var_0 == 29) { arr+i = arr+i; }
      if(env_var_0 == 30) { arr+i = arr+l; }
      if(env_var_0 == 31) { arr+i = arr[i]; }
      if(env_var_0 == 32) { arr+i = arr[l]; }
      if(env_var_0 == 33) { arr+i = c1; }
      if(env_var_0 == 34) { arr+i = c2; }
      if(env_var_0 == 35) { arr+i = i; }
      if(env_var_0 == 36) { arr+i = l; }
      if(env_var_0 == 37) { arr+i = s; }
      if(env_var_0 == 38) { arr+i = s.begin(); }
      if(env_var_0 == 39) { arr+i = s.end(); }
      if(env_var_0 == 40) { arr+i = s[i]; }
      if(env_var_0 == 41) { arr+i = s[l]; }
      if(env_var_0 == 42) { arr+l = arr; }
      if(env_var_0 == 43) { arr+l = arr+i; }
      if(env_var_0 == 44) { arr+l = arr+l; }
      if(env_var_0 == 45) { arr+l = arr[i]; }
      if(env_var_0 == 46) { arr+l = arr[l]; }
      if(env_var_0 == 47) { arr+l = c1; }
      if(env_var_0 == 48) { arr+l = c2; }
      if(env_var_0 == 49) { arr+l = i; }
      if(env_var_0 == 50) { arr+l = l; }
      if(env_var_0 == 51) { arr+l = s; }
      if(env_var_0 == 52) { arr+l = s.begin(); }
      if(env_var_0 == 53) { arr+l = s.end(); }
      if(env_var_0 == 54) { arr+l = s[i]; }
      if(env_var_0 == 55) { arr+l = s[l]; }
      if(env_var_0 == 56) { arr[i] = arr; }
      if(env_var_0 == 57) { arr[i] = arr+i; }
      if(env_var_0 == 58) { arr[i] = arr+l; }
      if(env_var_0 == 59) { arr[i] = arr[i]; }
      if(env_var_0 == 60) { arr[i] = arr[l]; }
      if(env_var_0 == 61) { arr[i] = c1; }
      if(env_var_0 == 62) { arr[i] = c2; }
      if(env_var_0 == 63) { arr[i] = i; }
      if(env_var_0 == 64) { arr[i] = l; }
      if(env_var_0 == 65) { arr[i] = s; }
      if(env_var_0 == 66) { arr[i] = s.begin(); }
      if(env_var_0 == 67) { arr[i] = s.end(); }
      if(env_var_0 == 68) { arr[i] = s[i]; }
      if(env_var_0 == 69) { arr[i] = s[l]; }
      if(env_var_0 == 70) { arr[l] = arr; }
      if(env_var_0 == 71) { arr[l] = arr+i; }
      if(env_var_0 == 72) { arr[l] = arr+l; }
      if(env_var_0 == 73) { arr[l] = arr[i]; }
      if(env_var_0 == 74) { arr[l] = arr[l]; }
      if(env_var_0 == 75) { arr[l] = c1; }
      if(env_var_0 == 76) { arr[l] = c2; }
      if(env_var_0 == 77) { arr[l] = i; }
      if(env_var_0 == 78) { arr[l] = l; }
      if(env_var_0 == 79) { arr[l] = s; }
      if(env_var_0 == 80) { arr[l] = s.begin(); }
      if(env_var_0 == 81) { arr[l] = s.end(); }
      if(env_var_0 == 82) { arr[l] = s[i]; }
      if(env_var_0 == 83) { arr[l] = s[l]; }
      if(env_var_0 == 84) { c1 = arr; }
      if(env_var_0 == 85) { c1 = arr+i; }
      if(env_var_0 == 86) { c1 = arr+l; }
      if(env_var_0 == 87) { c1 = arr[i]; }
      if(env_var_0 == 88) { c1 = arr[l]; }
      if(env_var_0 == 89) { c1 = c1; }
      if(env_var_0 == 90) { c1 = c2; }
      if(env_var_0 == 91) { c1 = i; }
      if(env_var_0 == 92) { c1 = l; }
      if(env_var_0 == 93) { c1 = s; }
      if(env_var_0 == 94) { c1 = s.begin(); }
      if(env_var_0 == 95) { c1 = s.end(); }
      if(env_var_0 == 96) { c1 = s[i]; }
      if(env_var_0 == 97) { c1 = s[l]; }
      if(env_var_0 == 98) { c2 = arr; }
      if(env_var_0 == 99) { c2 = arr+i; }
      if(env_var_0 == 100) { c2 = arr+l; }
      if(env_var_0 == 101) { c2 = arr[i]; }
      if(env_var_0 == 102) { c2 = arr[l]; }
      if(env_var_0 == 103) { c2 = c1; }
      if(env_var_0 == 104) { c2 = c2; }
      if(env_var_0 == 105) { c2 = i; }
      if(env_var_0 == 106) { c2 = l; }
      if(env_var_0 == 107) { c2 = s; }
      if(env_var_0 == 108) { c2 = s.begin(); }
      if(env_var_0 == 109) { c2 = s.end(); }
      if(env_var_0 == 110) { c2 = s[i]; }
      if(env_var_0 == 111) { c2 = s[l]; }
      if(env_var_0 == 112) { i = arr; }
      if(env_var_0 == 113) { i = arr+i; }
      if(env_var_0 == 114) { i = arr+l; }
      if(env_var_0 == 115) { i = arr[i]; }
      if(env_var_0 == 116) { i = arr[l]; }
      if(env_var_0 == 117) { i = c1; }
      if(env_var_0 == 118) { i = c2; }
      if(env_var_0 == 119) { i = i; }
      if(env_var_0 == 120) { i = l; }
      if(env_var_0 == 121) { i = s; }
      if(env_var_0 == 122) { i = s.begin(); }
      if(env_var_0 == 123) { i = s.end(); }
      if(env_var_0 == 124) { i = s[i]; }
      if(env_var_0 == 125) { i = s[l]; }
      if(env_var_0 == 126) { isupper( arr[i] ) = arr; }
      if(env_var_0 == 127) { isupper( arr[i] ) = arr+i; }
      if(env_var_0 == 128) { isupper( arr[i] ) = arr+l; }
      if(env_var_0 == 129) { isupper( arr[i] ) = arr[i]; }
      if(env_var_0 == 130) { isupper( arr[i] ) = arr[l]; }
      if(env_var_0 == 131) { isupper( arr[i] ) = c1; }
      if(env_var_0 == 132) { isupper( arr[i] ) = c2; }
      if(env_var_0 == 133) { isupper( arr[i] ) = i; }
      if(env_var_0 == 134) { isupper( arr[i] ) = l; }
      if(env_var_0 == 135) { isupper( arr[i] ) = s; }
      if(env_var_0 == 136) { isupper( arr[i] ) = s.begin(); }
      if(env_var_0 == 137) { isupper( arr[i] ) = s.end(); }
      if(env_var_0 == 138) { isupper( arr[i] ) = s[i]; }
      if(env_var_0 == 139) { isupper( arr[i] ) = s[l]; }
      if(env_var_0 == 140) { isupper( arr[l] ) = arr; }
      if(env_var_0 == 141) { isupper( arr[l] ) = arr+i; }
      if(env_var_0 == 142) { isupper( arr[l] ) = arr+l; }
      if(env_var_0 == 143) { isupper( arr[l] ) = arr[i]; }
      if(env_var_0 == 144) { isupper( arr[l] ) = arr[l]; }
      if(env_var_0 == 145) { isupper( arr[l] ) = c1; }
      if(env_var_0 == 146) { isupper( arr[l] ) = c2; }
      if(env_var_0 == 147) { isupper( arr[l] ) = i; }
      if(env_var_0 == 148) { isupper( arr[l] ) = l; }
      if(env_var_0 == 149) { isupper( arr[l] ) = s; }
      if(env_var_0 == 150) { isupper( arr[l] ) = s.begin(); }
      if(env_var_0 == 151) { isupper( arr[l] ) = s.end(); }
      if(env_var_0 == 152) { isupper( arr[l] ) = s[i]; }
      if(env_var_0 == 153) { isupper( arr[l] ) = s[l]; }
      if(env_var_0 == 154) { isupper( c1 ) = arr; }
      if(env_var_0 == 155) { isupper( c1 ) = arr+i; }
      if(env_var_0 == 156) { isupper( c1 ) = arr+l; }
      if(env_var_0 == 157) { isupper( c1 ) = arr[i]; }
      if(env_var_0 == 158) { isupper( c1 ) = arr[l]; }
      if(env_var_0 == 159) { isupper( c1 ) = c1; }
      if(env_var_0 == 160) { isupper( c1 ) = c2; }
      if(env_var_0 == 161) { isupper( c1 ) = i; }
      if(env_var_0 == 162) { isupper( c1 ) = l; }
      if(env_var_0 == 163) { isupper( c1 ) = s; }
      if(env_var_0 == 164) { isupper( c1 ) = s.begin(); }
      if(env_var_0 == 165) { isupper( c1 ) = s.end(); }
      if(env_var_0 == 166) { isupper( c1 ) = s[i]; }
      if(env_var_0 == 167) { isupper( c1 ) = s[l]; }
      if(env_var_0 == 168) { isupper( c2 ) = arr; }
      if(env_var_0 == 169) { isupper( c2 ) = arr+i; }
      if(env_var_0 == 170) { isupper( c2 ) = arr+l; }
      if(env_var_0 == 171) { isupper( c2 ) = arr[i]; }
      if(env_var_0 == 172) { isupper( c2 ) = arr[l]; }
      if(env_var_0 == 173) { isupper( c2 ) = c1; }
      if(env_var_0 == 174) { isupper( c2 ) = c2; }
      if(env_var_0 == 175) { isupper( c2 ) = i; }
      if(env_var_0 == 176) { isupper( c2 ) = l; }
      if(env_var_0 == 177) { isupper( c2 ) = s; }
      if(env_var_0 == 178) { isupper( c2 ) = s.begin(); }
      if(env_var_0 == 179) { isupper( c2 ) = s.end(); }
      if(env_var_0 == 180) { isupper( c2 ) = s[i]; }
      if(env_var_0 == 181) { isupper( c2 ) = s[l]; }
      if(env_var_0 == 182) { isupper( i ) = arr; }
      if(env_var_0 == 183) { isupper( i ) = arr+i; }
      if(env_var_0 == 184) { isupper( i ) = arr+l; }
      if(env_var_0 == 185) { isupper( i ) = arr[i]; }
      if(env_var_0 == 186) { isupper( i ) = arr[l]; }
      if(env_var_0 == 187) { isupper( i ) = c1; }
      if(env_var_0 == 188) { isupper( i ) = c2; }
      if(env_var_0 == 189) { isupper( i ) = i; }
      if(env_var_0 == 190) { isupper( i ) = l; }
      if(env_var_0 == 191) { isupper( i ) = s; }
      if(env_var_0 == 192) { isupper( i ) = s.begin(); }
      if(env_var_0 == 193) { isupper( i ) = s.end(); }
      if(env_var_0 == 194) { isupper( i ) = s[i]; }
      if(env_var_0 == 195) { isupper( i ) = s[l]; }
      if(env_var_0 == 196) { isupper( l ) = arr; }
      if(env_var_0 == 197) { isupper( l ) = arr+i; }
      if(env_var_0 == 198) { isupper( l ) = arr+l; }
      if(env_var_0 == 199) { isupper( l ) = arr[i]; }
      if(env_var_0 == 200) { isupper( l ) = arr[l]; }
      if(env_var_0 == 201) { isupper( l ) = c1; }
      if(env_var_0 == 202) { isupper( l ) = c2; }
      if(env_var_0 == 203) { isupper( l ) = i; }
      if(env_var_0 == 204) { isupper( l ) = l; }
      if(env_var_0 == 205) { isupper( l ) = s; }
      if(env_var_0 == 206) { isupper( l ) = s.begin(); }
      if(env_var_0 == 207) { isupper( l ) = s.end(); }
      if(env_var_0 == 208) { isupper( l ) = s[i]; }
      if(env_var_0 == 209) { isupper( l ) = s[l]; }
      if(env_var_0 == 210) { isupper( s[i] ) = arr; }
      if(env_var_0 == 211) { isupper( s[i] ) = arr+i; }
      if(env_var_0 == 212) { isupper( s[i] ) = arr+l; }
      if(env_var_0 == 213) { isupper( s[i] ) = arr[i]; }
      if(env_var_0 == 214) { isupper( s[i] ) = arr[l]; }
      if(env_var_0 == 215) { isupper( s[i] ) = c1; }
      if(env_var_0 == 216) { isupper( s[i] ) = c2; }
      if(env_var_0 == 217) { isupper( s[i] ) = i; }
      if(env_var_0 == 218) { isupper( s[i] ) = l; }
      if(env_var_0 == 219) { isupper( s[i] ) = s; }
      if(env_var_0 == 220) { isupper( s[i] ) = s.begin(); }
      if(env_var_0 == 221) { isupper( s[i] ) = s.end(); }
      if(env_var_0 == 222) { isupper( s[i] ) = s[i]; }
      if(env_var_0 == 223) { isupper( s[i] ) = s[l]; }
      if(env_var_0 == 224) { isupper( s[l] ) = arr; }
      if(env_var_0 == 225) { isupper( s[l] ) = arr+i; }
      if(env_var_0 == 226) { isupper( s[l] ) = arr+l; }
      if(env_var_0 == 227) { isupper( s[l] ) = arr[i]; }
      if(env_var_0 == 228) { isupper( s[l] ) = arr[l]; }
      if(env_var_0 == 229) { isupper( s[l] ) = c1; }
      if(env_var_0 == 230) { isupper( s[l] ) = c2; }
      if(env_var_0 == 231) { isupper( s[l] ) = i; }
      if(env_var_0 == 232) { isupper( s[l] ) = l; }
      if(env_var_0 == 233) { isupper( s[l] ) = s; }
      if(env_var_0 == 234) { isupper( s[l] ) = s.begin(); }
      if(env_var_0 == 235) { isupper( s[l] ) = s.end(); }
      if(env_var_0 == 236) { isupper( s[l] ) = s[i]; }
      if(env_var_0 == 237) { isupper( s[l] ) = s[l]; }
      if(env_var_0 == 238) { l = arr; }
      if(env_var_0 == 239) { l = arr+i; }
      if(env_var_0 == 240) { l = arr+l; }
      if(env_var_0 == 241) { l = arr[i]; }
      if(env_var_0 == 242) { l = arr[l]; }
      if(env_var_0 == 243) { l = c1; }
      if(env_var_0 == 244) { l = c2; }
      if(env_var_0 == 245) { l = i; }
      if(env_var_0 == 246) { l = l; }
      if(env_var_0 == 247) { l = s; }
      if(env_var_0 == 248) { l = s.begin(); }
      if(env_var_0 == 249) { l = s.end(); }
      if(env_var_0 == 250) { l = s[i]; }
      if(env_var_0 == 251) { l = s[l]; }
      if(env_var_0 == 252) { s = arr; }
      if(env_var_0 == 253) { s = arr+i; }
      if(env_var_0 == 254) { s = arr+l; }
      if(env_var_0 == 255) { s = arr[i]; }
      if(env_var_0 == 256) { s = arr[l]; }
      if(env_var_0 == 257) { s = c1; }
      if(env_var_0 == 258) { s = c2; }
      if(env_var_0 == 259) { s = i; }
      if(env_var_0 == 260) { s = l; }
      if(env_var_0 == 261) { s = s; }
      if(env_var_0 == 262) { s = s.begin(); }
      if(env_var_0 == 263) { s = s.end(); }
      if(env_var_0 == 264) { s = s[i]; }
      if(env_var_0 == 265) { s = s[l]; }
      if(env_var_0 == 266) { s.__clear_and_shrink() = arr; }
      if(env_var_0 == 267) { s.__clear_and_shrink() = arr+i; }
      if(env_var_0 == 268) { s.__clear_and_shrink() = arr+l; }
      if(env_var_0 == 269) { s.__clear_and_shrink() = arr[i]; }
      if(env_var_0 == 270) { s.__clear_and_shrink() = arr[l]; }
      if(env_var_0 == 271) { s.__clear_and_shrink() = c1; }
      if(env_var_0 == 272) { s.__clear_and_shrink() = c2; }
      if(env_var_0 == 273) { s.__clear_and_shrink() = i; }
      if(env_var_0 == 274) { s.__clear_and_shrink() = l; }
      if(env_var_0 == 275) { s.__clear_and_shrink() = s; }
      if(env_var_0 == 276) { s.__clear_and_shrink() = s.begin(); }
      if(env_var_0 == 277) { s.__clear_and_shrink() = s.end(); }
      if(env_var_0 == 278) { s.__clear_and_shrink() = s[i]; }
      if(env_var_0 == 279) { s.__clear_and_shrink() = s[l]; }
      if(env_var_0 == 280) { s.__is_long() = arr; }
      if(env_var_0 == 281) { s.__is_long() = arr+i; }
      if(env_var_0 == 282) { s.__is_long() = arr+l; }
      if(env_var_0 == 283) { s.__is_long() = arr[i]; }
      if(env_var_0 == 284) { s.__is_long() = arr[l]; }
      if(env_var_0 == 285) { s.__is_long() = c1; }
      if(env_var_0 == 286) { s.__is_long() = c2; }
      if(env_var_0 == 287) { s.__is_long() = i; }
      if(env_var_0 == 288) { s.__is_long() = l; }
      if(env_var_0 == 289) { s.__is_long() = s; }
      if(env_var_0 == 290) { s.__is_long() = s.begin(); }
      if(env_var_0 == 291) { s.__is_long() = s.end(); }
      if(env_var_0 == 292) { s.__is_long() = s[i]; }
      if(env_var_0 == 293) { s.__is_long() = s[l]; }
      if(env_var_0 == 294) { s.back() = arr; }
      if(env_var_0 == 295) { s.back() = arr+i; }
      if(env_var_0 == 296) { s.back() = arr+l; }
      if(env_var_0 == 297) { s.back() = arr[i]; }
      if(env_var_0 == 298) { s.back() = arr[l]; }
      if(env_var_0 == 299) { s.back() = c1; }
      if(env_var_0 == 300) { s.back() = c2; }
      if(env_var_0 == 301) { s.back() = i; }
      if(env_var_0 == 302) { s.back() = l; }
      if(env_var_0 == 303) { s.back() = s; }
      if(env_var_0 == 304) { s.back() = s.begin(); }
      if(env_var_0 == 305) { s.back() = s.end(); }
      if(env_var_0 == 306) { s.back() = s[i]; }
      if(env_var_0 == 307) { s.back() = s[l]; }
      if(env_var_0 == 308) { s.begin() = arr; }
      if(env_var_0 == 309) { s.begin() = arr+i; }
      if(env_var_0 == 310) { s.begin() = arr+l; }
      if(env_var_0 == 311) { s.begin() = arr[i]; }
      if(env_var_0 == 312) { s.begin() = arr[l]; }
      if(env_var_0 == 313) { s.begin() = c1; }
      if(env_var_0 == 314) { s.begin() = c2; }
      if(env_var_0 == 315) { s.begin() = i; }
      if(env_var_0 == 316) { s.begin() = l; }
      if(env_var_0 == 317) { s.begin() = s; }
      if(env_var_0 == 318) { s.begin() = s.begin(); }
      if(env_var_0 == 319) { s.begin() = s.end(); }
      if(env_var_0 == 320) { s.begin() = s[i]; }
      if(env_var_0 == 321) { s.begin() = s[l]; }
      if(env_var_0 == 322) { s.capacity() = arr; }
      if(env_var_0 == 323) { s.capacity() = arr+i; }
      if(env_var_0 == 324) { s.capacity() = arr+l; }
      if(env_var_0 == 325) { s.capacity() = arr[i]; }
      if(env_var_0 == 326) { s.capacity() = arr[l]; }
      if(env_var_0 == 327) { s.capacity() = c1; }
      if(env_var_0 == 328) { s.capacity() = c2; }
      if(env_var_0 == 329) { s.capacity() = i; }
      if(env_var_0 == 330) { s.capacity() = l; }
      if(env_var_0 == 331) { s.capacity() = s; }
      if(env_var_0 == 332) { s.capacity() = s.begin(); }
      if(env_var_0 == 333) { s.capacity() = s.end(); }
      if(env_var_0 == 334) { s.capacity() = s[i]; }
      if(env_var_0 == 335) { s.capacity() = s[l]; }
      if(env_var_0 == 336) { s.cend() = arr; }
      if(env_var_0 == 337) { s.cend() = arr+i; }
      if(env_var_0 == 338) { s.cend() = arr+l; }
      if(env_var_0 == 339) { s.cend() = arr[i]; }
      if(env_var_0 == 340) { s.cend() = arr[l]; }
      if(env_var_0 == 341) { s.cend() = c1; }
      if(env_var_0 == 342) { s.cend() = c2; }
      if(env_var_0 == 343) { s.cend() = i; }
      if(env_var_0 == 344) { s.cend() = l; }
      if(env_var_0 == 345) { s.cend() = s; }
      if(env_var_0 == 346) { s.cend() = s.begin(); }
      if(env_var_0 == 347) { s.cend() = s.end(); }
      if(env_var_0 == 348) { s.cend() = s[i]; }
      if(env_var_0 == 349) { s.cend() = s[l]; }
      if(env_var_0 == 350) { s.crend() = arr; }
      if(env_var_0 == 351) { s.crend() = arr+i; }
      if(env_var_0 == 352) { s.crend() = arr+l; }
      if(env_var_0 == 353) { s.crend() = arr[i]; }
      if(env_var_0 == 354) { s.crend() = arr[l]; }
      if(env_var_0 == 355) { s.crend() = c1; }
      if(env_var_0 == 356) { s.crend() = c2; }
      if(env_var_0 == 357) { s.crend() = i; }
      if(env_var_0 == 358) { s.crend() = l; }
      if(env_var_0 == 359) { s.crend() = s; }
      if(env_var_0 == 360) { s.crend() = s.begin(); }
      if(env_var_0 == 361) { s.crend() = s.end(); }
      if(env_var_0 == 362) { s.crend() = s[i]; }
      if(env_var_0 == 363) { s.crend() = s[l]; }
      if(env_var_0 == 364) { s.empty() = arr; }
      if(env_var_0 == 365) { s.empty() = arr+i; }
      if(env_var_0 == 366) { s.empty() = arr+l; }
      if(env_var_0 == 367) { s.empty() = arr[i]; }
      if(env_var_0 == 368) { s.empty() = arr[l]; }
      if(env_var_0 == 369) { s.empty() = c1; }
      if(env_var_0 == 370) { s.empty() = c2; }
      if(env_var_0 == 371) { s.empty() = i; }
      if(env_var_0 == 372) { s.empty() = l; }
      if(env_var_0 == 373) { s.empty() = s; }
      if(env_var_0 == 374) { s.empty() = s.begin(); }
      if(env_var_0 == 375) { s.empty() = s.end(); }
      if(env_var_0 == 376) { s.empty() = s[i]; }
      if(env_var_0 == 377) { s.empty() = s[l]; }
      if(env_var_0 == 378) { s.end() = arr; }
      if(env_var_0 == 379) { s.end() = arr+i; }
      if(env_var_0 == 380) { s.end() = arr+l; }
      if(env_var_0 == 381) { s.end() = arr[i]; }
      if(env_var_0 == 382) { s.end() = arr[l]; }
      if(env_var_0 == 383) { s.end() = c1; }
      if(env_var_0 == 384) { s.end() = c2; }
      if(env_var_0 == 385) { s.end() = i; }
      if(env_var_0 == 386) { s.end() = l; }
      if(env_var_0 == 387) { s.end() = s; }
      if(env_var_0 == 388) { s.end() = s.begin(); }
      if(env_var_0 == 389) { s.end() = s.end(); }
      if(env_var_0 == 390) { s.end() = s[i]; }
      if(env_var_0 == 391) { s.end() = s[l]; }
      if(env_var_0 == 392) { s.front() = arr; }
      if(env_var_0 == 393) { s.front() = arr+i; }
      if(env_var_0 == 394) { s.front() = arr+l; }
      if(env_var_0 == 395) { s.front() = arr[i]; }
      if(env_var_0 == 396) { s.front() = arr[l]; }
      if(env_var_0 == 397) { s.front() = c1; }
      if(env_var_0 == 398) { s.front() = c2; }
      if(env_var_0 == 399) { s.front() = i; }
      if(env_var_0 == 400) { s.front() = l; }
      if(env_var_0 == 401) { s.front() = s; }
      if(env_var_0 == 402) { s.front() = s.begin(); }
      if(env_var_0 == 403) { s.front() = s.end(); }
      if(env_var_0 == 404) { s.front() = s[i]; }
      if(env_var_0 == 405) { s.front() = s[l]; }
      if(env_var_0 == 406) { s.get_allocator() = arr; }
      if(env_var_0 == 407) { s.get_allocator() = arr+i; }
      if(env_var_0 == 408) { s.get_allocator() = arr+l; }
      if(env_var_0 == 409) { s.get_allocator() = arr[i]; }
      if(env_var_0 == 410) { s.get_allocator() = arr[l]; }
      if(env_var_0 == 411) { s.get_allocator() = c1; }
      if(env_var_0 == 412) { s.get_allocator() = c2; }
      if(env_var_0 == 413) { s.get_allocator() = i; }
      if(env_var_0 == 414) { s.get_allocator() = l; }
      if(env_var_0 == 415) { s.get_allocator() = s; }
      if(env_var_0 == 416) { s.get_allocator() = s.begin(); }
      if(env_var_0 == 417) { s.get_allocator() = s.end(); }
      if(env_var_0 == 418) { s.get_allocator() = s[i]; }
      if(env_var_0 == 419) { s.get_allocator() = s[l]; }
      if(env_var_0 == 420) { s.length() = arr; }
      if(env_var_0 == 421) { s.length() = arr+i; }
      if(env_var_0 == 422) { s.length() = arr+l; }
      if(env_var_0 == 423) { s.length() = arr[i]; }
      if(env_var_0 == 424) { s.length() = arr[l]; }
      if(env_var_0 == 425) { s.length() = c1; }
      if(env_var_0 == 426) { s.length() = c2; }
      if(env_var_0 == 427) { s.length() = i; }
      if(env_var_0 == 428) { s.length() = l; }
      if(env_var_0 == 429) { s.length() = s; }
      if(env_var_0 == 430) { s.length() = s.begin(); }
      if(env_var_0 == 431) { s.length() = s.end(); }
      if(env_var_0 == 432) { s.length() = s[i]; }
      if(env_var_0 == 433) { s.length() = s[l]; }
      if(env_var_0 == 434) { s.rbegin() = arr; }
      if(env_var_0 == 435) { s.rbegin() = arr+i; }
      if(env_var_0 == 436) { s.rbegin() = arr+l; }
      if(env_var_0 == 437) { s.rbegin() = arr[i]; }
      if(env_var_0 == 438) { s.rbegin() = arr[l]; }
      if(env_var_0 == 439) { s.rbegin() = c1; }
      if(env_var_0 == 440) { s.rbegin() = c2; }
      if(env_var_0 == 441) { s.rbegin() = i; }
      if(env_var_0 == 442) { s.rbegin() = l; }
      if(env_var_0 == 443) { s.rbegin() = s; }
      if(env_var_0 == 444) { s.rbegin() = s.begin(); }
      if(env_var_0 == 445) { s.rbegin() = s.end(); }
      if(env_var_0 == 446) { s.rbegin() = s[i]; }
      if(env_var_0 == 447) { s.rbegin() = s[l]; }
      if(env_var_0 == 448) { s.rend() = arr; }
      if(env_var_0 == 449) { s.rend() = arr+i; }
      if(env_var_0 == 450) { s.rend() = arr+l; }
      if(env_var_0 == 451) { s.rend() = arr[i]; }
      if(env_var_0 == 452) { s.rend() = arr[l]; }
      if(env_var_0 == 453) { s.rend() = c1; }
      if(env_var_0 == 454) { s.rend() = c2; }
      if(env_var_0 == 455) { s.rend() = i; }
      if(env_var_0 == 456) { s.rend() = l; }
      if(env_var_0 == 457) { s.rend() = s; }
      if(env_var_0 == 458) { s.rend() = s.begin(); }
      if(env_var_0 == 459) { s.rend() = s.end(); }
      if(env_var_0 == 460) { s.rend() = s[i]; }
      if(env_var_0 == 461) { s.rend() = s[l]; }
      if(env_var_0 == 462) { s.shrink_to_fit() = arr; }
      if(env_var_0 == 463) { s.shrink_to_fit() = arr+i; }
      if(env_var_0 == 464) { s.shrink_to_fit() = arr+l; }
      if(env_var_0 == 465) { s.shrink_to_fit() = arr[i]; }
      if(env_var_0 == 466) { s.shrink_to_fit() = arr[l]; }
      if(env_var_0 == 467) { s.shrink_to_fit() = c1; }
      if(env_var_0 == 468) { s.shrink_to_fit() = c2; }
      if(env_var_0 == 469) { s.shrink_to_fit() = i; }
      if(env_var_0 == 470) { s.shrink_to_fit() = l; }
      if(env_var_0 == 471) { s.shrink_to_fit() = s; }
      if(env_var_0 == 472) { s.shrink_to_fit() = s.begin(); }
      if(env_var_0 == 473) { s.shrink_to_fit() = s.end(); }
      if(env_var_0 == 474) { s.shrink_to_fit() = s[i]; }
      if(env_var_0 == 475) { s.shrink_to_fit() = s[l]; }
      if(env_var_0 == 476) { s[i] = arr; }
      if(env_var_0 == 477) { s[i] = arr+i; }
      if(env_var_0 == 478) { s[i] = arr+l; }
      if(env_var_0 == 479) { s[i] = arr[i]; }
      if(env_var_0 == 480) { s[i] = arr[l]; }
      if(env_var_0 == 481) { s[i] = c1; }
      if(env_var_0 == 482) { s[i] = c2; }
      if(env_var_0 == 483) { s[i] = i; }
      if(env_var_0 == 484) { s[i] = l; }
      if(env_var_0 == 485) { s[i] = s; }
      if(env_var_0 == 486) { s[i] = s.begin(); }
      if(env_var_0 == 487) { s[i] = s.end(); }
      if(env_var_0 == 488) { s[i] = s[i]; }
      if(env_var_0 == 489) { s[i] = s[l]; }
      if(env_var_0 == 490) { s[l] = arr; }
      if(env_var_0 == 491) { s[l] = arr+i; }
      if(env_var_0 == 492) { s[l] = arr+l; }
      if(env_var_0 == 493) { s[l] = arr[i]; }
      if(env_var_0 == 494) { s[l] = arr[l]; }
      if(env_var_0 == 495) { s[l] = c1; }
      if(env_var_0 == 496) { s[l] = c2; }
      if(env_var_0 == 497) { s[l] = i; }
      if(env_var_0 == 498) { s[l] = l; }
      if(env_var_0 == 499) { s[l] = s; }
      if(env_var_0 == 500) { s[l] = s.begin(); }
      if(env_var_0 == 501) { s[l] = s.end(); }
      if(env_var_0 == 502) { s[l] = s[i]; }
      if(env_var_0 == 503) { s[l] = s[l]; }
      if(env_var_0 == 504) { toupper( arr[i] ) = arr; }
      if(env_var_0 == 505) { toupper( arr[i] ) = arr+i; }
      if(env_var_0 == 506) { toupper( arr[i] ) = arr+l; }
      if(env_var_0 == 507) { toupper( arr[i] ) = arr[i]; }
      if(env_var_0 == 508) { toupper( arr[i] ) = arr[l]; }
      if(env_var_0 == 509) { toupper( arr[i] ) = c1; }
      if(env_var_0 == 510) { toupper( arr[i] ) = c2; }
      if(env_var_0 == 511) { toupper( arr[i] ) = i; }
      if(env_var_0 == 512) { toupper( arr[i] ) = l; }
      if(env_var_0 == 513) { toupper( arr[i] ) = s; }
      if(env_var_0 == 514) { toupper( arr[i] ) = s.begin(); }
      if(env_var_0 == 515) { toupper( arr[i] ) = s.end(); }
      if(env_var_0 == 516) { toupper( arr[i] ) = s[i]; }
      if(env_var_0 == 517) { toupper( arr[i] ) = s[l]; }
      if(env_var_0 == 518) { toupper( arr[l] ) = arr; }
      if(env_var_0 == 519) { toupper( arr[l] ) = arr+i; }
      if(env_var_0 == 520) { toupper( arr[l] ) = arr+l; }
      if(env_var_0 == 521) { toupper( arr[l] ) = arr[i]; }
      if(env_var_0 == 522) { toupper( arr[l] ) = arr[l]; }
      if(env_var_0 == 523) { toupper( arr[l] ) = c1; }
      if(env_var_0 == 524) { toupper( arr[l] ) = c2; }
      if(env_var_0 == 525) { toupper( arr[l] ) = i; }
      if(env_var_0 == 526) { toupper( arr[l] ) = l; }
      if(env_var_0 == 527) { toupper( arr[l] ) = s; }
      if(env_var_0 == 528) { toupper( arr[l] ) = s.begin(); }
      if(env_var_0 == 529) { toupper( arr[l] ) = s.end(); }
      if(env_var_0 == 530) { toupper( arr[l] ) = s[i]; }
      if(env_var_0 == 531) { toupper( arr[l] ) = s[l]; }
      if(env_var_0 == 532) { toupper( c1 ) = arr; }
      if(env_var_0 == 533) { toupper( c1 ) = arr+i; }
      if(env_var_0 == 534) { toupper( c1 ) = arr+l; }
      if(env_var_0 == 535) { toupper( c1 ) = arr[i]; }
      if(env_var_0 == 536) { toupper( c1 ) = arr[l]; }
      if(env_var_0 == 537) { toupper( c1 ) = c1; }
      if(env_var_0 == 538) { toupper( c1 ) = c2; }
      if(env_var_0 == 539) { toupper( c1 ) = i; }
      if(env_var_0 == 540) { toupper( c1 ) = l; }
      if(env_var_0 == 541) { toupper( c1 ) = s; }
      if(env_var_0 == 542) { toupper( c1 ) = s.begin(); }
      if(env_var_0 == 543) { toupper( c1 ) = s.end(); }
      if(env_var_0 == 544) { toupper( c1 ) = s[i]; }
      if(env_var_0 == 545) { toupper( c1 ) = s[l]; }
      if(env_var_0 == 546) { toupper( c2 ) = arr; }
      if(env_var_0 == 547) { toupper( c2 ) = arr+i; }
      if(env_var_0 == 548) { toupper( c2 ) = arr+l; }
      if(env_var_0 == 549) { toupper( c2 ) = arr[i]; }
      if(env_var_0 == 550) { toupper( c2 ) = arr[l]; }
      if(env_var_0 == 551) { toupper( c2 ) = c1; }
      if(env_var_0 == 552) { toupper( c2 ) = c2; }
      if(env_var_0 == 553) { toupper( c2 ) = i; }
      if(env_var_0 == 554) { toupper( c2 ) = l; }
      if(env_var_0 == 555) { toupper( c2 ) = s; }
      if(env_var_0 == 556) { toupper( c2 ) = s.begin(); }
      if(env_var_0 == 557) { toupper( c2 ) = s.end(); }
      if(env_var_0 == 558) { toupper( c2 ) = s[i]; }
      if(env_var_0 == 559) { toupper( c2 ) = s[l]; }
      if(env_var_0 == 560) { toupper( i ) = arr; }
      if(env_var_0 == 561) { toupper( i ) = arr+i; }
      if(env_var_0 == 562) { toupper( i ) = arr+l; }
      if(env_var_0 == 563) { toupper( i ) = arr[i]; }
      if(env_var_0 == 564) { toupper( i ) = arr[l]; }
      if(env_var_0 == 565) { toupper( i ) = c1; }
      if(env_var_0 == 566) { toupper( i ) = c2; }
      if(env_var_0 == 567) { toupper( i ) = i; }
      if(env_var_0 == 568) { toupper( i ) = l; }
      if(env_var_0 == 569) { toupper( i ) = s; }
      if(env_var_0 == 570) { toupper( i ) = s.begin(); }
      if(env_var_0 == 571) { toupper( i ) = s.end(); }
      if(env_var_0 == 572) { toupper( i ) = s[i]; }
      if(env_var_0 == 573) { toupper( i ) = s[l]; }
      if(env_var_0 == 574) { toupper( l ) = arr; }
      if(env_var_0 == 575) { toupper( l ) = arr+i; }
      if(env_var_0 == 576) { toupper( l ) = arr+l; }
      if(env_var_0 == 577) { toupper( l ) = arr[i]; }
      if(env_var_0 == 578) { toupper( l ) = arr[l]; }
      if(env_var_0 == 579) { toupper( l ) = c1; }
      if(env_var_0 == 580) { toupper( l ) = c2; }
      if(env_var_0 == 581) { toupper( l ) = i; }
      if(env_var_0 == 582) { toupper( l ) = l; }
      if(env_var_0 == 583) { toupper( l ) = s; }
      if(env_var_0 == 584) { toupper( l ) = s.begin(); }
      if(env_var_0 == 585) { toupper( l ) = s.end(); }
      if(env_var_0 == 586) { toupper( l ) = s[i]; }
      if(env_var_0 == 587) { toupper( l ) = s[l]; }
      if(env_var_0 == 588) { toupper( s[i] ) = arr; }
      if(env_var_0 == 589) { toupper( s[i] ) = arr+i; }
      if(env_var_0 == 590) { toupper( s[i] ) = arr+l; }
      if(env_var_0 == 591) { toupper( s[i] ) = arr[i]; }
      if(env_var_0 == 592) { toupper( s[i] ) = arr[l]; }
      if(env_var_0 == 593) { toupper( s[i] ) = c1; }
      if(env_var_0 == 594) { toupper( s[i] ) = c2; }
      if(env_var_0 == 595) { toupper( s[i] ) = i; }
      if(env_var_0 == 596) { toupper( s[i] ) = l; }
      if(env_var_0 == 597) { toupper( s[i] ) = s; }
      if(env_var_0 == 598) { toupper( s[i] ) = s.begin(); }
      if(env_var_0 == 599) { toupper( s[i] ) = s.end(); }
      if(env_var_0 == 600) { toupper( s[i] ) = s[i]; }
      if(env_var_0 == 601) { toupper( s[i] ) = s[l]; }
      if(env_var_0 == 602) { toupper( s[l] ) = arr; }
      if(env_var_0 == 603) { toupper( s[l] ) = arr+i; }
      if(env_var_0 == 604) { toupper( s[l] ) = arr+l; }
      if(env_var_0 == 605) { toupper( s[l] ) = arr[i]; }
      if(env_var_0 == 606) { toupper( s[l] ) = arr[l]; }
      if(env_var_0 == 607) { toupper( s[l] ) = c1; }
      if(env_var_0 == 608) { toupper( s[l] ) = c2; }
      if(env_var_0 == 609) { toupper( s[l] ) = i; }
      if(env_var_0 == 610) { toupper( s[l] ) = l; }
      if(env_var_0 == 611) { toupper( s[l] ) = s; }
      if(env_var_0 == 612) { toupper( s[l] ) = s.begin(); }
      if(env_var_0 == 613) { toupper( s[l] ) = s.end(); }
      if(env_var_0 == 614) { toupper( s[l] ) = s[i]; }
      if(env_var_0 == 615) { toupper( s[l] ) = s[l]; }
      ;
    }
    else if ( arr [ i ] == c2 ) {
      if(env_var_1 == 0) { *s.c_str() = arr; }
      if(env_var_1 == 1) { *s.c_str() = arr+i; }
      if(env_var_1 == 2) { *s.c_str() = arr+l; }
      if(env_var_1 == 3) { *s.c_str() = arr[i]; }
      if(env_var_1 == 4) { *s.c_str() = arr[l]; }
      if(env_var_1 == 5) { *s.c_str() = c1; }
      if(env_var_1 == 6) { *s.c_str() = c2; }
      if(env_var_1 == 7) { *s.c_str() = i; }
      if(env_var_1 == 8) { *s.c_str() = l; }
      if(env_var_1 == 9) { *s.c_str() = s; }
      if(env_var_1 == 10) { *s.c_str() = s.begin(); }
      if(env_var_1 == 11) { *s.c_str() = s.end(); }
      if(env_var_1 == 12) { *s.c_str() = s[i]; }
      if(env_var_1 == 13) { *s.c_str() = s[l]; }
      if(env_var_1 == 14) { arr = arr; }
      if(env_var_1 == 15) { arr = arr+i; }
      if(env_var_1 == 16) { arr = arr+l; }
      if(env_var_1 == 17) { arr = arr[i]; }
      if(env_var_1 == 18) { arr = arr[l]; }
      if(env_var_1 == 19) { arr = c1; }
      if(env_var_1 == 20) { arr = c2; }
      if(env_var_1 == 21) { arr = i; }
      if(env_var_1 == 22) { arr = l; }
      if(env_var_1 == 23) { arr = s; }
      if(env_var_1 == 24) { arr = s.begin(); }
      if(env_var_1 == 25) { arr = s.end(); }
      if(env_var_1 == 26) { arr = s[i]; }
      if(env_var_1 == 27) { arr = s[l]; }
      if(env_var_1 == 28) { arr+i = arr; }
      if(env_var_1 == 29) { arr+i = arr+i; }
      if(env_var_1 == 30) { arr+i = arr+l; }
      if(env_var_1 == 31) { arr+i = arr[i]; }
      if(env_var_1 == 32) { arr+i = arr[l]; }
      if(env_var_1 == 33) { arr+i = c1; }
      if(env_var_1 == 34) { arr+i = c2; }
      if(env_var_1 == 35) { arr+i = i; }
      if(env_var_1 == 36) { arr+i = l; }
      if(env_var_1 == 37) { arr+i = s; }
      if(env_var_1 == 38) { arr+i = s.begin(); }
      if(env_var_1 == 39) { arr+i = s.end(); }
      if(env_var_1 == 40) { arr+i = s[i]; }
      if(env_var_1 == 41) { arr+i = s[l]; }
      if(env_var_1 == 42) { arr+l = arr; }
      if(env_var_1 == 43) { arr+l = arr+i; }
      if(env_var_1 == 44) { arr+l = arr+l; }
      if(env_var_1 == 45) { arr+l = arr[i]; }
      if(env_var_1 == 46) { arr+l = arr[l]; }
      if(env_var_1 == 47) { arr+l = c1; }
      if(env_var_1 == 48) { arr+l = c2; }
      if(env_var_1 == 49) { arr+l = i; }
      if(env_var_1 == 50) { arr+l = l; }
      if(env_var_1 == 51) { arr+l = s; }
      if(env_var_1 == 52) { arr+l = s.begin(); }
      if(env_var_1 == 53) { arr+l = s.end(); }
      if(env_var_1 == 54) { arr+l = s[i]; }
      if(env_var_1 == 55) { arr+l = s[l]; }
      if(env_var_1 == 56) { arr[i] = arr; }
      if(env_var_1 == 57) { arr[i] = arr+i; }
      if(env_var_1 == 58) { arr[i] = arr+l; }
      if(env_var_1 == 59) { arr[i] = arr[i]; }
      if(env_var_1 == 60) { arr[i] = arr[l]; }
      if(env_var_1 == 61) { arr[i] = c1; }
      if(env_var_1 == 62) { arr[i] = c2; }
      if(env_var_1 == 63) { arr[i] = i; }
      if(env_var_1 == 64) { arr[i] = l; }
      if(env_var_1 == 65) { arr[i] = s; }
      if(env_var_1 == 66) { arr[i] = s.begin(); }
      if(env_var_1 == 67) { arr[i] = s.end(); }
      if(env_var_1 == 68) { arr[i] = s[i]; }
      if(env_var_1 == 69) { arr[i] = s[l]; }
      if(env_var_1 == 70) { arr[l] = arr; }
      if(env_var_1 == 71) { arr[l] = arr+i; }
      if(env_var_1 == 72) { arr[l] = arr+l; }
      if(env_var_1 == 73) { arr[l] = arr[i]; }
      if(env_var_1 == 74) { arr[l] = arr[l]; }
      if(env_var_1 == 75) { arr[l] = c1; }
      if(env_var_1 == 76) { arr[l] = c2; }
      if(env_var_1 == 77) { arr[l] = i; }
      if(env_var_1 == 78) { arr[l] = l; }
      if(env_var_1 == 79) { arr[l] = s; }
      if(env_var_1 == 80) { arr[l] = s.begin(); }
      if(env_var_1 == 81) { arr[l] = s.end(); }
      if(env_var_1 == 82) { arr[l] = s[i]; }
      if(env_var_1 == 83) { arr[l] = s[l]; }
      if(env_var_1 == 84) { c1 = arr; }
      if(env_var_1 == 85) { c1 = arr+i; }
      if(env_var_1 == 86) { c1 = arr+l; }
      if(env_var_1 == 87) { c1 = arr[i]; }
      if(env_var_1 == 88) { c1 = arr[l]; }
      if(env_var_1 == 89) { c1 = c1; }
      if(env_var_1 == 90) { c1 = c2; }
      if(env_var_1 == 91) { c1 = i; }
      if(env_var_1 == 92) { c1 = l; }
      if(env_var_1 == 93) { c1 = s; }
      if(env_var_1 == 94) { c1 = s.begin(); }
      if(env_var_1 == 95) { c1 = s.end(); }
      if(env_var_1 == 96) { c1 = s[i]; }
      if(env_var_1 == 97) { c1 = s[l]; }
      if(env_var_1 == 98) { c2 = arr; }
      if(env_var_1 == 99) { c2 = arr+i; }
      if(env_var_1 == 100) { c2 = arr+l; }
      if(env_var_1 == 101) { c2 = arr[i]; }
      if(env_var_1 == 102) { c2 = arr[l]; }
      if(env_var_1 == 103) { c2 = c1; }
      if(env_var_1 == 104) { c2 = c2; }
      if(env_var_1 == 105) { c2 = i; }
      if(env_var_1 == 106) { c2 = l; }
      if(env_var_1 == 107) { c2 = s; }
      if(env_var_1 == 108) { c2 = s.begin(); }
      if(env_var_1 == 109) { c2 = s.end(); }
      if(env_var_1 == 110) { c2 = s[i]; }
      if(env_var_1 == 111) { c2 = s[l]; }
      if(env_var_1 == 112) { i = arr; }
      if(env_var_1 == 113) { i = arr+i; }
      if(env_var_1 == 114) { i = arr+l; }
      if(env_var_1 == 115) { i = arr[i]; }
      if(env_var_1 == 116) { i = arr[l]; }
      if(env_var_1 == 117) { i = c1; }
      if(env_var_1 == 118) { i = c2; }
      if(env_var_1 == 119) { i = i; }
      if(env_var_1 == 120) { i = l; }
      if(env_var_1 == 121) { i = s; }
      if(env_var_1 == 122) { i = s.begin(); }
      if(env_var_1 == 123) { i = s.end(); }
      if(env_var_1 == 124) { i = s[i]; }
      if(env_var_1 == 125) { i = s[l]; }
      if(env_var_1 == 126) { isupper( arr[i] ) = arr; }
      if(env_var_1 == 127) { isupper( arr[i] ) = arr+i; }
      if(env_var_1 == 128) { isupper( arr[i] ) = arr+l; }
      if(env_var_1 == 129) { isupper( arr[i] ) = arr[i]; }
      if(env_var_1 == 130) { isupper( arr[i] ) = arr[l]; }
      if(env_var_1 == 131) { isupper( arr[i] ) = c1; }
      if(env_var_1 == 132) { isupper( arr[i] ) = c2; }
      if(env_var_1 == 133) { isupper( arr[i] ) = i; }
      if(env_var_1 == 134) { isupper( arr[i] ) = l; }
      if(env_var_1 == 135) { isupper( arr[i] ) = s; }
      if(env_var_1 == 136) { isupper( arr[i] ) = s.begin(); }
      if(env_var_1 == 137) { isupper( arr[i] ) = s.end(); }
      if(env_var_1 == 138) { isupper( arr[i] ) = s[i]; }
      if(env_var_1 == 139) { isupper( arr[i] ) = s[l]; }
      if(env_var_1 == 140) { isupper( arr[l] ) = arr; }
      if(env_var_1 == 141) { isupper( arr[l] ) = arr+i; }
      if(env_var_1 == 142) { isupper( arr[l] ) = arr+l; }
      if(env_var_1 == 143) { isupper( arr[l] ) = arr[i]; }
      if(env_var_1 == 144) { isupper( arr[l] ) = arr[l]; }
      if(env_var_1 == 145) { isupper( arr[l] ) = c1; }
      if(env_var_1 == 146) { isupper( arr[l] ) = c2; }
      if(env_var_1 == 147) { isupper( arr[l] ) = i; }
      if(env_var_1 == 148) { isupper( arr[l] ) = l; }
      if(env_var_1 == 149) { isupper( arr[l] ) = s; }
      if(env_var_1 == 150) { isupper( arr[l] ) = s.begin(); }
      if(env_var_1 == 151) { isupper( arr[l] ) = s.end(); }
      if(env_var_1 == 152) { isupper( arr[l] ) = s[i]; }
      if(env_var_1 == 153) { isupper( arr[l] ) = s[l]; }
      if(env_var_1 == 154) { isupper( c1 ) = arr; }
      if(env_var_1 == 155) { isupper( c1 ) = arr+i; }
      if(env_var_1 == 156) { isupper( c1 ) = arr+l; }
      if(env_var_1 == 157) { isupper( c1 ) = arr[i]; }
      if(env_var_1 == 158) { isupper( c1 ) = arr[l]; }
      if(env_var_1 == 159) { isupper( c1 ) = c1; }
      if(env_var_1 == 160) { isupper( c1 ) = c2; }
      if(env_var_1 == 161) { isupper( c1 ) = i; }
      if(env_var_1 == 162) { isupper( c1 ) = l; }
      if(env_var_1 == 163) { isupper( c1 ) = s; }
      if(env_var_1 == 164) { isupper( c1 ) = s.begin(); }
      if(env_var_1 == 165) { isupper( c1 ) = s.end(); }
      if(env_var_1 == 166) { isupper( c1 ) = s[i]; }
      if(env_var_1 == 167) { isupper( c1 ) = s[l]; }
      if(env_var_1 == 168) { isupper( c2 ) = arr; }
      if(env_var_1 == 169) { isupper( c2 ) = arr+i; }
      if(env_var_1 == 170) { isupper( c2 ) = arr+l; }
      if(env_var_1 == 171) { isupper( c2 ) = arr[i]; }
      if(env_var_1 == 172) { isupper( c2 ) = arr[l]; }
      if(env_var_1 == 173) { isupper( c2 ) = c1; }
      if(env_var_1 == 174) { isupper( c2 ) = c2; }
      if(env_var_1 == 175) { isupper( c2 ) = i; }
      if(env_var_1 == 176) { isupper( c2 ) = l; }
      if(env_var_1 == 177) { isupper( c2 ) = s; }
      if(env_var_1 == 178) { isupper( c2 ) = s.begin(); }
      if(env_var_1 == 179) { isupper( c2 ) = s.end(); }
      if(env_var_1 == 180) { isupper( c2 ) = s[i]; }
      if(env_var_1 == 181) { isupper( c2 ) = s[l]; }
      if(env_var_1 == 182) { isupper( i ) = arr; }
      if(env_var_1 == 183) { isupper( i ) = arr+i; }
      if(env_var_1 == 184) { isupper( i ) = arr+l; }
      if(env_var_1 == 185) { isupper( i ) = arr[i]; }
      if(env_var_1 == 186) { isupper( i ) = arr[l]; }
      if(env_var_1 == 187) { isupper( i ) = c1; }
      if(env_var_1 == 188) { isupper( i ) = c2; }
      if(env_var_1 == 189) { isupper( i ) = i; }
      if(env_var_1 == 190) { isupper( i ) = l; }
      if(env_var_1 == 191) { isupper( i ) = s; }
      if(env_var_1 == 192) { isupper( i ) = s.begin(); }
      if(env_var_1 == 193) { isupper( i ) = s.end(); }
      if(env_var_1 == 194) { isupper( i ) = s[i]; }
      if(env_var_1 == 195) { isupper( i ) = s[l]; }
      if(env_var_1 == 196) { isupper( l ) = arr; }
      if(env_var_1 == 197) { isupper( l ) = arr+i; }
      if(env_var_1 == 198) { isupper( l ) = arr+l; }
      if(env_var_1 == 199) { isupper( l ) = arr[i]; }
      if(env_var_1 == 200) { isupper( l ) = arr[l]; }
      if(env_var_1 == 201) { isupper( l ) = c1; }
      if(env_var_1 == 202) { isupper( l ) = c2; }
      if(env_var_1 == 203) { isupper( l ) = i; }
      if(env_var_1 == 204) { isupper( l ) = l; }
      if(env_var_1 == 205) { isupper( l ) = s; }
      if(env_var_1 == 206) { isupper( l ) = s.begin(); }
      if(env_var_1 == 207) { isupper( l ) = s.end(); }
      if(env_var_1 == 208) { isupper( l ) = s[i]; }
      if(env_var_1 == 209) { isupper( l ) = s[l]; }
      if(env_var_1 == 210) { isupper( s[i] ) = arr; }
      if(env_var_1 == 211) { isupper( s[i] ) = arr+i; }
      if(env_var_1 == 212) { isupper( s[i] ) = arr+l; }
      if(env_var_1 == 213) { isupper( s[i] ) = arr[i]; }
      if(env_var_1 == 214) { isupper( s[i] ) = arr[l]; }
      if(env_var_1 == 215) { isupper( s[i] ) = c1; }
      if(env_var_1 == 216) { isupper( s[i] ) = c2; }
      if(env_var_1 == 217) { isupper( s[i] ) = i; }
      if(env_var_1 == 218) { isupper( s[i] ) = l; }
      if(env_var_1 == 219) { isupper( s[i] ) = s; }
      if(env_var_1 == 220) { isupper( s[i] ) = s.begin(); }
      if(env_var_1 == 221) { isupper( s[i] ) = s.end(); }
      if(env_var_1 == 222) { isupper( s[i] ) = s[i]; }
      if(env_var_1 == 223) { isupper( s[i] ) = s[l]; }
      if(env_var_1 == 224) { isupper( s[l] ) = arr; }
      if(env_var_1 == 225) { isupper( s[l] ) = arr+i; }
      if(env_var_1 == 226) { isupper( s[l] ) = arr+l; }
      if(env_var_1 == 227) { isupper( s[l] ) = arr[i]; }
      if(env_var_1 == 228) { isupper( s[l] ) = arr[l]; }
      if(env_var_1 == 229) { isupper( s[l] ) = c1; }
      if(env_var_1 == 230) { isupper( s[l] ) = c2; }
      if(env_var_1 == 231) { isupper( s[l] ) = i; }
      if(env_var_1 == 232) { isupper( s[l] ) = l; }
      if(env_var_1 == 233) { isupper( s[l] ) = s; }
      if(env_var_1 == 234) { isupper( s[l] ) = s.begin(); }
      if(env_var_1 == 235) { isupper( s[l] ) = s.end(); }
      if(env_var_1 == 236) { isupper( s[l] ) = s[i]; }
      if(env_var_1 == 237) { isupper( s[l] ) = s[l]; }
      if(env_var_1 == 238) { l = arr; }
      if(env_var_1 == 239) { l = arr+i; }
      if(env_var_1 == 240) { l = arr+l; }
      if(env_var_1 == 241) { l = arr[i]; }
      if(env_var_1 == 242) { l = arr[l]; }
      if(env_var_1 == 243) { l = c1; }
      if(env_var_1 == 244) { l = c2; }
      if(env_var_1 == 245) { l = i; }
      if(env_var_1 == 246) { l = l; }
      if(env_var_1 == 247) { l = s; }
      if(env_var_1 == 248) { l = s.begin(); }
      if(env_var_1 == 249) { l = s.end(); }
      if(env_var_1 == 250) { l = s[i]; }
      if(env_var_1 == 251) { l = s[l]; }
      if(env_var_1 == 252) { s = arr; }
      if(env_var_1 == 253) { s = arr+i; }
      if(env_var_1 == 254) { s = arr+l; }
      if(env_var_1 == 255) { s = arr[i]; }
      if(env_var_1 == 256) { s = arr[l]; }
      if(env_var_1 == 257) { s = c1; }
      if(env_var_1 == 258) { s = c2; }
      if(env_var_1 == 259) { s = i; }
      if(env_var_1 == 260) { s = l; }
      if(env_var_1 == 261) { s = s; }
      if(env_var_1 == 262) { s = s.begin(); }
      if(env_var_1 == 263) { s = s.end(); }
      if(env_var_1 == 264) { s = s[i]; }
      if(env_var_1 == 265) { s = s[l]; }
      if(env_var_1 == 266) { s.__clear_and_shrink() = arr; }
      if(env_var_1 == 267) { s.__clear_and_shrink() = arr+i; }
      if(env_var_1 == 268) { s.__clear_and_shrink() = arr+l; }
      if(env_var_1 == 269) { s.__clear_and_shrink() = arr[i]; }
      if(env_var_1 == 270) { s.__clear_and_shrink() = arr[l]; }
      if(env_var_1 == 271) { s.__clear_and_shrink() = c1; }
      if(env_var_1 == 272) { s.__clear_and_shrink() = c2; }
      if(env_var_1 == 273) { s.__clear_and_shrink() = i; }
      if(env_var_1 == 274) { s.__clear_and_shrink() = l; }
      if(env_var_1 == 275) { s.__clear_and_shrink() = s; }
      if(env_var_1 == 276) { s.__clear_and_shrink() = s.begin(); }
      if(env_var_1 == 277) { s.__clear_and_shrink() = s.end(); }
      if(env_var_1 == 278) { s.__clear_and_shrink() = s[i]; }
      if(env_var_1 == 279) { s.__clear_and_shrink() = s[l]; }
      if(env_var_1 == 280) { s.__is_long() = arr; }
      if(env_var_1 == 281) { s.__is_long() = arr+i; }
      if(env_var_1 == 282) { s.__is_long() = arr+l; }
      if(env_var_1 == 283) { s.__is_long() = arr[i]; }
      if(env_var_1 == 284) { s.__is_long() = arr[l]; }
      if(env_var_1 == 285) { s.__is_long() = c1; }
      if(env_var_1 == 286) { s.__is_long() = c2; }
      if(env_var_1 == 287) { s.__is_long() = i; }
      if(env_var_1 == 288) { s.__is_long() = l; }
      if(env_var_1 == 289) { s.__is_long() = s; }
      if(env_var_1 == 290) { s.__is_long() = s.begin(); }
      if(env_var_1 == 291) { s.__is_long() = s.end(); }
      if(env_var_1 == 292) { s.__is_long() = s[i]; }
      if(env_var_1 == 293) { s.__is_long() = s[l]; }
      if(env_var_1 == 294) { s.back() = arr; }
      if(env_var_1 == 295) { s.back() = arr+i; }
      if(env_var_1 == 296) { s.back() = arr+l; }
      if(env_var_1 == 297) { s.back() = arr[i]; }
      if(env_var_1 == 298) { s.back() = arr[l]; }
      if(env_var_1 == 299) { s.back() = c1; }
      if(env_var_1 == 300) { s.back() = c2; }
      if(env_var_1 == 301) { s.back() = i; }
      if(env_var_1 == 302) { s.back() = l; }
      if(env_var_1 == 303) { s.back() = s; }
      if(env_var_1 == 304) { s.back() = s.begin(); }
      if(env_var_1 == 305) { s.back() = s.end(); }
      if(env_var_1 == 306) { s.back() = s[i]; }
      if(env_var_1 == 307) { s.back() = s[l]; }
      if(env_var_1 == 308) { s.begin() = arr; }
      if(env_var_1 == 309) { s.begin() = arr+i; }
      if(env_var_1 == 310) { s.begin() = arr+l; }
      if(env_var_1 == 311) { s.begin() = arr[i]; }
      if(env_var_1 == 312) { s.begin() = arr[l]; }
      if(env_var_1 == 313) { s.begin() = c1; }
      if(env_var_1 == 314) { s.begin() = c2; }
      if(env_var_1 == 315) { s.begin() = i; }
      if(env_var_1 == 316) { s.begin() = l; }
      if(env_var_1 == 317) { s.begin() = s; }
      if(env_var_1 == 318) { s.begin() = s.begin(); }
      if(env_var_1 == 319) { s.begin() = s.end(); }
      if(env_var_1 == 320) { s.begin() = s[i]; }
      if(env_var_1 == 321) { s.begin() = s[l]; }
      if(env_var_1 == 322) { s.capacity() = arr; }
      if(env_var_1 == 323) { s.capacity() = arr+i; }
      if(env_var_1 == 324) { s.capacity() = arr+l; }
      if(env_var_1 == 325) { s.capacity() = arr[i]; }
      if(env_var_1 == 326) { s.capacity() = arr[l]; }
      if(env_var_1 == 327) { s.capacity() = c1; }
      if(env_var_1 == 328) { s.capacity() = c2; }
      if(env_var_1 == 329) { s.capacity() = i; }
      if(env_var_1 == 330) { s.capacity() = l; }
      if(env_var_1 == 331) { s.capacity() = s; }
      if(env_var_1 == 332) { s.capacity() = s.begin(); }
      if(env_var_1 == 333) { s.capacity() = s.end(); }
      if(env_var_1 == 334) { s.capacity() = s[i]; }
      if(env_var_1 == 335) { s.capacity() = s[l]; }
      if(env_var_1 == 336) { s.cend() = arr; }
      if(env_var_1 == 337) { s.cend() = arr+i; }
      if(env_var_1 == 338) { s.cend() = arr+l; }
      if(env_var_1 == 339) { s.cend() = arr[i]; }
      if(env_var_1 == 340) { s.cend() = arr[l]; }
      if(env_var_1 == 341) { s.cend() = c1; }
      if(env_var_1 == 342) { s.cend() = c2; }
      if(env_var_1 == 343) { s.cend() = i; }
      if(env_var_1 == 344) { s.cend() = l; }
      if(env_var_1 == 345) { s.cend() = s; }
      if(env_var_1 == 346) { s.cend() = s.begin(); }
      if(env_var_1 == 347) { s.cend() = s.end(); }
      if(env_var_1 == 348) { s.cend() = s[i]; }
      if(env_var_1 == 349) { s.cend() = s[l]; }
      if(env_var_1 == 350) { s.crend() = arr; }
      if(env_var_1 == 351) { s.crend() = arr+i; }
      if(env_var_1 == 352) { s.crend() = arr+l; }
      if(env_var_1 == 353) { s.crend() = arr[i]; }
      if(env_var_1 == 354) { s.crend() = arr[l]; }
      if(env_var_1 == 355) { s.crend() = c1; }
      if(env_var_1 == 356) { s.crend() = c2; }
      if(env_var_1 == 357) { s.crend() = i; }
      if(env_var_1 == 358) { s.crend() = l; }
      if(env_var_1 == 359) { s.crend() = s; }
      if(env_var_1 == 360) { s.crend() = s.begin(); }
      if(env_var_1 == 361) { s.crend() = s.end(); }
      if(env_var_1 == 362) { s.crend() = s[i]; }
      if(env_var_1 == 363) { s.crend() = s[l]; }
      if(env_var_1 == 364) { s.empty() = arr; }
      if(env_var_1 == 365) { s.empty() = arr+i; }
      if(env_var_1 == 366) { s.empty() = arr+l; }
      if(env_var_1 == 367) { s.empty() = arr[i]; }
      if(env_var_1 == 368) { s.empty() = arr[l]; }
      if(env_var_1 == 369) { s.empty() = c1; }
      if(env_var_1 == 370) { s.empty() = c2; }
      if(env_var_1 == 371) { s.empty() = i; }
      if(env_var_1 == 372) { s.empty() = l; }
      if(env_var_1 == 373) { s.empty() = s; }
      if(env_var_1 == 374) { s.empty() = s.begin(); }
      if(env_var_1 == 375) { s.empty() = s.end(); }
      if(env_var_1 == 376) { s.empty() = s[i]; }
      if(env_var_1 == 377) { s.empty() = s[l]; }
      if(env_var_1 == 378) { s.end() = arr; }
      if(env_var_1 == 379) { s.end() = arr+i; }
      if(env_var_1 == 380) { s.end() = arr+l; }
      if(env_var_1 == 381) { s.end() = arr[i]; }
      if(env_var_1 == 382) { s.end() = arr[l]; }
      if(env_var_1 == 383) { s.end() = c1; }
      if(env_var_1 == 384) { s.end() = c2; }
      if(env_var_1 == 385) { s.end() = i; }
      if(env_var_1 == 386) { s.end() = l; }
      if(env_var_1 == 387) { s.end() = s; }
      if(env_var_1 == 388) { s.end() = s.begin(); }
      if(env_var_1 == 389) { s.end() = s.end(); }
      if(env_var_1 == 390) { s.end() = s[i]; }
      if(env_var_1 == 391) { s.end() = s[l]; }
      if(env_var_1 == 392) { s.front() = arr; }
      if(env_var_1 == 393) { s.front() = arr+i; }
      if(env_var_1 == 394) { s.front() = arr+l; }
      if(env_var_1 == 395) { s.front() = arr[i]; }
      if(env_var_1 == 396) { s.front() = arr[l]; }
      if(env_var_1 == 397) { s.front() = c1; }
      if(env_var_1 == 398) { s.front() = c2; }
      if(env_var_1 == 399) { s.front() = i; }
      if(env_var_1 == 400) { s.front() = l; }
      if(env_var_1 == 401) { s.front() = s; }
      if(env_var_1 == 402) { s.front() = s.begin(); }
      if(env_var_1 == 403) { s.front() = s.end(); }
      if(env_var_1 == 404) { s.front() = s[i]; }
      if(env_var_1 == 405) { s.front() = s[l]; }
      if(env_var_1 == 406) { s.get_allocator() = arr; }
      if(env_var_1 == 407) { s.get_allocator() = arr+i; }
      if(env_var_1 == 408) { s.get_allocator() = arr+l; }
      if(env_var_1 == 409) { s.get_allocator() = arr[i]; }
      if(env_var_1 == 410) { s.get_allocator() = arr[l]; }
      if(env_var_1 == 411) { s.get_allocator() = c1; }
      if(env_var_1 == 412) { s.get_allocator() = c2; }
      if(env_var_1 == 413) { s.get_allocator() = i; }
      if(env_var_1 == 414) { s.get_allocator() = l; }
      if(env_var_1 == 415) { s.get_allocator() = s; }
      if(env_var_1 == 416) { s.get_allocator() = s.begin(); }
      if(env_var_1 == 417) { s.get_allocator() = s.end(); }
      if(env_var_1 == 418) { s.get_allocator() = s[i]; }
      if(env_var_1 == 419) { s.get_allocator() = s[l]; }
      if(env_var_1 == 420) { s.length() = arr; }
      if(env_var_1 == 421) { s.length() = arr+i; }
      if(env_var_1 == 422) { s.length() = arr+l; }
      if(env_var_1 == 423) { s.length() = arr[i]; }
      if(env_var_1 == 424) { s.length() = arr[l]; }
      if(env_var_1 == 425) { s.length() = c1; }
      if(env_var_1 == 426) { s.length() = c2; }
      if(env_var_1 == 427) { s.length() = i; }
      if(env_var_1 == 428) { s.length() = l; }
      if(env_var_1 == 429) { s.length() = s; }
      if(env_var_1 == 430) { s.length() = s.begin(); }
      if(env_var_1 == 431) { s.length() = s.end(); }
      if(env_var_1 == 432) { s.length() = s[i]; }
      if(env_var_1 == 433) { s.length() = s[l]; }
      if(env_var_1 == 434) { s.rbegin() = arr; }
      if(env_var_1 == 435) { s.rbegin() = arr+i; }
      if(env_var_1 == 436) { s.rbegin() = arr+l; }
      if(env_var_1 == 437) { s.rbegin() = arr[i]; }
      if(env_var_1 == 438) { s.rbegin() = arr[l]; }
      if(env_var_1 == 439) { s.rbegin() = c1; }
      if(env_var_1 == 440) { s.rbegin() = c2; }
      if(env_var_1 == 441) { s.rbegin() = i; }
      if(env_var_1 == 442) { s.rbegin() = l; }
      if(env_var_1 == 443) { s.rbegin() = s; }
      if(env_var_1 == 444) { s.rbegin() = s.begin(); }
      if(env_var_1 == 445) { s.rbegin() = s.end(); }
      if(env_var_1 == 446) { s.rbegin() = s[i]; }
      if(env_var_1 == 447) { s.rbegin() = s[l]; }
      if(env_var_1 == 448) { s.rend() = arr; }
      if(env_var_1 == 449) { s.rend() = arr+i; }
      if(env_var_1 == 450) { s.rend() = arr+l; }
      if(env_var_1 == 451) { s.rend() = arr[i]; }
      if(env_var_1 == 452) { s.rend() = arr[l]; }
      if(env_var_1 == 453) { s.rend() = c1; }
      if(env_var_1 == 454) { s.rend() = c2; }
      if(env_var_1 == 455) { s.rend() = i; }
      if(env_var_1 == 456) { s.rend() = l; }
      if(env_var_1 == 457) { s.rend() = s; }
      if(env_var_1 == 458) { s.rend() = s.begin(); }
      if(env_var_1 == 459) { s.rend() = s.end(); }
      if(env_var_1 == 460) { s.rend() = s[i]; }
      if(env_var_1 == 461) { s.rend() = s[l]; }
      if(env_var_1 == 462) { s.shrink_to_fit() = arr; }
      if(env_var_1 == 463) { s.shrink_to_fit() = arr+i; }
      if(env_var_1 == 464) { s.shrink_to_fit() = arr+l; }
      if(env_var_1 == 465) { s.shrink_to_fit() = arr[i]; }
      if(env_var_1 == 466) { s.shrink_to_fit() = arr[l]; }
      if(env_var_1 == 467) { s.shrink_to_fit() = c1; }
      if(env_var_1 == 468) { s.shrink_to_fit() = c2; }
      if(env_var_1 == 469) { s.shrink_to_fit() = i; }
      if(env_var_1 == 470) { s.shrink_to_fit() = l; }
      if(env_var_1 == 471) { s.shrink_to_fit() = s; }
      if(env_var_1 == 472) { s.shrink_to_fit() = s.begin(); }
      if(env_var_1 == 473) { s.shrink_to_fit() = s.end(); }
      if(env_var_1 == 474) { s.shrink_to_fit() = s[i]; }
      if(env_var_1 == 475) { s.shrink_to_fit() = s[l]; }
      if(env_var_1 == 476) { s[i] = arr; }
      if(env_var_1 == 477) { s[i] = arr+i; }
      if(env_var_1 == 478) { s[i] = arr+l; }
      if(env_var_1 == 479) { s[i] = arr[i]; }
      if(env_var_1 == 480) { s[i] = arr[l]; }
      if(env_var_1 == 481) { s[i] = c1; }
      if(env_var_1 == 482) { s[i] = c2; }
      if(env_var_1 == 483) { s[i] = i; }
      if(env_var_1 == 484) { s[i] = l; }
      if(env_var_1 == 485) { s[i] = s; }
      if(env_var_1 == 486) { s[i] = s.begin(); }
      if(env_var_1 == 487) { s[i] = s.end(); }
      if(env_var_1 == 488) { s[i] = s[i]; }
      if(env_var_1 == 489) { s[i] = s[l]; }
      if(env_var_1 == 490) { s[l] = arr; }
      if(env_var_1 == 491) { s[l] = arr+i; }
      if(env_var_1 == 492) { s[l] = arr+l; }
      if(env_var_1 == 493) { s[l] = arr[i]; }
      if(env_var_1 == 494) { s[l] = arr[l]; }
      if(env_var_1 == 495) { s[l] = c1; }
      if(env_var_1 == 496) { s[l] = c2; }
      if(env_var_1 == 497) { s[l] = i; }
      if(env_var_1 == 498) { s[l] = l; }
      if(env_var_1 == 499) { s[l] = s; }
      if(env_var_1 == 500) { s[l] = s.begin(); }
      if(env_var_1 == 501) { s[l] = s.end(); }
      if(env_var_1 == 502) { s[l] = s[i]; }
      if(env_var_1 == 503) { s[l] = s[l]; }
      if(env_var_1 == 504) { toupper( arr[i] ) = arr; }
      if(env_var_1 == 505) { toupper( arr[i] ) = arr+i; }
      if(env_var_1 == 506) { toupper( arr[i] ) = arr+l; }
      if(env_var_1 == 507) { toupper( arr[i] ) = arr[i]; }
      if(env_var_1 == 508) { toupper( arr[i] ) = arr[l]; }
      if(env_var_1 == 509) { toupper( arr[i] ) = c1; }
      if(env_var_1 == 510) { toupper( arr[i] ) = c2; }
      if(env_var_1 == 511) { toupper( arr[i] ) = i; }
      if(env_var_1 == 512) { toupper( arr[i] ) = l; }
      if(env_var_1 == 513) { toupper( arr[i] ) = s; }
      if(env_var_1 == 514) { toupper( arr[i] ) = s.begin(); }
      if(env_var_1 == 515) { toupper( arr[i] ) = s.end(); }
      if(env_var_1 == 516) { toupper( arr[i] ) = s[i]; }
      if(env_var_1 == 517) { toupper( arr[i] ) = s[l]; }
      if(env_var_1 == 518) { toupper( arr[l] ) = arr; }
      if(env_var_1 == 519) { toupper( arr[l] ) = arr+i; }
      if(env_var_1 == 520) { toupper( arr[l] ) = arr+l; }
      if(env_var_1 == 521) { toupper( arr[l] ) = arr[i]; }
      if(env_var_1 == 522) { toupper( arr[l] ) = arr[l]; }
      if(env_var_1 == 523) { toupper( arr[l] ) = c1; }
      if(env_var_1 == 524) { toupper( arr[l] ) = c2; }
      if(env_var_1 == 525) { toupper( arr[l] ) = i; }
      if(env_var_1 == 526) { toupper( arr[l] ) = l; }
      if(env_var_1 == 527) { toupper( arr[l] ) = s; }
      if(env_var_1 == 528) { toupper( arr[l] ) = s.begin(); }
      if(env_var_1 == 529) { toupper( arr[l] ) = s.end(); }
      if(env_var_1 == 530) { toupper( arr[l] ) = s[i]; }
      if(env_var_1 == 531) { toupper( arr[l] ) = s[l]; }
      if(env_var_1 == 532) { toupper( c1 ) = arr; }
      if(env_var_1 == 533) { toupper( c1 ) = arr+i; }
      if(env_var_1 == 534) { toupper( c1 ) = arr+l; }
      if(env_var_1 == 535) { toupper( c1 ) = arr[i]; }
      if(env_var_1 == 536) { toupper( c1 ) = arr[l]; }
      if(env_var_1 == 537) { toupper( c1 ) = c1; }
      if(env_var_1 == 538) { toupper( c1 ) = c2; }
      if(env_var_1 == 539) { toupper( c1 ) = i; }
      if(env_var_1 == 540) { toupper( c1 ) = l; }
      if(env_var_1 == 541) { toupper( c1 ) = s; }
      if(env_var_1 == 542) { toupper( c1 ) = s.begin(); }
      if(env_var_1 == 543) { toupper( c1 ) = s.end(); }
      if(env_var_1 == 544) { toupper( c1 ) = s[i]; }
      if(env_var_1 == 545) { toupper( c1 ) = s[l]; }
      if(env_var_1 == 546) { toupper( c2 ) = arr; }
      if(env_var_1 == 547) { toupper( c2 ) = arr+i; }
      if(env_var_1 == 548) { toupper( c2 ) = arr+l; }
      if(env_var_1 == 549) { toupper( c2 ) = arr[i]; }
      if(env_var_1 == 550) { toupper( c2 ) = arr[l]; }
      if(env_var_1 == 551) { toupper( c2 ) = c1; }
      if(env_var_1 == 552) { toupper( c2 ) = c2; }
      if(env_var_1 == 553) { toupper( c2 ) = i; }
      if(env_var_1 == 554) { toupper( c2 ) = l; }
      if(env_var_1 == 555) { toupper( c2 ) = s; }
      if(env_var_1 == 556) { toupper( c2 ) = s.begin(); }
      if(env_var_1 == 557) { toupper( c2 ) = s.end(); }
      if(env_var_1 == 558) { toupper( c2 ) = s[i]; }
      if(env_var_1 == 559) { toupper( c2 ) = s[l]; }
      if(env_var_1 == 560) { toupper( i ) = arr; }
      if(env_var_1 == 561) { toupper( i ) = arr+i; }
      if(env_var_1 == 562) { toupper( i ) = arr+l; }
      if(env_var_1 == 563) { toupper( i ) = arr[i]; }
      if(env_var_1 == 564) { toupper( i ) = arr[l]; }
      if(env_var_1 == 565) { toupper( i ) = c1; }
      if(env_var_1 == 566) { toupper( i ) = c2; }
      if(env_var_1 == 567) { toupper( i ) = i; }
      if(env_var_1 == 568) { toupper( i ) = l; }
      if(env_var_1 == 569) { toupper( i ) = s; }
      if(env_var_1 == 570) { toupper( i ) = s.begin(); }
      if(env_var_1 == 571) { toupper( i ) = s.end(); }
      if(env_var_1 == 572) { toupper( i ) = s[i]; }
      if(env_var_1 == 573) { toupper( i ) = s[l]; }
      if(env_var_1 == 574) { toupper( l ) = arr; }
      if(env_var_1 == 575) { toupper( l ) = arr+i; }
      if(env_var_1 == 576) { toupper( l ) = arr+l; }
      if(env_var_1 == 577) { toupper( l ) = arr[i]; }
      if(env_var_1 == 578) { toupper( l ) = arr[l]; }
      if(env_var_1 == 579) { toupper( l ) = c1; }
      if(env_var_1 == 580) { toupper( l ) = c2; }
      if(env_var_1 == 581) { toupper( l ) = i; }
      if(env_var_1 == 582) { toupper( l ) = l; }
      if(env_var_1 == 583) { toupper( l ) = s; }
      if(env_var_1 == 584) { toupper( l ) = s.begin(); }
      if(env_var_1 == 585) { toupper( l ) = s.end(); }
      if(env_var_1 == 586) { toupper( l ) = s[i]; }
      if(env_var_1 == 587) { toupper( l ) = s[l]; }
      if(env_var_1 == 588) { toupper( s[i] ) = arr; }
      if(env_var_1 == 589) { toupper( s[i] ) = arr+i; }
      if(env_var_1 == 590) { toupper( s[i] ) = arr+l; }
      if(env_var_1 == 591) { toupper( s[i] ) = arr[i]; }
      if(env_var_1 == 592) { toupper( s[i] ) = arr[l]; }
      if(env_var_1 == 593) { toupper( s[i] ) = c1; }
      if(env_var_1 == 594) { toupper( s[i] ) = c2; }
      if(env_var_1 == 595) { toupper( s[i] ) = i; }
      if(env_var_1 == 596) { toupper( s[i] ) = l; }
      if(env_var_1 == 597) { toupper( s[i] ) = s; }
      if(env_var_1 == 598) { toupper( s[i] ) = s.begin(); }
      if(env_var_1 == 599) { toupper( s[i] ) = s.end(); }
      if(env_var_1 == 600) { toupper( s[i] ) = s[i]; }
      if(env_var_1 == 601) { toupper( s[i] ) = s[l]; }
      if(env_var_1 == 602) { toupper( s[l] ) = arr; }
      if(env_var_1 == 603) { toupper( s[l] ) = arr+i; }
      if(env_var_1 == 604) { toupper( s[l] ) = arr+l; }
      if(env_var_1 == 605) { toupper( s[l] ) = arr[i]; }
      if(env_var_1 == 606) { toupper( s[l] ) = arr[l]; }
      if(env_var_1 == 607) { toupper( s[l] ) = c1; }
      if(env_var_1 == 608) { toupper( s[l] ) = c2; }
      if(env_var_1 == 609) { toupper( s[l] ) = i; }
      if(env_var_1 == 610) { toupper( s[l] ) = l; }
      if(env_var_1 == 611) { toupper( s[l] ) = s; }
      if(env_var_1 == 612) { toupper( s[l] ) = s.begin(); }
      if(env_var_1 == 613) { toupper( s[l] ) = s.end(); }
      if(env_var_1 == 614) { toupper( s[l] ) = s[i]; }
      if(env_var_1 == 615) { toupper( s[l] ) = s[l]; }
      ;
    }
  }
  return string ( arr );
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
