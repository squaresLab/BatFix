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
  if(env_var_0 == 1) {  isupper( res1 ) / isupper( x ); }
  if(env_var_0 == 2) {  isupper( res1 ) / isupper( y ); }
  if(env_var_0 == 3) {  isupper( res1 ) / res1; }
  if(env_var_0 == 4) {  isupper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 5) {  isupper( res1 ) / toupper( x ); }
  if(env_var_0 == 6) {  isupper( res1 ) / toupper( y ); }
  if(env_var_0 == 7) {  isupper( res1 ) / x; }
  if(env_var_0 == 8) {  isupper( res1 ) / y; }
  if(env_var_0 == 9) {  isupper( x ) / isupper( res1 ); }
  if(env_var_0 == 10) {  isupper( x ) / isupper( x ); }
  if(env_var_0 == 11) {  isupper( x ) / isupper( y ); }
  if(env_var_0 == 12) {  isupper( x ) / res1; }
  if(env_var_0 == 13) {  isupper( x ) / toupper( res1 ); }
  if(env_var_0 == 14) {  isupper( x ) / toupper( x ); }
  if(env_var_0 == 15) {  isupper( x ) / toupper( y ); }
  if(env_var_0 == 16) {  isupper( x ) / x; }
  if(env_var_0 == 17) {  isupper( x ) / y; }
  if(env_var_0 == 18) {  isupper( y ) / isupper( res1 ); }
  if(env_var_0 == 19) {  isupper( y ) / isupper( x ); }
  if(env_var_0 == 20) {  isupper( y ) / isupper( y ); }
  if(env_var_0 == 21) {  isupper( y ) / res1; }
  if(env_var_0 == 22) {  isupper( y ) / toupper( res1 ); }
  if(env_var_0 == 23) {  isupper( y ) / toupper( x ); }
  if(env_var_0 == 24) {  isupper( y ) / toupper( y ); }
  if(env_var_0 == 25) {  isupper( y ) / x; }
  if(env_var_0 == 26) {  isupper( y ) / y; }
  if(env_var_0 == 27) {  res1 / isupper( res1 ); }
  if(env_var_0 == 28) {  res1 / isupper( x ); }
  if(env_var_0 == 29) {  res1 / isupper( y ); }
  if(env_var_0 == 30) {  res1 / res1; }
  if(env_var_0 == 31) {  res1 / toupper( res1 ); }
  if(env_var_0 == 32) {  res1 / toupper( x ); }
  if(env_var_0 == 33) {  res1 / toupper( y ); }
  if(env_var_0 == 34) {  res1 / x; }
  if(env_var_0 == 35) {  res1 / y; }
  if(env_var_0 == 36) {  std::max( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 37) {  std::max( res1,res1 ) / isupper( x ); }
  if(env_var_0 == 38) {  std::max( res1,res1 ) / isupper( y ); }
  if(env_var_0 == 39) {  std::max( res1,res1 ) / res1; }
  if(env_var_0 == 40) {  std::max( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 41) {  std::max( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 42) {  std::max( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 43) {  std::max( res1,res1 ) / x; }
  if(env_var_0 == 44) {  std::max( res1,res1 ) / y; }
  if(env_var_0 == 45) {  std::max( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 46) {  std::max( res1,x ) / isupper( x ); }
  if(env_var_0 == 47) {  std::max( res1,x ) / isupper( y ); }
  if(env_var_0 == 48) {  std::max( res1,x ) / res1; }
  if(env_var_0 == 49) {  std::max( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 50) {  std::max( res1,x ) / toupper( x ); }
  if(env_var_0 == 51) {  std::max( res1,x ) / toupper( y ); }
  if(env_var_0 == 52) {  std::max( res1,x ) / x; }
  if(env_var_0 == 53) {  std::max( res1,x ) / y; }
  if(env_var_0 == 54) {  std::max( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 55) {  std::max( res1,y ) / isupper( x ); }
  if(env_var_0 == 56) {  std::max( res1,y ) / isupper( y ); }
  if(env_var_0 == 57) {  std::max( res1,y ) / res1; }
  if(env_var_0 == 58) {  std::max( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 59) {  std::max( res1,y ) / toupper( x ); }
  if(env_var_0 == 60) {  std::max( res1,y ) / toupper( y ); }
  if(env_var_0 == 61) {  std::max( res1,y ) / x; }
  if(env_var_0 == 62) {  std::max( res1,y ) / y; }
  if(env_var_0 == 63) {  std::max( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 64) {  std::max( x,res1 ) / isupper( x ); }
  if(env_var_0 == 65) {  std::max( x,res1 ) / isupper( y ); }
  if(env_var_0 == 66) {  std::max( x,res1 ) / res1; }
  if(env_var_0 == 67) {  std::max( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 68) {  std::max( x,res1 ) / toupper( x ); }
  if(env_var_0 == 69) {  std::max( x,res1 ) / toupper( y ); }
  if(env_var_0 == 70) {  std::max( x,res1 ) / x; }
  if(env_var_0 == 71) {  std::max( x,res1 ) / y; }
  if(env_var_0 == 72) {  std::max( x,x ) / isupper( res1 ); }
  if(env_var_0 == 73) {  std::max( x,x ) / isupper( x ); }
  if(env_var_0 == 74) {  std::max( x,x ) / isupper( y ); }
  if(env_var_0 == 75) {  std::max( x,x ) / res1; }
  if(env_var_0 == 76) {  std::max( x,x ) / toupper( res1 ); }
  if(env_var_0 == 77) {  std::max( x,x ) / toupper( x ); }
  if(env_var_0 == 78) {  std::max( x,x ) / toupper( y ); }
  if(env_var_0 == 79) {  std::max( x,x ) / x; }
  if(env_var_0 == 80) {  std::max( x,x ) / y; }
  if(env_var_0 == 81) {  std::max( x,y ) / isupper( res1 ); }
  if(env_var_0 == 82) {  std::max( x,y ) / isupper( x ); }
  if(env_var_0 == 83) {  std::max( x,y ) / isupper( y ); }
  if(env_var_0 == 84) {  std::max( x,y ) / res1; }
  if(env_var_0 == 85) {  std::max( x,y ) / toupper( res1 ); }
  if(env_var_0 == 86) {  std::max( x,y ) / toupper( x ); }
  if(env_var_0 == 87) {  std::max( x,y ) / toupper( y ); }
  if(env_var_0 == 88) {  std::max( x,y ) / x; }
  if(env_var_0 == 89) {  std::max( x,y ) / y; }
  if(env_var_0 == 90) {  std::max( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 91) {  std::max( y,res1 ) / isupper( x ); }
  if(env_var_0 == 92) {  std::max( y,res1 ) / isupper( y ); }
  if(env_var_0 == 93) {  std::max( y,res1 ) / res1; }
  if(env_var_0 == 94) {  std::max( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 95) {  std::max( y,res1 ) / toupper( x ); }
  if(env_var_0 == 96) {  std::max( y,res1 ) / toupper( y ); }
  if(env_var_0 == 97) {  std::max( y,res1 ) / x; }
  if(env_var_0 == 98) {  std::max( y,res1 ) / y; }
  if(env_var_0 == 99) {  std::max( y,x ) / isupper( res1 ); }
  if(env_var_0 == 100) {  std::max( y,x ) / isupper( x ); }
  if(env_var_0 == 101) {  std::max( y,x ) / isupper( y ); }
  if(env_var_0 == 102) {  std::max( y,x ) / res1; }
  if(env_var_0 == 103) {  std::max( y,x ) / toupper( res1 ); }
  if(env_var_0 == 104) {  std::max( y,x ) / toupper( x ); }
  if(env_var_0 == 105) {  std::max( y,x ) / toupper( y ); }
  if(env_var_0 == 106) {  std::max( y,x ) / x; }
  if(env_var_0 == 107) {  std::max( y,x ) / y; }
  if(env_var_0 == 108) {  std::max( y,y ) / isupper( res1 ); }
  if(env_var_0 == 109) {  std::max( y,y ) / isupper( x ); }
  if(env_var_0 == 110) {  std::max( y,y ) / isupper( y ); }
  if(env_var_0 == 111) {  std::max( y,y ) / res1; }
  if(env_var_0 == 112) {  std::max( y,y ) / toupper( res1 ); }
  if(env_var_0 == 113) {  std::max( y,y ) / toupper( x ); }
  if(env_var_0 == 114) {  std::max( y,y ) / toupper( y ); }
  if(env_var_0 == 115) {  std::max( y,y ) / x; }
  if(env_var_0 == 116) {  std::max( y,y ) / y; }
  if(env_var_0 == 117) {  std::min( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 118) {  std::min( res1,res1 ) / isupper( x ); }
  if(env_var_0 == 119) {  std::min( res1,res1 ) / isupper( y ); }
  if(env_var_0 == 120) {  std::min( res1,res1 ) / res1; }
  if(env_var_0 == 121) {  std::min( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 122) {  std::min( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 123) {  std::min( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 124) {  std::min( res1,res1 ) / x; }
  if(env_var_0 == 125) {  std::min( res1,res1 ) / y; }
  if(env_var_0 == 126) {  std::min( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 127) {  std::min( res1,x ) / isupper( x ); }
  if(env_var_0 == 128) {  std::min( res1,x ) / isupper( y ); }
  if(env_var_0 == 129) {  std::min( res1,x ) / res1; }
  if(env_var_0 == 130) {  std::min( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 131) {  std::min( res1,x ) / toupper( x ); }
  if(env_var_0 == 132) {  std::min( res1,x ) / toupper( y ); }
  if(env_var_0 == 133) {  std::min( res1,x ) / x; }
  if(env_var_0 == 134) {  std::min( res1,x ) / y; }
  if(env_var_0 == 135) {  std::min( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 136) {  std::min( res1,y ) / isupper( x ); }
  if(env_var_0 == 137) {  std::min( res1,y ) / isupper( y ); }
  if(env_var_0 == 138) {  std::min( res1,y ) / res1; }
  if(env_var_0 == 139) {  std::min( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 140) {  std::min( res1,y ) / toupper( x ); }
  if(env_var_0 == 141) {  std::min( res1,y ) / toupper( y ); }
  if(env_var_0 == 142) {  std::min( res1,y ) / x; }
  if(env_var_0 == 143) {  std::min( res1,y ) / y; }
  if(env_var_0 == 144) {  std::min( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 145) {  std::min( x,res1 ) / isupper( x ); }
  if(env_var_0 == 146) {  std::min( x,res1 ) / isupper( y ); }
  if(env_var_0 == 147) {  std::min( x,res1 ) / res1; }
  if(env_var_0 == 148) {  std::min( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 149) {  std::min( x,res1 ) / toupper( x ); }
  if(env_var_0 == 150) {  std::min( x,res1 ) / toupper( y ); }
  if(env_var_0 == 151) {  std::min( x,res1 ) / x; }
  if(env_var_0 == 152) {  std::min( x,res1 ) / y; }
  if(env_var_0 == 153) {  std::min( x,x ) / isupper( res1 ); }
  if(env_var_0 == 154) {  std::min( x,x ) / isupper( x ); }
  if(env_var_0 == 155) {  std::min( x,x ) / isupper( y ); }
  if(env_var_0 == 156) {  std::min( x,x ) / res1; }
  if(env_var_0 == 157) {  std::min( x,x ) / toupper( res1 ); }
  if(env_var_0 == 158) {  std::min( x,x ) / toupper( x ); }
  if(env_var_0 == 159) {  std::min( x,x ) / toupper( y ); }
  if(env_var_0 == 160) {  std::min( x,x ) / x; }
  if(env_var_0 == 161) {  std::min( x,x ) / y; }
  if(env_var_0 == 162) {  std::min( x,y ) / isupper( res1 ); }
  if(env_var_0 == 163) {  std::min( x,y ) / isupper( x ); }
  if(env_var_0 == 164) {  std::min( x,y ) / isupper( y ); }
  if(env_var_0 == 165) {  std::min( x,y ) / res1; }
  if(env_var_0 == 166) {  std::min( x,y ) / toupper( res1 ); }
  if(env_var_0 == 167) {  std::min( x,y ) / toupper( x ); }
  if(env_var_0 == 168) {  std::min( x,y ) / toupper( y ); }
  if(env_var_0 == 169) {  std::min( x,y ) / x; }
  if(env_var_0 == 170) {  std::min( x,y ) / y; }
  if(env_var_0 == 171) {  std::min( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 172) {  std::min( y,res1 ) / isupper( x ); }
  if(env_var_0 == 173) {  std::min( y,res1 ) / isupper( y ); }
  if(env_var_0 == 174) {  std::min( y,res1 ) / res1; }
  if(env_var_0 == 175) {  std::min( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 176) {  std::min( y,res1 ) / toupper( x ); }
  if(env_var_0 == 177) {  std::min( y,res1 ) / toupper( y ); }
  if(env_var_0 == 178) {  std::min( y,res1 ) / x; }
  if(env_var_0 == 179) {  std::min( y,res1 ) / y; }
  if(env_var_0 == 180) {  std::min( y,x ) / isupper( res1 ); }
  if(env_var_0 == 181) {  std::min( y,x ) / isupper( x ); }
  if(env_var_0 == 182) {  std::min( y,x ) / isupper( y ); }
  if(env_var_0 == 183) {  std::min( y,x ) / res1; }
  if(env_var_0 == 184) {  std::min( y,x ) / toupper( res1 ); }
  if(env_var_0 == 185) {  std::min( y,x ) / toupper( x ); }
  if(env_var_0 == 186) {  std::min( y,x ) / toupper( y ); }
  if(env_var_0 == 187) {  std::min( y,x ) / x; }
  if(env_var_0 == 188) {  std::min( y,x ) / y; }
  if(env_var_0 == 189) {  std::min( y,y ) / isupper( res1 ); }
  if(env_var_0 == 190) {  std::min( y,y ) / isupper( x ); }
  if(env_var_0 == 191) {  std::min( y,y ) / isupper( y ); }
  if(env_var_0 == 192) {  std::min( y,y ) / res1; }
  if(env_var_0 == 193) {  std::min( y,y ) / toupper( res1 ); }
  if(env_var_0 == 194) {  std::min( y,y ) / toupper( x ); }
  if(env_var_0 == 195) {  std::min( y,y ) / toupper( y ); }
  if(env_var_0 == 196) {  std::min( y,y ) / x; }
  if(env_var_0 == 197) {  std::min( y,y ) / y; }
  if(env_var_0 == 198) {  toupper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 199) {  toupper( res1 ) / isupper( x ); }
  if(env_var_0 == 200) {  toupper( res1 ) / isupper( y ); }
  if(env_var_0 == 201) {  toupper( res1 ) / res1; }
  if(env_var_0 == 202) {  toupper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 203) {  toupper( res1 ) / toupper( x ); }
  if(env_var_0 == 204) {  toupper( res1 ) / toupper( y ); }
  if(env_var_0 == 205) {  toupper( res1 ) / x; }
  if(env_var_0 == 206) {  toupper( res1 ) / y; }
  if(env_var_0 == 207) {  toupper( x ) / isupper( res1 ); }
  if(env_var_0 == 208) {  toupper( x ) / isupper( x ); }
  if(env_var_0 == 209) {  toupper( x ) / isupper( y ); }
  if(env_var_0 == 210) {  toupper( x ) / res1; }
  if(env_var_0 == 211) {  toupper( x ) / toupper( res1 ); }
  if(env_var_0 == 212) {  toupper( x ) / toupper( x ); }
  if(env_var_0 == 213) {  toupper( x ) / toupper( y ); }
  if(env_var_0 == 214) {  toupper( x ) / x; }
  if(env_var_0 == 215) {  toupper( x ) / y; }
  if(env_var_0 == 216) {  toupper( y ) / isupper( res1 ); }
  if(env_var_0 == 217) {  toupper( y ) / isupper( x ); }
  if(env_var_0 == 218) {  toupper( y ) / isupper( y ); }
  if(env_var_0 == 219) {  toupper( y ) / res1; }
  if(env_var_0 == 220) {  toupper( y ) / toupper( res1 ); }
  if(env_var_0 == 221) {  toupper( y ) / toupper( x ); }
  if(env_var_0 == 222) {  toupper( y ) / toupper( y ); }
  if(env_var_0 == 223) {  toupper( y ) / x; }
  if(env_var_0 == 224) {  toupper( y ) / y; }
  if(env_var_0 == 225) {  x / isupper( res1 ); }
  if(env_var_0 == 226) {  x / isupper( x ); }
  if(env_var_0 == 227) {  x / isupper( y ); }
  if(env_var_0 == 228) {  x / res1; }
  if(env_var_0 == 229) {  x / toupper( res1 ); }
  if(env_var_0 == 230) {  x / toupper( x ); }
  if(env_var_0 == 231) {  x / toupper( y ); }
  if(env_var_0 == 232) {  x / x; }
  if(env_var_0 == 233) {  x / y; }
  if(env_var_0 == 234) {  y / isupper( res1 ); }
  if(env_var_0 == 235) {  y / isupper( x ); }
  if(env_var_0 == 236) {  y / isupper( y ); }
  if(env_var_0 == 237) {  y / res1; }
  if(env_var_0 == 238) {  y / toupper( res1 ); }
  if(env_var_0 == 239) {  y / toupper( x ); }
  if(env_var_0 == 240) {  y / toupper( y ); }
  if(env_var_0 == 241) {  y / x; }
  if(env_var_0 == 242) {  y / y; }
  if(env_var_0 == 243) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 244) { upper( res1 ) / isupper( x ); }
  if(env_var_0 == 245) { upper( res1 ) / isupper( y ); }
  if(env_var_0 == 246) { upper( res1 ) / res1; }
  if(env_var_0 == 247) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 248) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 249) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 250) { upper( res1 ) / x; }
  if(env_var_0 == 251) { upper( res1 ) / y; }
  if(env_var_0 == 252) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 253) { upper( x ) / isupper( x ); }
  if(env_var_0 == 254) { upper( x ) / isupper( y ); }
  if(env_var_0 == 255) { upper( x ) / res1; }
  if(env_var_0 == 256) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 257) { upper( x ) / toupper( x ); }
  if(env_var_0 == 258) { upper( x ) / toupper( y ); }
  if(env_var_0 == 259) { upper( x ) / x; }
  if(env_var_0 == 260) { upper( x ) / y; }
  if(env_var_0 == 261) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 262) { upper( y ) / isupper( x ); }
  if(env_var_0 == 263) { upper( y ) / isupper( y ); }
  if(env_var_0 == 264) { upper( y ) / res1; }
  if(env_var_0 == 265) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 266) { upper( y ) / toupper( x ); }
  if(env_var_0 == 267) { upper( y ) / toupper( y ); }
  if(env_var_0 == 268) { upper( y ) / x; }
  if(env_var_0 == 269) { upper( y ) / y; }
  if(env_var_0 == 270) { s1 / isupper( res1 ); }
  if(env_var_0 == 271) { s1 / isupper( x ); }
  if(env_var_0 == 272) { s1 / isupper( y ); }
  if(env_var_0 == 273) { s1 / res1; }
  if(env_var_0 == 274) { s1 / toupper( res1 ); }
  if(env_var_0 == 275) { s1 / toupper( x ); }
  if(env_var_0 == 276) { s1 / toupper( y ); }
  if(env_var_0 == 277) { s1 / x; }
  if(env_var_0 == 278) { s1 / y; }
  if(env_var_0 == 279) { d::max( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 280) { d::max( res1,res1 ) / isupper( x ); }
  if(env_var_0 == 281) { d::max( res1,res1 ) / isupper( y ); }
  if(env_var_0 == 282) { d::max( res1,res1 ) / res1; }
  if(env_var_0 == 283) { d::max( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 284) { d::max( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 285) { d::max( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 286) { d::max( res1,res1 ) / x; }
  if(env_var_0 == 287) { d::max( res1,res1 ) / y; }
  if(env_var_0 == 288) { d::max( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 289) { d::max( res1,x ) / isupper( x ); }
  if(env_var_0 == 290) { d::max( res1,x ) / isupper( y ); }
  if(env_var_0 == 291) { d::max( res1,x ) / res1; }
  if(env_var_0 == 292) { d::max( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 293) { d::max( res1,x ) / toupper( x ); }
  if(env_var_0 == 294) { d::max( res1,x ) / toupper( y ); }
  if(env_var_0 == 295) { d::max( res1,x ) / x; }
  if(env_var_0 == 296) { d::max( res1,x ) / y; }
  if(env_var_0 == 297) { d::max( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 298) { d::max( res1,y ) / isupper( x ); }
  if(env_var_0 == 299) { d::max( res1,y ) / isupper( y ); }
  if(env_var_0 == 300) { d::max( res1,y ) / res1; }
  if(env_var_0 == 301) { d::max( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 302) { d::max( res1,y ) / toupper( x ); }
  if(env_var_0 == 303) { d::max( res1,y ) / toupper( y ); }
  if(env_var_0 == 304) { d::max( res1,y ) / x; }
  if(env_var_0 == 305) { d::max( res1,y ) / y; }
  if(env_var_0 == 306) { d::max( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 307) { d::max( x,res1 ) / isupper( x ); }
  if(env_var_0 == 308) { d::max( x,res1 ) / isupper( y ); }
  if(env_var_0 == 309) { d::max( x,res1 ) / res1; }
  if(env_var_0 == 310) { d::max( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 311) { d::max( x,res1 ) / toupper( x ); }
  if(env_var_0 == 312) { d::max( x,res1 ) / toupper( y ); }
  if(env_var_0 == 313) { d::max( x,res1 ) / x; }
  if(env_var_0 == 314) { d::max( x,res1 ) / y; }
  if(env_var_0 == 315) { d::max( x,x ) / isupper( res1 ); }
  if(env_var_0 == 316) { d::max( x,x ) / isupper( x ); }
  if(env_var_0 == 317) { d::max( x,x ) / isupper( y ); }
  if(env_var_0 == 318) { d::max( x,x ) / res1; }
  if(env_var_0 == 319) { d::max( x,x ) / toupper( res1 ); }
  if(env_var_0 == 320) { d::max( x,x ) / toupper( x ); }
  if(env_var_0 == 321) { d::max( x,x ) / toupper( y ); }
  if(env_var_0 == 322) { d::max( x,x ) / x; }
  if(env_var_0 == 323) { d::max( x,x ) / y; }
  if(env_var_0 == 324) { d::max( x,y ) / isupper( res1 ); }
  if(env_var_0 == 325) { d::max( x,y ) / isupper( x ); }
  if(env_var_0 == 326) { d::max( x,y ) / isupper( y ); }
  if(env_var_0 == 327) { d::max( x,y ) / res1; }
  if(env_var_0 == 328) { d::max( x,y ) / toupper( res1 ); }
  if(env_var_0 == 329) { d::max( x,y ) / toupper( x ); }
  if(env_var_0 == 330) { d::max( x,y ) / toupper( y ); }
  if(env_var_0 == 331) { d::max( x,y ) / x; }
  if(env_var_0 == 332) { d::max( x,y ) / y; }
  if(env_var_0 == 333) { d::max( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 334) { d::max( y,res1 ) / isupper( x ); }
  if(env_var_0 == 335) { d::max( y,res1 ) / isupper( y ); }
  if(env_var_0 == 336) { d::max( y,res1 ) / res1; }
  if(env_var_0 == 337) { d::max( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 338) { d::max( y,res1 ) / toupper( x ); }
  if(env_var_0 == 339) { d::max( y,res1 ) / toupper( y ); }
  if(env_var_0 == 340) { d::max( y,res1 ) / x; }
  if(env_var_0 == 341) { d::max( y,res1 ) / y; }
  if(env_var_0 == 342) { d::max( y,x ) / isupper( res1 ); }
  if(env_var_0 == 343) { d::max( y,x ) / isupper( x ); }
  if(env_var_0 == 344) { d::max( y,x ) / isupper( y ); }
  if(env_var_0 == 345) { d::max( y,x ) / res1; }
  if(env_var_0 == 346) { d::max( y,x ) / toupper( res1 ); }
  if(env_var_0 == 347) { d::max( y,x ) / toupper( x ); }
  if(env_var_0 == 348) { d::max( y,x ) / toupper( y ); }
  if(env_var_0 == 349) { d::max( y,x ) / x; }
  if(env_var_0 == 350) { d::max( y,x ) / y; }
  if(env_var_0 == 351) { d::max( y,y ) / isupper( res1 ); }
  if(env_var_0 == 352) { d::max( y,y ) / isupper( x ); }
  if(env_var_0 == 353) { d::max( y,y ) / isupper( y ); }
  if(env_var_0 == 354) { d::max( y,y ) / res1; }
  if(env_var_0 == 355) { d::max( y,y ) / toupper( res1 ); }
  if(env_var_0 == 356) { d::max( y,y ) / toupper( x ); }
  if(env_var_0 == 357) { d::max( y,y ) / toupper( y ); }
  if(env_var_0 == 358) { d::max( y,y ) / x; }
  if(env_var_0 == 359) { d::max( y,y ) / y; }
  if(env_var_0 == 360) { d::min( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 361) { d::min( res1,res1 ) / isupper( x ); }
  if(env_var_0 == 362) { d::min( res1,res1 ) / isupper( y ); }
  if(env_var_0 == 363) { d::min( res1,res1 ) / res1; }
  if(env_var_0 == 364) { d::min( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 365) { d::min( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 366) { d::min( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 367) { d::min( res1,res1 ) / x; }
  if(env_var_0 == 368) { d::min( res1,res1 ) / y; }
  if(env_var_0 == 369) { d::min( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 370) { d::min( res1,x ) / isupper( x ); }
  if(env_var_0 == 371) { d::min( res1,x ) / isupper( y ); }
  if(env_var_0 == 372) { d::min( res1,x ) / res1; }
  if(env_var_0 == 373) { d::min( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 374) { d::min( res1,x ) / toupper( x ); }
  if(env_var_0 == 375) { d::min( res1,x ) / toupper( y ); }
  if(env_var_0 == 376) { d::min( res1,x ) / x; }
  if(env_var_0 == 377) { d::min( res1,x ) / y; }
  if(env_var_0 == 378) { d::min( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 379) { d::min( res1,y ) / isupper( x ); }
  if(env_var_0 == 380) { d::min( res1,y ) / isupper( y ); }
  if(env_var_0 == 381) { d::min( res1,y ) / res1; }
  if(env_var_0 == 382) { d::min( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 383) { d::min( res1,y ) / toupper( x ); }
  if(env_var_0 == 384) { d::min( res1,y ) / toupper( y ); }
  if(env_var_0 == 385) { d::min( res1,y ) / x; }
  if(env_var_0 == 386) { d::min( res1,y ) / y; }
  if(env_var_0 == 387) { d::min( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 388) { d::min( x,res1 ) / isupper( x ); }
  if(env_var_0 == 389) { d::min( x,res1 ) / isupper( y ); }
  if(env_var_0 == 390) { d::min( x,res1 ) / res1; }
  if(env_var_0 == 391) { d::min( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 392) { d::min( x,res1 ) / toupper( x ); }
  if(env_var_0 == 393) { d::min( x,res1 ) / toupper( y ); }
  if(env_var_0 == 394) { d::min( x,res1 ) / x; }
  if(env_var_0 == 395) { d::min( x,res1 ) / y; }
  if(env_var_0 == 396) { d::min( x,x ) / isupper( res1 ); }
  if(env_var_0 == 397) { d::min( x,x ) / isupper( x ); }
  if(env_var_0 == 398) { d::min( x,x ) / isupper( y ); }
  if(env_var_0 == 399) { d::min( x,x ) / res1; }
  if(env_var_0 == 400) { d::min( x,x ) / toupper( res1 ); }
  if(env_var_0 == 401) { d::min( x,x ) / toupper( x ); }
  if(env_var_0 == 402) { d::min( x,x ) / toupper( y ); }
  if(env_var_0 == 403) { d::min( x,x ) / x; }
  if(env_var_0 == 404) { d::min( x,x ) / y; }
  if(env_var_0 == 405) { d::min( x,y ) / isupper( res1 ); }
  if(env_var_0 == 406) { d::min( x,y ) / isupper( x ); }
  if(env_var_0 == 407) { d::min( x,y ) / isupper( y ); }
  if(env_var_0 == 408) { d::min( x,y ) / res1; }
  if(env_var_0 == 409) { d::min( x,y ) / toupper( res1 ); }
  if(env_var_0 == 410) { d::min( x,y ) / toupper( x ); }
  if(env_var_0 == 411) { d::min( x,y ) / toupper( y ); }
  if(env_var_0 == 412) { d::min( x,y ) / x; }
  if(env_var_0 == 413) { d::min( x,y ) / y; }
  if(env_var_0 == 414) { d::min( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 415) { d::min( y,res1 ) / isupper( x ); }
  if(env_var_0 == 416) { d::min( y,res1 ) / isupper( y ); }
  if(env_var_0 == 417) { d::min( y,res1 ) / res1; }
  if(env_var_0 == 418) { d::min( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 419) { d::min( y,res1 ) / toupper( x ); }
  if(env_var_0 == 420) { d::min( y,res1 ) / toupper( y ); }
  if(env_var_0 == 421) { d::min( y,res1 ) / x; }
  if(env_var_0 == 422) { d::min( y,res1 ) / y; }
  if(env_var_0 == 423) { d::min( y,x ) / isupper( res1 ); }
  if(env_var_0 == 424) { d::min( y,x ) / isupper( x ); }
  if(env_var_0 == 425) { d::min( y,x ) / isupper( y ); }
  if(env_var_0 == 426) { d::min( y,x ) / res1; }
  if(env_var_0 == 427) { d::min( y,x ) / toupper( res1 ); }
  if(env_var_0 == 428) { d::min( y,x ) / toupper( x ); }
  if(env_var_0 == 429) { d::min( y,x ) / toupper( y ); }
  if(env_var_0 == 430) { d::min( y,x ) / x; }
  if(env_var_0 == 431) { d::min( y,x ) / y; }
  if(env_var_0 == 432) { d::min( y,y ) / isupper( res1 ); }
  if(env_var_0 == 433) { d::min( y,y ) / isupper( x ); }
  if(env_var_0 == 434) { d::min( y,y ) / isupper( y ); }
  if(env_var_0 == 435) { d::min( y,y ) / res1; }
  if(env_var_0 == 436) { d::min( y,y ) / toupper( res1 ); }
  if(env_var_0 == 437) { d::min( y,y ) / toupper( x ); }
  if(env_var_0 == 438) { d::min( y,y ) / toupper( y ); }
  if(env_var_0 == 439) { d::min( y,y ) / x; }
  if(env_var_0 == 440) { d::min( y,y ) / y; }
  if(env_var_0 == 441) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 442) { upper( res1 ) / isupper( x ); }
  if(env_var_0 == 443) { upper( res1 ) / isupper( y ); }
  if(env_var_0 == 444) { upper( res1 ) / res1; }
  if(env_var_0 == 445) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 446) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 447) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 448) { upper( res1 ) / x; }
  if(env_var_0 == 449) { upper( res1 ) / y; }
  if(env_var_0 == 450) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 451) { upper( x ) / isupper( x ); }
  if(env_var_0 == 452) { upper( x ) / isupper( y ); }
  if(env_var_0 == 453) { upper( x ) / res1; }
  if(env_var_0 == 454) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 455) { upper( x ) / toupper( x ); }
  if(env_var_0 == 456) { upper( x ) / toupper( y ); }
  if(env_var_0 == 457) { upper( x ) / x; }
  if(env_var_0 == 458) { upper( x ) / y; }
  if(env_var_0 == 459) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 460) { upper( y ) / isupper( x ); }
  if(env_var_0 == 461) { upper( y ) / isupper( y ); }
  if(env_var_0 == 462) { upper( y ) / res1; }
  if(env_var_0 == 463) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 464) { upper( y ) / toupper( x ); }
  if(env_var_0 == 465) { upper( y ) / toupper( y ); }
  if(env_var_0 == 466) { upper( y ) / x; }
  if(env_var_0 == 467) { upper( y ) / y; }
  if(env_var_0 == 468) { / isupper( res1 ); }
  if(env_var_0 == 469) { / isupper( x ); }
  if(env_var_0 == 470) { / isupper( y ); }
  if(env_var_0 == 471) { / res1; }
  if(env_var_0 == 472) { / toupper( res1 ); }
  if(env_var_0 == 473) { / toupper( x ); }
  if(env_var_0 == 474) { / toupper( y ); }
  if(env_var_0 == 475) { / x; }
  if(env_var_0 == 476) { / y; }
  if(env_var_0 == 477) { / isupper( res1 ); }
  if(env_var_0 == 478) { / isupper( x ); }
  if(env_var_0 == 479) { / isupper( y ); }
  if(env_var_0 == 480) { / res1; }
  if(env_var_0 == 481) { / toupper( res1 ); }
  if(env_var_0 == 482) { / toupper( x ); }
  if(env_var_0 == 483) { / toupper( y ); }
  if(env_var_0 == 484) { / x; }
  if(env_var_0 == 485) { / y; }
  if(env_var_0 == 486) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 487) { upper( res1 ) / isupper( x ); }
  if(env_var_0 == 488) { upper( res1 ) / isupper( y ); }
  if(env_var_0 == 489) { upper( res1 ) / res1; }
  if(env_var_0 == 490) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 491) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 492) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 493) { upper( res1 ) / x; }
  if(env_var_0 == 494) { upper( res1 ) / y; }
  if(env_var_0 == 495) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 496) { upper( x ) / isupper( x ); }
  if(env_var_0 == 497) { upper( x ) / isupper( y ); }
  if(env_var_0 == 498) { upper( x ) / res1; }
  if(env_var_0 == 499) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 500) { upper( x ) / toupper( x ); }
  if(env_var_0 == 501) { upper( x ) / toupper( y ); }
  if(env_var_0 == 502) { upper( x ) / x; }
  if(env_var_0 == 503) { upper( x ) / y; }
  if(env_var_0 == 504) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 505) { upper( y ) / isupper( x ); }
  if(env_var_0 == 506) { upper( y ) / isupper( y ); }
  if(env_var_0 == 507) { upper( y ) / res1; }
  if(env_var_0 == 508) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 509) { upper( y ) / toupper( x ); }
  if(env_var_0 == 510) { upper( y ) / toupper( y ); }
  if(env_var_0 == 511) { upper( y ) / x; }
  if(env_var_0 == 512) { upper( y ) / y; }
  if(env_var_0 == 513) { s1 / isupper( res1 ); }
  if(env_var_0 == 514) { s1 / isupper( x ); }
  if(env_var_0 == 515) { s1 / isupper( y ); }
  if(env_var_0 == 516) { s1 / res1; }
  if(env_var_0 == 517) { s1 / toupper( res1 ); }
  if(env_var_0 == 518) { s1 / toupper( x ); }
  if(env_var_0 == 519) { s1 / toupper( y ); }
  if(env_var_0 == 520) { s1 / x; }
  if(env_var_0 == 521) { s1 / y; }
  if(env_var_0 == 522) { d::max( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 523) { d::max( res1,res1 ) / isupper( x ); }
  if(env_var_0 == 524) { d::max( res1,res1 ) / isupper( y ); }
  if(env_var_0 == 525) { d::max( res1,res1 ) / res1; }
  if(env_var_0 == 526) { d::max( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 527) { d::max( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 528) { d::max( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 529) { d::max( res1,res1 ) / x; }
  if(env_var_0 == 530) { d::max( res1,res1 ) / y; }
  if(env_var_0 == 531) { d::max( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 532) { d::max( res1,x ) / isupper( x ); }
  if(env_var_0 == 533) { d::max( res1,x ) / isupper( y ); }
  if(env_var_0 == 534) { d::max( res1,x ) / res1; }
  if(env_var_0 == 535) { d::max( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 536) { d::max( res1,x ) / toupper( x ); }
  if(env_var_0 == 537) { d::max( res1,x ) / toupper( y ); }
  if(env_var_0 == 538) { d::max( res1,x ) / x; }
  if(env_var_0 == 539) { d::max( res1,x ) / y; }
  if(env_var_0 == 540) { d::max( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 541) { d::max( res1,y ) / isupper( x ); }
  if(env_var_0 == 542) { d::max( res1,y ) / isupper( y ); }
  if(env_var_0 == 543) { d::max( res1,y ) / res1; }
  if(env_var_0 == 544) { d::max( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 545) { d::max( res1,y ) / toupper( x ); }
  if(env_var_0 == 546) { d::max( res1,y ) / toupper( y ); }
  if(env_var_0 == 547) { d::max( res1,y ) / x; }
  if(env_var_0 == 548) { d::max( res1,y ) / y; }
  if(env_var_0 == 549) { d::max( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 550) { d::max( x,res1 ) / isupper( x ); }
  if(env_var_0 == 551) { d::max( x,res1 ) / isupper( y ); }
  if(env_var_0 == 552) { d::max( x,res1 ) / res1; }
  if(env_var_0 == 553) { d::max( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 554) { d::max( x,res1 ) / toupper( x ); }
  if(env_var_0 == 555) { d::max( x,res1 ) / toupper( y ); }
  if(env_var_0 == 556) { d::max( x,res1 ) / x; }
  if(env_var_0 == 557) { d::max( x,res1 ) / y; }
  if(env_var_0 == 558) { d::max( x,x ) / isupper( res1 ); }
  if(env_var_0 == 559) { d::max( x,x ) / isupper( x ); }
  if(env_var_0 == 560) { d::max( x,x ) / isupper( y ); }
  if(env_var_0 == 561) { d::max( x,x ) / res1; }
  if(env_var_0 == 562) { d::max( x,x ) / toupper( res1 ); }
  if(env_var_0 == 563) { d::max( x,x ) / toupper( x ); }
  if(env_var_0 == 564) { d::max( x,x ) / toupper( y ); }
  if(env_var_0 == 565) { d::max( x,x ) / x; }
  if(env_var_0 == 566) { d::max( x,x ) / y; }
  if(env_var_0 == 567) { d::max( x,y ) / isupper( res1 ); }
  if(env_var_0 == 568) { d::max( x,y ) / isupper( x ); }
  if(env_var_0 == 569) { d::max( x,y ) / isupper( y ); }
  if(env_var_0 == 570) { d::max( x,y ) / res1; }
  if(env_var_0 == 571) { d::max( x,y ) / toupper( res1 ); }
  if(env_var_0 == 572) { d::max( x,y ) / toupper( x ); }
  if(env_var_0 == 573) { d::max( x,y ) / toupper( y ); }
  if(env_var_0 == 574) { d::max( x,y ) / x; }
  if(env_var_0 == 575) { d::max( x,y ) / y; }
  if(env_var_0 == 576) { d::max( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 577) { d::max( y,res1 ) / isupper( x ); }
  if(env_var_0 == 578) { d::max( y,res1 ) / isupper( y ); }
  if(env_var_0 == 579) { d::max( y,res1 ) / res1; }
  if(env_var_0 == 580) { d::max( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 581) { d::max( y,res1 ) / toupper( x ); }
  if(env_var_0 == 582) { d::max( y,res1 ) / toupper( y ); }
  if(env_var_0 == 583) { d::max( y,res1 ) / x; }
  if(env_var_0 == 584) { d::max( y,res1 ) / y; }
  if(env_var_0 == 585) { d::max( y,x ) / isupper( res1 ); }
  if(env_var_0 == 586) { d::max( y,x ) / isupper( x ); }
  if(env_var_0 == 587) { d::max( y,x ) / isupper( y ); }
  if(env_var_0 == 588) { d::max( y,x ) / res1; }
  if(env_var_0 == 589) { d::max( y,x ) / toupper( res1 ); }
  if(env_var_0 == 590) { d::max( y,x ) / toupper( x ); }
  if(env_var_0 == 591) { d::max( y,x ) / toupper( y ); }
  if(env_var_0 == 592) { d::max( y,x ) / x; }
  if(env_var_0 == 593) { d::max( y,x ) / y; }
  if(env_var_0 == 594) { d::max( y,y ) / isupper( res1 ); }
  if(env_var_0 == 595) { d::max( y,y ) / isupper( x ); }
  if(env_var_0 == 596) { d::max( y,y ) / isupper( y ); }
  if(env_var_0 == 597) { d::max( y,y ) / res1; }
  if(env_var_0 == 598) { d::max( y,y ) / toupper( res1 ); }
  if(env_var_0 == 599) { d::max( y,y ) / toupper( x ); }
  if(env_var_0 == 600) { d::max( y,y ) / toupper( y ); }
  if(env_var_0 == 601) { d::max( y,y ) / x; }
  if(env_var_0 == 602) { d::max( y,y ) / y; }
  if(env_var_0 == 603) { d::min( res1,res1 ) / isupper( res1 ); }
  if(env_var_0 == 604) { d::min( res1,res1 ) / isupper( x ); }
  if(env_var_0 == 605) { d::min( res1,res1 ) / isupper( y ); }
  if(env_var_0 == 606) { d::min( res1,res1 ) / res1; }
  if(env_var_0 == 607) { d::min( res1,res1 ) / toupper( res1 ); }
  if(env_var_0 == 608) { d::min( res1,res1 ) / toupper( x ); }
  if(env_var_0 == 609) { d::min( res1,res1 ) / toupper( y ); }
  if(env_var_0 == 610) { d::min( res1,res1 ) / x; }
  if(env_var_0 == 611) { d::min( res1,res1 ) / y; }
  if(env_var_0 == 612) { d::min( res1,x ) / isupper( res1 ); }
  if(env_var_0 == 613) { d::min( res1,x ) / isupper( x ); }
  if(env_var_0 == 614) { d::min( res1,x ) / isupper( y ); }
  if(env_var_0 == 615) { d::min( res1,x ) / res1; }
  if(env_var_0 == 616) { d::min( res1,x ) / toupper( res1 ); }
  if(env_var_0 == 617) { d::min( res1,x ) / toupper( x ); }
  if(env_var_0 == 618) { d::min( res1,x ) / toupper( y ); }
  if(env_var_0 == 619) { d::min( res1,x ) / x; }
  if(env_var_0 == 620) { d::min( res1,x ) / y; }
  if(env_var_0 == 621) { d::min( res1,y ) / isupper( res1 ); }
  if(env_var_0 == 622) { d::min( res1,y ) / isupper( x ); }
  if(env_var_0 == 623) { d::min( res1,y ) / isupper( y ); }
  if(env_var_0 == 624) { d::min( res1,y ) / res1; }
  if(env_var_0 == 625) { d::min( res1,y ) / toupper( res1 ); }
  if(env_var_0 == 626) { d::min( res1,y ) / toupper( x ); }
  if(env_var_0 == 627) { d::min( res1,y ) / toupper( y ); }
  if(env_var_0 == 628) { d::min( res1,y ) / x; }
  if(env_var_0 == 629) { d::min( res1,y ) / y; }
  if(env_var_0 == 630) { d::min( x,res1 ) / isupper( res1 ); }
  if(env_var_0 == 631) { d::min( x,res1 ) / isupper( x ); }
  if(env_var_0 == 632) { d::min( x,res1 ) / isupper( y ); }
  if(env_var_0 == 633) { d::min( x,res1 ) / res1; }
  if(env_var_0 == 634) { d::min( x,res1 ) / toupper( res1 ); }
  if(env_var_0 == 635) { d::min( x,res1 ) / toupper( x ); }
  if(env_var_0 == 636) { d::min( x,res1 ) / toupper( y ); }
  if(env_var_0 == 637) { d::min( x,res1 ) / x; }
  if(env_var_0 == 638) { d::min( x,res1 ) / y; }
  if(env_var_0 == 639) { d::min( x,x ) / isupper( res1 ); }
  if(env_var_0 == 640) { d::min( x,x ) / isupper( x ); }
  if(env_var_0 == 641) { d::min( x,x ) / isupper( y ); }
  if(env_var_0 == 642) { d::min( x,x ) / res1; }
  if(env_var_0 == 643) { d::min( x,x ) / toupper( res1 ); }
  if(env_var_0 == 644) { d::min( x,x ) / toupper( x ); }
  if(env_var_0 == 645) { d::min( x,x ) / toupper( y ); }
  if(env_var_0 == 646) { d::min( x,x ) / x; }
  if(env_var_0 == 647) { d::min( x,x ) / y; }
  if(env_var_0 == 648) { d::min( x,y ) / isupper( res1 ); }
  if(env_var_0 == 649) { d::min( x,y ) / isupper( x ); }
  if(env_var_0 == 650) { d::min( x,y ) / isupper( y ); }
  if(env_var_0 == 651) { d::min( x,y ) / res1; }
  if(env_var_0 == 652) { d::min( x,y ) / toupper( res1 ); }
  if(env_var_0 == 653) { d::min( x,y ) / toupper( x ); }
  if(env_var_0 == 654) { d::min( x,y ) / toupper( y ); }
  if(env_var_0 == 655) { d::min( x,y ) / x; }
  if(env_var_0 == 656) { d::min( x,y ) / y; }
  if(env_var_0 == 657) { d::min( y,res1 ) / isupper( res1 ); }
  if(env_var_0 == 658) { d::min( y,res1 ) / isupper( x ); }
  if(env_var_0 == 659) { d::min( y,res1 ) / isupper( y ); }
  if(env_var_0 == 660) { d::min( y,res1 ) / res1; }
  if(env_var_0 == 661) { d::min( y,res1 ) / toupper( res1 ); }
  if(env_var_0 == 662) { d::min( y,res1 ) / toupper( x ); }
  if(env_var_0 == 663) { d::min( y,res1 ) / toupper( y ); }
  if(env_var_0 == 664) { d::min( y,res1 ) / x; }
  if(env_var_0 == 665) { d::min( y,res1 ) / y; }
  if(env_var_0 == 666) { d::min( y,x ) / isupper( res1 ); }
  if(env_var_0 == 667) { d::min( y,x ) / isupper( x ); }
  if(env_var_0 == 668) { d::min( y,x ) / isupper( y ); }
  if(env_var_0 == 669) { d::min( y,x ) / res1; }
  if(env_var_0 == 670) { d::min( y,x ) / toupper( res1 ); }
  if(env_var_0 == 671) { d::min( y,x ) / toupper( x ); }
  if(env_var_0 == 672) { d::min( y,x ) / toupper( y ); }
  if(env_var_0 == 673) { d::min( y,x ) / x; }
  if(env_var_0 == 674) { d::min( y,x ) / y; }
  if(env_var_0 == 675) { d::min( y,y ) / isupper( res1 ); }
  if(env_var_0 == 676) { d::min( y,y ) / isupper( x ); }
  if(env_var_0 == 677) { d::min( y,y ) / isupper( y ); }
  if(env_var_0 == 678) { d::min( y,y ) / res1; }
  if(env_var_0 == 679) { d::min( y,y ) / toupper( res1 ); }
  if(env_var_0 == 680) { d::min( y,y ) / toupper( x ); }
  if(env_var_0 == 681) { d::min( y,y ) / toupper( y ); }
  if(env_var_0 == 682) { d::min( y,y ) / x; }
  if(env_var_0 == 683) { d::min( y,y ) / y; }
  if(env_var_0 == 684) { upper( res1 ) / isupper( res1 ); }
  if(env_var_0 == 685) { upper( res1 ) / isupper( x ); }
  if(env_var_0 == 686) { upper( res1 ) / isupper( y ); }
  if(env_var_0 == 687) { upper( res1 ) / res1; }
  if(env_var_0 == 688) { upper( res1 ) / toupper( res1 ); }
  if(env_var_0 == 689) { upper( res1 ) / toupper( x ); }
  if(env_var_0 == 690) { upper( res1 ) / toupper( y ); }
  if(env_var_0 == 691) { upper( res1 ) / x; }
  if(env_var_0 == 692) { upper( res1 ) / y; }
  if(env_var_0 == 693) { upper( x ) / isupper( res1 ); }
  if(env_var_0 == 694) { upper( x ) / isupper( x ); }
  if(env_var_0 == 695) { upper( x ) / isupper( y ); }
  if(env_var_0 == 696) { upper( x ) / res1; }
  if(env_var_0 == 697) { upper( x ) / toupper( res1 ); }
  if(env_var_0 == 698) { upper( x ) / toupper( x ); }
  if(env_var_0 == 699) { upper( x ) / toupper( y ); }
  if(env_var_0 == 700) { upper( x ) / x; }
  if(env_var_0 == 701) { upper( x ) / y; }
  if(env_var_0 == 702) { upper( y ) / isupper( res1 ); }
  if(env_var_0 == 703) { upper( y ) / isupper( x ); }
  if(env_var_0 == 704) { upper( y ) / isupper( y ); }
  if(env_var_0 == 705) { upper( y ) / res1; }
  if(env_var_0 == 706) { upper( y ) / toupper( res1 ); }
  if(env_var_0 == 707) { upper( y ) / toupper( x ); }
  if(env_var_0 == 708) { upper( y ) / toupper( y ); }
  if(env_var_0 == 709) { upper( y ) / x; }
  if(env_var_0 == 710) { upper( y ) / y; }
  if(env_var_0 == 711) { / isupper( res1 ); }
  if(env_var_0 == 712) { / isupper( x ); }
  if(env_var_0 == 713) { / isupper( y ); }
  if(env_var_0 == 714) { / res1; }
  if(env_var_0 == 715) { / toupper( res1 ); }
  if(env_var_0 == 716) { / toupper( x ); }
  if(env_var_0 == 717) { / toupper( y ); }
  if(env_var_0 == 718) { / x; }
  if(env_var_0 == 719) { / y; }
  if(env_var_0 == 720) { / isupper( res1 ); }
  if(env_var_0 == 721) { / isupper( x ); }
  if(env_var_0 == 722) { / isupper( y ); }
  if(env_var_0 == 723) { / res1; }
  if(env_var_0 == 724) { / toupper( res1 ); }
  if(env_var_0 == 725) { / toupper( x ); }
  if(env_var_0 == 726) { / toupper( y ); }
  if(env_var_0 == 727) { / x; }
  if(env_var_0 == 728) { / y; }

  ;
  double res2 = log ( y ) / log ( x ) ;
  ;
  return ( res1 == res2 ) ? 1 : 0 ;
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
