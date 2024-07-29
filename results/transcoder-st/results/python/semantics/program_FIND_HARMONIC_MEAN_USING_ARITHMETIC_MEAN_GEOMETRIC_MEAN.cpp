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
double f_gold ( int a, int b ) {
  double AM, GM, HM;
  AM = ( a + b ) / 2;
  GM = sqrt ( a * b );
  HM = ( GM * GM ) / AM;
  return HM;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
double f_filled ( double a , double b ) {
  double AM = ( a + b ) / 2 ;
  double GM = sqrt ( a * b ) ;
 double HM ;
  if(env_var_0 == 0) { M * AM / AM; }
  if(env_var_0 == 1) { M * AM / GM; }
  if(env_var_0 == 2) { M * AM / HM; }
  if(env_var_0 == 3) { M * AM / a; }
  if(env_var_0 == 4) { M * AM / b; }
  if(env_var_0 == 5) { M * GM / AM; }
  if(env_var_0 == 6) { M * GM / GM; }
  if(env_var_0 == 7) { M * GM / HM; }
  if(env_var_0 == 8) { M * GM / a; }
  if(env_var_0 == 9) { M * GM / b; }
  if(env_var_0 == 10) { M * HM / AM; }
  if(env_var_0 == 11) { M * HM / GM; }
  if(env_var_0 == 12) { M * HM / HM; }
  if(env_var_0 == 13) { M * HM / a; }
  if(env_var_0 == 14) { M * HM / b; }
  if(env_var_0 == 15) { M * a / AM; }
  if(env_var_0 == 16) { M * a / GM; }
  if(env_var_0 == 17) { M * a / HM; }
  if(env_var_0 == 18) { M * a / a; }
  if(env_var_0 == 19) { M * a / b; }
  if(env_var_0 == 20) { M * b / AM; }
  if(env_var_0 == 21) { M * b / GM; }
  if(env_var_0 == 22) { M * b / HM; }
  if(env_var_0 == 23) { M * b / a; }
  if(env_var_0 == 24) { M * b / b; }
  if(env_var_0 == 25) { M * AM / AM; }
  if(env_var_0 == 26) { M * AM / GM; }
  if(env_var_0 == 27) { M * AM / HM; }
  if(env_var_0 == 28) { M * AM / a; }
  if(env_var_0 == 29) { M * AM / b; }
  if(env_var_0 == 30) { M * GM / AM; }
  if(env_var_0 == 31) { M * GM / GM; }
  if(env_var_0 == 32) { M * GM / HM; }
  if(env_var_0 == 33) { M * GM / a; }
  if(env_var_0 == 34) { M * GM / b; }
  if(env_var_0 == 35) { M * HM / AM; }
  if(env_var_0 == 36) { M * HM / GM; }
  if(env_var_0 == 37) { M * HM / HM; }
  if(env_var_0 == 38) { M * HM / a; }
  if(env_var_0 == 39) { M * HM / b; }
  if(env_var_0 == 40) { M * a / AM; }
  if(env_var_0 == 41) { M * a / GM; }
  if(env_var_0 == 42) { M * a / HM; }
  if(env_var_0 == 43) { M * a / a; }
  if(env_var_0 == 44) { M * a / b; }
  if(env_var_0 == 45) { M * b / AM; }
  if(env_var_0 == 46) { M * b / GM; }
  if(env_var_0 == 47) { M * b / HM; }
  if(env_var_0 == 48) { M * b / a; }
  if(env_var_0 == 49) { M * b / b; }
  if(env_var_0 == 50) { M * AM / AM; }
  if(env_var_0 == 51) { M * AM / GM; }
  if(env_var_0 == 52) { M * AM / HM; }
  if(env_var_0 == 53) { M * AM / a; }
  if(env_var_0 == 54) { M * AM / b; }
  if(env_var_0 == 55) { M * GM / AM; }
  if(env_var_0 == 56) { M * GM / GM; }
  if(env_var_0 == 57) { M * GM / HM; }
  if(env_var_0 == 58) { M * GM / a; }
  if(env_var_0 == 59) { M * GM / b; }
  if(env_var_0 == 60) { M * HM / AM; }
  if(env_var_0 == 61) { M * HM / GM; }
  if(env_var_0 == 62) { M * HM / HM; }
  if(env_var_0 == 63) { M * HM / a; }
  if(env_var_0 == 64) { M * HM / b; }
  if(env_var_0 == 65) { M * a / AM; }
  if(env_var_0 == 66) { M * a / GM; }
  if(env_var_0 == 67) { M * a / HM; }
  if(env_var_0 == 68) { M * a / a; }
  if(env_var_0 == 69) { M * a / b; }
  if(env_var_0 == 70) { M * b / AM; }
  if(env_var_0 == 71) { M * b / GM; }
  if(env_var_0 == 72) { M * b / HM; }
  if(env_var_0 == 73) { M * b / a; }
  if(env_var_0 == 74) { M * b / b; }
  if(env_var_0 == 75) {  * AM / AM; }
  if(env_var_0 == 76) {  * AM / GM; }
  if(env_var_0 == 77) {  * AM / HM; }
  if(env_var_0 == 78) {  * AM / a; }
  if(env_var_0 == 79) {  * AM / b; }
  if(env_var_0 == 80) {  * GM / AM; }
  if(env_var_0 == 81) {  * GM / GM; }
  if(env_var_0 == 82) {  * GM / HM; }
  if(env_var_0 == 83) {  * GM / a; }
  if(env_var_0 == 84) {  * GM / b; }
  if(env_var_0 == 85) {  * HM / AM; }
  if(env_var_0 == 86) {  * HM / GM; }
  if(env_var_0 == 87) {  * HM / HM; }
  if(env_var_0 == 88) {  * HM / a; }
  if(env_var_0 == 89) {  * HM / b; }
  if(env_var_0 == 90) {  * a / AM; }
  if(env_var_0 == 91) {  * a / GM; }
  if(env_var_0 == 92) {  * a / HM; }
  if(env_var_0 == 93) {  * a / a; }
  if(env_var_0 == 94) {  * a / b; }
  if(env_var_0 == 95) {  * b / AM; }
  if(env_var_0 == 96) {  * b / GM; }
  if(env_var_0 == 97) {  * b / HM; }
  if(env_var_0 == 98) {  * b / a; }
  if(env_var_0 == 99) {  * b / b; }
  if(env_var_0 == 100) {  * AM / AM; }
  if(env_var_0 == 101) {  * AM / GM; }
  if(env_var_0 == 102) {  * AM / HM; }
  if(env_var_0 == 103) {  * AM / a; }
  if(env_var_0 == 104) {  * AM / b; }
  if(env_var_0 == 105) {  * GM / AM; }
  if(env_var_0 == 106) {  * GM / GM; }
  if(env_var_0 == 107) {  * GM / HM; }
  if(env_var_0 == 108) {  * GM / a; }
  if(env_var_0 == 109) {  * GM / b; }
  if(env_var_0 == 110) {  * HM / AM; }
  if(env_var_0 == 111) {  * HM / GM; }
  if(env_var_0 == 112) {  * HM / HM; }
  if(env_var_0 == 113) {  * HM / a; }
  if(env_var_0 == 114) {  * HM / b; }
  if(env_var_0 == 115) {  * a / AM; }
  if(env_var_0 == 116) {  * a / GM; }
  if(env_var_0 == 117) {  * a / HM; }
  if(env_var_0 == 118) {  * a / a; }
  if(env_var_0 == 119) {  * a / b; }
  if(env_var_0 == 120) {  * b / AM; }
  if(env_var_0 == 121) {  * b / GM; }
  if(env_var_0 == 122) {  * b / HM; }
  if(env_var_0 == 123) {  * b / a; }
  if(env_var_0 == 124) {  * b / b; }
  if(env_var_0 == 125) { M * AM / AM; }
  if(env_var_0 == 126) { M * AM / GM; }
  if(env_var_0 == 127) { M * AM / HM; }
  if(env_var_0 == 128) { M * AM / a; }
  if(env_var_0 == 129) { M * AM / b; }
  if(env_var_0 == 130) { M * GM / AM; }
  if(env_var_0 == 131) { M * GM / GM; }
  if(env_var_0 == 132) { M * GM / HM; }
  if(env_var_0 == 133) { M * GM / a; }
  if(env_var_0 == 134) { M * GM / b; }
  if(env_var_0 == 135) { M * HM / AM; }
  if(env_var_0 == 136) { M * HM / GM; }
  if(env_var_0 == 137) { M * HM / HM; }
  if(env_var_0 == 138) { M * HM / a; }
  if(env_var_0 == 139) { M * HM / b; }
  if(env_var_0 == 140) { M * a / AM; }
  if(env_var_0 == 141) { M * a / GM; }
  if(env_var_0 == 142) { M * a / HM; }
  if(env_var_0 == 143) { M * a / a; }
  if(env_var_0 == 144) { M * a / b; }
  if(env_var_0 == 145) { M * b / AM; }
  if(env_var_0 == 146) { M * b / GM; }
  if(env_var_0 == 147) { M * b / HM; }
  if(env_var_0 == 148) { M * b / a; }
  if(env_var_0 == 149) { M * b / b; }
  if(env_var_0 == 150) { M * AM / AM; }
  if(env_var_0 == 151) { M * AM / GM; }
  if(env_var_0 == 152) { M * AM / HM; }
  if(env_var_0 == 153) { M * AM / a; }
  if(env_var_0 == 154) { M * AM / b; }
  if(env_var_0 == 155) { M * GM / AM; }
  if(env_var_0 == 156) { M * GM / GM; }
  if(env_var_0 == 157) { M * GM / HM; }
  if(env_var_0 == 158) { M * GM / a; }
  if(env_var_0 == 159) { M * GM / b; }
  if(env_var_0 == 160) { M * HM / AM; }
  if(env_var_0 == 161) { M * HM / GM; }
  if(env_var_0 == 162) { M * HM / HM; }
  if(env_var_0 == 163) { M * HM / a; }
  if(env_var_0 == 164) { M * HM / b; }
  if(env_var_0 == 165) { M * a / AM; }
  if(env_var_0 == 166) { M * a / GM; }
  if(env_var_0 == 167) { M * a / HM; }
  if(env_var_0 == 168) { M * a / a; }
  if(env_var_0 == 169) { M * a / b; }
  if(env_var_0 == 170) { M * b / AM; }
  if(env_var_0 == 171) { M * b / GM; }
  if(env_var_0 == 172) { M * b / HM; }
  if(env_var_0 == 173) { M * b / a; }
  if(env_var_0 == 174) { M * b / b; }
  if(env_var_0 == 175) { M * AM / AM; }
  if(env_var_0 == 176) { M * AM / GM; }
  if(env_var_0 == 177) { M * AM / HM; }
  if(env_var_0 == 178) { M * AM / a; }
  if(env_var_0 == 179) { M * AM / b; }
  if(env_var_0 == 180) { M * GM / AM; }
  if(env_var_0 == 181) { M * GM / GM; }
  if(env_var_0 == 182) { M * GM / HM; }
  if(env_var_0 == 183) { M * GM / a; }
  if(env_var_0 == 184) { M * GM / b; }
  if(env_var_0 == 185) { M * HM / AM; }
  if(env_var_0 == 186) { M * HM / GM; }
  if(env_var_0 == 187) { M * HM / HM; }
  if(env_var_0 == 188) { M * HM / a; }
  if(env_var_0 == 189) { M * HM / b; }
  if(env_var_0 == 190) { M * a / AM; }
  if(env_var_0 == 191) { M * a / GM; }
  if(env_var_0 == 192) { M * a / HM; }
  if(env_var_0 == 193) { M * a / a; }
  if(env_var_0 == 194) { M * a / b; }
  if(env_var_0 == 195) { M * b / AM; }
  if(env_var_0 == 196) { M * b / GM; }
  if(env_var_0 == 197) { M * b / HM; }
  if(env_var_0 == 198) { M * b / a; }
  if(env_var_0 == 199) { M * b / b; }
  if(env_var_0 == 200) {  * AM / AM; }
  if(env_var_0 == 201) {  * AM / GM; }
  if(env_var_0 == 202) {  * AM / HM; }
  if(env_var_0 == 203) {  * AM / a; }
  if(env_var_0 == 204) {  * AM / b; }
  if(env_var_0 == 205) {  * GM / AM; }
  if(env_var_0 == 206) {  * GM / GM; }
  if(env_var_0 == 207) {  * GM / HM; }
  if(env_var_0 == 208) {  * GM / a; }
  if(env_var_0 == 209) {  * GM / b; }
  if(env_var_0 == 210) {  * HM / AM; }
  if(env_var_0 == 211) {  * HM / GM; }
  if(env_var_0 == 212) {  * HM / HM; }
  if(env_var_0 == 213) {  * HM / a; }
  if(env_var_0 == 214) {  * HM / b; }
  if(env_var_0 == 215) {  * a / AM; }
  if(env_var_0 == 216) {  * a / GM; }
  if(env_var_0 == 217) {  * a / HM; }
  if(env_var_0 == 218) {  * a / a; }
  if(env_var_0 == 219) {  * a / b; }
  if(env_var_0 == 220) {  * b / AM; }
  if(env_var_0 == 221) {  * b / GM; }
  if(env_var_0 == 222) {  * b / HM; }
  if(env_var_0 == 223) {  * b / a; }
  if(env_var_0 == 224) {  * b / b; }
  if(env_var_0 == 225) {  * AM / AM; }
  if(env_var_0 == 226) {  * AM / GM; }
  if(env_var_0 == 227) {  * AM / HM; }
  if(env_var_0 == 228) {  * AM / a; }
  if(env_var_0 == 229) {  * AM / b; }
  if(env_var_0 == 230) {  * GM / AM; }
  if(env_var_0 == 231) {  * GM / GM; }
  if(env_var_0 == 232) {  * GM / HM; }
  if(env_var_0 == 233) {  * GM / a; }
  if(env_var_0 == 234) {  * GM / b; }
  if(env_var_0 == 235) {  * HM / AM; }
  if(env_var_0 == 236) {  * HM / GM; }
  if(env_var_0 == 237) {  * HM / HM; }
  if(env_var_0 == 238) {  * HM / a; }
  if(env_var_0 == 239) {  * HM / b; }
  if(env_var_0 == 240) {  * a / AM; }
  if(env_var_0 == 241) {  * a / GM; }
  if(env_var_0 == 242) {  * a / HM; }
  if(env_var_0 == 243) {  * a / a; }
  if(env_var_0 == 244) {  * a / b; }
  if(env_var_0 == 245) {  * b / AM; }
  if(env_var_0 == 246) {  * b / GM; }
  if(env_var_0 == 247) {  * b / HM; }
  if(env_var_0 == 248) {  * b / a; }
  if(env_var_0 == 249) {  * b / b; }
  if(env_var_0 == 250) { M * AM / AM; }
  if(env_var_0 == 251) { M * AM / GM; }
  if(env_var_0 == 252) { M * AM / HM; }
  if(env_var_0 == 253) { M * AM / a; }
  if(env_var_0 == 254) { M * AM / b; }
  if(env_var_0 == 255) { M * GM / AM; }
  if(env_var_0 == 256) { M * GM / GM; }
  if(env_var_0 == 257) { M * GM / HM; }
  if(env_var_0 == 258) { M * GM / a; }
  if(env_var_0 == 259) { M * GM / b; }
  if(env_var_0 == 260) { M * HM / AM; }
  if(env_var_0 == 261) { M * HM / GM; }
  if(env_var_0 == 262) { M * HM / HM; }
  if(env_var_0 == 263) { M * HM / a; }
  if(env_var_0 == 264) { M * HM / b; }
  if(env_var_0 == 265) { M * a / AM; }
  if(env_var_0 == 266) { M * a / GM; }
  if(env_var_0 == 267) { M * a / HM; }
  if(env_var_0 == 268) { M * a / a; }
  if(env_var_0 == 269) { M * a / b; }
  if(env_var_0 == 270) { M * b / AM; }
  if(env_var_0 == 271) { M * b / GM; }
  if(env_var_0 == 272) { M * b / HM; }
  if(env_var_0 == 273) { M * b / a; }
  if(env_var_0 == 274) { M * b / b; }
  if(env_var_0 == 275) { M * AM / AM; }
  if(env_var_0 == 276) { M * AM / GM; }
  if(env_var_0 == 277) { M * AM / HM; }
  if(env_var_0 == 278) { M * AM / a; }
  if(env_var_0 == 279) { M * AM / b; }
  if(env_var_0 == 280) { M * GM / AM; }
  if(env_var_0 == 281) { M * GM / GM; }
  if(env_var_0 == 282) { M * GM / HM; }
  if(env_var_0 == 283) { M * GM / a; }
  if(env_var_0 == 284) { M * GM / b; }
  if(env_var_0 == 285) { M * HM / AM; }
  if(env_var_0 == 286) { M * HM / GM; }
  if(env_var_0 == 287) { M * HM / HM; }
  if(env_var_0 == 288) { M * HM / a; }
  if(env_var_0 == 289) { M * HM / b; }
  if(env_var_0 == 290) { M * a / AM; }
  if(env_var_0 == 291) { M * a / GM; }
  if(env_var_0 == 292) { M * a / HM; }
  if(env_var_0 == 293) { M * a / a; }
  if(env_var_0 == 294) { M * a / b; }
  if(env_var_0 == 295) { M * b / AM; }
  if(env_var_0 == 296) { M * b / GM; }
  if(env_var_0 == 297) { M * b / HM; }
  if(env_var_0 == 298) { M * b / a; }
  if(env_var_0 == 299) { M * b / b; }
  if(env_var_0 == 300) { M * AM / AM; }
  if(env_var_0 == 301) { M * AM / GM; }
  if(env_var_0 == 302) { M * AM / HM; }
  if(env_var_0 == 303) { M * AM / a; }
  if(env_var_0 == 304) { M * AM / b; }
  if(env_var_0 == 305) { M * GM / AM; }
  if(env_var_0 == 306) { M * GM / GM; }
  if(env_var_0 == 307) { M * GM / HM; }
  if(env_var_0 == 308) { M * GM / a; }
  if(env_var_0 == 309) { M * GM / b; }
  if(env_var_0 == 310) { M * HM / AM; }
  if(env_var_0 == 311) { M * HM / GM; }
  if(env_var_0 == 312) { M * HM / HM; }
  if(env_var_0 == 313) { M * HM / a; }
  if(env_var_0 == 314) { M * HM / b; }
  if(env_var_0 == 315) { M * a / AM; }
  if(env_var_0 == 316) { M * a / GM; }
  if(env_var_0 == 317) { M * a / HM; }
  if(env_var_0 == 318) { M * a / a; }
  if(env_var_0 == 319) { M * a / b; }
  if(env_var_0 == 320) { M * b / AM; }
  if(env_var_0 == 321) { M * b / GM; }
  if(env_var_0 == 322) { M * b / HM; }
  if(env_var_0 == 323) { M * b / a; }
  if(env_var_0 == 324) { M * b / b; }
  if(env_var_0 == 325) {  * AM / AM; }
  if(env_var_0 == 326) {  * AM / GM; }
  if(env_var_0 == 327) {  * AM / HM; }
  if(env_var_0 == 328) {  * AM / a; }
  if(env_var_0 == 329) {  * AM / b; }
  if(env_var_0 == 330) {  * GM / AM; }
  if(env_var_0 == 331) {  * GM / GM; }
  if(env_var_0 == 332) {  * GM / HM; }
  if(env_var_0 == 333) {  * GM / a; }
  if(env_var_0 == 334) {  * GM / b; }
  if(env_var_0 == 335) {  * HM / AM; }
  if(env_var_0 == 336) {  * HM / GM; }
  if(env_var_0 == 337) {  * HM / HM; }
  if(env_var_0 == 338) {  * HM / a; }
  if(env_var_0 == 339) {  * HM / b; }
  if(env_var_0 == 340) {  * a / AM; }
  if(env_var_0 == 341) {  * a / GM; }
  if(env_var_0 == 342) {  * a / HM; }
  if(env_var_0 == 343) {  * a / a; }
  if(env_var_0 == 344) {  * a / b; }
  if(env_var_0 == 345) {  * b / AM; }
  if(env_var_0 == 346) {  * b / GM; }
  if(env_var_0 == 347) {  * b / HM; }
  if(env_var_0 == 348) {  * b / a; }
  if(env_var_0 == 349) {  * b / b; }
  if(env_var_0 == 350) {  * AM / AM; }
  if(env_var_0 == 351) {  * AM / GM; }
  if(env_var_0 == 352) {  * AM / HM; }
  if(env_var_0 == 353) {  * AM / a; }
  if(env_var_0 == 354) {  * AM / b; }
  if(env_var_0 == 355) {  * GM / AM; }
  if(env_var_0 == 356) {  * GM / GM; }
  if(env_var_0 == 357) {  * GM / HM; }
  if(env_var_0 == 358) {  * GM / a; }
  if(env_var_0 == 359) {  * GM / b; }
  if(env_var_0 == 360) {  * HM / AM; }
  if(env_var_0 == 361) {  * HM / GM; }
  if(env_var_0 == 362) {  * HM / HM; }
  if(env_var_0 == 363) {  * HM / a; }
  if(env_var_0 == 364) {  * HM / b; }
  if(env_var_0 == 365) {  * a / AM; }
  if(env_var_0 == 366) {  * a / GM; }
  if(env_var_0 == 367) {  * a / HM; }
  if(env_var_0 == 368) {  * a / a; }
  if(env_var_0 == 369) {  * a / b; }
  if(env_var_0 == 370) {  * b / AM; }
  if(env_var_0 == 371) {  * b / GM; }
  if(env_var_0 == 372) {  * b / HM; }
  if(env_var_0 == 373) {  * b / a; }
  if(env_var_0 == 374) {  * b / b; }
  if(env_var_0 == 375) {  * AM / AM; }
  if(env_var_0 == 376) {  * AM / GM; }
  if(env_var_0 == 377) {  * AM / HM; }
  if(env_var_0 == 378) {  * AM / a; }
  if(env_var_0 == 379) {  * AM / b; }
  if(env_var_0 == 380) {  * GM / AM; }
  if(env_var_0 == 381) {  * GM / GM; }
  if(env_var_0 == 382) {  * GM / HM; }
  if(env_var_0 == 383) {  * GM / a; }
  if(env_var_0 == 384) {  * GM / b; }
  if(env_var_0 == 385) {  * HM / AM; }
  if(env_var_0 == 386) {  * HM / GM; }
  if(env_var_0 == 387) {  * HM / HM; }
  if(env_var_0 == 388) {  * HM / a; }
  if(env_var_0 == 389) {  * HM / b; }
  if(env_var_0 == 390) {  * a / AM; }
  if(env_var_0 == 391) {  * a / GM; }
  if(env_var_0 == 392) {  * a / HM; }
  if(env_var_0 == 393) {  * a / a; }
  if(env_var_0 == 394) {  * a / b; }
  if(env_var_0 == 395) {  * b / AM; }
  if(env_var_0 == 396) {  * b / GM; }
  if(env_var_0 == 397) {  * b / HM; }
  if(env_var_0 == 398) {  * b / a; }
  if(env_var_0 == 399) {  * b / b; }
  if(env_var_0 == 400) {  * AM / AM; }
  if(env_var_0 == 401) {  * AM / GM; }
  if(env_var_0 == 402) {  * AM / HM; }
  if(env_var_0 == 403) {  * AM / a; }
  if(env_var_0 == 404) {  * AM / b; }
  if(env_var_0 == 405) {  * GM / AM; }
  if(env_var_0 == 406) {  * GM / GM; }
  if(env_var_0 == 407) {  * GM / HM; }
  if(env_var_0 == 408) {  * GM / a; }
  if(env_var_0 == 409) {  * GM / b; }
  if(env_var_0 == 410) {  * HM / AM; }
  if(env_var_0 == 411) {  * HM / GM; }
  if(env_var_0 == 412) {  * HM / HM; }
  if(env_var_0 == 413) {  * HM / a; }
  if(env_var_0 == 414) {  * HM / b; }
  if(env_var_0 == 415) {  * a / AM; }
  if(env_var_0 == 416) {  * a / GM; }
  if(env_var_0 == 417) {  * a / HM; }
  if(env_var_0 == 418) {  * a / a; }
  if(env_var_0 == 419) {  * a / b; }
  if(env_var_0 == 420) {  * b / AM; }
  if(env_var_0 == 421) {  * b / GM; }
  if(env_var_0 == 422) {  * b / HM; }
  if(env_var_0 == 423) {  * b / a; }
  if(env_var_0 == 424) {  * b / b; }
  if(env_var_0 == 425) {  * AM / AM; }
  if(env_var_0 == 426) {  * AM / GM; }
  if(env_var_0 == 427) {  * AM / HM; }
  if(env_var_0 == 428) {  * AM / a; }
  if(env_var_0 == 429) {  * AM / b; }
  if(env_var_0 == 430) {  * GM / AM; }
  if(env_var_0 == 431) {  * GM / GM; }
  if(env_var_0 == 432) {  * GM / HM; }
  if(env_var_0 == 433) {  * GM / a; }
  if(env_var_0 == 434) {  * GM / b; }
  if(env_var_0 == 435) {  * HM / AM; }
  if(env_var_0 == 436) {  * HM / GM; }
  if(env_var_0 == 437) {  * HM / HM; }
  if(env_var_0 == 438) {  * HM / a; }
  if(env_var_0 == 439) {  * HM / b; }
  if(env_var_0 == 440) {  * a / AM; }
  if(env_var_0 == 441) {  * a / GM; }
  if(env_var_0 == 442) {  * a / HM; }
  if(env_var_0 == 443) {  * a / a; }
  if(env_var_0 == 444) {  * a / b; }
  if(env_var_0 == 445) {  * b / AM; }
  if(env_var_0 == 446) {  * b / GM; }
  if(env_var_0 == 447) {  * b / HM; }
  if(env_var_0 == 448) {  * b / a; }
  if(env_var_0 == 449) {  * b / b; }
  if(env_var_0 == 450) { * AM / AM; }
  if(env_var_0 == 451) { * AM / GM; }
  if(env_var_0 == 452) { * AM / HM; }
  if(env_var_0 == 453) { * AM / a; }
  if(env_var_0 == 454) { * AM / b; }
  if(env_var_0 == 455) { * GM / AM; }
  if(env_var_0 == 456) { * GM / GM; }
  if(env_var_0 == 457) { * GM / HM; }
  if(env_var_0 == 458) { * GM / a; }
  if(env_var_0 == 459) { * GM / b; }
  if(env_var_0 == 460) { * HM / AM; }
  if(env_var_0 == 461) { * HM / GM; }
  if(env_var_0 == 462) { * HM / HM; }
  if(env_var_0 == 463) { * HM / a; }
  if(env_var_0 == 464) { * HM / b; }
  if(env_var_0 == 465) { * a / AM; }
  if(env_var_0 == 466) { * a / GM; }
  if(env_var_0 == 467) { * a / HM; }
  if(env_var_0 == 468) { * a / a; }
  if(env_var_0 == 469) { * a / b; }
  if(env_var_0 == 470) { * b / AM; }
  if(env_var_0 == 471) { * b / GM; }
  if(env_var_0 == 472) { * b / HM; }
  if(env_var_0 == 473) { * b / a; }
  if(env_var_0 == 474) { * b / b; }
  if(env_var_0 == 475) { * AM / AM; }
  if(env_var_0 == 476) { * AM / GM; }
  if(env_var_0 == 477) { * AM / HM; }
  if(env_var_0 == 478) { * AM / a; }
  if(env_var_0 == 479) { * AM / b; }
  if(env_var_0 == 480) { * GM / AM; }
  if(env_var_0 == 481) { * GM / GM; }
  if(env_var_0 == 482) { * GM / HM; }
  if(env_var_0 == 483) { * GM / a; }
  if(env_var_0 == 484) { * GM / b; }
  if(env_var_0 == 485) { * HM / AM; }
  if(env_var_0 == 486) { * HM / GM; }
  if(env_var_0 == 487) { * HM / HM; }
  if(env_var_0 == 488) { * HM / a; }
  if(env_var_0 == 489) { * HM / b; }
  if(env_var_0 == 490) { * a / AM; }
  if(env_var_0 == 491) { * a / GM; }
  if(env_var_0 == 492) { * a / HM; }
  if(env_var_0 == 493) { * a / a; }
  if(env_var_0 == 494) { * a / b; }
  if(env_var_0 == 495) { * b / AM; }
  if(env_var_0 == 496) { * b / GM; }
  if(env_var_0 == 497) { * b / HM; }
  if(env_var_0 == 498) { * b / a; }
  if(env_var_0 == 499) { * b / b; }
  if(env_var_0 == 500) {  * AM / AM; }
  if(env_var_0 == 501) {  * AM / GM; }
  if(env_var_0 == 502) {  * AM / HM; }
  if(env_var_0 == 503) {  * AM / a; }
  if(env_var_0 == 504) {  * AM / b; }
  if(env_var_0 == 505) {  * GM / AM; }
  if(env_var_0 == 506) {  * GM / GM; }
  if(env_var_0 == 507) {  * GM / HM; }
  if(env_var_0 == 508) {  * GM / a; }
  if(env_var_0 == 509) {  * GM / b; }
  if(env_var_0 == 510) {  * HM / AM; }
  if(env_var_0 == 511) {  * HM / GM; }
  if(env_var_0 == 512) {  * HM / HM; }
  if(env_var_0 == 513) {  * HM / a; }
  if(env_var_0 == 514) {  * HM / b; }
  if(env_var_0 == 515) {  * a / AM; }
  if(env_var_0 == 516) {  * a / GM; }
  if(env_var_0 == 517) {  * a / HM; }
  if(env_var_0 == 518) {  * a / a; }
  if(env_var_0 == 519) {  * a / b; }
  if(env_var_0 == 520) {  * b / AM; }
  if(env_var_0 == 521) {  * b / GM; }
  if(env_var_0 == 522) {  * b / HM; }
  if(env_var_0 == 523) {  * b / a; }
  if(env_var_0 == 524) {  * b / b; }
  if(env_var_0 == 525) {  * AM / AM; }
  if(env_var_0 == 526) {  * AM / GM; }
  if(env_var_0 == 527) {  * AM / HM; }
  if(env_var_0 == 528) {  * AM / a; }
  if(env_var_0 == 529) {  * AM / b; }
  if(env_var_0 == 530) {  * GM / AM; }
  if(env_var_0 == 531) {  * GM / GM; }
  if(env_var_0 == 532) {  * GM / HM; }
  if(env_var_0 == 533) {  * GM / a; }
  if(env_var_0 == 534) {  * GM / b; }
  if(env_var_0 == 535) {  * HM / AM; }
  if(env_var_0 == 536) {  * HM / GM; }
  if(env_var_0 == 537) {  * HM / HM; }
  if(env_var_0 == 538) {  * HM / a; }
  if(env_var_0 == 539) {  * HM / b; }
  if(env_var_0 == 540) {  * a / AM; }
  if(env_var_0 == 541) {  * a / GM; }
  if(env_var_0 == 542) {  * a / HM; }
  if(env_var_0 == 543) {  * a / a; }
  if(env_var_0 == 544) {  * a / b; }
  if(env_var_0 == 545) {  * b / AM; }
  if(env_var_0 == 546) {  * b / GM; }
  if(env_var_0 == 547) {  * b / HM; }
  if(env_var_0 == 548) {  * b / a; }
  if(env_var_0 == 549) {  * b / b; }
  if(env_var_0 == 550) {  * AM / AM; }
  if(env_var_0 == 551) {  * AM / GM; }
  if(env_var_0 == 552) {  * AM / HM; }
  if(env_var_0 == 553) {  * AM / a; }
  if(env_var_0 == 554) {  * AM / b; }
  if(env_var_0 == 555) {  * GM / AM; }
  if(env_var_0 == 556) {  * GM / GM; }
  if(env_var_0 == 557) {  * GM / HM; }
  if(env_var_0 == 558) {  * GM / a; }
  if(env_var_0 == 559) {  * GM / b; }
  if(env_var_0 == 560) {  * HM / AM; }
  if(env_var_0 == 561) {  * HM / GM; }
  if(env_var_0 == 562) {  * HM / HM; }
  if(env_var_0 == 563) {  * HM / a; }
  if(env_var_0 == 564) {  * HM / b; }
  if(env_var_0 == 565) {  * a / AM; }
  if(env_var_0 == 566) {  * a / GM; }
  if(env_var_0 == 567) {  * a / HM; }
  if(env_var_0 == 568) {  * a / a; }
  if(env_var_0 == 569) {  * a / b; }
  if(env_var_0 == 570) {  * b / AM; }
  if(env_var_0 == 571) {  * b / GM; }
  if(env_var_0 == 572) {  * b / HM; }
  if(env_var_0 == 573) {  * b / a; }
  if(env_var_0 == 574) {  * b / b; }
  if(env_var_0 == 575) { * AM / AM; }
  if(env_var_0 == 576) { * AM / GM; }
  if(env_var_0 == 577) { * AM / HM; }
  if(env_var_0 == 578) { * AM / a; }
  if(env_var_0 == 579) { * AM / b; }
  if(env_var_0 == 580) { * GM / AM; }
  if(env_var_0 == 581) { * GM / GM; }
  if(env_var_0 == 582) { * GM / HM; }
  if(env_var_0 == 583) { * GM / a; }
  if(env_var_0 == 584) { * GM / b; }
  if(env_var_0 == 585) { * HM / AM; }
  if(env_var_0 == 586) { * HM / GM; }
  if(env_var_0 == 587) { * HM / HM; }
  if(env_var_0 == 588) { * HM / a; }
  if(env_var_0 == 589) { * HM / b; }
  if(env_var_0 == 590) { * a / AM; }
  if(env_var_0 == 591) { * a / GM; }
  if(env_var_0 == 592) { * a / HM; }
  if(env_var_0 == 593) { * a / a; }
  if(env_var_0 == 594) { * a / b; }
  if(env_var_0 == 595) { * b / AM; }
  if(env_var_0 == 596) { * b / GM; }
  if(env_var_0 == 597) { * b / HM; }
  if(env_var_0 == 598) { * b / a; }
  if(env_var_0 == 599) { * b / b; }
  if(env_var_0 == 600) { * AM / AM; }
  if(env_var_0 == 601) { * AM / GM; }
  if(env_var_0 == 602) { * AM / HM; }
  if(env_var_0 == 603) { * AM / a; }
  if(env_var_0 == 604) { * AM / b; }
  if(env_var_0 == 605) { * GM / AM; }
  if(env_var_0 == 606) { * GM / GM; }
  if(env_var_0 == 607) { * GM / HM; }
  if(env_var_0 == 608) { * GM / a; }
  if(env_var_0 == 609) { * GM / b; }
  if(env_var_0 == 610) { * HM / AM; }
  if(env_var_0 == 611) { * HM / GM; }
  if(env_var_0 == 612) { * HM / HM; }
  if(env_var_0 == 613) { * HM / a; }
  if(env_var_0 == 614) { * HM / b; }
  if(env_var_0 == 615) { * a / AM; }
  if(env_var_0 == 616) { * a / GM; }
  if(env_var_0 == 617) { * a / HM; }
  if(env_var_0 == 618) { * a / a; }
  if(env_var_0 == 619) { * a / b; }
  if(env_var_0 == 620) { * b / AM; }
  if(env_var_0 == 621) { * b / GM; }
  if(env_var_0 == 622) { * b / HM; }
  if(env_var_0 == 623) { * b / a; }
  if(env_var_0 == 624) { * b / b; }

  return HM ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {54,42,63,19,41,7,39,11,96,15};
    vector<int> param1 {83,56,12,76,50,26,42,64,81,54};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(abs(1 - (0.0000001 + abs(f_gold(param0[i],param1[i])) )/ (abs(f_filled(param0[i],param1[i])) + 0.0000001)) < 0.001)
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
