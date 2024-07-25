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
bool f_gold ( int x, int y ) {
  int res1 = log ( y ) / log ( x );
  double res2 = log ( y ) / log ( x );
  return ( res1 == res2 );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( double x , double y ) {
 double res1 ;
  if(env_var_0 == 0) {  isupper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 1) {  isupper( res1 ) / res1; }
  if(env_var_0 == 2) {  isupper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 3) {  isupper( res1 ) / toupper( x ); }
  if(env_var_0 == 4) {  isupper( res1 ) / toupper( y ); }
  if(env_var_0 == 5) {  isupper( res1 ) / x; }
  if(env_var_0 == 6) {  isupper( res1 ) / y; }
  if(env_var_0 == 7) {  isupper( x ) / isupper( res1 ); }
  if(env_var_0 == 8) {  isupper( x ) / res1; }
  if(env_var_0 == 9) {  isupper( x ) / toupper( res1 ); }
  if(env_var_0 == 10) {  isupper( x ) / toupper( x ); }
  if(env_var_0 == 11) {  isupper( x ) / toupper( y ); }
  if(env_var_0 == 12) {  isupper( x ) / x; }
  if(env_var_0 == 13) {  isupper( x ) / y; }
  if(env_var_0 == 14) {  isupper( y ) / isupper( res1 ); }
  if(env_var_0 == 15) {  isupper( y ) / res1; }
  if(env_var_0 == 16) {  isupper( y ) / toupper( res1 ); }
  if(env_var_0 == 17) {  isupper( y ) / toupper( x ); }
  if(env_var_0 == 18) {  isupper( y ) / toupper( y ); }
  if(env_var_0 == 19) {  isupper( y ) / x; }
  if(env_var_0 == 20) {  isupper( y ) / y; }
  if(env_var_0 == 21) {  res1 / isupper( res1 ); }
  if(env_var_0 == 22) {  res1 / res1; }
  if(env_var_0 == 23) {  res1 / toupper( res1 ); }
  if(env_var_0 == 24) {  res1 / toupper( x ); }
  if(env_var_0 == 25) {  res1 / toupper( y ); }
  if(env_var_0 == 26) {  res1 / x; }
  if(env_var_0 == 27) {  res1 / y; }
  if(env_var_0 == 28) {  std::max( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 29) {  std::max( res1,res1 ) / res1; }
  if(env_var_0 == 30) {  std::max( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 31) {  std::max( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 32) {  std::max( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 33) {  std::max( res1,res1 ) / x; }
  if(env_var_0 == 34) {  std::max( res1,res1 ) / y; }
  if(env_var_0 == 35) {  std::max( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 36) {  std::max( res1,x ) / res1; }
  if(env_var_0 == 37) {  std::max( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 38) {  std::max( res1,x ) / toupper( x ); }
  if(env_var_0 == 39) {  std::max( res1,x ) / toupper( y ); }
  if(env_var_0 == 40) {  std::max( res1,x ) / x; }
  if(env_var_0 == 41) {  std::max( res1,x ) / y; }
  if(env_var_0 == 42) {  std::max( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 43) {  std::max( res1,y ) / res1; }
  if(env_var_0 == 44) {  std::max( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 45) {  std::max( res1,y ) / toupper( x ); }
  if(env_var_0 == 46) {  std::max( res1,y ) / toupper( y ); }
  if(env_var_0 == 47) {  std::max( res1,y ) / x; }
  if(env_var_0 == 48) {  std::max( res1,y ) / y; }
  if(env_var_0 == 49) {  std::max( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 50) {  std::max( x,res1 ) / res1; }
  if(env_var_0 == 51) {  std::max( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 52) {  std::max( x,res1 ) / toupper( x ); }
  if(env_var_0 == 53) {  std::max( x,res1 ) / toupper( y ); }
  if(env_var_0 == 54) {  std::max( x,res1 ) / x; }
  if(env_var_0 == 55) {  std::max( x,res1 ) / y; }
  if(env_var_0 == 56) {  std::max( x,x ) / isupper( res1 ); }
  if(env_var_0 == 57) {  std::max( x,x ) / res1; }
  if(env_var_0 == 58) {  std::max( x,x ) / toupper( res1 ); }
  if(env_var_0 == 59) {  std::max( x,x ) / toupper( x ); }
  if(env_var_0 == 60) {  std::max( x,x ) / toupper( y ); }
  if(env_var_0 == 61) {  std::max( x,x ) / x; }
  if(env_var_0 == 62) {  std::max( x,x ) / y; }
  if(env_var_0 == 63) {  std::max( x,y ) / isupper( res1 ); }
  if(env_var_0 == 64) {  std::max( x,y ) / res1; }
  if(env_var_0 == 65) {  std::max( x,y ) / toupper( res1 ); }
  if(env_var_0 == 66) {  std::max( x,y ) / toupper( x ); }
  if(env_var_0 == 67) {  std::max( x,y ) / toupper( y ); }
  if(env_var_0 == 68) {  std::max( x,y ) / x; }
  if(env_var_0 == 69) {  std::max( x,y ) / y; }
  if(env_var_0 == 70) {  std::max( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 71) {  std::max( y,res1 ) / res1; }
  if(env_var_0 == 72) {  std::max( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 73) {  std::max( y,res1 ) / toupper( x ); }
  if(env_var_0 == 74) {  std::max( y,res1 ) / toupper( y ); }
  if(env_var_0 == 75) {  std::max( y,res1 ) / x; }
  if(env_var_0 == 76) {  std::max( y,res1 ) / y; }
  if(env_var_0 == 77) {  std::max( y,x ) / isupper( res1 ); }
  if(env_var_0 == 78) {  std::max( y,x ) / res1; }
  if(env_var_0 == 79) {  std::max( y,x ) / toupper( res1 ); }
  if(env_var_0 == 80) {  std::max( y,x ) / toupper( x ); }
  if(env_var_0 == 81) {  std::max( y,x ) / toupper( y ); }
  if(env_var_0 == 82) {  std::max( y,x ) / x; }
  if(env_var_0 == 83) {  std::max( y,x ) / y; }
  if(env_var_0 == 84) {  std::max( y,y ) / isupper( res1 ); }
  if(env_var_0 == 85) {  std::max( y,y ) / res1; }
  if(env_var_0 == 86) {  std::max( y,y ) / toupper( res1 ); }
  if(env_var_0 == 87) {  std::max( y,y ) / toupper( x ); }
  if(env_var_0 == 88) {  std::max( y,y ) / toupper( y ); }
  if(env_var_0 == 89) {  std::max( y,y ) / x; }
  if(env_var_0 == 90) {  std::max( y,y ) / y; }
  if(env_var_0 == 91) {  std::min( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 92) {  std::min( res1,res1 ) / res1; }
  if(env_var_0 == 93) {  std::min( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 94) {  std::min( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 95) {  std::min( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 96) {  std::min( res1,res1 ) / x; }
  if(env_var_0 == 97) {  std::min( res1,res1 ) / y; }
  if(env_var_0 == 98) {  std::min( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 99) {  std::min( res1,x ) / res1; }
  if(env_var_0 == 100) {  std::min( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 101) {  std::min( res1,x ) / toupper( x ); }
  if(env_var_0 == 102) {  std::min( res1,x ) / toupper( y ); }
  if(env_var_0 == 103) {  std::min( res1,x ) / x; }
  if(env_var_0 == 104) {  std::min( res1,x ) / y; }
  if(env_var_0 == 105) {  std::min( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 106) {  std::min( res1,y ) / res1; }
  if(env_var_0 == 107) {  std::min( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 108) {  std::min( res1,y ) / toupper( x ); }
  if(env_var_0 == 109) {  std::min( res1,y ) / toupper( y ); }
  if(env_var_0 == 110) {  std::min( res1,y ) / x; }
  if(env_var_0 == 111) {  std::min( res1,y ) / y; }
  if(env_var_0 == 112) {  std::min( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 113) {  std::min( x,res1 ) / res1; }
  if(env_var_0 == 114) {  std::min( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 115) {  std::min( x,res1 ) / toupper( x ); }
  if(env_var_0 == 116) {  std::min( x,res1 ) / toupper( y ); }
  if(env_var_0 == 117) {  std::min( x,res1 ) / x; }
  if(env_var_0 == 118) {  std::min( x,res1 ) / y; }
  if(env_var_0 == 119) {  std::min( x,x ) / isupper( res1 ); }
  if(env_var_0 == 120) {  std::min( x,x ) / res1; }
  if(env_var_0 == 121) {  std::min( x,x ) / toupper( res1 ); }
  if(env_var_0 == 122) {  std::min( x,x ) / toupper( x ); }
  if(env_var_0 == 123) {  std::min( x,x ) / toupper( y ); }
  if(env_var_0 == 124) {  std::min( x,x ) / x; }
  if(env_var_0 == 125) {  std::min( x,x ) / y; }
  if(env_var_0 == 126) {  std::min( x,y ) / isupper( res1 ); }
  if(env_var_0 == 127) {  std::min( x,y ) / res1; }
  if(env_var_0 == 128) {  std::min( x,y ) / toupper( res1 ); }
  if(env_var_0 == 129) {  std::min( x,y ) / toupper( x ); }
  if(env_var_0 == 130) {  std::min( x,y ) / toupper( y ); }
  if(env_var_0 == 131) {  std::min( x,y ) / x; }
  if(env_var_0 == 132) {  std::min( x,y ) / y; }
  if(env_var_0 == 133) {  std::min( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 134) {  std::min( y,res1 ) / res1; }
  if(env_var_0 == 135) {  std::min( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 136) {  std::min( y,res1 ) / toupper( x ); }
  if(env_var_0 == 137) {  std::min( y,res1 ) / toupper( y ); }
  if(env_var_0 == 138) {  std::min( y,res1 ) / x; }
  if(env_var_0 == 139) {  std::min( y,res1 ) / y; }
  if(env_var_0 == 140) {  std::min( y,x ) / isupper( res1 ); }
  if(env_var_0 == 141) {  std::min( y,x ) / res1; }
  if(env_var_0 == 142) {  std::min( y,x ) / toupper( res1 ); }
  if(env_var_0 == 143) {  std::min( y,x ) / toupper( x ); }
  if(env_var_0 == 144) {  std::min( y,x ) / toupper( y ); }
  if(env_var_0 == 145) {  std::min( y,x ) / x; }
  if(env_var_0 == 146) {  std::min( y,x ) / y; }
  if(env_var_0 == 147) {  std::min( y,y ) / isupper( res1 ); }
  if(env_var_0 == 148) {  std::min( y,y ) / res1; }
  if(env_var_0 == 149) {  std::min( y,y ) / toupper( res1 ); }
  if(env_var_0 == 150) {  std::min( y,y ) / toupper( x ); }
  if(env_var_0 == 151) {  std::min( y,y ) / toupper( y ); }
  if(env_var_0 == 152) {  std::min( y,y ) / x; }
  if(env_var_0 == 153) {  std::min( y,y ) / y; }
  if(env_var_0 == 154) {  toupper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 155) {  toupper( res1 ) / res1; }
  if(env_var_0 == 156) {  toupper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 157) {  toupper( res1 ) / toupper( x ); }
  if(env_var_0 == 158) {  toupper( res1 ) / toupper( y ); }
  if(env_var_0 == 159) {  toupper( res1 ) / x; }
  if(env_var_0 == 160) {  toupper( res1 ) / y; }
  if(env_var_0 == 161) {  toupper( x ) / isupper( res1 ); }
  if(env_var_0 == 162) {  toupper( x ) / res1; }
  if(env_var_0 == 163) {  toupper( x ) / toupper( res1 ); }
  if(env_var_0 == 164) {  toupper( x ) / toupper( x ); }
  if(env_var_0 == 165) {  toupper( x ) / toupper( y ); }
  if(env_var_0 == 166) {  toupper( x ) / x; }
  if(env_var_0 == 167) {  toupper( x ) / y; }
  if(env_var_0 == 168) {  toupper( y ) / isupper( res1 ); }
  if(env_var_0 == 169) {  toupper( y ) / res1; }
  if(env_var_0 == 170) {  toupper( y ) / toupper( res1 ); }
  if(env_var_0 == 171) {  toupper( y ) / toupper( x ); }
  if(env_var_0 == 172) {  toupper( y ) / toupper( y ); }
  if(env_var_0 == 173) {  toupper( y ) / x; }
  if(env_var_0 == 174) {  toupper( y ) / y; }
  if(env_var_0 == 175) {  x / isupper( res1 ); }
  if(env_var_0 == 176) {  x / res1; }
  if(env_var_0 == 177) {  x / toupper( res1 ); }
  if(env_var_0 == 178) {  x / toupper( x ); }
  if(env_var_0 == 179) {  x / toupper( y ); }
  if(env_var_0 == 180) {  x / x; }
  if(env_var_0 == 181) {  x / y; }
  if(env_var_0 == 182) {  y / isupper( res1 ); }
  if(env_var_0 == 183) {  y / res1; }
  if(env_var_0 == 184) {  y / toupper( res1 ); }
  if(env_var_0 == 185) {  y / toupper( x ); }
  if(env_var_0 == 186) {  y / toupper( y ); }
  if(env_var_0 == 187) {  y / x; }
  if(env_var_0 == 188) {  y / y; }
  if(env_var_0 == 189) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 190) { upper( res1 ) / res1; }
  if(env_var_0 == 191) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 192) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 193) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 194) { upper( res1 ) / x; }
  if(env_var_0 == 195) { upper( res1 ) / y; }
  if(env_var_0 == 196) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 197) { upper( x ) / res1; }
  if(env_var_0 == 198) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 199) { upper( x ) / toupper( x ); }
  if(env_var_0 == 200) { upper( x ) / toupper( y ); }
  if(env_var_0 == 201) { upper( x ) / x; }
  if(env_var_0 == 202) { upper( x ) / y; }
  if(env_var_0 == 203) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 204) { upper( y ) / res1; }
  if(env_var_0 == 205) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 206) { upper( y ) / toupper( x ); }
  if(env_var_0 == 207) { upper( y ) / toupper( y ); }
  if(env_var_0 == 208) { upper( y ) / x; }
  if(env_var_0 == 209) { upper( y ) / y; }
  if(env_var_0 == 210) { s1 / isupper( res1 ); }
  if(env_var_0 == 211) { s1 / res1; }
  if(env_var_0 == 212) { s1 / toupper( res1 ); }
  if(env_var_0 == 213) { s1 / toupper( x ); }
  if(env_var_0 == 214) { s1 / toupper( y ); }
  if(env_var_0 == 215) { s1 / x; }
  if(env_var_0 == 216) { s1 / y; }
  if(env_var_0 == 217) { d::max( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 218) { d::max( res1,res1 ) / res1; }
  if(env_var_0 == 219) { d::max( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 220) { d::max( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 221) { d::max( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 222) { d::max( res1,res1 ) / x; }
  if(env_var_0 == 223) { d::max( res1,res1 ) / y; }
  if(env_var_0 == 224) { d::max( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 225) { d::max( res1,x ) / res1; }
  if(env_var_0 == 226) { d::max( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 227) { d::max( res1,x ) / toupper( x ); }
  if(env_var_0 == 228) { d::max( res1,x ) / toupper( y ); }
  if(env_var_0 == 229) { d::max( res1,x ) / x; }
  if(env_var_0 == 230) { d::max( res1,x ) / y; }
  if(env_var_0 == 231) { d::max( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 232) { d::max( res1,y ) / res1; }
  if(env_var_0 == 233) { d::max( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 234) { d::max( res1,y ) / toupper( x ); }
  if(env_var_0 == 235) { d::max( res1,y ) / toupper( y ); }
  if(env_var_0 == 236) { d::max( res1,y ) / x; }
  if(env_var_0 == 237) { d::max( res1,y ) / y; }
  if(env_var_0 == 238) { d::max( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 239) { d::max( x,res1 ) / res1; }
  if(env_var_0 == 240) { d::max( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 241) { d::max( x,res1 ) / toupper( x ); }
  if(env_var_0 == 242) { d::max( x,res1 ) / toupper( y ); }
  if(env_var_0 == 243) { d::max( x,res1 ) / x; }
  if(env_var_0 == 244) { d::max( x,res1 ) / y; }
  if(env_var_0 == 245) { d::max( x,x ) / isupper( res1 ); }
  if(env_var_0 == 246) { d::max( x,x ) / res1; }
  if(env_var_0 == 247) { d::max( x,x ) / toupper( res1 ); }
  if(env_var_0 == 248) { d::max( x,x ) / toupper( x ); }
  if(env_var_0 == 249) { d::max( x,x ) / toupper( y ); }
  if(env_var_0 == 250) { d::max( x,x ) / x; }
  if(env_var_0 == 251) { d::max( x,x ) / y; }
  if(env_var_0 == 252) { d::max( x,y ) / isupper( res1 ); }
  if(env_var_0 == 253) { d::max( x,y ) / res1; }
  if(env_var_0 == 254) { d::max( x,y ) / toupper( res1 ); }
  if(env_var_0 == 255) { d::max( x,y ) / toupper( x ); }
  if(env_var_0 == 256) { d::max( x,y ) / toupper( y ); }
  if(env_var_0 == 257) { d::max( x,y ) / x; }
  if(env_var_0 == 258) { d::max( x,y ) / y; }
  if(env_var_0 == 259) { d::max( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 260) { d::max( y,res1 ) / res1; }
  if(env_var_0 == 261) { d::max( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 262) { d::max( y,res1 ) / toupper( x ); }
  if(env_var_0 == 263) { d::max( y,res1 ) / toupper( y ); }
  if(env_var_0 == 264) { d::max( y,res1 ) / x; }
  if(env_var_0 == 265) { d::max( y,res1 ) / y; }
  if(env_var_0 == 266) { d::max( y,x ) / isupper( res1 ); }
  if(env_var_0 == 267) { d::max( y,x ) / res1; }
  if(env_var_0 == 268) { d::max( y,x ) / toupper( res1 ); }
  if(env_var_0 == 269) { d::max( y,x ) / toupper( x ); }
  if(env_var_0 == 270) { d::max( y,x ) / toupper( y ); }
  if(env_var_0 == 271) { d::max( y,x ) / x; }
  if(env_var_0 == 272) { d::max( y,x ) / y; }
  if(env_var_0 == 273) { d::max( y,y ) / isupper( res1 ); }
  if(env_var_0 == 274) { d::max( y,y ) / res1; }
  if(env_var_0 == 275) { d::max( y,y ) / toupper( res1 ); }
  if(env_var_0 == 276) { d::max( y,y ) / toupper( x ); }
  if(env_var_0 == 277) { d::max( y,y ) / toupper( y ); }
  if(env_var_0 == 278) { d::max( y,y ) / x; }
  if(env_var_0 == 279) { d::max( y,y ) / y; }
  if(env_var_0 == 280) { d::min( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 281) { d::min( res1,res1 ) / res1; }
  if(env_var_0 == 282) { d::min( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 283) { d::min( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 284) { d::min( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 285) { d::min( res1,res1 ) / x; }
  if(env_var_0 == 286) { d::min( res1,res1 ) / y; }
  if(env_var_0 == 287) { d::min( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 288) { d::min( res1,x ) / res1; }
  if(env_var_0 == 289) { d::min( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 290) { d::min( res1,x ) / toupper( x ); }
  if(env_var_0 == 291) { d::min( res1,x ) / toupper( y ); }
  if(env_var_0 == 292) { d::min( res1,x ) / x; }
  if(env_var_0 == 293) { d::min( res1,x ) / y; }
  if(env_var_0 == 294) { d::min( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 295) { d::min( res1,y ) / res1; }
  if(env_var_0 == 296) { d::min( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 297) { d::min( res1,y ) / toupper( x ); }
  if(env_var_0 == 298) { d::min( res1,y ) / toupper( y ); }
  if(env_var_0 == 299) { d::min( res1,y ) / x; }
  if(env_var_0 == 300) { d::min( res1,y ) / y; }
  if(env_var_0 == 301) { d::min( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 302) { d::min( x,res1 ) / res1; }
  if(env_var_0 == 303) { d::min( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 304) { d::min( x,res1 ) / toupper( x ); }
  if(env_var_0 == 305) { d::min( x,res1 ) / toupper( y ); }
  if(env_var_0 == 306) { d::min( x,res1 ) / x; }
  if(env_var_0 == 307) { d::min( x,res1 ) / y; }
  if(env_var_0 == 308) { d::min( x,x ) / isupper( res1 ); }
  if(env_var_0 == 309) { d::min( x,x ) / res1; }
  if(env_var_0 == 310) { d::min( x,x ) / toupper( res1 ); }
  if(env_var_0 == 311) { d::min( x,x ) / toupper( x ); }
  if(env_var_0 == 312) { d::min( x,x ) / toupper( y ); }
  if(env_var_0 == 313) { d::min( x,x ) / x; }
  if(env_var_0 == 314) { d::min( x,x ) / y; }
  if(env_var_0 == 315) { d::min( x,y ) / isupper( res1 ); }
  if(env_var_0 == 316) { d::min( x,y ) / res1; }
  if(env_var_0 == 317) { d::min( x,y ) / toupper( res1 ); }
  if(env_var_0 == 318) { d::min( x,y ) / toupper( x ); }
  if(env_var_0 == 319) { d::min( x,y ) / toupper( y ); }
  if(env_var_0 == 320) { d::min( x,y ) / x; }
  if(env_var_0 == 321) { d::min( x,y ) / y; }
  if(env_var_0 == 322) { d::min( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 323) { d::min( y,res1 ) / res1; }
  if(env_var_0 == 324) { d::min( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 325) { d::min( y,res1 ) / toupper( x ); }
  if(env_var_0 == 326) { d::min( y,res1 ) / toupper( y ); }
  if(env_var_0 == 327) { d::min( y,res1 ) / x; }
  if(env_var_0 == 328) { d::min( y,res1 ) / y; }
  if(env_var_0 == 329) { d::min( y,x ) / isupper( res1 ); }
  if(env_var_0 == 330) { d::min( y,x ) / res1; }
  if(env_var_0 == 331) { d::min( y,x ) / toupper( res1 ); }
  if(env_var_0 == 332) { d::min( y,x ) / toupper( x ); }
  if(env_var_0 == 333) { d::min( y,x ) / toupper( y ); }
  if(env_var_0 == 334) { d::min( y,x ) / x; }
  if(env_var_0 == 335) { d::min( y,x ) / y; }
  if(env_var_0 == 336) { d::min( y,y ) / isupper( res1 ); }
  if(env_var_0 == 337) { d::min( y,y ) / res1; }
  if(env_var_0 == 338) { d::min( y,y ) / toupper( res1 ); }
  if(env_var_0 == 339) { d::min( y,y ) / toupper( x ); }
  if(env_var_0 == 340) { d::min( y,y ) / toupper( y ); }
  if(env_var_0 == 341) { d::min( y,y ) / x; }
  if(env_var_0 == 342) { d::min( y,y ) / y; }
  if(env_var_0 == 343) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 344) { upper( res1 ) / res1; }
  if(env_var_0 == 345) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 346) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 347) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 348) { upper( res1 ) / x; }
  if(env_var_0 == 349) { upper( res1 ) / y; }
  if(env_var_0 == 350) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 351) { upper( x ) / res1; }
  if(env_var_0 == 352) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 353) { upper( x ) / toupper( x ); }
  if(env_var_0 == 354) { upper( x ) / toupper( y ); }
  if(env_var_0 == 355) { upper( x ) / x; }
  if(env_var_0 == 356) { upper( x ) / y; }
  if(env_var_0 == 357) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 358) { upper( y ) / res1; }
  if(env_var_0 == 359) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 360) { upper( y ) / toupper( x ); }
  if(env_var_0 == 361) { upper( y ) / toupper( y ); }
  if(env_var_0 == 362) { upper( y ) / x; }
  if(env_var_0 == 363) { upper( y ) / y; }
  if(env_var_0 == 364) { / isupper( res1 ); }
  if(env_var_0 == 365) { / res1; }
  if(env_var_0 == 366) { / toupper( res1 ); }
  if(env_var_0 == 367) { / toupper( x ); }
  if(env_var_0 == 368) { / toupper( y ); }
  if(env_var_0 == 369) { / x; }
  if(env_var_0 == 370) { / y; }
  if(env_var_0 == 371) { / isupper( res1 ); }
  if(env_var_0 == 372) { / res1; }
  if(env_var_0 == 373) { / toupper( res1 ); }
  if(env_var_0 == 374) { / toupper( x ); }
  if(env_var_0 == 375) { / toupper( y ); }
  if(env_var_0 == 376) { / x; }
  if(env_var_0 == 377) { / y; }
  if(env_var_0 == 378) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 379) { upper( res1 ) / res1; }
  if(env_var_0 == 380) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 381) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 382) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 383) { upper( res1 ) / x; }
  if(env_var_0 == 384) { upper( res1 ) / y; }
  if(env_var_0 == 385) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 386) { upper( x ) / res1; }
  if(env_var_0 == 387) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 388) { upper( x ) / toupper( x ); }
  if(env_var_0 == 389) { upper( x ) / toupper( y ); }
  if(env_var_0 == 390) { upper( x ) / x; }
  if(env_var_0 == 391) { upper( x ) / y; }
  if(env_var_0 == 392) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 393) { upper( y ) / res1; }
  if(env_var_0 == 394) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 395) { upper( y ) / toupper( x ); }
  if(env_var_0 == 396) { upper( y ) / toupper( y ); }
  if(env_var_0 == 397) { upper( y ) / x; }
  if(env_var_0 == 398) { upper( y ) / y; }
  if(env_var_0 == 399) { s1 / isupper( res1 ); }
  if(env_var_0 == 400) { s1 / res1; }
  if(env_var_0 == 401) { s1 / toupper( res1 ); }
  if(env_var_0 == 402) { s1 / toupper( x ); }
  if(env_var_0 == 403) { s1 / toupper( y ); }
  if(env_var_0 == 404) { s1 / x; }
  if(env_var_0 == 405) { s1 / y; }
  if(env_var_0 == 406) { d::max( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 407) { d::max( res1,res1 ) / res1; }
  if(env_var_0 == 408) { d::max( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 409) { d::max( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 410) { d::max( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 411) { d::max( res1,res1 ) / x; }
  if(env_var_0 == 412) { d::max( res1,res1 ) / y; }
  if(env_var_0 == 413) { d::max( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 414) { d::max( res1,x ) / res1; }
  if(env_var_0 == 415) { d::max( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 416) { d::max( res1,x ) / toupper( x ); }
  if(env_var_0 == 417) { d::max( res1,x ) / toupper( y ); }
  if(env_var_0 == 418) { d::max( res1,x ) / x; }
  if(env_var_0 == 419) { d::max( res1,x ) / y; }
  if(env_var_0 == 420) { d::max( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 421) { d::max( res1,y ) / res1; }
  if(env_var_0 == 422) { d::max( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 423) { d::max( res1,y ) / toupper( x ); }
  if(env_var_0 == 424) { d::max( res1,y ) / toupper( y ); }
  if(env_var_0 == 425) { d::max( res1,y ) / x; }
  if(env_var_0 == 426) { d::max( res1,y ) / y; }
  if(env_var_0 == 427) { d::max( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 428) { d::max( x,res1 ) / res1; }
  if(env_var_0 == 429) { d::max( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 430) { d::max( x,res1 ) / toupper( x ); }
  if(env_var_0 == 431) { d::max( x,res1 ) / toupper( y ); }
  if(env_var_0 == 432) { d::max( x,res1 ) / x; }
  if(env_var_0 == 433) { d::max( x,res1 ) / y; }
  if(env_var_0 == 434) { d::max( x,x ) / isupper( res1 ); }
  if(env_var_0 == 435) { d::max( x,x ) / res1; }
  if(env_var_0 == 436) { d::max( x,x ) / toupper( res1 ); }
  if(env_var_0 == 437) { d::max( x,x ) / toupper( x ); }
  if(env_var_0 == 438) { d::max( x,x ) / toupper( y ); }
  if(env_var_0 == 439) { d::max( x,x ) / x; }
  if(env_var_0 == 440) { d::max( x,x ) / y; }
  if(env_var_0 == 441) { d::max( x,y ) / isupper( res1 ); }
  if(env_var_0 == 442) { d::max( x,y ) / res1; }
  if(env_var_0 == 443) { d::max( x,y ) / toupper( res1 ); }
  if(env_var_0 == 444) { d::max( x,y ) / toupper( x ); }
  if(env_var_0 == 445) { d::max( x,y ) / toupper( y ); }
  if(env_var_0 == 446) { d::max( x,y ) / x; }
  if(env_var_0 == 447) { d::max( x,y ) / y; }
  if(env_var_0 == 448) { d::max( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 449) { d::max( y,res1 ) / res1; }
  if(env_var_0 == 450) { d::max( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 451) { d::max( y,res1 ) / toupper( x ); }
  if(env_var_0 == 452) { d::max( y,res1 ) / toupper( y ); }
  if(env_var_0 == 453) { d::max( y,res1 ) / x; }
  if(env_var_0 == 454) { d::max( y,res1 ) / y; }
  if(env_var_0 == 455) { d::max( y,x ) / isupper( res1 ); }
  if(env_var_0 == 456) { d::max( y,x ) / res1; }
  if(env_var_0 == 457) { d::max( y,x ) / toupper( res1 ); }
  if(env_var_0 == 458) { d::max( y,x ) / toupper( x ); }
  if(env_var_0 == 459) { d::max( y,x ) / toupper( y ); }
  if(env_var_0 == 460) { d::max( y,x ) / x; }
  if(env_var_0 == 461) { d::max( y,x ) / y; }
  if(env_var_0 == 462) { d::max( y,y ) / isupper( res1 ); }
  if(env_var_0 == 463) { d::max( y,y ) / res1; }
  if(env_var_0 == 464) { d::max( y,y ) / toupper( res1 ); }
  if(env_var_0 == 465) { d::max( y,y ) / toupper( x ); }
  if(env_var_0 == 466) { d::max( y,y ) / toupper( y ); }
  if(env_var_0 == 467) { d::max( y,y ) / x; }
  if(env_var_0 == 468) { d::max( y,y ) / y; }
  if(env_var_0 == 469) { d::min( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 470) { d::min( res1,res1 ) / res1; }
  if(env_var_0 == 471) { d::min( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 472) { d::min( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 473) { d::min( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 474) { d::min( res1,res1 ) / x; }
  if(env_var_0 == 475) { d::min( res1,res1 ) / y; }
  if(env_var_0 == 476) { d::min( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 477) { d::min( res1,x ) / res1; }
  if(env_var_0 == 478) { d::min( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 479) { d::min( res1,x ) / toupper( x ); }
  if(env_var_0 == 480) { d::min( res1,x ) / toupper( y ); }
  if(env_var_0 == 481) { d::min( res1,x ) / x; }
  if(env_var_0 == 482) { d::min( res1,x ) / y; }
  if(env_var_0 == 483) { d::min( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 484) { d::min( res1,y ) / res1; }
  if(env_var_0 == 485) { d::min( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 486) { d::min( res1,y ) / toupper( x ); }
  if(env_var_0 == 487) { d::min( res1,y ) / toupper( y ); }
  if(env_var_0 == 488) { d::min( res1,y ) / x; }
  if(env_var_0 == 489) { d::min( res1,y ) / y; }
  if(env_var_0 == 490) { d::min( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 491) { d::min( x,res1 ) / res1; }
  if(env_var_0 == 492) { d::min( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 493) { d::min( x,res1 ) / toupper( x ); }
  if(env_var_0 == 494) { d::min( x,res1 ) / toupper( y ); }
  if(env_var_0 == 495) { d::min( x,res1 ) / x; }
  if(env_var_0 == 496) { d::min( x,res1 ) / y; }
  if(env_var_0 == 497) { d::min( x,x ) / isupper( res1 ); }
  if(env_var_0 == 498) { d::min( x,x ) / res1; }
  if(env_var_0 == 499) { d::min( x,x ) / toupper( res1 ); }
  if(env_var_0 == 500) { d::min( x,x ) / toupper( x ); }
  if(env_var_0 == 501) { d::min( x,x ) / toupper( y ); }
  if(env_var_0 == 502) { d::min( x,x ) / x; }
  if(env_var_0 == 503) { d::min( x,x ) / y; }
  if(env_var_0 == 504) { d::min( x,y ) / isupper( res1 ); }
  if(env_var_0 == 505) { d::min( x,y ) / res1; }
  if(env_var_0 == 506) { d::min( x,y ) / toupper( res1 ); }
  if(env_var_0 == 507) { d::min( x,y ) / toupper( x ); }
  if(env_var_0 == 508) { d::min( x,y ) / toupper( y ); }
  if(env_var_0 == 509) { d::min( x,y ) / x; }
  if(env_var_0 == 510) { d::min( x,y ) / y; }
  if(env_var_0 == 511) { d::min( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 512) { d::min( y,res1 ) / res1; }
  if(env_var_0 == 513) { d::min( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 514) { d::min( y,res1 ) / toupper( x ); }
  if(env_var_0 == 515) { d::min( y,res1 ) / toupper( y ); }
  if(env_var_0 == 516) { d::min( y,res1 ) / x; }
  if(env_var_0 == 517) { d::min( y,res1 ) / y; }
  if(env_var_0 == 518) { d::min( y,x ) / isupper( res1 ); }
  if(env_var_0 == 519) { d::min( y,x ) / res1; }
  if(env_var_0 == 520) { d::min( y,x ) / toupper( res1 ); }
  if(env_var_0 == 521) { d::min( y,x ) / toupper( x ); }
  if(env_var_0 == 522) { d::min( y,x ) / toupper( y ); }
  if(env_var_0 == 523) { d::min( y,x ) / x; }
  if(env_var_0 == 524) { d::min( y,x ) / y; }
  if(env_var_0 == 525) { d::min( y,y ) / isupper( res1 ); }
  if(env_var_0 == 526) { d::min( y,y ) / res1; }
  if(env_var_0 == 527) { d::min( y,y ) / toupper( res1 ); }
  if(env_var_0 == 528) { d::min( y,y ) / toupper( x ); }
  if(env_var_0 == 529) { d::min( y,y ) / toupper( y ); }
  if(env_var_0 == 530) { d::min( y,y ) / x; }
  if(env_var_0 == 531) { d::min( y,y ) / y; }
  if(env_var_0 == 532) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 533) { upper( res1 ) / res1; }
  if(env_var_0 == 534) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 535) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 536) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 537) { upper( res1 ) / x; }
  if(env_var_0 == 538) { upper( res1 ) / y; }
  if(env_var_0 == 539) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 540) { upper( x ) / res1; }
  if(env_var_0 == 541) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 542) { upper( x ) / toupper( x ); }
  if(env_var_0 == 543) { upper( x ) / toupper( y ); }
  if(env_var_0 == 544) { upper( x ) / x; }
  if(env_var_0 == 545) { upper( x ) / y; }
  if(env_var_0 == 546) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 547) { upper( y ) / res1; }
  if(env_var_0 == 548) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 549) { upper( y ) / toupper( x ); }
  if(env_var_0 == 550) { upper( y ) / toupper( y ); }
  if(env_var_0 == 551) { upper( y ) / x; }
  if(env_var_0 == 552) { upper( y ) / y; }
  if(env_var_0 == 553) { / isupper( res1 ); }
  if(env_var_0 == 554) { / res1; }
  if(env_var_0 == 555) { / toupper( res1 ); }
  if(env_var_0 == 556) { / toupper( x ); }
  if(env_var_0 == 557) { / toupper( y ); }
  if(env_var_0 == 558) { / x; }
  if(env_var_0 == 559) { / y; }
  if(env_var_0 == 560) { / isupper( res1 ); }
  if(env_var_0 == 561) { / res1; }
  if(env_var_0 == 562) { / toupper( res1 ); }
  if(env_var_0 == 563) { / toupper( x ); }
  if(env_var_0 == 564) { / toupper( y ); }
  if(env_var_0 == 565) { / x; }
  if(env_var_0 == 566) { / y; }
   
  ;
  double res2 = log ( y ) / log ( x ) ;
  ;
  return 1 == ( res1 == res2 ) ? 0 : 1 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {57,3,10,10,6,2,2,20,96,25};
    vector<int> param1 {1,9,101,10000,46656,2048,40,79,98,5};
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

