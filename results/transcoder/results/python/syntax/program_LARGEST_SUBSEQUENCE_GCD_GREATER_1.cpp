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
  int ans = 0;
  int maxele = * max_element ( arr, arr + n );
  for ( int i = 2;
  i <= maxele;
  ++ i ) {
    int count = 0;
    for ( int j = 0;
    j < n;
    ++ j ) {
      if ( arr [ j ] % i == 0 ) ++ count;
    }
    ans = max ( ans, count );
  }
  return ans;
}


int foo;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  int ans = 0 ;
 auto maxele ;
  if(env_var_0 == 0) { = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 1) { = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 2) { = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 3) { = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 4) { = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 5) { = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 6) { = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 7) { = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 8) { = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 9) { = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 10) { = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 11) { = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 12) { = *std::max_element( arr,arr ); }
  if(env_var_0 == 13) { = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 14) { = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 15) { = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 16) { = ans; }
  if(env_var_0 == 17) { = arr; }
  if(env_var_0 == 18) { = arr+ans; }
  if(env_var_0 == 19) { = arr+maxele; }
  if(env_var_0 == 20) { = arr+n; }
  if(env_var_0 == 21) { = arr[ans]; }
  if(env_var_0 == 22) { = arr[maxele]; }
  if(env_var_0 == 23) { = arr[n]; }
  if(env_var_0 == 24) { = isupper( ans ); }
  if(env_var_0 == 25) { = isupper( arr[ans] ); }
  if(env_var_0 == 26) { = isupper( arr[maxele] ); }
  if(env_var_0 == 27) { = isupper( arr[n] ); }
  if(env_var_0 == 28) { = isupper( maxele ); }
  if(env_var_0 == 29) { = isupper( n ); }
  if(env_var_0 == 30) { = maxele; }
  if(env_var_0 == 31) { = n; }
  if(env_var_0 == 32) { = std::max( ans,ans ); }
  if(env_var_0 == 33) { = std::max( ans,arr[ans] ); }
  if(env_var_0 == 34) { = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 35) { = std::max( ans,arr[n] ); }
  if(env_var_0 == 36) { = std::max( ans,maxele ); }
  if(env_var_0 == 37) { = std::max( ans,n ); }
  if(env_var_0 == 38) { = std::max( arr[ans],ans ); }
  if(env_var_0 == 39) { = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 40) { = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 41) { = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 42) { = std::max( arr[ans],maxele ); }
  if(env_var_0 == 43) { = std::max( arr[ans],n ); }
  if(env_var_0 == 44) { = std::max( arr[maxele],ans ); }
  if(env_var_0 == 45) { = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 46) { = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 47) { = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 48) { = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 49) { = std::max( arr[maxele],n ); }
  if(env_var_0 == 50) { = std::max( arr[n],ans ); }
  if(env_var_0 == 51) { = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 52) { = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 53) { = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 54) { = std::max( arr[n],maxele ); }
  if(env_var_0 == 55) { = std::max( arr[n],n ); }
  if(env_var_0 == 56) { = std::max( maxele,ans ); }
  if(env_var_0 == 57) { = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 58) { = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 59) { = std::max( maxele,arr[n] ); }
  if(env_var_0 == 60) { = std::max( maxele,maxele ); }
  if(env_var_0 == 61) { = std::max( maxele,n ); }
  if(env_var_0 == 62) { = std::max( n,ans ); }
  if(env_var_0 == 63) { = std::max( n,arr[ans] ); }
  if(env_var_0 == 64) { = std::max( n,arr[maxele] ); }
  if(env_var_0 == 65) { = std::max( n,arr[n] ); }
  if(env_var_0 == 66) { = std::max( n,maxele ); }
  if(env_var_0 == 67) { = std::max( n,n ); }
  if(env_var_0 == 68) { = std::min( ans,ans ); }
  if(env_var_0 == 69) { = std::min( ans,arr[ans] ); }
  if(env_var_0 == 70) { = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 71) { = std::min( ans,arr[n] ); }
  if(env_var_0 == 72) { = std::min( ans,maxele ); }
  if(env_var_0 == 73) { = std::min( ans,n ); }
  if(env_var_0 == 74) { = std::min( arr[ans],ans ); }
  if(env_var_0 == 75) { = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 76) { = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 77) { = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 78) { = std::min( arr[ans],maxele ); }
  if(env_var_0 == 79) { = std::min( arr[ans],n ); }
  if(env_var_0 == 80) { = std::min( arr[maxele],ans ); }
  if(env_var_0 == 81) { = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 82) { = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 83) { = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 84) { = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 85) { = std::min( arr[maxele],n ); }
  if(env_var_0 == 86) { = std::min( arr[n],ans ); }
  if(env_var_0 == 87) { = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 88) { = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 89) { = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 90) { = std::min( arr[n],maxele ); }
  if(env_var_0 == 91) { = std::min( arr[n],n ); }
  if(env_var_0 == 92) { = std::min( maxele,ans ); }
  if(env_var_0 == 93) { = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 94) { = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 95) { = std::min( maxele,arr[n] ); }
  if(env_var_0 == 96) { = std::min( maxele,maxele ); }
  if(env_var_0 == 97) { = std::min( maxele,n ); }
  if(env_var_0 == 98) { = std::min( n,ans ); }
  if(env_var_0 == 99) { = std::min( n,arr[ans] ); }
  if(env_var_0 == 100) { = std::min( n,arr[maxele] ); }
  if(env_var_0 == 101) { = std::min( n,arr[n] ); }
  if(env_var_0 == 102) { = std::min( n,maxele ); }
  if(env_var_0 == 103) { = std::min( n,n ); }
  if(env_var_0 == 104) { = toupper( ans ); }
  if(env_var_0 == 105) { = toupper( arr[ans] ); }
  if(env_var_0 == 106) { = toupper( arr[maxele] ); }
  if(env_var_0 == 107) { = toupper( arr[n] ); }
  if(env_var_0 == 108) { = toupper( maxele ); }
  if(env_var_0 == 109) { = toupper( n ); }
  if(env_var_0 == 110) { = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 111) { = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 112) { = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 113) { = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 114) { = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 115) { = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 116) { = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 117) { = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 118) { = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 119) { = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 120) { = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 121) { = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 122) { = *std::max_element( arr,arr ); }
  if(env_var_0 == 123) { = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 124) { = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 125) { = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 126) { = ans; }
  if(env_var_0 == 127) { = arr; }
  if(env_var_0 == 128) { = arr+ans; }
  if(env_var_0 == 129) { = arr+maxele; }
  if(env_var_0 == 130) { = arr+n; }
  if(env_var_0 == 131) { = arr[ans]; }
  if(env_var_0 == 132) { = arr[maxele]; }
  if(env_var_0 == 133) { = arr[n]; }
  if(env_var_0 == 134) { = isupper( ans ); }
  if(env_var_0 == 135) { = isupper( arr[ans] ); }
  if(env_var_0 == 136) { = isupper( arr[maxele] ); }
  if(env_var_0 == 137) { = isupper( arr[n] ); }
  if(env_var_0 == 138) { = isupper( maxele ); }
  if(env_var_0 == 139) { = isupper( n ); }
  if(env_var_0 == 140) { = maxele; }
  if(env_var_0 == 141) { = n; }
  if(env_var_0 == 142) { = std::max( ans,ans ); }
  if(env_var_0 == 143) { = std::max( ans,arr[ans] ); }
  if(env_var_0 == 144) { = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 145) { = std::max( ans,arr[n] ); }
  if(env_var_0 == 146) { = std::max( ans,maxele ); }
  if(env_var_0 == 147) { = std::max( ans,n ); }
  if(env_var_0 == 148) { = std::max( arr[ans],ans ); }
  if(env_var_0 == 149) { = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 150) { = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 151) { = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 152) { = std::max( arr[ans],maxele ); }
  if(env_var_0 == 153) { = std::max( arr[ans],n ); }
  if(env_var_0 == 154) { = std::max( arr[maxele],ans ); }
  if(env_var_0 == 155) { = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 156) { = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 157) { = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 158) { = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 159) { = std::max( arr[maxele],n ); }
  if(env_var_0 == 160) { = std::max( arr[n],ans ); }
  if(env_var_0 == 161) { = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 162) { = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 163) { = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 164) { = std::max( arr[n],maxele ); }
  if(env_var_0 == 165) { = std::max( arr[n],n ); }
  if(env_var_0 == 166) { = std::max( maxele,ans ); }
  if(env_var_0 == 167) { = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 168) { = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 169) { = std::max( maxele,arr[n] ); }
  if(env_var_0 == 170) { = std::max( maxele,maxele ); }
  if(env_var_0 == 171) { = std::max( maxele,n ); }
  if(env_var_0 == 172) { = std::max( n,ans ); }
  if(env_var_0 == 173) { = std::max( n,arr[ans] ); }
  if(env_var_0 == 174) { = std::max( n,arr[maxele] ); }
  if(env_var_0 == 175) { = std::max( n,arr[n] ); }
  if(env_var_0 == 176) { = std::max( n,maxele ); }
  if(env_var_0 == 177) { = std::max( n,n ); }
  if(env_var_0 == 178) { = std::min( ans,ans ); }
  if(env_var_0 == 179) { = std::min( ans,arr[ans] ); }
  if(env_var_0 == 180) { = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 181) { = std::min( ans,arr[n] ); }
  if(env_var_0 == 182) { = std::min( ans,maxele ); }
  if(env_var_0 == 183) { = std::min( ans,n ); }
  if(env_var_0 == 184) { = std::min( arr[ans],ans ); }
  if(env_var_0 == 185) { = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 186) { = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 187) { = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 188) { = std::min( arr[ans],maxele ); }
  if(env_var_0 == 189) { = std::min( arr[ans],n ); }
  if(env_var_0 == 190) { = std::min( arr[maxele],ans ); }
  if(env_var_0 == 191) { = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 192) { = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 193) { = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 194) { = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 195) { = std::min( arr[maxele],n ); }
  if(env_var_0 == 196) { = std::min( arr[n],ans ); }
  if(env_var_0 == 197) { = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 198) { = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 199) { = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 200) { = std::min( arr[n],maxele ); }
  if(env_var_0 == 201) { = std::min( arr[n],n ); }
  if(env_var_0 == 202) { = std::min( maxele,ans ); }
  if(env_var_0 == 203) { = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 204) { = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 205) { = std::min( maxele,arr[n] ); }
  if(env_var_0 == 206) { = std::min( maxele,maxele ); }
  if(env_var_0 == 207) { = std::min( maxele,n ); }
  if(env_var_0 == 208) { = std::min( n,ans ); }
  if(env_var_0 == 209) { = std::min( n,arr[ans] ); }
  if(env_var_0 == 210) { = std::min( n,arr[maxele] ); }
  if(env_var_0 == 211) { = std::min( n,arr[n] ); }
  if(env_var_0 == 212) { = std::min( n,maxele ); }
  if(env_var_0 == 213) { = std::min( n,n ); }
  if(env_var_0 == 214) { = toupper( ans ); }
  if(env_var_0 == 215) { = toupper( arr[ans] ); }
  if(env_var_0 == 216) { = toupper( arr[maxele] ); }
  if(env_var_0 == 217) { = toupper( arr[n] ); }
  if(env_var_0 == 218) { = toupper( maxele ); }
  if(env_var_0 == 219) { = toupper( n ); }
  if(env_var_0 == 220) { ans = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 221) { ans = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 222) { ans = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 223) { ans = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 224) { ans = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 225) { ans = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 226) { ans = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 227) { ans = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 228) { ans = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 229) { ans = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 230) { ans = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 231) { ans = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 232) { ans = *std::max_element( arr,arr ); }
  if(env_var_0 == 233) { ans = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 234) { ans = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 235) { ans = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 236) { ans = ans; }
  if(env_var_0 == 237) { ans = arr; }
  if(env_var_0 == 238) { ans = arr+ans; }
  if(env_var_0 == 239) { ans = arr+maxele; }
  if(env_var_0 == 240) { ans = arr+n; }
  if(env_var_0 == 241) { ans = arr[ans]; }
  if(env_var_0 == 242) { ans = arr[maxele]; }
  if(env_var_0 == 243) { ans = arr[n]; }
  if(env_var_0 == 244) { ans = isupper( ans ); }
  if(env_var_0 == 245) { ans = isupper( arr[ans] ); }
  if(env_var_0 == 246) { ans = isupper( arr[maxele] ); }
  if(env_var_0 == 247) { ans = isupper( arr[n] ); }
  if(env_var_0 == 248) { ans = isupper( maxele ); }
  if(env_var_0 == 249) { ans = isupper( n ); }
  if(env_var_0 == 250) { ans = maxele; }
  if(env_var_0 == 251) { ans = n; }
  if(env_var_0 == 252) { ans = std::max( ans,ans ); }
  if(env_var_0 == 253) { ans = std::max( ans,arr[ans] ); }
  if(env_var_0 == 254) { ans = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 255) { ans = std::max( ans,arr[n] ); }
  if(env_var_0 == 256) { ans = std::max( ans,maxele ); }
  if(env_var_0 == 257) { ans = std::max( ans,n ); }
  if(env_var_0 == 258) { ans = std::max( arr[ans],ans ); }
  if(env_var_0 == 259) { ans = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 260) { ans = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 261) { ans = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 262) { ans = std::max( arr[ans],maxele ); }
  if(env_var_0 == 263) { ans = std::max( arr[ans],n ); }
  if(env_var_0 == 264) { ans = std::max( arr[maxele],ans ); }
  if(env_var_0 == 265) { ans = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 266) { ans = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 267) { ans = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 268) { ans = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 269) { ans = std::max( arr[maxele],n ); }
  if(env_var_0 == 270) { ans = std::max( arr[n],ans ); }
  if(env_var_0 == 271) { ans = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 272) { ans = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 273) { ans = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 274) { ans = std::max( arr[n],maxele ); }
  if(env_var_0 == 275) { ans = std::max( arr[n],n ); }
  if(env_var_0 == 276) { ans = std::max( maxele,ans ); }
  if(env_var_0 == 277) { ans = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 278) { ans = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 279) { ans = std::max( maxele,arr[n] ); }
  if(env_var_0 == 280) { ans = std::max( maxele,maxele ); }
  if(env_var_0 == 281) { ans = std::max( maxele,n ); }
  if(env_var_0 == 282) { ans = std::max( n,ans ); }
  if(env_var_0 == 283) { ans = std::max( n,arr[ans] ); }
  if(env_var_0 == 284) { ans = std::max( n,arr[maxele] ); }
  if(env_var_0 == 285) { ans = std::max( n,arr[n] ); }
  if(env_var_0 == 286) { ans = std::max( n,maxele ); }
  if(env_var_0 == 287) { ans = std::max( n,n ); }
  if(env_var_0 == 288) { ans = std::min( ans,ans ); }
  if(env_var_0 == 289) { ans = std::min( ans,arr[ans] ); }
  if(env_var_0 == 290) { ans = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 291) { ans = std::min( ans,arr[n] ); }
  if(env_var_0 == 292) { ans = std::min( ans,maxele ); }
  if(env_var_0 == 293) { ans = std::min( ans,n ); }
  if(env_var_0 == 294) { ans = std::min( arr[ans],ans ); }
  if(env_var_0 == 295) { ans = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 296) { ans = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 297) { ans = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 298) { ans = std::min( arr[ans],maxele ); }
  if(env_var_0 == 299) { ans = std::min( arr[ans],n ); }
  if(env_var_0 == 300) { ans = std::min( arr[maxele],ans ); }
  if(env_var_0 == 301) { ans = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 302) { ans = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 303) { ans = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 304) { ans = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 305) { ans = std::min( arr[maxele],n ); }
  if(env_var_0 == 306) { ans = std::min( arr[n],ans ); }
  if(env_var_0 == 307) { ans = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 308) { ans = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 309) { ans = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 310) { ans = std::min( arr[n],maxele ); }
  if(env_var_0 == 311) { ans = std::min( arr[n],n ); }
  if(env_var_0 == 312) { ans = std::min( maxele,ans ); }
  if(env_var_0 == 313) { ans = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 314) { ans = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 315) { ans = std::min( maxele,arr[n] ); }
  if(env_var_0 == 316) { ans = std::min( maxele,maxele ); }
  if(env_var_0 == 317) { ans = std::min( maxele,n ); }
  if(env_var_0 == 318) { ans = std::min( n,ans ); }
  if(env_var_0 == 319) { ans = std::min( n,arr[ans] ); }
  if(env_var_0 == 320) { ans = std::min( n,arr[maxele] ); }
  if(env_var_0 == 321) { ans = std::min( n,arr[n] ); }
  if(env_var_0 == 322) { ans = std::min( n,maxele ); }
  if(env_var_0 == 323) { ans = std::min( n,n ); }
  if(env_var_0 == 324) { ans = toupper( ans ); }
  if(env_var_0 == 325) { ans = toupper( arr[ans] ); }
  if(env_var_0 == 326) { ans = toupper( arr[maxele] ); }
  if(env_var_0 == 327) { ans = toupper( arr[n] ); }
  if(env_var_0 == 328) { ans = toupper( maxele ); }
  if(env_var_0 == 329) { ans = toupper( n ); }
  if(env_var_0 == 330) { maxele = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 331) { maxele = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 332) { maxele = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 333) { maxele = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 334) { maxele = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 335) { maxele = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 336) { maxele = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 337) { maxele = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 338) { maxele = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 339) { maxele = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 340) { maxele = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 341) { maxele = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 342) { maxele = *std::max_element( arr,arr ); }
  if(env_var_0 == 343) { maxele = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 344) { maxele = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 345) { maxele = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 346) { maxele = ans; }
  if(env_var_0 == 347) { maxele = arr; }
  if(env_var_0 == 348) { maxele = arr+ans; }
  if(env_var_0 == 349) { maxele = arr+maxele; }
  if(env_var_0 == 350) { maxele = arr+n; }
  if(env_var_0 == 351) { maxele = arr[ans]; }
  if(env_var_0 == 352) { maxele = arr[maxele]; }
  if(env_var_0 == 353) { maxele = arr[n]; }
  if(env_var_0 == 354) { maxele = isupper( ans ); }
  if(env_var_0 == 355) { maxele = isupper( arr[ans] ); }
  if(env_var_0 == 356) { maxele = isupper( arr[maxele] ); }
  if(env_var_0 == 357) { maxele = isupper( arr[n] ); }
  if(env_var_0 == 358) { maxele = isupper( maxele ); }
  if(env_var_0 == 359) { maxele = isupper( n ); }
  if(env_var_0 == 360) { maxele = maxele; }
  if(env_var_0 == 361) { maxele = n; }
  if(env_var_0 == 362) { maxele = std::max( ans,ans ); }
  if(env_var_0 == 363) { maxele = std::max( ans,arr[ans] ); }
  if(env_var_0 == 364) { maxele = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 365) { maxele = std::max( ans,arr[n] ); }
  if(env_var_0 == 366) { maxele = std::max( ans,maxele ); }
  if(env_var_0 == 367) { maxele = std::max( ans,n ); }
  if(env_var_0 == 368) { maxele = std::max( arr[ans],ans ); }
  if(env_var_0 == 369) { maxele = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 370) { maxele = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 371) { maxele = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 372) { maxele = std::max( arr[ans],maxele ); }
  if(env_var_0 == 373) { maxele = std::max( arr[ans],n ); }
  if(env_var_0 == 374) { maxele = std::max( arr[maxele],ans ); }
  if(env_var_0 == 375) { maxele = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 376) { maxele = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 377) { maxele = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 378) { maxele = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 379) { maxele = std::max( arr[maxele],n ); }
  if(env_var_0 == 380) { maxele = std::max( arr[n],ans ); }
  if(env_var_0 == 381) { maxele = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 382) { maxele = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 383) { maxele = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 384) { maxele = std::max( arr[n],maxele ); }
  if(env_var_0 == 385) { maxele = std::max( arr[n],n ); }
  if(env_var_0 == 386) { maxele = std::max( maxele,ans ); }
  if(env_var_0 == 387) { maxele = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 388) { maxele = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 389) { maxele = std::max( maxele,arr[n] ); }
  if(env_var_0 == 390) { maxele = std::max( maxele,maxele ); }
  if(env_var_0 == 391) { maxele = std::max( maxele,n ); }
  if(env_var_0 == 392) { maxele = std::max( n,ans ); }
  if(env_var_0 == 393) { maxele = std::max( n,arr[ans] ); }
  if(env_var_0 == 394) { maxele = std::max( n,arr[maxele] ); }
  if(env_var_0 == 395) { maxele = std::max( n,arr[n] ); }
  if(env_var_0 == 396) { maxele = std::max( n,maxele ); }
  if(env_var_0 == 397) { maxele = std::max( n,n ); }
  if(env_var_0 == 398) { maxele = std::min( ans,ans ); }
  if(env_var_0 == 399) { maxele = std::min( ans,arr[ans] ); }
  if(env_var_0 == 400) { maxele = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 401) { maxele = std::min( ans,arr[n] ); }
  if(env_var_0 == 402) { maxele = std::min( ans,maxele ); }
  if(env_var_0 == 403) { maxele = std::min( ans,n ); }
  if(env_var_0 == 404) { maxele = std::min( arr[ans],ans ); }
  if(env_var_0 == 405) { maxele = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 406) { maxele = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 407) { maxele = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 408) { maxele = std::min( arr[ans],maxele ); }
  if(env_var_0 == 409) { maxele = std::min( arr[ans],n ); }
  if(env_var_0 == 410) { maxele = std::min( arr[maxele],ans ); }
  if(env_var_0 == 411) { maxele = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 412) { maxele = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 413) { maxele = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 414) { maxele = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 415) { maxele = std::min( arr[maxele],n ); }
  if(env_var_0 == 416) { maxele = std::min( arr[n],ans ); }
  if(env_var_0 == 417) { maxele = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 418) { maxele = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 419) { maxele = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 420) { maxele = std::min( arr[n],maxele ); }
  if(env_var_0 == 421) { maxele = std::min( arr[n],n ); }
  if(env_var_0 == 422) { maxele = std::min( maxele,ans ); }
  if(env_var_0 == 423) { maxele = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 424) { maxele = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 425) { maxele = std::min( maxele,arr[n] ); }
  if(env_var_0 == 426) { maxele = std::min( maxele,maxele ); }
  if(env_var_0 == 427) { maxele = std::min( maxele,n ); }
  if(env_var_0 == 428) { maxele = std::min( n,ans ); }
  if(env_var_0 == 429) { maxele = std::min( n,arr[ans] ); }
  if(env_var_0 == 430) { maxele = std::min( n,arr[maxele] ); }
  if(env_var_0 == 431) { maxele = std::min( n,arr[n] ); }
  if(env_var_0 == 432) { maxele = std::min( n,maxele ); }
  if(env_var_0 == 433) { maxele = std::min( n,n ); }
  if(env_var_0 == 434) { maxele = toupper( ans ); }
  if(env_var_0 == 435) { maxele = toupper( arr[ans] ); }
  if(env_var_0 == 436) { maxele = toupper( arr[maxele] ); }
  if(env_var_0 == 437) { maxele = toupper( arr[n] ); }
  if(env_var_0 == 438) { maxele = toupper( maxele ); }
  if(env_var_0 == 439) { maxele = toupper( n ); }
  if(env_var_0 == 440) { n = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 441) { n = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 442) { n = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 443) { n = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 444) { n = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 445) { n = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 446) { n = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 447) { n = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 448) { n = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 449) { n = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 450) { n = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 451) { n = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 452) { n = *std::max_element( arr,arr ); }
  if(env_var_0 == 453) { n = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 454) { n = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 455) { n = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 456) { n = ans; }
  if(env_var_0 == 457) { n = arr; }
  if(env_var_0 == 458) { n = arr+ans; }
  if(env_var_0 == 459) { n = arr+maxele; }
  if(env_var_0 == 460) { n = arr+n; }
  if(env_var_0 == 461) { n = arr[ans]; }
  if(env_var_0 == 462) { n = arr[maxele]; }
  if(env_var_0 == 463) { n = arr[n]; }
  if(env_var_0 == 464) { n = isupper( ans ); }
  if(env_var_0 == 465) { n = isupper( arr[ans] ); }
  if(env_var_0 == 466) { n = isupper( arr[maxele] ); }
  if(env_var_0 == 467) { n = isupper( arr[n] ); }
  if(env_var_0 == 468) { n = isupper( maxele ); }
  if(env_var_0 == 469) { n = isupper( n ); }
  if(env_var_0 == 470) { n = maxele; }
  if(env_var_0 == 471) { n = n; }
  if(env_var_0 == 472) { n = std::max( ans,ans ); }
  if(env_var_0 == 473) { n = std::max( ans,arr[ans] ); }
  if(env_var_0 == 474) { n = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 475) { n = std::max( ans,arr[n] ); }
  if(env_var_0 == 476) { n = std::max( ans,maxele ); }
  if(env_var_0 == 477) { n = std::max( ans,n ); }
  if(env_var_0 == 478) { n = std::max( arr[ans],ans ); }
  if(env_var_0 == 479) { n = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 480) { n = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 481) { n = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 482) { n = std::max( arr[ans],maxele ); }
  if(env_var_0 == 483) { n = std::max( arr[ans],n ); }
  if(env_var_0 == 484) { n = std::max( arr[maxele],ans ); }
  if(env_var_0 == 485) { n = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 486) { n = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 487) { n = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 488) { n = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 489) { n = std::max( arr[maxele],n ); }
  if(env_var_0 == 490) { n = std::max( arr[n],ans ); }
  if(env_var_0 == 491) { n = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 492) { n = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 493) { n = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 494) { n = std::max( arr[n],maxele ); }
  if(env_var_0 == 495) { n = std::max( arr[n],n ); }
  if(env_var_0 == 496) { n = std::max( maxele,ans ); }
  if(env_var_0 == 497) { n = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 498) { n = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 499) { n = std::max( maxele,arr[n] ); }
  if(env_var_0 == 500) { n = std::max( maxele,maxele ); }
  if(env_var_0 == 501) { n = std::max( maxele,n ); }
  if(env_var_0 == 502) { n = std::max( n,ans ); }
  if(env_var_0 == 503) { n = std::max( n,arr[ans] ); }
  if(env_var_0 == 504) { n = std::max( n,arr[maxele] ); }
  if(env_var_0 == 505) { n = std::max( n,arr[n] ); }
  if(env_var_0 == 506) { n = std::max( n,maxele ); }
  if(env_var_0 == 507) { n = std::max( n,n ); }
  if(env_var_0 == 508) { n = std::min( ans,ans ); }
  if(env_var_0 == 509) { n = std::min( ans,arr[ans] ); }
  if(env_var_0 == 510) { n = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 511) { n = std::min( ans,arr[n] ); }
  if(env_var_0 == 512) { n = std::min( ans,maxele ); }
  if(env_var_0 == 513) { n = std::min( ans,n ); }
  if(env_var_0 == 514) { n = std::min( arr[ans],ans ); }
  if(env_var_0 == 515) { n = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 516) { n = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 517) { n = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 518) { n = std::min( arr[ans],maxele ); }
  if(env_var_0 == 519) { n = std::min( arr[ans],n ); }
  if(env_var_0 == 520) { n = std::min( arr[maxele],ans ); }
  if(env_var_0 == 521) { n = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 522) { n = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 523) { n = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 524) { n = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 525) { n = std::min( arr[maxele],n ); }
  if(env_var_0 == 526) { n = std::min( arr[n],ans ); }
  if(env_var_0 == 527) { n = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 528) { n = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 529) { n = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 530) { n = std::min( arr[n],maxele ); }
  if(env_var_0 == 531) { n = std::min( arr[n],n ); }
  if(env_var_0 == 532) { n = std::min( maxele,ans ); }
  if(env_var_0 == 533) { n = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 534) { n = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 535) { n = std::min( maxele,arr[n] ); }
  if(env_var_0 == 536) { n = std::min( maxele,maxele ); }
  if(env_var_0 == 537) { n = std::min( maxele,n ); }
  if(env_var_0 == 538) { n = std::min( n,ans ); }
  if(env_var_0 == 539) { n = std::min( n,arr[ans] ); }
  if(env_var_0 == 540) { n = std::min( n,arr[maxele] ); }
  if(env_var_0 == 541) { n = std::min( n,arr[n] ); }
  if(env_var_0 == 542) { n = std::min( n,maxele ); }
  if(env_var_0 == 543) { n = std::min( n,n ); }
  if(env_var_0 == 544) { n = toupper( ans ); }
  if(env_var_0 == 545) { n = toupper( arr[ans] ); }
  if(env_var_0 == 546) { n = toupper( arr[maxele] ); }
  if(env_var_0 == 547) { n = toupper( arr[n] ); }
  if(env_var_0 == 548) { n = toupper( maxele ); }
  if(env_var_0 == 549) { n = toupper( n ); }
  if(env_var_0 == 550) { ans] = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 551) { ans] = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 552) { ans] = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 553) { ans] = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 554) { ans] = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 555) { ans] = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 556) { ans] = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 557) { ans] = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 558) { ans] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 559) { ans] = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 560) { ans] = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 561) { ans] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 562) { ans] = *std::max_element( arr,arr ); }
  if(env_var_0 == 563) { ans] = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 564) { ans] = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 565) { ans] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 566) { ans] = ans; }
  if(env_var_0 == 567) { ans] = arr; }
  if(env_var_0 == 568) { ans] = arr+ans; }
  if(env_var_0 == 569) { ans] = arr+maxele; }
  if(env_var_0 == 570) { ans] = arr+n; }
  if(env_var_0 == 571) { ans] = arr[ans]; }
  if(env_var_0 == 572) { ans] = arr[maxele]; }
  if(env_var_0 == 573) { ans] = arr[n]; }
  if(env_var_0 == 574) { ans] = isupper( ans ); }
  if(env_var_0 == 575) { ans] = isupper( arr[ans] ); }
  if(env_var_0 == 576) { ans] = isupper( arr[maxele] ); }
  if(env_var_0 == 577) { ans] = isupper( arr[n] ); }
  if(env_var_0 == 578) { ans] = isupper( maxele ); }
  if(env_var_0 == 579) { ans] = isupper( n ); }
  if(env_var_0 == 580) { ans] = maxele; }
  if(env_var_0 == 581) { ans] = n; }
  if(env_var_0 == 582) { ans] = std::max( ans,ans ); }
  if(env_var_0 == 583) { ans] = std::max( ans,arr[ans] ); }
  if(env_var_0 == 584) { ans] = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 585) { ans] = std::max( ans,arr[n] ); }
  if(env_var_0 == 586) { ans] = std::max( ans,maxele ); }
  if(env_var_0 == 587) { ans] = std::max( ans,n ); }
  if(env_var_0 == 588) { ans] = std::max( arr[ans],ans ); }
  if(env_var_0 == 589) { ans] = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 590) { ans] = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 591) { ans] = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 592) { ans] = std::max( arr[ans],maxele ); }
  if(env_var_0 == 593) { ans] = std::max( arr[ans],n ); }
  if(env_var_0 == 594) { ans] = std::max( arr[maxele],ans ); }
  if(env_var_0 == 595) { ans] = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 596) { ans] = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 597) { ans] = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 598) { ans] = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 599) { ans] = std::max( arr[maxele],n ); }
  if(env_var_0 == 600) { ans] = std::max( arr[n],ans ); }
  if(env_var_0 == 601) { ans] = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 602) { ans] = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 603) { ans] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 604) { ans] = std::max( arr[n],maxele ); }
  if(env_var_0 == 605) { ans] = std::max( arr[n],n ); }
  if(env_var_0 == 606) { ans] = std::max( maxele,ans ); }
  if(env_var_0 == 607) { ans] = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 608) { ans] = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 609) { ans] = std::max( maxele,arr[n] ); }
  if(env_var_0 == 610) { ans] = std::max( maxele,maxele ); }
  if(env_var_0 == 611) { ans] = std::max( maxele,n ); }
  if(env_var_0 == 612) { ans] = std::max( n,ans ); }
  if(env_var_0 == 613) { ans] = std::max( n,arr[ans] ); }
  if(env_var_0 == 614) { ans] = std::max( n,arr[maxele] ); }
  if(env_var_0 == 615) { ans] = std::max( n,arr[n] ); }
  if(env_var_0 == 616) { ans] = std::max( n,maxele ); }
  if(env_var_0 == 617) { ans] = std::max( n,n ); }
  if(env_var_0 == 618) { ans] = std::min( ans,ans ); }
  if(env_var_0 == 619) { ans] = std::min( ans,arr[ans] ); }
  if(env_var_0 == 620) { ans] = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 621) { ans] = std::min( ans,arr[n] ); }
  if(env_var_0 == 622) { ans] = std::min( ans,maxele ); }
  if(env_var_0 == 623) { ans] = std::min( ans,n ); }
  if(env_var_0 == 624) { ans] = std::min( arr[ans],ans ); }
  if(env_var_0 == 625) { ans] = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 626) { ans] = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 627) { ans] = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 628) { ans] = std::min( arr[ans],maxele ); }
  if(env_var_0 == 629) { ans] = std::min( arr[ans],n ); }
  if(env_var_0 == 630) { ans] = std::min( arr[maxele],ans ); }
  if(env_var_0 == 631) { ans] = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 632) { ans] = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 633) { ans] = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 634) { ans] = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 635) { ans] = std::min( arr[maxele],n ); }
  if(env_var_0 == 636) { ans] = std::min( arr[n],ans ); }
  if(env_var_0 == 637) { ans] = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 638) { ans] = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 639) { ans] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 640) { ans] = std::min( arr[n],maxele ); }
  if(env_var_0 == 641) { ans] = std::min( arr[n],n ); }
  if(env_var_0 == 642) { ans] = std::min( maxele,ans ); }
  if(env_var_0 == 643) { ans] = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 644) { ans] = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 645) { ans] = std::min( maxele,arr[n] ); }
  if(env_var_0 == 646) { ans] = std::min( maxele,maxele ); }
  if(env_var_0 == 647) { ans] = std::min( maxele,n ); }
  if(env_var_0 == 648) { ans] = std::min( n,ans ); }
  if(env_var_0 == 649) { ans] = std::min( n,arr[ans] ); }
  if(env_var_0 == 650) { ans] = std::min( n,arr[maxele] ); }
  if(env_var_0 == 651) { ans] = std::min( n,arr[n] ); }
  if(env_var_0 == 652) { ans] = std::min( n,maxele ); }
  if(env_var_0 == 653) { ans] = std::min( n,n ); }
  if(env_var_0 == 654) { ans] = toupper( ans ); }
  if(env_var_0 == 655) { ans] = toupper( arr[ans] ); }
  if(env_var_0 == 656) { ans] = toupper( arr[maxele] ); }
  if(env_var_0 == 657) { ans] = toupper( arr[n] ); }
  if(env_var_0 == 658) { ans] = toupper( maxele ); }
  if(env_var_0 == 659) { ans] = toupper( n ); }
  if(env_var_0 == 660) { maxele] = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 661) { maxele] = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 662) { maxele] = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 663) { maxele] = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 664) { maxele] = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 665) { maxele] = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 666) { maxele] = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 667) { maxele] = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 668) { maxele] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 669) { maxele] = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 670) { maxele] = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 671) { maxele] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 672) { maxele] = *std::max_element( arr,arr ); }
  if(env_var_0 == 673) { maxele] = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 674) { maxele] = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 675) { maxele] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 676) { maxele] = ans; }
  if(env_var_0 == 677) { maxele] = arr; }
  if(env_var_0 == 678) { maxele] = arr+ans; }
  if(env_var_0 == 679) { maxele] = arr+maxele; }
  if(env_var_0 == 680) { maxele] = arr+n; }
  if(env_var_0 == 681) { maxele] = arr[ans]; }
  if(env_var_0 == 682) { maxele] = arr[maxele]; }
  if(env_var_0 == 683) { maxele] = arr[n]; }
  if(env_var_0 == 684) { maxele] = isupper( ans ); }
  if(env_var_0 == 685) { maxele] = isupper( arr[ans] ); }
  if(env_var_0 == 686) { maxele] = isupper( arr[maxele] ); }
  if(env_var_0 == 687) { maxele] = isupper( arr[n] ); }
  if(env_var_0 == 688) { maxele] = isupper( maxele ); }
  if(env_var_0 == 689) { maxele] = isupper( n ); }
  if(env_var_0 == 690) { maxele] = maxele; }
  if(env_var_0 == 691) { maxele] = n; }
  if(env_var_0 == 692) { maxele] = std::max( ans,ans ); }
  if(env_var_0 == 693) { maxele] = std::max( ans,arr[ans] ); }
  if(env_var_0 == 694) { maxele] = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 695) { maxele] = std::max( ans,arr[n] ); }
  if(env_var_0 == 696) { maxele] = std::max( ans,maxele ); }
  if(env_var_0 == 697) { maxele] = std::max( ans,n ); }
  if(env_var_0 == 698) { maxele] = std::max( arr[ans],ans ); }
  if(env_var_0 == 699) { maxele] = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 700) { maxele] = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 701) { maxele] = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 702) { maxele] = std::max( arr[ans],maxele ); }
  if(env_var_0 == 703) { maxele] = std::max( arr[ans],n ); }
  if(env_var_0 == 704) { maxele] = std::max( arr[maxele],ans ); }
  if(env_var_0 == 705) { maxele] = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 706) { maxele] = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 707) { maxele] = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 708) { maxele] = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 709) { maxele] = std::max( arr[maxele],n ); }
  if(env_var_0 == 710) { maxele] = std::max( arr[n],ans ); }
  if(env_var_0 == 711) { maxele] = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 712) { maxele] = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 713) { maxele] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 714) { maxele] = std::max( arr[n],maxele ); }
  if(env_var_0 == 715) { maxele] = std::max( arr[n],n ); }
  if(env_var_0 == 716) { maxele] = std::max( maxele,ans ); }
  if(env_var_0 == 717) { maxele] = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 718) { maxele] = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 719) { maxele] = std::max( maxele,arr[n] ); }
  if(env_var_0 == 720) { maxele] = std::max( maxele,maxele ); }
  if(env_var_0 == 721) { maxele] = std::max( maxele,n ); }
  if(env_var_0 == 722) { maxele] = std::max( n,ans ); }
  if(env_var_0 == 723) { maxele] = std::max( n,arr[ans] ); }
  if(env_var_0 == 724) { maxele] = std::max( n,arr[maxele] ); }
  if(env_var_0 == 725) { maxele] = std::max( n,arr[n] ); }
  if(env_var_0 == 726) { maxele] = std::max( n,maxele ); }
  if(env_var_0 == 727) { maxele] = std::max( n,n ); }
  if(env_var_0 == 728) { maxele] = std::min( ans,ans ); }
  if(env_var_0 == 729) { maxele] = std::min( ans,arr[ans] ); }
  if(env_var_0 == 730) { maxele] = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 731) { maxele] = std::min( ans,arr[n] ); }
  if(env_var_0 == 732) { maxele] = std::min( ans,maxele ); }
  if(env_var_0 == 733) { maxele] = std::min( ans,n ); }
  if(env_var_0 == 734) { maxele] = std::min( arr[ans],ans ); }
  if(env_var_0 == 735) { maxele] = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 736) { maxele] = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 737) { maxele] = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 738) { maxele] = std::min( arr[ans],maxele ); }
  if(env_var_0 == 739) { maxele] = std::min( arr[ans],n ); }
  if(env_var_0 == 740) { maxele] = std::min( arr[maxele],ans ); }
  if(env_var_0 == 741) { maxele] = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 742) { maxele] = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 743) { maxele] = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 744) { maxele] = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 745) { maxele] = std::min( arr[maxele],n ); }
  if(env_var_0 == 746) { maxele] = std::min( arr[n],ans ); }
  if(env_var_0 == 747) { maxele] = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 748) { maxele] = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 749) { maxele] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 750) { maxele] = std::min( arr[n],maxele ); }
  if(env_var_0 == 751) { maxele] = std::min( arr[n],n ); }
  if(env_var_0 == 752) { maxele] = std::min( maxele,ans ); }
  if(env_var_0 == 753) { maxele] = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 754) { maxele] = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 755) { maxele] = std::min( maxele,arr[n] ); }
  if(env_var_0 == 756) { maxele] = std::min( maxele,maxele ); }
  if(env_var_0 == 757) { maxele] = std::min( maxele,n ); }
  if(env_var_0 == 758) { maxele] = std::min( n,ans ); }
  if(env_var_0 == 759) { maxele] = std::min( n,arr[ans] ); }
  if(env_var_0 == 760) { maxele] = std::min( n,arr[maxele] ); }
  if(env_var_0 == 761) { maxele] = std::min( n,arr[n] ); }
  if(env_var_0 == 762) { maxele] = std::min( n,maxele ); }
  if(env_var_0 == 763) { maxele] = std::min( n,n ); }
  if(env_var_0 == 764) { maxele] = toupper( ans ); }
  if(env_var_0 == 765) { maxele] = toupper( arr[ans] ); }
  if(env_var_0 == 766) { maxele] = toupper( arr[maxele] ); }
  if(env_var_0 == 767) { maxele] = toupper( arr[n] ); }
  if(env_var_0 == 768) { maxele] = toupper( maxele ); }
  if(env_var_0 == 769) { maxele] = toupper( n ); }
  if(env_var_0 == 770) { n] = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 771) { n] = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 772) { n] = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 773) { n] = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 774) { n] = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 775) { n] = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 776) { n] = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 777) { n] = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 778) { n] = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 779) { n] = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 780) { n] = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 781) { n] = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 782) { n] = *std::max_element( arr,arr ); }
  if(env_var_0 == 783) { n] = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 784) { n] = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 785) { n] = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 786) { n] = ans; }
  if(env_var_0 == 787) { n] = arr; }
  if(env_var_0 == 788) { n] = arr+ans; }
  if(env_var_0 == 789) { n] = arr+maxele; }
  if(env_var_0 == 790) { n] = arr+n; }
  if(env_var_0 == 791) { n] = arr[ans]; }
  if(env_var_0 == 792) { n] = arr[maxele]; }
  if(env_var_0 == 793) { n] = arr[n]; }
  if(env_var_0 == 794) { n] = isupper( ans ); }
  if(env_var_0 == 795) { n] = isupper( arr[ans] ); }
  if(env_var_0 == 796) { n] = isupper( arr[maxele] ); }
  if(env_var_0 == 797) { n] = isupper( arr[n] ); }
  if(env_var_0 == 798) { n] = isupper( maxele ); }
  if(env_var_0 == 799) { n] = isupper( n ); }
  if(env_var_0 == 800) { n] = maxele; }
  if(env_var_0 == 801) { n] = n; }
  if(env_var_0 == 802) { n] = std::max( ans,ans ); }
  if(env_var_0 == 803) { n] = std::max( ans,arr[ans] ); }
  if(env_var_0 == 804) { n] = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 805) { n] = std::max( ans,arr[n] ); }
  if(env_var_0 == 806) { n] = std::max( ans,maxele ); }
  if(env_var_0 == 807) { n] = std::max( ans,n ); }
  if(env_var_0 == 808) { n] = std::max( arr[ans],ans ); }
  if(env_var_0 == 809) { n] = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 810) { n] = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 811) { n] = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 812) { n] = std::max( arr[ans],maxele ); }
  if(env_var_0 == 813) { n] = std::max( arr[ans],n ); }
  if(env_var_0 == 814) { n] = std::max( arr[maxele],ans ); }
  if(env_var_0 == 815) { n] = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 816) { n] = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 817) { n] = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 818) { n] = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 819) { n] = std::max( arr[maxele],n ); }
  if(env_var_0 == 820) { n] = std::max( arr[n],ans ); }
  if(env_var_0 == 821) { n] = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 822) { n] = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 823) { n] = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 824) { n] = std::max( arr[n],maxele ); }
  if(env_var_0 == 825) { n] = std::max( arr[n],n ); }
  if(env_var_0 == 826) { n] = std::max( maxele,ans ); }
  if(env_var_0 == 827) { n] = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 828) { n] = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 829) { n] = std::max( maxele,arr[n] ); }
  if(env_var_0 == 830) { n] = std::max( maxele,maxele ); }
  if(env_var_0 == 831) { n] = std::max( maxele,n ); }
  if(env_var_0 == 832) { n] = std::max( n,ans ); }
  if(env_var_0 == 833) { n] = std::max( n,arr[ans] ); }
  if(env_var_0 == 834) { n] = std::max( n,arr[maxele] ); }
  if(env_var_0 == 835) { n] = std::max( n,arr[n] ); }
  if(env_var_0 == 836) { n] = std::max( n,maxele ); }
  if(env_var_0 == 837) { n] = std::max( n,n ); }
  if(env_var_0 == 838) { n] = std::min( ans,ans ); }
  if(env_var_0 == 839) { n] = std::min( ans,arr[ans] ); }
  if(env_var_0 == 840) { n] = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 841) { n] = std::min( ans,arr[n] ); }
  if(env_var_0 == 842) { n] = std::min( ans,maxele ); }
  if(env_var_0 == 843) { n] = std::min( ans,n ); }
  if(env_var_0 == 844) { n] = std::min( arr[ans],ans ); }
  if(env_var_0 == 845) { n] = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 846) { n] = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 847) { n] = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 848) { n] = std::min( arr[ans],maxele ); }
  if(env_var_0 == 849) { n] = std::min( arr[ans],n ); }
  if(env_var_0 == 850) { n] = std::min( arr[maxele],ans ); }
  if(env_var_0 == 851) { n] = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 852) { n] = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 853) { n] = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 854) { n] = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 855) { n] = std::min( arr[maxele],n ); }
  if(env_var_0 == 856) { n] = std::min( arr[n],ans ); }
  if(env_var_0 == 857) { n] = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 858) { n] = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 859) { n] = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 860) { n] = std::min( arr[n],maxele ); }
  if(env_var_0 == 861) { n] = std::min( arr[n],n ); }
  if(env_var_0 == 862) { n] = std::min( maxele,ans ); }
  if(env_var_0 == 863) { n] = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 864) { n] = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 865) { n] = std::min( maxele,arr[n] ); }
  if(env_var_0 == 866) { n] = std::min( maxele,maxele ); }
  if(env_var_0 == 867) { n] = std::min( maxele,n ); }
  if(env_var_0 == 868) { n] = std::min( n,ans ); }
  if(env_var_0 == 869) { n] = std::min( n,arr[ans] ); }
  if(env_var_0 == 870) { n] = std::min( n,arr[maxele] ); }
  if(env_var_0 == 871) { n] = std::min( n,arr[n] ); }
  if(env_var_0 == 872) { n] = std::min( n,maxele ); }
  if(env_var_0 == 873) { n] = std::min( n,n ); }
  if(env_var_0 == 874) { n] = toupper( ans ); }
  if(env_var_0 == 875) { n] = toupper( arr[ans] ); }
  if(env_var_0 == 876) { n] = toupper( arr[maxele] ); }
  if(env_var_0 == 877) { n] = toupper( arr[n] ); }
  if(env_var_0 == 878) { n] = toupper( maxele ); }
  if(env_var_0 == 879) { n] = toupper( n ); }
  if(env_var_0 == 880) { le = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 881) { le = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 882) { le = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 883) { le = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 884) { le = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 885) { le = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 886) { le = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 887) { le = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 888) { le = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 889) { le = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 890) { le = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 891) { le = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 892) { le = *std::max_element( arr,arr ); }
  if(env_var_0 == 893) { le = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 894) { le = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 895) { le = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 896) { le = ans; }
  if(env_var_0 == 897) { le = arr; }
  if(env_var_0 == 898) { le = arr+ans; }
  if(env_var_0 == 899) { le = arr+maxele; }
  if(env_var_0 == 900) { le = arr+n; }
  if(env_var_0 == 901) { le = arr[ans]; }
  if(env_var_0 == 902) { le = arr[maxele]; }
  if(env_var_0 == 903) { le = arr[n]; }
  if(env_var_0 == 904) { le = isupper( ans ); }
  if(env_var_0 == 905) { le = isupper( arr[ans] ); }
  if(env_var_0 == 906) { le = isupper( arr[maxele] ); }
  if(env_var_0 == 907) { le = isupper( arr[n] ); }
  if(env_var_0 == 908) { le = isupper( maxele ); }
  if(env_var_0 == 909) { le = isupper( n ); }
  if(env_var_0 == 910) { le = maxele; }
  if(env_var_0 == 911) { le = n; }
  if(env_var_0 == 912) { le = std::max( ans,ans ); }
  if(env_var_0 == 913) { le = std::max( ans,arr[ans] ); }
  if(env_var_0 == 914) { le = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 915) { le = std::max( ans,arr[n] ); }
  if(env_var_0 == 916) { le = std::max( ans,maxele ); }
  if(env_var_0 == 917) { le = std::max( ans,n ); }
  if(env_var_0 == 918) { le = std::max( arr[ans],ans ); }
  if(env_var_0 == 919) { le = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 920) { le = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 921) { le = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 922) { le = std::max( arr[ans],maxele ); }
  if(env_var_0 == 923) { le = std::max( arr[ans],n ); }
  if(env_var_0 == 924) { le = std::max( arr[maxele],ans ); }
  if(env_var_0 == 925) { le = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 926) { le = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 927) { le = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 928) { le = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 929) { le = std::max( arr[maxele],n ); }
  if(env_var_0 == 930) { le = std::max( arr[n],ans ); }
  if(env_var_0 == 931) { le = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 932) { le = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 933) { le = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 934) { le = std::max( arr[n],maxele ); }
  if(env_var_0 == 935) { le = std::max( arr[n],n ); }
  if(env_var_0 == 936) { le = std::max( maxele,ans ); }
  if(env_var_0 == 937) { le = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 938) { le = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 939) { le = std::max( maxele,arr[n] ); }
  if(env_var_0 == 940) { le = std::max( maxele,maxele ); }
  if(env_var_0 == 941) { le = std::max( maxele,n ); }
  if(env_var_0 == 942) { le = std::max( n,ans ); }
  if(env_var_0 == 943) { le = std::max( n,arr[ans] ); }
  if(env_var_0 == 944) { le = std::max( n,arr[maxele] ); }
  if(env_var_0 == 945) { le = std::max( n,arr[n] ); }
  if(env_var_0 == 946) { le = std::max( n,maxele ); }
  if(env_var_0 == 947) { le = std::max( n,n ); }
  if(env_var_0 == 948) { le = std::min( ans,ans ); }
  if(env_var_0 == 949) { le = std::min( ans,arr[ans] ); }
  if(env_var_0 == 950) { le = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 951) { le = std::min( ans,arr[n] ); }
  if(env_var_0 == 952) { le = std::min( ans,maxele ); }
  if(env_var_0 == 953) { le = std::min( ans,n ); }
  if(env_var_0 == 954) { le = std::min( arr[ans],ans ); }
  if(env_var_0 == 955) { le = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 956) { le = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 957) { le = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 958) { le = std::min( arr[ans],maxele ); }
  if(env_var_0 == 959) { le = std::min( arr[ans],n ); }
  if(env_var_0 == 960) { le = std::min( arr[maxele],ans ); }
  if(env_var_0 == 961) { le = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 962) { le = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 963) { le = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 964) { le = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 965) { le = std::min( arr[maxele],n ); }
  if(env_var_0 == 966) { le = std::min( arr[n],ans ); }
  if(env_var_0 == 967) { le = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 968) { le = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 969) { le = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 970) { le = std::min( arr[n],maxele ); }
  if(env_var_0 == 971) { le = std::min( arr[n],n ); }
  if(env_var_0 == 972) { le = std::min( maxele,ans ); }
  if(env_var_0 == 973) { le = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 974) { le = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 975) { le = std::min( maxele,arr[n] ); }
  if(env_var_0 == 976) { le = std::min( maxele,maxele ); }
  if(env_var_0 == 977) { le = std::min( maxele,n ); }
  if(env_var_0 == 978) { le = std::min( n,ans ); }
  if(env_var_0 == 979) { le = std::min( n,arr[ans] ); }
  if(env_var_0 == 980) { le = std::min( n,arr[maxele] ); }
  if(env_var_0 == 981) { le = std::min( n,arr[n] ); }
  if(env_var_0 == 982) { le = std::min( n,maxele ); }
  if(env_var_0 == 983) { le = std::min( n,n ); }
  if(env_var_0 == 984) { le = toupper( ans ); }
  if(env_var_0 == 985) { le = toupper( arr[ans] ); }
  if(env_var_0 == 986) { le = toupper( arr[maxele] ); }
  if(env_var_0 == 987) { le = toupper( arr[n] ); }
  if(env_var_0 == 988) { le = toupper( maxele ); }
  if(env_var_0 == 989) { le = toupper( n ); }
  if(env_var_0 == 990) { *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 991) { *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 992) { *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 993) { *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 994) { *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 995) { *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 996) { *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 997) { *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 998) { *std::max_element( arr+n,arr ); }
  if(env_var_0 == 999) { *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 1000) { *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 1001) { *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 1002) { *std::max_element( arr,arr ); }
  if(env_var_0 == 1003) { *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 1004) { *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 1005) { *std::max_element( arr,arr+n ); }
  if(env_var_0 == 1006) { ans; }
  if(env_var_0 == 1007) { arr; }
  if(env_var_0 == 1008) { arr+ans; }
  if(env_var_0 == 1009) { arr+maxele; }
  if(env_var_0 == 1010) { arr+n; }
  if(env_var_0 == 1011) { arr[ans]; }
  if(env_var_0 == 1012) { arr[maxele]; }
  if(env_var_0 == 1013) { arr[n]; }
  if(env_var_0 == 1014) { isupper( ans ); }
  if(env_var_0 == 1015) { isupper( arr[ans] ); }
  if(env_var_0 == 1016) { isupper( arr[maxele] ); }
  if(env_var_0 == 1017) { isupper( arr[n] ); }
  if(env_var_0 == 1018) { isupper( maxele ); }
  if(env_var_0 == 1019) { isupper( n ); }
  if(env_var_0 == 1020) { maxele; }
  if(env_var_0 == 1021) { n; }
  if(env_var_0 == 1022) { std::max( ans,ans ); }
  if(env_var_0 == 1023) { std::max( ans,arr[ans] ); }
  if(env_var_0 == 1024) { std::max( ans,arr[maxele] ); }
  if(env_var_0 == 1025) { std::max( ans,arr[n] ); }
  if(env_var_0 == 1026) { std::max( ans,maxele ); }
  if(env_var_0 == 1027) { std::max( ans,n ); }
  if(env_var_0 == 1028) { std::max( arr[ans],ans ); }
  if(env_var_0 == 1029) { std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 1030) { std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 1031) { std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 1032) { std::max( arr[ans],maxele ); }
  if(env_var_0 == 1033) { std::max( arr[ans],n ); }
  if(env_var_0 == 1034) { std::max( arr[maxele],ans ); }
  if(env_var_0 == 1035) { std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 1036) { std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 1037) { std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 1038) { std::max( arr[maxele],maxele ); }
  if(env_var_0 == 1039) { std::max( arr[maxele],n ); }
  if(env_var_0 == 1040) { std::max( arr[n],ans ); }
  if(env_var_0 == 1041) { std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 1042) { std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 1043) { std::max( arr[n],arr[n] ); }
  if(env_var_0 == 1044) { std::max( arr[n],maxele ); }
  if(env_var_0 == 1045) { std::max( arr[n],n ); }
  if(env_var_0 == 1046) { std::max( maxele,ans ); }
  if(env_var_0 == 1047) { std::max( maxele,arr[ans] ); }
  if(env_var_0 == 1048) { std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 1049) { std::max( maxele,arr[n] ); }
  if(env_var_0 == 1050) { std::max( maxele,maxele ); }
  if(env_var_0 == 1051) { std::max( maxele,n ); }
  if(env_var_0 == 1052) { std::max( n,ans ); }
  if(env_var_0 == 1053) { std::max( n,arr[ans] ); }
  if(env_var_0 == 1054) { std::max( n,arr[maxele] ); }
  if(env_var_0 == 1055) { std::max( n,arr[n] ); }
  if(env_var_0 == 1056) { std::max( n,maxele ); }
  if(env_var_0 == 1057) { std::max( n,n ); }
  if(env_var_0 == 1058) { std::min( ans,ans ); }
  if(env_var_0 == 1059) { std::min( ans,arr[ans] ); }
  if(env_var_0 == 1060) { std::min( ans,arr[maxele] ); }
  if(env_var_0 == 1061) { std::min( ans,arr[n] ); }
  if(env_var_0 == 1062) { std::min( ans,maxele ); }
  if(env_var_0 == 1063) { std::min( ans,n ); }
  if(env_var_0 == 1064) { std::min( arr[ans],ans ); }
  if(env_var_0 == 1065) { std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 1066) { std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 1067) { std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 1068) { std::min( arr[ans],maxele ); }
  if(env_var_0 == 1069) { std::min( arr[ans],n ); }
  if(env_var_0 == 1070) { std::min( arr[maxele],ans ); }
  if(env_var_0 == 1071) { std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 1072) { std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 1073) { std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 1074) { std::min( arr[maxele],maxele ); }
  if(env_var_0 == 1075) { std::min( arr[maxele],n ); }
  if(env_var_0 == 1076) { std::min( arr[n],ans ); }
  if(env_var_0 == 1077) { std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 1078) { std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 1079) { std::min( arr[n],arr[n] ); }
  if(env_var_0 == 1080) { std::min( arr[n],maxele ); }
  if(env_var_0 == 1081) { std::min( arr[n],n ); }
  if(env_var_0 == 1082) { std::min( maxele,ans ); }
  if(env_var_0 == 1083) { std::min( maxele,arr[ans] ); }
  if(env_var_0 == 1084) { std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 1085) { std::min( maxele,arr[n] ); }
  if(env_var_0 == 1086) { std::min( maxele,maxele ); }
  if(env_var_0 == 1087) { std::min( maxele,n ); }
  if(env_var_0 == 1088) { std::min( n,ans ); }
  if(env_var_0 == 1089) { std::min( n,arr[ans] ); }
  if(env_var_0 == 1090) { std::min( n,arr[maxele] ); }
  if(env_var_0 == 1091) { std::min( n,arr[n] ); }
  if(env_var_0 == 1092) { std::min( n,maxele ); }
  if(env_var_0 == 1093) { std::min( n,n ); }
  if(env_var_0 == 1094) { toupper( ans ); }
  if(env_var_0 == 1095) { toupper( arr[ans] ); }
  if(env_var_0 == 1096) { toupper( arr[maxele] ); }
  if(env_var_0 == 1097) { toupper( arr[n] ); }
  if(env_var_0 == 1098) { toupper( maxele ); }
  if(env_var_0 == 1099) { toupper( n ); }
   
  for ( int i = 2 ;
  i <= maxele ;
  i ++ ) {
    int count = 0 ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( arr [ j ] % i == 0 ) && ( arr [ j ] % i == 0 ) ) {
        count ++ ;
      }
    }
    ans = max ( ans , count ) ;
  }
  return ans ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{10,18,22,22,22,29,30,32,33,34,37,39,40,41,44,47,49,50,50,51,53,67,69,70,71,71,73,75,78,80,81,82,91,91,93,97,97,99},{-42,62,6,98,38,-4,-38,72,42,4,-22,-94,78,-90,14},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{89,92,96,71,24,27,18,19,41,1,45,8},{-98,-94,-92,-90,-82,-80,-76,-76,-72,-62,-60,-58,-56,-52,-42,-36,-32,-32,-24,-22,-20,-10,-10,-10,-8,-2,-2,0,2,4,6,6,8,10,14,18,22,26,30,46,46,62,68,74,78,82,86,86},{1,0,0,0,0,1,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,1},{4,8,10,10,11,17,18,25,32,33,34,37,40,41,44,47,47,52,63,77,85,87,89,89,91,95,96,98},{-86,52,-48,70,10,-94,16,14,38,62},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{95,32,87,37,86,71,30,88,96,52,88,92,79,86,19,5,74,67}};
    vector<int> param1 {35,10,23,7,40,41,23,9,30,13};
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

