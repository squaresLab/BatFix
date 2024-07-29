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
bool f_gold ( string str1, string str2 ) {
  if ( str1 . length ( ) != str2 . length ( ) ) return false;
  string clock_rot = "";
  string anticlock_rot = "";
  int len = str2 . length ( );
  anticlock_rot = anticlock_rot + str2 . substr ( len - 2, 2 ) + str2 . substr ( 0, len - 2 );
  clock_rot = clock_rot + str2 . substr ( 2 ) + str2 . substr ( 0, 2 );
  return ( str1 . compare ( clock_rot ) == 0 || str1 . compare ( anticlock_rot ) == 0 );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string str1 , string str2 ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = std::min() != str1; }
  if(env_var_0 == 1) { _res_key_if_0 = std::min() != str1.begin(); }
  if(env_var_0 == 2) { _res_key_if_0 = std::min() != str1.end(); }
  if(env_var_0 == 3) { _res_key_if_0 = std::min() != str2; }
  if(env_var_0 == 4) { _res_key_if_0 = std::min() != str2.__clear_and_shrink(); }
  if(env_var_0 == 5) { _res_key_if_0 = std::min() != str2.back(); }
  if(env_var_0 == 6) { _res_key_if_0 = std::min() != str2.begin(); }
  if(env_var_0 == 7) { _res_key_if_0 = std::min() != str2.cbegin(); }
  if(env_var_0 == 8) { _res_key_if_0 = std::min() != str2.clear(); }
  if(env_var_0 == 9) { _res_key_if_0 = std::min() != str2.crbegin(); }
  if(env_var_0 == 10) { _res_key_if_0 = std::min() != str2.end(); }
  if(env_var_0 == 11) { _res_key_if_0 = std::min() != str2.front(); }
  if(env_var_0 == 12) { _res_key_if_0 = std::min() != str2.get_allocator(); }
  if(env_var_0 == 13) { _res_key_if_0 = std::min() != str2.max_size(); }
  if(env_var_0 == 14) { _res_key_if_0 = std::min() != str2.pop_back(); }
  if(env_var_0 == 15) { _res_key_if_0 = std::min() != str2.rbegin(); }
  if(env_var_0 == 16) { _res_key_if_0 = std::min() != str2.rend(); }
  if(env_var_0 == 17) { _res_key_if_0 = std::min() != str2.reserve(); }
  if(env_var_0 == 18) { _res_key_if_0 = std::min() != str2.size(); }
  if(env_var_0 == 19) { _res_key_if_0 = str1 != str1; }
  if(env_var_0 == 20) { _res_key_if_0 = str1 != str1.begin(); }
  if(env_var_0 == 21) { _res_key_if_0 = str1 != str1.end(); }
  if(env_var_0 == 22) { _res_key_if_0 = str1 != str2; }
  if(env_var_0 == 23) { _res_key_if_0 = str1 != str2.__clear_and_shrink(); }
  if(env_var_0 == 24) { _res_key_if_0 = str1 != str2.back(); }
  if(env_var_0 == 25) { _res_key_if_0 = str1 != str2.begin(); }
  if(env_var_0 == 26) { _res_key_if_0 = str1 != str2.cbegin(); }
  if(env_var_0 == 27) { _res_key_if_0 = str1 != str2.clear(); }
  if(env_var_0 == 28) { _res_key_if_0 = str1 != str2.crbegin(); }
  if(env_var_0 == 29) { _res_key_if_0 = str1 != str2.end(); }
  if(env_var_0 == 30) { _res_key_if_0 = str1 != str2.front(); }
  if(env_var_0 == 31) { _res_key_if_0 = str1 != str2.get_allocator(); }
  if(env_var_0 == 32) { _res_key_if_0 = str1 != str2.max_size(); }
  if(env_var_0 == 33) { _res_key_if_0 = str1 != str2.pop_back(); }
  if(env_var_0 == 34) { _res_key_if_0 = str1 != str2.rbegin(); }
  if(env_var_0 == 35) { _res_key_if_0 = str1 != str2.rend(); }
  if(env_var_0 == 36) { _res_key_if_0 = str1 != str2.reserve(); }
  if(env_var_0 == 37) { _res_key_if_0 = str1 != str2.size(); }
  if(env_var_0 == 38) { _res_key_if_0 = str1.begin() != str1; }
  if(env_var_0 == 39) { _res_key_if_0 = str1.begin() != str1.begin(); }
  if(env_var_0 == 40) { _res_key_if_0 = str1.begin() != str1.end(); }
  if(env_var_0 == 41) { _res_key_if_0 = str1.begin() != str2; }
  if(env_var_0 == 42) { _res_key_if_0 = str1.begin() != str2.__clear_and_shrink(); }
  if(env_var_0 == 43) { _res_key_if_0 = str1.begin() != str2.back(); }
  if(env_var_0 == 44) { _res_key_if_0 = str1.begin() != str2.begin(); }
  if(env_var_0 == 45) { _res_key_if_0 = str1.begin() != str2.cbegin(); }
  if(env_var_0 == 46) { _res_key_if_0 = str1.begin() != str2.clear(); }
  if(env_var_0 == 47) { _res_key_if_0 = str1.begin() != str2.crbegin(); }
  if(env_var_0 == 48) { _res_key_if_0 = str1.begin() != str2.end(); }
  if(env_var_0 == 49) { _res_key_if_0 = str1.begin() != str2.front(); }
  if(env_var_0 == 50) { _res_key_if_0 = str1.begin() != str2.get_allocator(); }
  if(env_var_0 == 51) { _res_key_if_0 = str1.begin() != str2.max_size(); }
  if(env_var_0 == 52) { _res_key_if_0 = str1.begin() != str2.pop_back(); }
  if(env_var_0 == 53) { _res_key_if_0 = str1.begin() != str2.rbegin(); }
  if(env_var_0 == 54) { _res_key_if_0 = str1.begin() != str2.rend(); }
  if(env_var_0 == 55) { _res_key_if_0 = str1.begin() != str2.reserve(); }
  if(env_var_0 == 56) { _res_key_if_0 = str1.begin() != str2.size(); }
  if(env_var_0 == 57) { _res_key_if_0 = str1.end() != str1; }
  if(env_var_0 == 58) { _res_key_if_0 = str1.end() != str1.begin(); }
  if(env_var_0 == 59) { _res_key_if_0 = str1.end() != str1.end(); }
  if(env_var_0 == 60) { _res_key_if_0 = str1.end() != str2; }
  if(env_var_0 == 61) { _res_key_if_0 = str1.end() != str2.__clear_and_shrink(); }
  if(env_var_0 == 62) { _res_key_if_0 = str1.end() != str2.back(); }
  if(env_var_0 == 63) { _res_key_if_0 = str1.end() != str2.begin(); }
  if(env_var_0 == 64) { _res_key_if_0 = str1.end() != str2.cbegin(); }
  if(env_var_0 == 65) { _res_key_if_0 = str1.end() != str2.clear(); }
  if(env_var_0 == 66) { _res_key_if_0 = str1.end() != str2.crbegin(); }
  if(env_var_0 == 67) { _res_key_if_0 = str1.end() != str2.end(); }
  if(env_var_0 == 68) { _res_key_if_0 = str1.end() != str2.front(); }
  if(env_var_0 == 69) { _res_key_if_0 = str1.end() != str2.get_allocator(); }
  if(env_var_0 == 70) { _res_key_if_0 = str1.end() != str2.max_size(); }
  if(env_var_0 == 71) { _res_key_if_0 = str1.end() != str2.pop_back(); }
  if(env_var_0 == 72) { _res_key_if_0 = str1.end() != str2.rbegin(); }
  if(env_var_0 == 73) { _res_key_if_0 = str1.end() != str2.rend(); }
  if(env_var_0 == 74) { _res_key_if_0 = str1.end() != str2.reserve(); }
  if(env_var_0 == 75) { _res_key_if_0 = str1.end() != str2.size(); }
  if(env_var_0 == 76) { _res_key_if_0 = str2 != str1; }
  if(env_var_0 == 77) { _res_key_if_0 = str2 != str1.begin(); }
  if(env_var_0 == 78) { _res_key_if_0 = str2 != str1.end(); }
  if(env_var_0 == 79) { _res_key_if_0 = str2 != str2; }
  if(env_var_0 == 80) { _res_key_if_0 = str2 != str2.__clear_and_shrink(); }
  if(env_var_0 == 81) { _res_key_if_0 = str2 != str2.back(); }
  if(env_var_0 == 82) { _res_key_if_0 = str2 != str2.begin(); }
  if(env_var_0 == 83) { _res_key_if_0 = str2 != str2.cbegin(); }
  if(env_var_0 == 84) { _res_key_if_0 = str2 != str2.clear(); }
  if(env_var_0 == 85) { _res_key_if_0 = str2 != str2.crbegin(); }
  if(env_var_0 == 86) { _res_key_if_0 = str2 != str2.end(); }
  if(env_var_0 == 87) { _res_key_if_0 = str2 != str2.front(); }
  if(env_var_0 == 88) { _res_key_if_0 = str2 != str2.get_allocator(); }
  if(env_var_0 == 89) { _res_key_if_0 = str2 != str2.max_size(); }
  if(env_var_0 == 90) { _res_key_if_0 = str2 != str2.pop_back(); }
  if(env_var_0 == 91) { _res_key_if_0 = str2 != str2.rbegin(); }
  if(env_var_0 == 92) { _res_key_if_0 = str2 != str2.rend(); }
  if(env_var_0 == 93) { _res_key_if_0 = str2 != str2.reserve(); }
  if(env_var_0 == 94) { _res_key_if_0 = str2 != str2.size(); }
  if(env_var_0 == 95) { _res_key_if_0 = str2.append( str1 ) != str1; }
  if(env_var_0 == 96) { _res_key_if_0 = str2.append( str1 ) != str1.begin(); }
  if(env_var_0 == 97) { _res_key_if_0 = str2.append( str1 ) != str1.end(); }
  if(env_var_0 == 98) { _res_key_if_0 = str2.append( str1 ) != str2; }
  if(env_var_0 == 99) { _res_key_if_0 = str2.append( str1 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 100) { _res_key_if_0 = str2.append( str1 ) != str2.back(); }
  if(env_var_0 == 101) { _res_key_if_0 = str2.append( str1 ) != str2.begin(); }
  if(env_var_0 == 102) { _res_key_if_0 = str2.append( str1 ) != str2.cbegin(); }
  if(env_var_0 == 103) { _res_key_if_0 = str2.append( str1 ) != str2.clear(); }
  if(env_var_0 == 104) { _res_key_if_0 = str2.append( str1 ) != str2.crbegin(); }
  if(env_var_0 == 105) { _res_key_if_0 = str2.append( str1 ) != str2.end(); }
  if(env_var_0 == 106) { _res_key_if_0 = str2.append( str1 ) != str2.front(); }
  if(env_var_0 == 107) { _res_key_if_0 = str2.append( str1 ) != str2.get_allocator(); }
  if(env_var_0 == 108) { _res_key_if_0 = str2.append( str1 ) != str2.max_size(); }
  if(env_var_0 == 109) { _res_key_if_0 = str2.append( str1 ) != str2.pop_back(); }
  if(env_var_0 == 110) { _res_key_if_0 = str2.append( str1 ) != str2.rbegin(); }
  if(env_var_0 == 111) { _res_key_if_0 = str2.append( str1 ) != str2.rend(); }
  if(env_var_0 == 112) { _res_key_if_0 = str2.append( str1 ) != str2.reserve(); }
  if(env_var_0 == 113) { _res_key_if_0 = str2.append( str1 ) != str2.size(); }
  if(env_var_0 == 114) { _res_key_if_0 = str2.append( str2 ) != str1; }
  if(env_var_0 == 115) { _res_key_if_0 = str2.append( str2 ) != str1.begin(); }
  if(env_var_0 == 116) { _res_key_if_0 = str2.append( str2 ) != str1.end(); }
  if(env_var_0 == 117) { _res_key_if_0 = str2.append( str2 ) != str2; }
  if(env_var_0 == 118) { _res_key_if_0 = str2.append( str2 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 119) { _res_key_if_0 = str2.append( str2 ) != str2.back(); }
  if(env_var_0 == 120) { _res_key_if_0 = str2.append( str2 ) != str2.begin(); }
  if(env_var_0 == 121) { _res_key_if_0 = str2.append( str2 ) != str2.cbegin(); }
  if(env_var_0 == 122) { _res_key_if_0 = str2.append( str2 ) != str2.clear(); }
  if(env_var_0 == 123) { _res_key_if_0 = str2.append( str2 ) != str2.crbegin(); }
  if(env_var_0 == 124) { _res_key_if_0 = str2.append( str2 ) != str2.end(); }
  if(env_var_0 == 125) { _res_key_if_0 = str2.append( str2 ) != str2.front(); }
  if(env_var_0 == 126) { _res_key_if_0 = str2.append( str2 ) != str2.get_allocator(); }
  if(env_var_0 == 127) { _res_key_if_0 = str2.append( str2 ) != str2.max_size(); }
  if(env_var_0 == 128) { _res_key_if_0 = str2.append( str2 ) != str2.pop_back(); }
  if(env_var_0 == 129) { _res_key_if_0 = str2.append( str2 ) != str2.rbegin(); }
  if(env_var_0 == 130) { _res_key_if_0 = str2.append( str2 ) != str2.rend(); }
  if(env_var_0 == 131) { _res_key_if_0 = str2.append( str2 ) != str2.reserve(); }
  if(env_var_0 == 132) { _res_key_if_0 = str2.append( str2 ) != str2.size(); }
  if(env_var_0 == 133) { _res_key_if_0 = str2.assign( str1 ) != str1; }
  if(env_var_0 == 134) { _res_key_if_0 = str2.assign( str1 ) != str1.begin(); }
  if(env_var_0 == 135) { _res_key_if_0 = str2.assign( str1 ) != str1.end(); }
  if(env_var_0 == 136) { _res_key_if_0 = str2.assign( str1 ) != str2; }
  if(env_var_0 == 137) { _res_key_if_0 = str2.assign( str1 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 138) { _res_key_if_0 = str2.assign( str1 ) != str2.back(); }
  if(env_var_0 == 139) { _res_key_if_0 = str2.assign( str1 ) != str2.begin(); }
  if(env_var_0 == 140) { _res_key_if_0 = str2.assign( str1 ) != str2.cbegin(); }
  if(env_var_0 == 141) { _res_key_if_0 = str2.assign( str1 ) != str2.clear(); }
  if(env_var_0 == 142) { _res_key_if_0 = str2.assign( str1 ) != str2.crbegin(); }
  if(env_var_0 == 143) { _res_key_if_0 = str2.assign( str1 ) != str2.end(); }
  if(env_var_0 == 144) { _res_key_if_0 = str2.assign( str1 ) != str2.front(); }
  if(env_var_0 == 145) { _res_key_if_0 = str2.assign( str1 ) != str2.get_allocator(); }
  if(env_var_0 == 146) { _res_key_if_0 = str2.assign( str1 ) != str2.max_size(); }
  if(env_var_0 == 147) { _res_key_if_0 = str2.assign( str1 ) != str2.pop_back(); }
  if(env_var_0 == 148) { _res_key_if_0 = str2.assign( str1 ) != str2.rbegin(); }
  if(env_var_0 == 149) { _res_key_if_0 = str2.assign( str1 ) != str2.rend(); }
  if(env_var_0 == 150) { _res_key_if_0 = str2.assign( str1 ) != str2.reserve(); }
  if(env_var_0 == 151) { _res_key_if_0 = str2.assign( str1 ) != str2.size(); }
  if(env_var_0 == 152) { _res_key_if_0 = str2.assign( str2 ) != str1; }
  if(env_var_0 == 153) { _res_key_if_0 = str2.assign( str2 ) != str1.begin(); }
  if(env_var_0 == 154) { _res_key_if_0 = str2.assign( str2 ) != str1.end(); }
  if(env_var_0 == 155) { _res_key_if_0 = str2.assign( str2 ) != str2; }
  if(env_var_0 == 156) { _res_key_if_0 = str2.assign( str2 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 157) { _res_key_if_0 = str2.assign( str2 ) != str2.back(); }
  if(env_var_0 == 158) { _res_key_if_0 = str2.assign( str2 ) != str2.begin(); }
  if(env_var_0 == 159) { _res_key_if_0 = str2.assign( str2 ) != str2.cbegin(); }
  if(env_var_0 == 160) { _res_key_if_0 = str2.assign( str2 ) != str2.clear(); }
  if(env_var_0 == 161) { _res_key_if_0 = str2.assign( str2 ) != str2.crbegin(); }
  if(env_var_0 == 162) { _res_key_if_0 = str2.assign( str2 ) != str2.end(); }
  if(env_var_0 == 163) { _res_key_if_0 = str2.assign( str2 ) != str2.front(); }
  if(env_var_0 == 164) { _res_key_if_0 = str2.assign( str2 ) != str2.get_allocator(); }
  if(env_var_0 == 165) { _res_key_if_0 = str2.assign( str2 ) != str2.max_size(); }
  if(env_var_0 == 166) { _res_key_if_0 = str2.assign( str2 ) != str2.pop_back(); }
  if(env_var_0 == 167) { _res_key_if_0 = str2.assign( str2 ) != str2.rbegin(); }
  if(env_var_0 == 168) { _res_key_if_0 = str2.assign( str2 ) != str2.rend(); }
  if(env_var_0 == 169) { _res_key_if_0 = str2.assign( str2 ) != str2.reserve(); }
  if(env_var_0 == 170) { _res_key_if_0 = str2.assign( str2 ) != str2.size(); }
  if(env_var_0 == 171) { _res_key_if_0 = str2.begin() != str1; }
  if(env_var_0 == 172) { _res_key_if_0 = str2.begin() != str1.begin(); }
  if(env_var_0 == 173) { _res_key_if_0 = str2.begin() != str1.end(); }
  if(env_var_0 == 174) { _res_key_if_0 = str2.begin() != str2; }
  if(env_var_0 == 175) { _res_key_if_0 = str2.begin() != str2.__clear_and_shrink(); }
  if(env_var_0 == 176) { _res_key_if_0 = str2.begin() != str2.back(); }
  if(env_var_0 == 177) { _res_key_if_0 = str2.begin() != str2.begin(); }
  if(env_var_0 == 178) { _res_key_if_0 = str2.begin() != str2.cbegin(); }
  if(env_var_0 == 179) { _res_key_if_0 = str2.begin() != str2.clear(); }
  if(env_var_0 == 180) { _res_key_if_0 = str2.begin() != str2.crbegin(); }
  if(env_var_0 == 181) { _res_key_if_0 = str2.begin() != str2.end(); }
  if(env_var_0 == 182) { _res_key_if_0 = str2.begin() != str2.front(); }
  if(env_var_0 == 183) { _res_key_if_0 = str2.begin() != str2.get_allocator(); }
  if(env_var_0 == 184) { _res_key_if_0 = str2.begin() != str2.max_size(); }
  if(env_var_0 == 185) { _res_key_if_0 = str2.begin() != str2.pop_back(); }
  if(env_var_0 == 186) { _res_key_if_0 = str2.begin() != str2.rbegin(); }
  if(env_var_0 == 187) { _res_key_if_0 = str2.begin() != str2.rend(); }
  if(env_var_0 == 188) { _res_key_if_0 = str2.begin() != str2.reserve(); }
  if(env_var_0 == 189) { _res_key_if_0 = str2.begin() != str2.size(); }
  if(env_var_0 == 190) { _res_key_if_0 = str2.compare( str1 ) != str1; }
  if(env_var_0 == 191) { _res_key_if_0 = str2.compare( str1 ) != str1.begin(); }
  if(env_var_0 == 192) { _res_key_if_0 = str2.compare( str1 ) != str1.end(); }
  if(env_var_0 == 193) { _res_key_if_0 = str2.compare( str1 ) != str2; }
  if(env_var_0 == 194) { _res_key_if_0 = str2.compare( str1 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 195) { _res_key_if_0 = str2.compare( str1 ) != str2.back(); }
  if(env_var_0 == 196) { _res_key_if_0 = str2.compare( str1 ) != str2.begin(); }
  if(env_var_0 == 197) { _res_key_if_0 = str2.compare( str1 ) != str2.cbegin(); }
  if(env_var_0 == 198) { _res_key_if_0 = str2.compare( str1 ) != str2.clear(); }
  if(env_var_0 == 199) { _res_key_if_0 = str2.compare( str1 ) != str2.crbegin(); }
  if(env_var_0 == 200) { _res_key_if_0 = str2.compare( str1 ) != str2.end(); }
  if(env_var_0 == 201) { _res_key_if_0 = str2.compare( str1 ) != str2.front(); }
  if(env_var_0 == 202) { _res_key_if_0 = str2.compare( str1 ) != str2.get_allocator(); }
  if(env_var_0 == 203) { _res_key_if_0 = str2.compare( str1 ) != str2.max_size(); }
  if(env_var_0 == 204) { _res_key_if_0 = str2.compare( str1 ) != str2.pop_back(); }
  if(env_var_0 == 205) { _res_key_if_0 = str2.compare( str1 ) != str2.rbegin(); }
  if(env_var_0 == 206) { _res_key_if_0 = str2.compare( str1 ) != str2.rend(); }
  if(env_var_0 == 207) { _res_key_if_0 = str2.compare( str1 ) != str2.reserve(); }
  if(env_var_0 == 208) { _res_key_if_0 = str2.compare( str1 ) != str2.size(); }
  if(env_var_0 == 209) { _res_key_if_0 = str2.compare( str2 ) != str1; }
  if(env_var_0 == 210) { _res_key_if_0 = str2.compare( str2 ) != str1.begin(); }
  if(env_var_0 == 211) { _res_key_if_0 = str2.compare( str2 ) != str1.end(); }
  if(env_var_0 == 212) { _res_key_if_0 = str2.compare( str2 ) != str2; }
  if(env_var_0 == 213) { _res_key_if_0 = str2.compare( str2 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 214) { _res_key_if_0 = str2.compare( str2 ) != str2.back(); }
  if(env_var_0 == 215) { _res_key_if_0 = str2.compare( str2 ) != str2.begin(); }
  if(env_var_0 == 216) { _res_key_if_0 = str2.compare( str2 ) != str2.cbegin(); }
  if(env_var_0 == 217) { _res_key_if_0 = str2.compare( str2 ) != str2.clear(); }
  if(env_var_0 == 218) { _res_key_if_0 = str2.compare( str2 ) != str2.crbegin(); }
  if(env_var_0 == 219) { _res_key_if_0 = str2.compare( str2 ) != str2.end(); }
  if(env_var_0 == 220) { _res_key_if_0 = str2.compare( str2 ) != str2.front(); }
  if(env_var_0 == 221) { _res_key_if_0 = str2.compare( str2 ) != str2.get_allocator(); }
  if(env_var_0 == 222) { _res_key_if_0 = str2.compare( str2 ) != str2.max_size(); }
  if(env_var_0 == 223) { _res_key_if_0 = str2.compare( str2 ) != str2.pop_back(); }
  if(env_var_0 == 224) { _res_key_if_0 = str2.compare( str2 ) != str2.rbegin(); }
  if(env_var_0 == 225) { _res_key_if_0 = str2.compare( str2 ) != str2.rend(); }
  if(env_var_0 == 226) { _res_key_if_0 = str2.compare( str2 ) != str2.reserve(); }
  if(env_var_0 == 227) { _res_key_if_0 = str2.compare( str2 ) != str2.size(); }
  if(env_var_0 == 228) { _res_key_if_0 = str2.end() != str1; }
  if(env_var_0 == 229) { _res_key_if_0 = str2.end() != str1.begin(); }
  if(env_var_0 == 230) { _res_key_if_0 = str2.end() != str1.end(); }
  if(env_var_0 == 231) { _res_key_if_0 = str2.end() != str2; }
  if(env_var_0 == 232) { _res_key_if_0 = str2.end() != str2.__clear_and_shrink(); }
  if(env_var_0 == 233) { _res_key_if_0 = str2.end() != str2.back(); }
  if(env_var_0 == 234) { _res_key_if_0 = str2.end() != str2.begin(); }
  if(env_var_0 == 235) { _res_key_if_0 = str2.end() != str2.cbegin(); }
  if(env_var_0 == 236) { _res_key_if_0 = str2.end() != str2.clear(); }
  if(env_var_0 == 237) { _res_key_if_0 = str2.end() != str2.crbegin(); }
  if(env_var_0 == 238) { _res_key_if_0 = str2.end() != str2.end(); }
  if(env_var_0 == 239) { _res_key_if_0 = str2.end() != str2.front(); }
  if(env_var_0 == 240) { _res_key_if_0 = str2.end() != str2.get_allocator(); }
  if(env_var_0 == 241) { _res_key_if_0 = str2.end() != str2.max_size(); }
  if(env_var_0 == 242) { _res_key_if_0 = str2.end() != str2.pop_back(); }
  if(env_var_0 == 243) { _res_key_if_0 = str2.end() != str2.rbegin(); }
  if(env_var_0 == 244) { _res_key_if_0 = str2.end() != str2.rend(); }
  if(env_var_0 == 245) { _res_key_if_0 = str2.end() != str2.reserve(); }
  if(env_var_0 == 246) { _res_key_if_0 = str2.end() != str2.size(); }
  if(env_var_0 == 247) { _res_key_if_0 = str2.swap( str1 ) != str1; }
  if(env_var_0 == 248) { _res_key_if_0 = str2.swap( str1 ) != str1.begin(); }
  if(env_var_0 == 249) { _res_key_if_0 = str2.swap( str1 ) != str1.end(); }
  if(env_var_0 == 250) { _res_key_if_0 = str2.swap( str1 ) != str2; }
  if(env_var_0 == 251) { _res_key_if_0 = str2.swap( str1 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 252) { _res_key_if_0 = str2.swap( str1 ) != str2.back(); }
  if(env_var_0 == 253) { _res_key_if_0 = str2.swap( str1 ) != str2.begin(); }
  if(env_var_0 == 254) { _res_key_if_0 = str2.swap( str1 ) != str2.cbegin(); }
  if(env_var_0 == 255) { _res_key_if_0 = str2.swap( str1 ) != str2.clear(); }
  if(env_var_0 == 256) { _res_key_if_0 = str2.swap( str1 ) != str2.crbegin(); }
  if(env_var_0 == 257) { _res_key_if_0 = str2.swap( str1 ) != str2.end(); }
  if(env_var_0 == 258) { _res_key_if_0 = str2.swap( str1 ) != str2.front(); }
  if(env_var_0 == 259) { _res_key_if_0 = str2.swap( str1 ) != str2.get_allocator(); }
  if(env_var_0 == 260) { _res_key_if_0 = str2.swap( str1 ) != str2.max_size(); }
  if(env_var_0 == 261) { _res_key_if_0 = str2.swap( str1 ) != str2.pop_back(); }
  if(env_var_0 == 262) { _res_key_if_0 = str2.swap( str1 ) != str2.rbegin(); }
  if(env_var_0 == 263) { _res_key_if_0 = str2.swap( str1 ) != str2.rend(); }
  if(env_var_0 == 264) { _res_key_if_0 = str2.swap( str1 ) != str2.reserve(); }
  if(env_var_0 == 265) { _res_key_if_0 = str2.swap( str1 ) != str2.size(); }
  if(env_var_0 == 266) { _res_key_if_0 = str2.swap( str2 ) != str1; }
  if(env_var_0 == 267) { _res_key_if_0 = str2.swap( str2 ) != str1.begin(); }
  if(env_var_0 == 268) { _res_key_if_0 = str2.swap( str2 ) != str1.end(); }
  if(env_var_0 == 269) { _res_key_if_0 = str2.swap( str2 ) != str2; }
  if(env_var_0 == 270) { _res_key_if_0 = str2.swap( str2 ) != str2.__clear_and_shrink(); }
  if(env_var_0 == 271) { _res_key_if_0 = str2.swap( str2 ) != str2.back(); }
  if(env_var_0 == 272) { _res_key_if_0 = str2.swap( str2 ) != str2.begin(); }
  if(env_var_0 == 273) { _res_key_if_0 = str2.swap( str2 ) != str2.cbegin(); }
  if(env_var_0 == 274) { _res_key_if_0 = str2.swap( str2 ) != str2.clear(); }
  if(env_var_0 == 275) { _res_key_if_0 = str2.swap( str2 ) != str2.crbegin(); }
  if(env_var_0 == 276) { _res_key_if_0 = str2.swap( str2 ) != str2.end(); }
  if(env_var_0 == 277) { _res_key_if_0 = str2.swap( str2 ) != str2.front(); }
  if(env_var_0 == 278) { _res_key_if_0 = str2.swap( str2 ) != str2.get_allocator(); }
  if(env_var_0 == 279) { _res_key_if_0 = str2.swap( str2 ) != str2.max_size(); }
  if(env_var_0 == 280) { _res_key_if_0 = str2.swap( str2 ) != str2.pop_back(); }
  if(env_var_0 == 281) { _res_key_if_0 = str2.swap( str2 ) != str2.rbegin(); }
  if(env_var_0 == 282) { _res_key_if_0 = str2.swap( str2 ) != str2.rend(); }
  if(env_var_0 == 283) { _res_key_if_0 = str2.swap( str2 ) != str2.reserve(); }
  if(env_var_0 == 284) { _res_key_if_0 = str2.swap( str2 ) != str2.size(); }
  if ( _res_key_if_0 ) return false ;
  string clockRot ;
  string anticlockRot ;
  int l = str2 . length ( ) ;
  anticlockRot = ( anticlockRot + str2 . substr ( l - 2 ) + str2 . substr ( 0 , l - 2 ) ) ;
  clockRot = clockRot + str2 . substr ( 2 ) + str2 . substr ( 0 , 2 ) ;
  return ( str1 == clockRot || str1 == anticlockRot ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"amazon","onamaz","amazon","ab","737009","000110","l","4420318628","11011111000000"," pvFHANc"};
    vector<string> param1 {"azonam","amazon","azoman","ab","239119","01111","YVo hqvnGxow","52856","10","xBIDFbiGb"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
