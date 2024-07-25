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
string f_gold ( string str ) {
  int i = str . length ( ) - 1;
  int start, end = i + 1;
  string result = "";
  while ( i >= 0 ) {
    if ( str [ i ] == ' ' ) {
      start = i + 1;
      while ( start != end ) result += str [ start ++ ];
      result += ' ';
      end = i;
    }
    i --;
  }
  start = 0;
  while ( start != end ) result += str [ start ++ ];
  return result;
}


int foo;
int env_var_3 = atoi(getenv("env_var_3"));
int env_var_2 = atoi(getenv("env_var_2"));
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( string str ) {
  int i = str . length ( ) - 1 ;
 auto start ;
  if(env_var_0 == 0) { i = i + 1; }
  if(env_var_0 == 1) { i = start + 1; }
  if(env_var_0 == 2) { i = str + 1; }
  if(env_var_0 == 3) { i = str.begin() + 1; }
  if(env_var_0 == 4) { i = str.end() + 1; }
  if(env_var_0 == 5) { i = str[i] + 1; }
  if(env_var_0 == 6) { i = str[start] + 1; }
  if(env_var_0 == 7) { start = i + 1; }
  if(env_var_0 == 8) { start = start + 1; }
  if(env_var_0 == 9) { start = str + 1; }
  if(env_var_0 == 10) { start = str.begin() + 1; }
  if(env_var_0 == 11) { start = str.end() + 1; }
  if(env_var_0 == 12) { start = str[i] + 1; }
  if(env_var_0 == 13) { start = str[start] + 1; }
  if(env_var_0 == 14) { str = i + 1; }
  if(env_var_0 == 15) { str = start + 1; }
  if(env_var_0 == 16) { str = str + 1; }
  if(env_var_0 == 17) { str = str.begin() + 1; }
  if(env_var_0 == 18) { str = str.end() + 1; }
  if(env_var_0 == 19) { str = str[i] + 1; }
  if(env_var_0 == 20) { str = str[start] + 1; }
  if(env_var_0 == 21) { str.begin() = i + 1; }
  if(env_var_0 == 22) { str.begin() = start + 1; }
  if(env_var_0 == 23) { str.begin() = str + 1; }
  if(env_var_0 == 24) { str.begin() = str.begin() + 1; }
  if(env_var_0 == 25) { str.begin() = str.end() + 1; }
  if(env_var_0 == 26) { str.begin() = str[i] + 1; }
  if(env_var_0 == 27) { str.begin() = str[start] + 1; }
  if(env_var_0 == 28) { str.end() = i + 1; }
  if(env_var_0 == 29) { str.end() = start + 1; }
  if(env_var_0 == 30) { str.end() = str + 1; }
  if(env_var_0 == 31) { str.end() = str.begin() + 1; }
  if(env_var_0 == 32) { str.end() = str.end() + 1; }
  if(env_var_0 == 33) { str.end() = str[i] + 1; }
  if(env_var_0 == 34) { str.end() = str[start] + 1; }
  if(env_var_0 == 35) { str[i] = i + 1; }
  if(env_var_0 == 36) { str[i] = start + 1; }
  if(env_var_0 == 37) { str[i] = str + 1; }
  if(env_var_0 == 38) { str[i] = str.begin() + 1; }
  if(env_var_0 == 39) { str[i] = str.end() + 1; }
  if(env_var_0 == 40) { str[i] = str[i] + 1; }
  if(env_var_0 == 41) { str[i] = str[start] + 1; }
  if(env_var_0 == 42) { str[start] = i + 1; }
  if(env_var_0 == 43) { str[start] = start + 1; }
  if(env_var_0 == 44) { str[start] = str + 1; }
  if(env_var_0 == 45) { str[start] = str.begin() + 1; }
  if(env_var_0 == 46) { str[start] = str.end() + 1; }
  if(env_var_0 == 47) { str[start] = str[i] + 1; }
  if(env_var_0 == 48) { str[start] = str[start] + 1; }
  if(env_var_0 == 49) { t = i = i + 1; }
  if(env_var_0 == 50) { t = i = start + 1; }
  if(env_var_0 == 51) { t = i = str + 1; }
  if(env_var_0 == 52) { t = i = str.begin() + 1; }
  if(env_var_0 == 53) { t = i = str.end() + 1; }
  if(env_var_0 == 54) { t = i = str[i] + 1; }
  if(env_var_0 == 55) { t = i = str[start] + 1; }
  if(env_var_0 == 56) { t = start = i + 1; }
  if(env_var_0 == 57) { t = start = start + 1; }
  if(env_var_0 == 58) { t = start = str + 1; }
  if(env_var_0 == 59) { t = start = str.begin() + 1; }
  if(env_var_0 == 60) { t = start = str.end() + 1; }
  if(env_var_0 == 61) { t = start = str[i] + 1; }
  if(env_var_0 == 62) { t = start = str[start] + 1; }
  if(env_var_0 == 63) { t = str = i + 1; }
  if(env_var_0 == 64) { t = str = start + 1; }
  if(env_var_0 == 65) { t = str = str + 1; }
  if(env_var_0 == 66) { t = str = str.begin() + 1; }
  if(env_var_0 == 67) { t = str = str.end() + 1; }
  if(env_var_0 == 68) { t = str = str[i] + 1; }
  if(env_var_0 == 69) { t = str = str[start] + 1; }
  if(env_var_0 == 70) { t = str.begin() = i + 1; }
  if(env_var_0 == 71) { t = str.begin() = start + 1; }
  if(env_var_0 == 72) { t = str.begin() = str + 1; }
  if(env_var_0 == 73) { t = str.begin() = str.begin() + 1; }
  if(env_var_0 == 74) { t = str.begin() = str.end() + 1; }
  if(env_var_0 == 75) { t = str.begin() = str[i] + 1; }
  if(env_var_0 == 76) { t = str.begin() = str[start] + 1; }
  if(env_var_0 == 77) { t = str.end() = i + 1; }
  if(env_var_0 == 78) { t = str.end() = start + 1; }
  if(env_var_0 == 79) { t = str.end() = str + 1; }
  if(env_var_0 == 80) { t = str.end() = str.begin() + 1; }
  if(env_var_0 == 81) { t = str.end() = str.end() + 1; }
  if(env_var_0 == 82) { t = str.end() = str[i] + 1; }
  if(env_var_0 == 83) { t = str.end() = str[start] + 1; }
  if(env_var_0 == 84) { t = str[i] = i + 1; }
  if(env_var_0 == 85) { t = str[i] = start + 1; }
  if(env_var_0 == 86) { t = str[i] = str + 1; }
  if(env_var_0 == 87) { t = str[i] = str.begin() + 1; }
  if(env_var_0 == 88) { t = str[i] = str.end() + 1; }
  if(env_var_0 == 89) { t = str[i] = str[i] + 1; }
  if(env_var_0 == 90) { t = str[i] = str[start] + 1; }
  if(env_var_0 == 91) { t = str[start] = i + 1; }
  if(env_var_0 == 92) { t = str[start] = start + 1; }
  if(env_var_0 == 93) { t = str[start] = str + 1; }
  if(env_var_0 == 94) { t = str[start] = str.begin() + 1; }
  if(env_var_0 == 95) { t = str[start] = str.end() + 1; }
  if(env_var_0 == 96) { t = str[start] = str[i] + 1; }
  if(env_var_0 == 97) { t = str[start] = str[start] + 1; }
  if(env_var_0 == 98) { = i = i + 1; }
  if(env_var_0 == 99) { = i = start + 1; }
  if(env_var_0 == 100) { = i = str + 1; }
  if(env_var_0 == 101) { = i = str.begin() + 1; }
  if(env_var_0 == 102) { = i = str.end() + 1; }
  if(env_var_0 == 103) { = i = str[i] + 1; }
  if(env_var_0 == 104) { = i = str[start] + 1; }
  if(env_var_0 == 105) { = start = i + 1; }
  if(env_var_0 == 106) { = start = start + 1; }
  if(env_var_0 == 107) { = start = str + 1; }
  if(env_var_0 == 108) { = start = str.begin() + 1; }
  if(env_var_0 == 109) { = start = str.end() + 1; }
  if(env_var_0 == 110) { = start = str[i] + 1; }
  if(env_var_0 == 111) { = start = str[start] + 1; }
  if(env_var_0 == 112) { = str = i + 1; }
  if(env_var_0 == 113) { = str = start + 1; }
  if(env_var_0 == 114) { = str = str + 1; }
  if(env_var_0 == 115) { = str = str.begin() + 1; }
  if(env_var_0 == 116) { = str = str.end() + 1; }
  if(env_var_0 == 117) { = str = str[i] + 1; }
  if(env_var_0 == 118) { = str = str[start] + 1; }
  if(env_var_0 == 119) { = str.begin() = i + 1; }
  if(env_var_0 == 120) { = str.begin() = start + 1; }
  if(env_var_0 == 121) { = str.begin() = str + 1; }
  if(env_var_0 == 122) { = str.begin() = str.begin() + 1; }
  if(env_var_0 == 123) { = str.begin() = str.end() + 1; }
  if(env_var_0 == 124) { = str.begin() = str[i] + 1; }
  if(env_var_0 == 125) { = str.begin() = str[start] + 1; }
  if(env_var_0 == 126) { = str.end() = i + 1; }
  if(env_var_0 == 127) { = str.end() = start + 1; }
  if(env_var_0 == 128) { = str.end() = str + 1; }
  if(env_var_0 == 129) { = str.end() = str.begin() + 1; }
  if(env_var_0 == 130) { = str.end() = str.end() + 1; }
  if(env_var_0 == 131) { = str.end() = str[i] + 1; }
  if(env_var_0 == 132) { = str.end() = str[start] + 1; }
  if(env_var_0 == 133) { = str[i] = i + 1; }
  if(env_var_0 == 134) { = str[i] = start + 1; }
  if(env_var_0 == 135) { = str[i] = str + 1; }
  if(env_var_0 == 136) { = str[i] = str.begin() + 1; }
  if(env_var_0 == 137) { = str[i] = str.end() + 1; }
  if(env_var_0 == 138) { = str[i] = str[i] + 1; }
  if(env_var_0 == 139) { = str[i] = str[start] + 1; }
  if(env_var_0 == 140) { = str[start] = i + 1; }
  if(env_var_0 == 141) { = str[start] = start + 1; }
  if(env_var_0 == 142) { = str[start] = str + 1; }
  if(env_var_0 == 143) { = str[start] = str.begin() + 1; }
  if(env_var_0 == 144) { = str[start] = str.end() + 1; }
  if(env_var_0 == 145) { = str[start] = str[i] + 1; }
  if(env_var_0 == 146) { = str[start] = str[start] + 1; }
  if(env_var_0 == 147) { begin() = i = i + 1; }
  if(env_var_0 == 148) { begin() = i = start + 1; }
  if(env_var_0 == 149) { begin() = i = str + 1; }
  if(env_var_0 == 150) { begin() = i = str.begin() + 1; }
  if(env_var_0 == 151) { begin() = i = str.end() + 1; }
  if(env_var_0 == 152) { begin() = i = str[i] + 1; }
  if(env_var_0 == 153) { begin() = i = str[start] + 1; }
  if(env_var_0 == 154) { begin() = start = i + 1; }
  if(env_var_0 == 155) { begin() = start = start + 1; }
  if(env_var_0 == 156) { begin() = start = str + 1; }
  if(env_var_0 == 157) { begin() = start = str.begin() + 1; }
  if(env_var_0 == 158) { begin() = start = str.end() + 1; }
  if(env_var_0 == 159) { begin() = start = str[i] + 1; }
  if(env_var_0 == 160) { begin() = start = str[start] + 1; }
  if(env_var_0 == 161) { begin() = str = i + 1; }
  if(env_var_0 == 162) { begin() = str = start + 1; }
  if(env_var_0 == 163) { begin() = str = str + 1; }
  if(env_var_0 == 164) { begin() = str = str.begin() + 1; }
  if(env_var_0 == 165) { begin() = str = str.end() + 1; }
  if(env_var_0 == 166) { begin() = str = str[i] + 1; }
  if(env_var_0 == 167) { begin() = str = str[start] + 1; }
  if(env_var_0 == 168) { begin() = str.begin() = i + 1; }
  if(env_var_0 == 169) { begin() = str.begin() = start + 1; }
  if(env_var_0 == 170) { begin() = str.begin() = str + 1; }
  if(env_var_0 == 171) { begin() = str.begin() = str.begin() + 1; }
  if(env_var_0 == 172) { begin() = str.begin() = str.end() + 1; }
  if(env_var_0 == 173) { begin() = str.begin() = str[i] + 1; }
  if(env_var_0 == 174) { begin() = str.begin() = str[start] + 1; }
  if(env_var_0 == 175) { begin() = str.end() = i + 1; }
  if(env_var_0 == 176) { begin() = str.end() = start + 1; }
  if(env_var_0 == 177) { begin() = str.end() = str + 1; }
  if(env_var_0 == 178) { begin() = str.end() = str.begin() + 1; }
  if(env_var_0 == 179) { begin() = str.end() = str.end() + 1; }
  if(env_var_0 == 180) { begin() = str.end() = str[i] + 1; }
  if(env_var_0 == 181) { begin() = str.end() = str[start] + 1; }
  if(env_var_0 == 182) { begin() = str[i] = i + 1; }
  if(env_var_0 == 183) { begin() = str[i] = start + 1; }
  if(env_var_0 == 184) { begin() = str[i] = str + 1; }
  if(env_var_0 == 185) { begin() = str[i] = str.begin() + 1; }
  if(env_var_0 == 186) { begin() = str[i] = str.end() + 1; }
  if(env_var_0 == 187) { begin() = str[i] = str[i] + 1; }
  if(env_var_0 == 188) { begin() = str[i] = str[start] + 1; }
  if(env_var_0 == 189) { begin() = str[start] = i + 1; }
  if(env_var_0 == 190) { begin() = str[start] = start + 1; }
  if(env_var_0 == 191) { begin() = str[start] = str + 1; }
  if(env_var_0 == 192) { begin() = str[start] = str.begin() + 1; }
  if(env_var_0 == 193) { begin() = str[start] = str.end() + 1; }
  if(env_var_0 == 194) { begin() = str[start] = str[i] + 1; }
  if(env_var_0 == 195) { begin() = str[start] = str[start] + 1; }
  if(env_var_0 == 196) { end() = i = i + 1; }
  if(env_var_0 == 197) { end() = i = start + 1; }
  if(env_var_0 == 198) { end() = i = str + 1; }
  if(env_var_0 == 199) { end() = i = str.begin() + 1; }
  if(env_var_0 == 200) { end() = i = str.end() + 1; }
  if(env_var_0 == 201) { end() = i = str[i] + 1; }
  if(env_var_0 == 202) { end() = i = str[start] + 1; }
  if(env_var_0 == 203) { end() = start = i + 1; }
  if(env_var_0 == 204) { end() = start = start + 1; }
  if(env_var_0 == 205) { end() = start = str + 1; }
  if(env_var_0 == 206) { end() = start = str.begin() + 1; }
  if(env_var_0 == 207) { end() = start = str.end() + 1; }
  if(env_var_0 == 208) { end() = start = str[i] + 1; }
  if(env_var_0 == 209) { end() = start = str[start] + 1; }
  if(env_var_0 == 210) { end() = str = i + 1; }
  if(env_var_0 == 211) { end() = str = start + 1; }
  if(env_var_0 == 212) { end() = str = str + 1; }
  if(env_var_0 == 213) { end() = str = str.begin() + 1; }
  if(env_var_0 == 214) { end() = str = str.end() + 1; }
  if(env_var_0 == 215) { end() = str = str[i] + 1; }
  if(env_var_0 == 216) { end() = str = str[start] + 1; }
  if(env_var_0 == 217) { end() = str.begin() = i + 1; }
  if(env_var_0 == 218) { end() = str.begin() = start + 1; }
  if(env_var_0 == 219) { end() = str.begin() = str + 1; }
  if(env_var_0 == 220) { end() = str.begin() = str.begin() + 1; }
  if(env_var_0 == 221) { end() = str.begin() = str.end() + 1; }
  if(env_var_0 == 222) { end() = str.begin() = str[i] + 1; }
  if(env_var_0 == 223) { end() = str.begin() = str[start] + 1; }
  if(env_var_0 == 224) { end() = str.end() = i + 1; }
  if(env_var_0 == 225) { end() = str.end() = start + 1; }
  if(env_var_0 == 226) { end() = str.end() = str + 1; }
  if(env_var_0 == 227) { end() = str.end() = str.begin() + 1; }
  if(env_var_0 == 228) { end() = str.end() = str.end() + 1; }
  if(env_var_0 == 229) { end() = str.end() = str[i] + 1; }
  if(env_var_0 == 230) { end() = str.end() = str[start] + 1; }
  if(env_var_0 == 231) { end() = str[i] = i + 1; }
  if(env_var_0 == 232) { end() = str[i] = start + 1; }
  if(env_var_0 == 233) { end() = str[i] = str + 1; }
  if(env_var_0 == 234) { end() = str[i] = str.begin() + 1; }
  if(env_var_0 == 235) { end() = str[i] = str.end() + 1; }
  if(env_var_0 == 236) { end() = str[i] = str[i] + 1; }
  if(env_var_0 == 237) { end() = str[i] = str[start] + 1; }
  if(env_var_0 == 238) { end() = str[start] = i + 1; }
  if(env_var_0 == 239) { end() = str[start] = start + 1; }
  if(env_var_0 == 240) { end() = str[start] = str + 1; }
  if(env_var_0 == 241) { end() = str[start] = str.begin() + 1; }
  if(env_var_0 == 242) { end() = str[start] = str.end() + 1; }
  if(env_var_0 == 243) { end() = str[start] = str[i] + 1; }
  if(env_var_0 == 244) { end() = str[start] = str[start] + 1; }
  if(env_var_0 == 245) { i] = i = i + 1; }
  if(env_var_0 == 246) { i] = i = start + 1; }
  if(env_var_0 == 247) { i] = i = str + 1; }
  if(env_var_0 == 248) { i] = i = str.begin() + 1; }
  if(env_var_0 == 249) { i] = i = str.end() + 1; }
  if(env_var_0 == 250) { i] = i = str[i] + 1; }
  if(env_var_0 == 251) { i] = i = str[start] + 1; }
  if(env_var_0 == 252) { i] = start = i + 1; }
  if(env_var_0 == 253) { i] = start = start + 1; }
  if(env_var_0 == 254) { i] = start = str + 1; }
  if(env_var_0 == 255) { i] = start = str.begin() + 1; }
  if(env_var_0 == 256) { i] = start = str.end() + 1; }
  if(env_var_0 == 257) { i] = start = str[i] + 1; }
  if(env_var_0 == 258) { i] = start = str[start] + 1; }
  if(env_var_0 == 259) { i] = str = i + 1; }
  if(env_var_0 == 260) { i] = str = start + 1; }
  if(env_var_0 == 261) { i] = str = str + 1; }
  if(env_var_0 == 262) { i] = str = str.begin() + 1; }
  if(env_var_0 == 263) { i] = str = str.end() + 1; }
  if(env_var_0 == 264) { i] = str = str[i] + 1; }
  if(env_var_0 == 265) { i] = str = str[start] + 1; }
  if(env_var_0 == 266) { i] = str.begin() = i + 1; }
  if(env_var_0 == 267) { i] = str.begin() = start + 1; }
  if(env_var_0 == 268) { i] = str.begin() = str + 1; }
  if(env_var_0 == 269) { i] = str.begin() = str.begin() + 1; }
  if(env_var_0 == 270) { i] = str.begin() = str.end() + 1; }
  if(env_var_0 == 271) { i] = str.begin() = str[i] + 1; }
  if(env_var_0 == 272) { i] = str.begin() = str[start] + 1; }
  if(env_var_0 == 273) { i] = str.end() = i + 1; }
  if(env_var_0 == 274) { i] = str.end() = start + 1; }
  if(env_var_0 == 275) { i] = str.end() = str + 1; }
  if(env_var_0 == 276) { i] = str.end() = str.begin() + 1; }
  if(env_var_0 == 277) { i] = str.end() = str.end() + 1; }
  if(env_var_0 == 278) { i] = str.end() = str[i] + 1; }
  if(env_var_0 == 279) { i] = str.end() = str[start] + 1; }
  if(env_var_0 == 280) { i] = str[i] = i + 1; }
  if(env_var_0 == 281) { i] = str[i] = start + 1; }
  if(env_var_0 == 282) { i] = str[i] = str + 1; }
  if(env_var_0 == 283) { i] = str[i] = str.begin() + 1; }
  if(env_var_0 == 284) { i] = str[i] = str.end() + 1; }
  if(env_var_0 == 285) { i] = str[i] = str[i] + 1; }
  if(env_var_0 == 286) { i] = str[i] = str[start] + 1; }
  if(env_var_0 == 287) { i] = str[start] = i + 1; }
  if(env_var_0 == 288) { i] = str[start] = start + 1; }
  if(env_var_0 == 289) { i] = str[start] = str + 1; }
  if(env_var_0 == 290) { i] = str[start] = str.begin() + 1; }
  if(env_var_0 == 291) { i] = str[start] = str.end() + 1; }
  if(env_var_0 == 292) { i] = str[start] = str[i] + 1; }
  if(env_var_0 == 293) { i] = str[start] = str[start] + 1; }
  if(env_var_0 == 294) { start] = i = i + 1; }
  if(env_var_0 == 295) { start] = i = start + 1; }
  if(env_var_0 == 296) { start] = i = str + 1; }
  if(env_var_0 == 297) { start] = i = str.begin() + 1; }
  if(env_var_0 == 298) { start] = i = str.end() + 1; }
  if(env_var_0 == 299) { start] = i = str[i] + 1; }
  if(env_var_0 == 300) { start] = i = str[start] + 1; }
  if(env_var_0 == 301) { start] = start = i + 1; }
  if(env_var_0 == 302) { start] = start = start + 1; }
  if(env_var_0 == 303) { start] = start = str + 1; }
  if(env_var_0 == 304) { start] = start = str.begin() + 1; }
  if(env_var_0 == 305) { start] = start = str.end() + 1; }
  if(env_var_0 == 306) { start] = start = str[i] + 1; }
  if(env_var_0 == 307) { start] = start = str[start] + 1; }
  if(env_var_0 == 308) { start] = str = i + 1; }
  if(env_var_0 == 309) { start] = str = start + 1; }
  if(env_var_0 == 310) { start] = str = str + 1; }
  if(env_var_0 == 311) { start] = str = str.begin() + 1; }
  if(env_var_0 == 312) { start] = str = str.end() + 1; }
  if(env_var_0 == 313) { start] = str = str[i] + 1; }
  if(env_var_0 == 314) { start] = str = str[start] + 1; }
  if(env_var_0 == 315) { start] = str.begin() = i + 1; }
  if(env_var_0 == 316) { start] = str.begin() = start + 1; }
  if(env_var_0 == 317) { start] = str.begin() = str + 1; }
  if(env_var_0 == 318) { start] = str.begin() = str.begin() + 1; }
  if(env_var_0 == 319) { start] = str.begin() = str.end() + 1; }
  if(env_var_0 == 320) { start] = str.begin() = str[i] + 1; }
  if(env_var_0 == 321) { start] = str.begin() = str[start] + 1; }
  if(env_var_0 == 322) { start] = str.end() = i + 1; }
  if(env_var_0 == 323) { start] = str.end() = start + 1; }
  if(env_var_0 == 324) { start] = str.end() = str + 1; }
  if(env_var_0 == 325) { start] = str.end() = str.begin() + 1; }
  if(env_var_0 == 326) { start] = str.end() = str.end() + 1; }
  if(env_var_0 == 327) { start] = str.end() = str[i] + 1; }
  if(env_var_0 == 328) { start] = str.end() = str[start] + 1; }
  if(env_var_0 == 329) { start] = str[i] = i + 1; }
  if(env_var_0 == 330) { start] = str[i] = start + 1; }
  if(env_var_0 == 331) { start] = str[i] = str + 1; }
  if(env_var_0 == 332) { start] = str[i] = str.begin() + 1; }
  if(env_var_0 == 333) { start] = str[i] = str.end() + 1; }
  if(env_var_0 == 334) { start] = str[i] = str[i] + 1; }
  if(env_var_0 == 335) { start] = str[i] = str[start] + 1; }
  if(env_var_0 == 336) { start] = str[start] = i + 1; }
  if(env_var_0 == 337) { start] = str[start] = start + 1; }
  if(env_var_0 == 338) { start] = str[start] = str + 1; }
  if(env_var_0 == 339) { start] = str[start] = str.begin() + 1; }
  if(env_var_0 == 340) { start] = str[start] = str.end() + 1; }
  if(env_var_0 == 341) { start] = str[start] = str[i] + 1; }
  if(env_var_0 == 342) { start] = str[start] = str[start] + 1; }
   
  string result ;
  while ( i >= 0 ) {
    if ( str [ i ] == ' ' ) {
      start = i + 1 ;
      while ( true )  {
      if (env_var_1 == 0 && !(i != i)) break;
      if (env_var_1 == 1 && !(i != result)) break;
      if (env_var_1 == 2 && !(i != result.begin())) break;
      if (env_var_1 == 3 && !(i != result.end())) break;
      if (env_var_1 == 4 && !(i != result[i])) break;
      if (env_var_1 == 5 && !(i != result[start])) break;
      if (env_var_1 == 6 && !(i != start)) break;
      if (env_var_1 == 7 && !(i != str)) break;
      if (env_var_1 == 8 && !(i != str.begin())) break;
      if (env_var_1 == 9 && !(i != str.end())) break;
      if (env_var_1 == 10 && !(i != str[i])) break;
      if (env_var_1 == 11 && !(i != str[start])) break;
      if (env_var_1 == 12 && !(result != i)) break;
      if (env_var_1 == 13 && !(result != result)) break;
      if (env_var_1 == 14 && !(result != result.begin())) break;
      if (env_var_1 == 15 && !(result != result.end())) break;
      if (env_var_1 == 16 && !(result != result[i])) break;
      if (env_var_1 == 17 && !(result != result[start])) break;
      if (env_var_1 == 18 && !(result != start)) break;
      if (env_var_1 == 19 && !(result != str)) break;
      if (env_var_1 == 20 && !(result != str.begin())) break;
      if (env_var_1 == 21 && !(result != str.end())) break;
      if (env_var_1 == 22 && !(result != str[i])) break;
      if (env_var_1 == 23 && !(result != str[start])) break;
      if (env_var_1 == 24 && !(result.begin() != i)) break;
      if (env_var_1 == 25 && !(result.begin() != result)) break;
      if (env_var_1 == 26 && !(result.begin() != result.begin())) break;
      if (env_var_1 == 27 && !(result.begin() != result.end())) break;
      if (env_var_1 == 28 && !(result.begin() != result[i])) break;
      if (env_var_1 == 29 && !(result.begin() != result[start])) break;
      if (env_var_1 == 30 && !(result.begin() != start)) break;
      if (env_var_1 == 31 && !(result.begin() != str)) break;
      if (env_var_1 == 32 && !(result.begin() != str.begin())) break;
      if (env_var_1 == 33 && !(result.begin() != str.end())) break;
      if (env_var_1 == 34 && !(result.begin() != str[i])) break;
      if (env_var_1 == 35 && !(result.begin() != str[start])) break;
      if (env_var_1 == 36 && !(result.end() != i)) break;
      if (env_var_1 == 37 && !(result.end() != result)) break;
      if (env_var_1 == 38 && !(result.end() != result.begin())) break;
      if (env_var_1 == 39 && !(result.end() != result.end())) break;
      if (env_var_1 == 40 && !(result.end() != result[i])) break;
      if (env_var_1 == 41 && !(result.end() != result[start])) break;
      if (env_var_1 == 42 && !(result.end() != start)) break;
      if (env_var_1 == 43 && !(result.end() != str)) break;
      if (env_var_1 == 44 && !(result.end() != str.begin())) break;
      if (env_var_1 == 45 && !(result.end() != str.end())) break;
      if (env_var_1 == 46 && !(result.end() != str[i])) break;
      if (env_var_1 == 47 && !(result.end() != str[start])) break;
      if (env_var_1 == 48 && !(result[i] != i)) break;
      if (env_var_1 == 49 && !(result[i] != result)) break;
      if (env_var_1 == 50 && !(result[i] != result.begin())) break;
      if (env_var_1 == 51 && !(result[i] != result.end())) break;
      if (env_var_1 == 52 && !(result[i] != result[i])) break;
      if (env_var_1 == 53 && !(result[i] != result[start])) break;
      if (env_var_1 == 54 && !(result[i] != start)) break;
      if (env_var_1 == 55 && !(result[i] != str)) break;
      if (env_var_1 == 56 && !(result[i] != str.begin())) break;
      if (env_var_1 == 57 && !(result[i] != str.end())) break;
      if (env_var_1 == 58 && !(result[i] != str[i])) break;
      if (env_var_1 == 59 && !(result[i] != str[start])) break;
      if (env_var_1 == 60 && !(result[start] != i)) break;
      if (env_var_1 == 61 && !(result[start] != result)) break;
      if (env_var_1 == 62 && !(result[start] != result.begin())) break;
      if (env_var_1 == 63 && !(result[start] != result.end())) break;
      if (env_var_1 == 64 && !(result[start] != result[i])) break;
      if (env_var_1 == 65 && !(result[start] != result[start])) break;
      if (env_var_1 == 66 && !(result[start] != start)) break;
      if (env_var_1 == 67 && !(result[start] != str)) break;
      if (env_var_1 == 68 && !(result[start] != str.begin())) break;
      if (env_var_1 == 69 && !(result[start] != str.end())) break;
      if (env_var_1 == 70 && !(result[start] != str[i])) break;
      if (env_var_1 == 71 && !(result[start] != str[start])) break;
      if (env_var_1 == 72 && !(start != i)) break;
      if (env_var_1 == 73 && !(start != result)) break;
      if (env_var_1 == 74 && !(start != result.begin())) break;
      if (env_var_1 == 75 && !(start != result.end())) break;
      if (env_var_1 == 76 && !(start != result[i])) break;
      if (env_var_1 == 77 && !(start != result[start])) break;
      if (env_var_1 == 78 && !(start != start)) break;
      if (env_var_1 == 79 && !(start != str)) break;
      if (env_var_1 == 80 && !(start != str.begin())) break;
      if (env_var_1 == 81 && !(start != str.end())) break;
      if (env_var_1 == 82 && !(start != str[i])) break;
      if (env_var_1 == 83 && !(start != str[start])) break;
      if (env_var_1 == 84 && !(str != i)) break;
      if (env_var_1 == 85 && !(str != result)) break;
      if (env_var_1 == 86 && !(str != result.begin())) break;
      if (env_var_1 == 87 && !(str != result.end())) break;
      if (env_var_1 == 88 && !(str != result[i])) break;
      if (env_var_1 == 89 && !(str != result[start])) break;
      if (env_var_1 == 90 && !(str != start)) break;
      if (env_var_1 == 91 && !(str != str)) break;
      if (env_var_1 == 92 && !(str != str.begin())) break;
      if (env_var_1 == 93 && !(str != str.end())) break;
      if (env_var_1 == 94 && !(str != str[i])) break;
      if (env_var_1 == 95 && !(str != str[start])) break;
      if (env_var_1 == 96 && !(str.begin() != i)) break;
      if (env_var_1 == 97 && !(str.begin() != result)) break;
      if (env_var_1 == 98 && !(str.begin() != result.begin())) break;
      if (env_var_1 == 99 && !(str.begin() != result.end())) break;
      if (env_var_1 == 100 && !(str.begin() != result[i])) break;
      if (env_var_1 == 101 && !(str.begin() != result[start])) break;
      if (env_var_1 == 102 && !(str.begin() != start)) break;
      if (env_var_1 == 103 && !(str.begin() != str)) break;
      if (env_var_1 == 104 && !(str.begin() != str.begin())) break;
      if (env_var_1 == 105 && !(str.begin() != str.end())) break;
      if (env_var_1 == 106 && !(str.begin() != str[i])) break;
      if (env_var_1 == 107 && !(str.begin() != str[start])) break;
      if (env_var_1 == 108 && !(str.end() != i)) break;
      if (env_var_1 == 109 && !(str.end() != result)) break;
      if (env_var_1 == 110 && !(str.end() != result.begin())) break;
      if (env_var_1 == 111 && !(str.end() != result.end())) break;
      if (env_var_1 == 112 && !(str.end() != result[i])) break;
      if (env_var_1 == 113 && !(str.end() != result[start])) break;
      if (env_var_1 == 114 && !(str.end() != start)) break;
      if (env_var_1 == 115 && !(str.end() != str)) break;
      if (env_var_1 == 116 && !(str.end() != str.begin())) break;
      if (env_var_1 == 117 && !(str.end() != str.end())) break;
      if (env_var_1 == 118 && !(str.end() != str[i])) break;
      if (env_var_1 == 119 && !(str.end() != str[start])) break;
      if (env_var_1 == 120 && !(str[i] != i)) break;
      if (env_var_1 == 121 && !(str[i] != result)) break;
      if (env_var_1 == 122 && !(str[i] != result.begin())) break;
      if (env_var_1 == 123 && !(str[i] != result.end())) break;
      if (env_var_1 == 124 && !(str[i] != result[i])) break;
      if (env_var_1 == 125 && !(str[i] != result[start])) break;
      if (env_var_1 == 126 && !(str[i] != start)) break;
      if (env_var_1 == 127 && !(str[i] != str)) break;
      if (env_var_1 == 128 && !(str[i] != str.begin())) break;
      if (env_var_1 == 129 && !(str[i] != str.end())) break;
      if (env_var_1 == 130 && !(str[i] != str[i])) break;
      if (env_var_1 == 131 && !(str[i] != str[start])) break;
      if (env_var_1 == 132 && !(str[start] != i)) break;
      if (env_var_1 == 133 && !(str[start] != result)) break;
      if (env_var_1 == 134 && !(str[start] != result.begin())) break;
      if (env_var_1 == 135 && !(str[start] != result.end())) break;
      if (env_var_1 == 136 && !(str[start] != result[i])) break;
      if (env_var_1 == 137 && !(str[start] != result[start])) break;
      if (env_var_1 == 138 && !(str[start] != start)) break;
      if (env_var_1 == 139 && !(str[start] != str)) break;
      if (env_var_1 == 140 && !(str[start] != str.begin())) break;
      if (env_var_1 == 141 && !(str[start] != str.end())) break;
      if (env_var_1 == 142 && !(str[start] != str[i])) break;
      if (env_var_1 == 143 && !(str[start] != str[start])) break;
      {
        result += str [ start ] ;
        start ++ ;
      }}
      result += ' ' ;
      if(env_var_2 == 0) { i = i; }
      if(env_var_2 == 1) { i = result; }
      if(env_var_2 == 2) { i = result.begin(); }
      if(env_var_2 == 3) { i = result.end(); }
      if(env_var_2 == 4) { i = result[i]; }
      if(env_var_2 == 5) { i = result[start]; }
      if(env_var_2 == 6) { i = start; }
      if(env_var_2 == 7) { i = str; }
      if(env_var_2 == 8) { i = str.begin(); }
      if(env_var_2 == 9) { i = str.end(); }
      if(env_var_2 == 10) { i = str[i]; }
      if(env_var_2 == 11) { i = str[start]; }
      if(env_var_2 == 12) { result = i; }
      if(env_var_2 == 13) { result = result; }
      if(env_var_2 == 14) { result = result.begin(); }
      if(env_var_2 == 15) { result = result.end(); }
      if(env_var_2 == 16) { result = result[i]; }
      if(env_var_2 == 17) { result = result[start]; }
      if(env_var_2 == 18) { result = start; }
      if(env_var_2 == 19) { result = str; }
      if(env_var_2 == 20) { result = str.begin(); }
      if(env_var_2 == 21) { result = str.end(); }
      if(env_var_2 == 22) { result = str[i]; }
      if(env_var_2 == 23) { result = str[start]; }
      if(env_var_2 == 24) { result.begin() = i; }
      if(env_var_2 == 25) { result.begin() = result; }
      if(env_var_2 == 26) { result.begin() = result.begin(); }
      if(env_var_2 == 27) { result.begin() = result.end(); }
      if(env_var_2 == 28) { result.begin() = result[i]; }
      if(env_var_2 == 29) { result.begin() = result[start]; }
      if(env_var_2 == 30) { result.begin() = start; }
      if(env_var_2 == 31) { result.begin() = str; }
      if(env_var_2 == 32) { result.begin() = str.begin(); }
      if(env_var_2 == 33) { result.begin() = str.end(); }
      if(env_var_2 == 34) { result.begin() = str[i]; }
      if(env_var_2 == 35) { result.begin() = str[start]; }
      if(env_var_2 == 36) { result.end() = i; }
      if(env_var_2 == 37) { result.end() = result; }
      if(env_var_2 == 38) { result.end() = result.begin(); }
      if(env_var_2 == 39) { result.end() = result.end(); }
      if(env_var_2 == 40) { result.end() = result[i]; }
      if(env_var_2 == 41) { result.end() = result[start]; }
      if(env_var_2 == 42) { result.end() = start; }
      if(env_var_2 == 43) { result.end() = str; }
      if(env_var_2 == 44) { result.end() = str.begin(); }
      if(env_var_2 == 45) { result.end() = str.end(); }
      if(env_var_2 == 46) { result.end() = str[i]; }
      if(env_var_2 == 47) { result.end() = str[start]; }
      if(env_var_2 == 48) { result[i] = i; }
      if(env_var_2 == 49) { result[i] = result; }
      if(env_var_2 == 50) { result[i] = result.begin(); }
      if(env_var_2 == 51) { result[i] = result.end(); }
      if(env_var_2 == 52) { result[i] = result[i]; }
      if(env_var_2 == 53) { result[i] = result[start]; }
      if(env_var_2 == 54) { result[i] = start; }
      if(env_var_2 == 55) { result[i] = str; }
      if(env_var_2 == 56) { result[i] = str.begin(); }
      if(env_var_2 == 57) { result[i] = str.end(); }
      if(env_var_2 == 58) { result[i] = str[i]; }
      if(env_var_2 == 59) { result[i] = str[start]; }
      if(env_var_2 == 60) { result[start] = i; }
      if(env_var_2 == 61) { result[start] = result; }
      if(env_var_2 == 62) { result[start] = result.begin(); }
      if(env_var_2 == 63) { result[start] = result.end(); }
      if(env_var_2 == 64) { result[start] = result[i]; }
      if(env_var_2 == 65) { result[start] = result[start]; }
      if(env_var_2 == 66) { result[start] = start; }
      if(env_var_2 == 67) { result[start] = str; }
      if(env_var_2 == 68) { result[start] = str.begin(); }
      if(env_var_2 == 69) { result[start] = str.end(); }
      if(env_var_2 == 70) { result[start] = str[i]; }
      if(env_var_2 == 71) { result[start] = str[start]; }
      if(env_var_2 == 72) { start = i; }
      if(env_var_2 == 73) { start = result; }
      if(env_var_2 == 74) { start = result.begin(); }
      if(env_var_2 == 75) { start = result.end(); }
      if(env_var_2 == 76) { start = result[i]; }
      if(env_var_2 == 77) { start = result[start]; }
      if(env_var_2 == 78) { start = start; }
      if(env_var_2 == 79) { start = str; }
      if(env_var_2 == 80) { start = str.begin(); }
      if(env_var_2 == 81) { start = str.end(); }
      if(env_var_2 == 82) { start = str[i]; }
      if(env_var_2 == 83) { start = str[start]; }
      if(env_var_2 == 84) { str = i; }
      if(env_var_2 == 85) { str = result; }
      if(env_var_2 == 86) { str = result.begin(); }
      if(env_var_2 == 87) { str = result.end(); }
      if(env_var_2 == 88) { str = result[i]; }
      if(env_var_2 == 89) { str = result[start]; }
      if(env_var_2 == 90) { str = start; }
      if(env_var_2 == 91) { str = str; }
      if(env_var_2 == 92) { str = str.begin(); }
      if(env_var_2 == 93) { str = str.end(); }
      if(env_var_2 == 94) { str = str[i]; }
      if(env_var_2 == 95) { str = str[start]; }
      if(env_var_2 == 96) { str.begin() = i; }
      if(env_var_2 == 97) { str.begin() = result; }
      if(env_var_2 == 98) { str.begin() = result.begin(); }
      if(env_var_2 == 99) { str.begin() = result.end(); }
      if(env_var_2 == 100) { str.begin() = result[i]; }
      if(env_var_2 == 101) { str.begin() = result[start]; }
      if(env_var_2 == 102) { str.begin() = start; }
      if(env_var_2 == 103) { str.begin() = str; }
      if(env_var_2 == 104) { str.begin() = str.begin(); }
      if(env_var_2 == 105) { str.begin() = str.end(); }
      if(env_var_2 == 106) { str.begin() = str[i]; }
      if(env_var_2 == 107) { str.begin() = str[start]; }
      if(env_var_2 == 108) { str.end() = i; }
      if(env_var_2 == 109) { str.end() = result; }
      if(env_var_2 == 110) { str.end() = result.begin(); }
      if(env_var_2 == 111) { str.end() = result.end(); }
      if(env_var_2 == 112) { str.end() = result[i]; }
      if(env_var_2 == 113) { str.end() = result[start]; }
      if(env_var_2 == 114) { str.end() = start; }
      if(env_var_2 == 115) { str.end() = str; }
      if(env_var_2 == 116) { str.end() = str.begin(); }
      if(env_var_2 == 117) { str.end() = str.end(); }
      if(env_var_2 == 118) { str.end() = str[i]; }
      if(env_var_2 == 119) { str.end() = str[start]; }
      if(env_var_2 == 120) { str[i] = i; }
      if(env_var_2 == 121) { str[i] = result; }
      if(env_var_2 == 122) { str[i] = result.begin(); }
      if(env_var_2 == 123) { str[i] = result.end(); }
      if(env_var_2 == 124) { str[i] = result[i]; }
      if(env_var_2 == 125) { str[i] = result[start]; }
      if(env_var_2 == 126) { str[i] = start; }
      if(env_var_2 == 127) { str[i] = str; }
      if(env_var_2 == 128) { str[i] = str.begin(); }
      if(env_var_2 == 129) { str[i] = str.end(); }
      if(env_var_2 == 130) { str[i] = str[i]; }
      if(env_var_2 == 131) { str[i] = str[start]; }
      if(env_var_2 == 132) { str[start] = i; }
      if(env_var_2 == 133) { str[start] = result; }
      if(env_var_2 == 134) { str[start] = result.begin(); }
      if(env_var_2 == 135) { str[start] = result.end(); }
      if(env_var_2 == 136) { str[start] = result[i]; }
      if(env_var_2 == 137) { str[start] = result[start]; }
      if(env_var_2 == 138) { str[start] = start; }
      if(env_var_2 == 139) { str[start] = str; }
      if(env_var_2 == 140) { str[start] = str.begin(); }
      if(env_var_2 == 141) { str[start] = str.end(); }
      if(env_var_2 == 142) { str[start] = str[i]; }
      if(env_var_2 == 143) { str[start] = str[start]; }
       ;
    }
    i -- ;
  }
  start = 0 ;
  while ( true )  {
  if (env_var_3 == 0 && !(i != i)) break;
  if (env_var_3 == 1 && !(i != result)) break;
  if (env_var_3 == 2 && !(i != result.begin())) break;
  if (env_var_3 == 3 && !(i != result.end())) break;
  if (env_var_3 == 4 && !(i != result[i])) break;
  if (env_var_3 == 5 && !(i != result[start])) break;
  if (env_var_3 == 6 && !(i != start)) break;
  if (env_var_3 == 7 && !(i != str)) break;
  if (env_var_3 == 8 && !(i != str.begin())) break;
  if (env_var_3 == 9 && !(i != str.end())) break;
  if (env_var_3 == 10 && !(i != str[i])) break;
  if (env_var_3 == 11 && !(i != str[start])) break;
  if (env_var_3 == 12 && !(result != i)) break;
  if (env_var_3 == 13 && !(result != result)) break;
  if (env_var_3 == 14 && !(result != result.begin())) break;
  if (env_var_3 == 15 && !(result != result.end())) break;
  if (env_var_3 == 16 && !(result != result[i])) break;
  if (env_var_3 == 17 && !(result != result[start])) break;
  if (env_var_3 == 18 && !(result != start)) break;
  if (env_var_3 == 19 && !(result != str)) break;
  if (env_var_3 == 20 && !(result != str.begin())) break;
  if (env_var_3 == 21 && !(result != str.end())) break;
  if (env_var_3 == 22 && !(result != str[i])) break;
  if (env_var_3 == 23 && !(result != str[start])) break;
  if (env_var_3 == 24 && !(result.begin() != i)) break;
  if (env_var_3 == 25 && !(result.begin() != result)) break;
  if (env_var_3 == 26 && !(result.begin() != result.begin())) break;
  if (env_var_3 == 27 && !(result.begin() != result.end())) break;
  if (env_var_3 == 28 && !(result.begin() != result[i])) break;
  if (env_var_3 == 29 && !(result.begin() != result[start])) break;
  if (env_var_3 == 30 && !(result.begin() != start)) break;
  if (env_var_3 == 31 && !(result.begin() != str)) break;
  if (env_var_3 == 32 && !(result.begin() != str.begin())) break;
  if (env_var_3 == 33 && !(result.begin() != str.end())) break;
  if (env_var_3 == 34 && !(result.begin() != str[i])) break;
  if (env_var_3 == 35 && !(result.begin() != str[start])) break;
  if (env_var_3 == 36 && !(result.end() != i)) break;
  if (env_var_3 == 37 && !(result.end() != result)) break;
  if (env_var_3 == 38 && !(result.end() != result.begin())) break;
  if (env_var_3 == 39 && !(result.end() != result.end())) break;
  if (env_var_3 == 40 && !(result.end() != result[i])) break;
  if (env_var_3 == 41 && !(result.end() != result[start])) break;
  if (env_var_3 == 42 && !(result.end() != start)) break;
  if (env_var_3 == 43 && !(result.end() != str)) break;
  if (env_var_3 == 44 && !(result.end() != str.begin())) break;
  if (env_var_3 == 45 && !(result.end() != str.end())) break;
  if (env_var_3 == 46 && !(result.end() != str[i])) break;
  if (env_var_3 == 47 && !(result.end() != str[start])) break;
  if (env_var_3 == 48 && !(result[i] != i)) break;
  if (env_var_3 == 49 && !(result[i] != result)) break;
  if (env_var_3 == 50 && !(result[i] != result.begin())) break;
  if (env_var_3 == 51 && !(result[i] != result.end())) break;
  if (env_var_3 == 52 && !(result[i] != result[i])) break;
  if (env_var_3 == 53 && !(result[i] != result[start])) break;
  if (env_var_3 == 54 && !(result[i] != start)) break;
  if (env_var_3 == 55 && !(result[i] != str)) break;
  if (env_var_3 == 56 && !(result[i] != str.begin())) break;
  if (env_var_3 == 57 && !(result[i] != str.end())) break;
  if (env_var_3 == 58 && !(result[i] != str[i])) break;
  if (env_var_3 == 59 && !(result[i] != str[start])) break;
  if (env_var_3 == 60 && !(result[start] != i)) break;
  if (env_var_3 == 61 && !(result[start] != result)) break;
  if (env_var_3 == 62 && !(result[start] != result.begin())) break;
  if (env_var_3 == 63 && !(result[start] != result.end())) break;
  if (env_var_3 == 64 && !(result[start] != result[i])) break;
  if (env_var_3 == 65 && !(result[start] != result[start])) break;
  if (env_var_3 == 66 && !(result[start] != start)) break;
  if (env_var_3 == 67 && !(result[start] != str)) break;
  if (env_var_3 == 68 && !(result[start] != str.begin())) break;
  if (env_var_3 == 69 && !(result[start] != str.end())) break;
  if (env_var_3 == 70 && !(result[start] != str[i])) break;
  if (env_var_3 == 71 && !(result[start] != str[start])) break;
  if (env_var_3 == 72 && !(start != i)) break;
  if (env_var_3 == 73 && !(start != result)) break;
  if (env_var_3 == 74 && !(start != result.begin())) break;
  if (env_var_3 == 75 && !(start != result.end())) break;
  if (env_var_3 == 76 && !(start != result[i])) break;
  if (env_var_3 == 77 && !(start != result[start])) break;
  if (env_var_3 == 78 && !(start != start)) break;
  if (env_var_3 == 79 && !(start != str)) break;
  if (env_var_3 == 80 && !(start != str.begin())) break;
  if (env_var_3 == 81 && !(start != str.end())) break;
  if (env_var_3 == 82 && !(start != str[i])) break;
  if (env_var_3 == 83 && !(start != str[start])) break;
  if (env_var_3 == 84 && !(str != i)) break;
  if (env_var_3 == 85 && !(str != result)) break;
  if (env_var_3 == 86 && !(str != result.begin())) break;
  if (env_var_3 == 87 && !(str != result.end())) break;
  if (env_var_3 == 88 && !(str != result[i])) break;
  if (env_var_3 == 89 && !(str != result[start])) break;
  if (env_var_3 == 90 && !(str != start)) break;
  if (env_var_3 == 91 && !(str != str)) break;
  if (env_var_3 == 92 && !(str != str.begin())) break;
  if (env_var_3 == 93 && !(str != str.end())) break;
  if (env_var_3 == 94 && !(str != str[i])) break;
  if (env_var_3 == 95 && !(str != str[start])) break;
  if (env_var_3 == 96 && !(str.begin() != i)) break;
  if (env_var_3 == 97 && !(str.begin() != result)) break;
  if (env_var_3 == 98 && !(str.begin() != result.begin())) break;
  if (env_var_3 == 99 && !(str.begin() != result.end())) break;
  if (env_var_3 == 100 && !(str.begin() != result[i])) break;
  if (env_var_3 == 101 && !(str.begin() != result[start])) break;
  if (env_var_3 == 102 && !(str.begin() != start)) break;
  if (env_var_3 == 103 && !(str.begin() != str)) break;
  if (env_var_3 == 104 && !(str.begin() != str.begin())) break;
  if (env_var_3 == 105 && !(str.begin() != str.end())) break;
  if (env_var_3 == 106 && !(str.begin() != str[i])) break;
  if (env_var_3 == 107 && !(str.begin() != str[start])) break;
  if (env_var_3 == 108 && !(str.end() != i)) break;
  if (env_var_3 == 109 && !(str.end() != result)) break;
  if (env_var_3 == 110 && !(str.end() != result.begin())) break;
  if (env_var_3 == 111 && !(str.end() != result.end())) break;
  if (env_var_3 == 112 && !(str.end() != result[i])) break;
  if (env_var_3 == 113 && !(str.end() != result[start])) break;
  if (env_var_3 == 114 && !(str.end() != start)) break;
  if (env_var_3 == 115 && !(str.end() != str)) break;
  if (env_var_3 == 116 && !(str.end() != str.begin())) break;
  if (env_var_3 == 117 && !(str.end() != str.end())) break;
  if (env_var_3 == 118 && !(str.end() != str[i])) break;
  if (env_var_3 == 119 && !(str.end() != str[start])) break;
  if (env_var_3 == 120 && !(str[i] != i)) break;
  if (env_var_3 == 121 && !(str[i] != result)) break;
  if (env_var_3 == 122 && !(str[i] != result.begin())) break;
  if (env_var_3 == 123 && !(str[i] != result.end())) break;
  if (env_var_3 == 124 && !(str[i] != result[i])) break;
  if (env_var_3 == 125 && !(str[i] != result[start])) break;
  if (env_var_3 == 126 && !(str[i] != start)) break;
  if (env_var_3 == 127 && !(str[i] != str)) break;
  if (env_var_3 == 128 && !(str[i] != str.begin())) break;
  if (env_var_3 == 129 && !(str[i] != str.end())) break;
  if (env_var_3 == 130 && !(str[i] != str[i])) break;
  if (env_var_3 == 131 && !(str[i] != str[start])) break;
  if (env_var_3 == 132 && !(str[start] != i)) break;
  if (env_var_3 == 133 && !(str[start] != result)) break;
  if (env_var_3 == 134 && !(str[start] != result.begin())) break;
  if (env_var_3 == 135 && !(str[start] != result.end())) break;
  if (env_var_3 == 136 && !(str[start] != result[i])) break;
  if (env_var_3 == 137 && !(str[start] != result[start])) break;
  if (env_var_3 == 138 && !(str[start] != start)) break;
  if (env_var_3 == 139 && !(str[start] != str)) break;
  if (env_var_3 == 140 && !(str[start] != str.begin())) break;
  if (env_var_3 == 141 && !(str[start] != str.end())) break;
  if (env_var_3 == 142 && !(str[start] != str[i])) break;
  if (env_var_3 == 143 && !(str[start] != str[start])) break;
  {
    result += str [ start ] ;
    start ++ ;
  }}
  return result ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {
    "m Dm YZ",
    "65 48 57 71",
    "01 010",
    "mT vhByi",
    "19 44 9 1",
    "0",
    "z vUi  ",
    "7 591 36643 9 055",
    "01",
    "ti YGaijPY"
    };
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

