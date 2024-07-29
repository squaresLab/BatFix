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
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) mp [ arr [ i ] ] ++;
  int ans = 0;
  for ( auto it = mp . begin ( );
  it != mp . end ( );
  it ++ ) {
    int count = it -> second;
    ans += ( count * ( count - 1 ) ) / 2;
  }
  return ans;
}


int foo;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int arr[], int n) {
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        if (arr[i] < mp.size())
            mp[arr[i]]++;
        else
            mp[arr[i]] = 1;
    }
    int ans = 0;
    for (auto it : mp) {
       int count ;
        if(env_var_0 == 0) {  = ans; }
        if(env_var_0 == 1) {  = arr; }
        if(env_var_0 == 2) {  = arr+ans; }
        if(env_var_0 == 3) {  = arr+count; }
        if(env_var_0 == 4) {  = arr+it.second; }
        if(env_var_0 == 5) {  = arr+n; }
        if(env_var_0 == 6) {  = arr[ans]; }
        if(env_var_0 == 7) {  = arr[count]; }
        if(env_var_0 == 8) {  = arr[it.second]; }
        if(env_var_0 == 9) {  = arr[n]; }
        if(env_var_0 == 10) {  = count; }
        if(env_var_0 == 11) {  = isupper( ans ); }
        if(env_var_0 == 12) {  = isupper( arr[ans] ); }
        if(env_var_0 == 13) {  = isupper( arr[count] ); }
        if(env_var_0 == 14) {  = isupper( arr[it.second] ); }
        if(env_var_0 == 15) {  = isupper( arr[n] ); }
        if(env_var_0 == 16) {  = isupper( count ); }
        if(env_var_0 == 17) {  = isupper( it.first ); }
        if(env_var_0 == 18) {  = isupper( it.second ); }
        if(env_var_0 == 19) {  = isupper( n ); }
        if(env_var_0 == 20) {  = it; }
        if(env_var_0 == 21) {  = it.first; }
        if(env_var_0 == 22) {  = it.second; }
        if(env_var_0 == 23) {  = mp; }
        if(env_var_0 == 24) {  = mp.begin(); }
        if(env_var_0 == 25) {  = mp.cbegin(); }
        if(env_var_0 == 26) {  = mp.clear(); }
        if(env_var_0 == 27) {  = mp.crbegin(); }
        if(env_var_0 == 28) {  = mp.empty(); }
        if(env_var_0 == 29) {  = mp.end(); }
        if(env_var_0 == 30) {  = mp.key_comp(); }
        if(env_var_0 == 31) {  = mp.max_size(); }
        if(env_var_0 == 32) {  = mp.rbegin(); }
        if(env_var_0 == 33) {  = mp.rend(); }
        if(env_var_0 == 34) {  = n; }
        if(env_var_0 == 35) {  = toupper( ans ); }
        if(env_var_0 == 36) {  = toupper( arr[ans] ); }
        if(env_var_0 == 37) {  = toupper( arr[count] ); }
        if(env_var_0 == 38) {  = toupper( arr[it.second] ); }
        if(env_var_0 == 39) {  = toupper( arr[n] ); }
        if(env_var_0 == 40) {  = toupper( count ); }
        if(env_var_0 == 41) {  = toupper( it.first ); }
        if(env_var_0 == 42) {  = toupper( it.second ); }
        if(env_var_0 == 43) {  = toupper( n ); }
        if(env_var_0 == 44) {  = ans; }
        if(env_var_0 == 45) {  = arr; }
        if(env_var_0 == 46) {  = arr+ans; }
        if(env_var_0 == 47) {  = arr+count; }
        if(env_var_0 == 48) {  = arr+it.second; }
        if(env_var_0 == 49) {  = arr+n; }
        if(env_var_0 == 50) {  = arr[ans]; }
        if(env_var_0 == 51) {  = arr[count]; }
        if(env_var_0 == 52) {  = arr[it.second]; }
        if(env_var_0 == 53) {  = arr[n]; }
        if(env_var_0 == 54) {  = count; }
        if(env_var_0 == 55) {  = isupper( ans ); }
        if(env_var_0 == 56) {  = isupper( arr[ans] ); }
        if(env_var_0 == 57) {  = isupper( arr[count] ); }
        if(env_var_0 == 58) {  = isupper( arr[it.second] ); }
        if(env_var_0 == 59) {  = isupper( arr[n] ); }
        if(env_var_0 == 60) {  = isupper( count ); }
        if(env_var_0 == 61) {  = isupper( it.first ); }
        if(env_var_0 == 62) {  = isupper( it.second ); }
        if(env_var_0 == 63) {  = isupper( n ); }
        if(env_var_0 == 64) {  = it; }
        if(env_var_0 == 65) {  = it.first; }
        if(env_var_0 == 66) {  = it.second; }
        if(env_var_0 == 67) {  = mp; }
        if(env_var_0 == 68) {  = mp.begin(); }
        if(env_var_0 == 69) {  = mp.cbegin(); }
        if(env_var_0 == 70) {  = mp.clear(); }
        if(env_var_0 == 71) {  = mp.crbegin(); }
        if(env_var_0 == 72) {  = mp.empty(); }
        if(env_var_0 == 73) {  = mp.end(); }
        if(env_var_0 == 74) {  = mp.key_comp(); }
        if(env_var_0 == 75) {  = mp.max_size(); }
        if(env_var_0 == 76) {  = mp.rbegin(); }
        if(env_var_0 == 77) {  = mp.rend(); }
        if(env_var_0 == 78) {  = n; }
        if(env_var_0 == 79) {  = toupper( ans ); }
        if(env_var_0 == 80) {  = toupper( arr[ans] ); }
        if(env_var_0 == 81) {  = toupper( arr[count] ); }
        if(env_var_0 == 82) {  = toupper( arr[it.second] ); }
        if(env_var_0 == 83) {  = toupper( arr[n] ); }
        if(env_var_0 == 84) {  = toupper( count ); }
        if(env_var_0 == 85) {  = toupper( it.first ); }
        if(env_var_0 == 86) {  = toupper( it.second ); }
        if(env_var_0 == 87) {  = toupper( n ); }
        if(env_var_0 == 88) { +ans = ans; }
        if(env_var_0 == 89) { +ans = arr; }
        if(env_var_0 == 90) { +ans = arr+ans; }
        if(env_var_0 == 91) { +ans = arr+count; }
        if(env_var_0 == 92) { +ans = arr+it.second; }
        if(env_var_0 == 93) { +ans = arr+n; }
        if(env_var_0 == 94) { +ans = arr[ans]; }
        if(env_var_0 == 95) { +ans = arr[count]; }
        if(env_var_0 == 96) { +ans = arr[it.second]; }
        if(env_var_0 == 97) { +ans = arr[n]; }
        if(env_var_0 == 98) { +ans = count; }
        if(env_var_0 == 99) { +ans = isupper( ans ); }
        if(env_var_0 == 100) { +ans = isupper( arr[ans] ); }
        if(env_var_0 == 101) { +ans = isupper( arr[count] ); }
        if(env_var_0 == 102) { +ans = isupper( arr[it.second] ); }
        if(env_var_0 == 103) { +ans = isupper( arr[n] ); }
        if(env_var_0 == 104) { +ans = isupper( count ); }
        if(env_var_0 == 105) { +ans = isupper( it.first ); }
        if(env_var_0 == 106) { +ans = isupper( it.second ); }
        if(env_var_0 == 107) { +ans = isupper( n ); }
        if(env_var_0 == 108) { +ans = it; }
        if(env_var_0 == 109) { +ans = it.first; }
        if(env_var_0 == 110) { +ans = it.second; }
        if(env_var_0 == 111) { +ans = mp; }
        if(env_var_0 == 112) { +ans = mp.begin(); }
        if(env_var_0 == 113) { +ans = mp.cbegin(); }
        if(env_var_0 == 114) { +ans = mp.clear(); }
        if(env_var_0 == 115) { +ans = mp.crbegin(); }
        if(env_var_0 == 116) { +ans = mp.empty(); }
        if(env_var_0 == 117) { +ans = mp.end(); }
        if(env_var_0 == 118) { +ans = mp.key_comp(); }
        if(env_var_0 == 119) { +ans = mp.max_size(); }
        if(env_var_0 == 120) { +ans = mp.rbegin(); }
        if(env_var_0 == 121) { +ans = mp.rend(); }
        if(env_var_0 == 122) { +ans = n; }
        if(env_var_0 == 123) { +ans = toupper( ans ); }
        if(env_var_0 == 124) { +ans = toupper( arr[ans] ); }
        if(env_var_0 == 125) { +ans = toupper( arr[count] ); }
        if(env_var_0 == 126) { +ans = toupper( arr[it.second] ); }
        if(env_var_0 == 127) { +ans = toupper( arr[n] ); }
        if(env_var_0 == 128) { +ans = toupper( count ); }
        if(env_var_0 == 129) { +ans = toupper( it.first ); }
        if(env_var_0 == 130) { +ans = toupper( it.second ); }
        if(env_var_0 == 131) { +ans = toupper( n ); }
        if(env_var_0 == 132) { +count = ans; }
        if(env_var_0 == 133) { +count = arr; }
        if(env_var_0 == 134) { +count = arr+ans; }
        if(env_var_0 == 135) { +count = arr+count; }
        if(env_var_0 == 136) { +count = arr+it.second; }
        if(env_var_0 == 137) { +count = arr+n; }
        if(env_var_0 == 138) { +count = arr[ans]; }
        if(env_var_0 == 139) { +count = arr[count]; }
        if(env_var_0 == 140) { +count = arr[it.second]; }
        if(env_var_0 == 141) { +count = arr[n]; }
        if(env_var_0 == 142) { +count = count; }
        if(env_var_0 == 143) { +count = isupper( ans ); }
        if(env_var_0 == 144) { +count = isupper( arr[ans] ); }
        if(env_var_0 == 145) { +count = isupper( arr[count] ); }
        if(env_var_0 == 146) { +count = isupper( arr[it.second] ); }
        if(env_var_0 == 147) { +count = isupper( arr[n] ); }
        if(env_var_0 == 148) { +count = isupper( count ); }
        if(env_var_0 == 149) { +count = isupper( it.first ); }
        if(env_var_0 == 150) { +count = isupper( it.second ); }
        if(env_var_0 == 151) { +count = isupper( n ); }
        if(env_var_0 == 152) { +count = it; }
        if(env_var_0 == 153) { +count = it.first; }
        if(env_var_0 == 154) { +count = it.second; }
        if(env_var_0 == 155) { +count = mp; }
        if(env_var_0 == 156) { +count = mp.begin(); }
        if(env_var_0 == 157) { +count = mp.cbegin(); }
        if(env_var_0 == 158) { +count = mp.clear(); }
        if(env_var_0 == 159) { +count = mp.crbegin(); }
        if(env_var_0 == 160) { +count = mp.empty(); }
        if(env_var_0 == 161) { +count = mp.end(); }
        if(env_var_0 == 162) { +count = mp.key_comp(); }
        if(env_var_0 == 163) { +count = mp.max_size(); }
        if(env_var_0 == 164) { +count = mp.rbegin(); }
        if(env_var_0 == 165) { +count = mp.rend(); }
        if(env_var_0 == 166) { +count = n; }
        if(env_var_0 == 167) { +count = toupper( ans ); }
        if(env_var_0 == 168) { +count = toupper( arr[ans] ); }
        if(env_var_0 == 169) { +count = toupper( arr[count] ); }
        if(env_var_0 == 170) { +count = toupper( arr[it.second] ); }
        if(env_var_0 == 171) { +count = toupper( arr[n] ); }
        if(env_var_0 == 172) { +count = toupper( count ); }
        if(env_var_0 == 173) { +count = toupper( it.first ); }
        if(env_var_0 == 174) { +count = toupper( it.second ); }
        if(env_var_0 == 175) { +count = toupper( n ); }
        if(env_var_0 == 176) { +it.second = ans; }
        if(env_var_0 == 177) { +it.second = arr; }
        if(env_var_0 == 178) { +it.second = arr+ans; }
        if(env_var_0 == 179) { +it.second = arr+count; }
        if(env_var_0 == 180) { +it.second = arr+it.second; }
        if(env_var_0 == 181) { +it.second = arr+n; }
        if(env_var_0 == 182) { +it.second = arr[ans]; }
        if(env_var_0 == 183) { +it.second = arr[count]; }
        if(env_var_0 == 184) { +it.second = arr[it.second]; }
        if(env_var_0 == 185) { +it.second = arr[n]; }
        if(env_var_0 == 186) { +it.second = count; }
        if(env_var_0 == 187) { +it.second = isupper( ans ); }
        if(env_var_0 == 188) { +it.second = isupper( arr[ans] ); }
        if(env_var_0 == 189) { +it.second = isupper( arr[count] ); }
        if(env_var_0 == 190) { +it.second = isupper( arr[it.second] ); }
        if(env_var_0 == 191) { +it.second = isupper( arr[n] ); }
        if(env_var_0 == 192) { +it.second = isupper( count ); }
        if(env_var_0 == 193) { +it.second = isupper( it.first ); }
        if(env_var_0 == 194) { +it.second = isupper( it.second ); }
        if(env_var_0 == 195) { +it.second = isupper( n ); }
        if(env_var_0 == 196) { +it.second = it; }
        if(env_var_0 == 197) { +it.second = it.first; }
        if(env_var_0 == 198) { +it.second = it.second; }
        if(env_var_0 == 199) { +it.second = mp; }
        if(env_var_0 == 200) { +it.second = mp.begin(); }
        if(env_var_0 == 201) { +it.second = mp.cbegin(); }
        if(env_var_0 == 202) { +it.second = mp.clear(); }
        if(env_var_0 == 203) { +it.second = mp.crbegin(); }
        if(env_var_0 == 204) { +it.second = mp.empty(); }
        if(env_var_0 == 205) { +it.second = mp.end(); }
        if(env_var_0 == 206) { +it.second = mp.key_comp(); }
        if(env_var_0 == 207) { +it.second = mp.max_size(); }
        if(env_var_0 == 208) { +it.second = mp.rbegin(); }
        if(env_var_0 == 209) { +it.second = mp.rend(); }
        if(env_var_0 == 210) { +it.second = n; }
        if(env_var_0 == 211) { +it.second = toupper( ans ); }
        if(env_var_0 == 212) { +it.second = toupper( arr[ans] ); }
        if(env_var_0 == 213) { +it.second = toupper( arr[count] ); }
        if(env_var_0 == 214) { +it.second = toupper( arr[it.second] ); }
        if(env_var_0 == 215) { +it.second = toupper( arr[n] ); }
        if(env_var_0 == 216) { +it.second = toupper( count ); }
        if(env_var_0 == 217) { +it.second = toupper( it.first ); }
        if(env_var_0 == 218) { +it.second = toupper( it.second ); }
        if(env_var_0 == 219) { +it.second = toupper( n ); }
        if(env_var_0 == 220) { +n = ans; }
        if(env_var_0 == 221) { +n = arr; }
        if(env_var_0 == 222) { +n = arr+ans; }
        if(env_var_0 == 223) { +n = arr+count; }
        if(env_var_0 == 224) { +n = arr+it.second; }
        if(env_var_0 == 225) { +n = arr+n; }
        if(env_var_0 == 226) { +n = arr[ans]; }
        if(env_var_0 == 227) { +n = arr[count]; }
        if(env_var_0 == 228) { +n = arr[it.second]; }
        if(env_var_0 == 229) { +n = arr[n]; }
        if(env_var_0 == 230) { +n = count; }
        if(env_var_0 == 231) { +n = isupper( ans ); }
        if(env_var_0 == 232) { +n = isupper( arr[ans] ); }
        if(env_var_0 == 233) { +n = isupper( arr[count] ); }
        if(env_var_0 == 234) { +n = isupper( arr[it.second] ); }
        if(env_var_0 == 235) { +n = isupper( arr[n] ); }
        if(env_var_0 == 236) { +n = isupper( count ); }
        if(env_var_0 == 237) { +n = isupper( it.first ); }
        if(env_var_0 == 238) { +n = isupper( it.second ); }
        if(env_var_0 == 239) { +n = isupper( n ); }
        if(env_var_0 == 240) { +n = it; }
        if(env_var_0 == 241) { +n = it.first; }
        if(env_var_0 == 242) { +n = it.second; }
        if(env_var_0 == 243) { +n = mp; }
        if(env_var_0 == 244) { +n = mp.begin(); }
        if(env_var_0 == 245) { +n = mp.cbegin(); }
        if(env_var_0 == 246) { +n = mp.clear(); }
        if(env_var_0 == 247) { +n = mp.crbegin(); }
        if(env_var_0 == 248) { +n = mp.empty(); }
        if(env_var_0 == 249) { +n = mp.end(); }
        if(env_var_0 == 250) { +n = mp.key_comp(); }
        if(env_var_0 == 251) { +n = mp.max_size(); }
        if(env_var_0 == 252) { +n = mp.rbegin(); }
        if(env_var_0 == 253) { +n = mp.rend(); }
        if(env_var_0 == 254) { +n = n; }
        if(env_var_0 == 255) { +n = toupper( ans ); }
        if(env_var_0 == 256) { +n = toupper( arr[ans] ); }
        if(env_var_0 == 257) { +n = toupper( arr[count] ); }
        if(env_var_0 == 258) { +n = toupper( arr[it.second] ); }
        if(env_var_0 == 259) { +n = toupper( arr[n] ); }
        if(env_var_0 == 260) { +n = toupper( count ); }
        if(env_var_0 == 261) { +n = toupper( it.first ); }
        if(env_var_0 == 262) { +n = toupper( it.second ); }
        if(env_var_0 == 263) { +n = toupper( n ); }
        if(env_var_0 == 264) { [ans] = ans; }
        if(env_var_0 == 265) { [ans] = arr; }
        if(env_var_0 == 266) { [ans] = arr+ans; }
        if(env_var_0 == 267) { [ans] = arr+count; }
        if(env_var_0 == 268) { [ans] = arr+it.second; }
        if(env_var_0 == 269) { [ans] = arr+n; }
        if(env_var_0 == 270) { [ans] = arr[ans]; }
        if(env_var_0 == 271) { [ans] = arr[count]; }
        if(env_var_0 == 272) { [ans] = arr[it.second]; }
        if(env_var_0 == 273) { [ans] = arr[n]; }
        if(env_var_0 == 274) { [ans] = count; }
        if(env_var_0 == 275) { [ans] = isupper( ans ); }
        if(env_var_0 == 276) { [ans] = isupper( arr[ans] ); }
        if(env_var_0 == 277) { [ans] = isupper( arr[count] ); }
        if(env_var_0 == 278) { [ans] = isupper( arr[it.second] ); }
        if(env_var_0 == 279) { [ans] = isupper( arr[n] ); }
        if(env_var_0 == 280) { [ans] = isupper( count ); }
        if(env_var_0 == 281) { [ans] = isupper( it.first ); }
        if(env_var_0 == 282) { [ans] = isupper( it.second ); }
        if(env_var_0 == 283) { [ans] = isupper( n ); }
        if(env_var_0 == 284) { [ans] = it; }
        if(env_var_0 == 285) { [ans] = it.first; }
        if(env_var_0 == 286) { [ans] = it.second; }
        if(env_var_0 == 287) { [ans] = mp; }
        if(env_var_0 == 288) { [ans] = mp.begin(); }
        if(env_var_0 == 289) { [ans] = mp.cbegin(); }
        if(env_var_0 == 290) { [ans] = mp.clear(); }
        if(env_var_0 == 291) { [ans] = mp.crbegin(); }
        if(env_var_0 == 292) { [ans] = mp.empty(); }
        if(env_var_0 == 293) { [ans] = mp.end(); }
        if(env_var_0 == 294) { [ans] = mp.key_comp(); }
        if(env_var_0 == 295) { [ans] = mp.max_size(); }
        if(env_var_0 == 296) { [ans] = mp.rbegin(); }
        if(env_var_0 == 297) { [ans] = mp.rend(); }
        if(env_var_0 == 298) { [ans] = n; }
        if(env_var_0 == 299) { [ans] = toupper( ans ); }
        if(env_var_0 == 300) { [ans] = toupper( arr[ans] ); }
        if(env_var_0 == 301) { [ans] = toupper( arr[count] ); }
        if(env_var_0 == 302) { [ans] = toupper( arr[it.second] ); }
        if(env_var_0 == 303) { [ans] = toupper( arr[n] ); }
        if(env_var_0 == 304) { [ans] = toupper( count ); }
        if(env_var_0 == 305) { [ans] = toupper( it.first ); }
        if(env_var_0 == 306) { [ans] = toupper( it.second ); }
        if(env_var_0 == 307) { [ans] = toupper( n ); }
        if(env_var_0 == 308) { [count] = ans; }
        if(env_var_0 == 309) { [count] = arr; }
        if(env_var_0 == 310) { [count] = arr+ans; }
        if(env_var_0 == 311) { [count] = arr+count; }
        if(env_var_0 == 312) { [count] = arr+it.second; }
        if(env_var_0 == 313) { [count] = arr+n; }
        if(env_var_0 == 314) { [count] = arr[ans]; }
        if(env_var_0 == 315) { [count] = arr[count]; }
        if(env_var_0 == 316) { [count] = arr[it.second]; }
        if(env_var_0 == 317) { [count] = arr[n]; }
        if(env_var_0 == 318) { [count] = count; }
        if(env_var_0 == 319) { [count] = isupper( ans ); }
        if(env_var_0 == 320) { [count] = isupper( arr[ans] ); }
        if(env_var_0 == 321) { [count] = isupper( arr[count] ); }
        if(env_var_0 == 322) { [count] = isupper( arr[it.second] ); }
        if(env_var_0 == 323) { [count] = isupper( arr[n] ); }
        if(env_var_0 == 324) { [count] = isupper( count ); }
        if(env_var_0 == 325) { [count] = isupper( it.first ); }
        if(env_var_0 == 326) { [count] = isupper( it.second ); }
        if(env_var_0 == 327) { [count] = isupper( n ); }
        if(env_var_0 == 328) { [count] = it; }
        if(env_var_0 == 329) { [count] = it.first; }
        if(env_var_0 == 330) { [count] = it.second; }
        if(env_var_0 == 331) { [count] = mp; }
        if(env_var_0 == 332) { [count] = mp.begin(); }
        if(env_var_0 == 333) { [count] = mp.cbegin(); }
        if(env_var_0 == 334) { [count] = mp.clear(); }
        if(env_var_0 == 335) { [count] = mp.crbegin(); }
        if(env_var_0 == 336) { [count] = mp.empty(); }
        if(env_var_0 == 337) { [count] = mp.end(); }
        if(env_var_0 == 338) { [count] = mp.key_comp(); }
        if(env_var_0 == 339) { [count] = mp.max_size(); }
        if(env_var_0 == 340) { [count] = mp.rbegin(); }
        if(env_var_0 == 341) { [count] = mp.rend(); }
        if(env_var_0 == 342) { [count] = n; }
        if(env_var_0 == 343) { [count] = toupper( ans ); }
        if(env_var_0 == 344) { [count] = toupper( arr[ans] ); }
        if(env_var_0 == 345) { [count] = toupper( arr[count] ); }
        if(env_var_0 == 346) { [count] = toupper( arr[it.second] ); }
        if(env_var_0 == 347) { [count] = toupper( arr[n] ); }
        if(env_var_0 == 348) { [count] = toupper( count ); }
        if(env_var_0 == 349) { [count] = toupper( it.first ); }
        if(env_var_0 == 350) { [count] = toupper( it.second ); }
        if(env_var_0 == 351) { [count] = toupper( n ); }
        if(env_var_0 == 352) { [it.second] = ans; }
        if(env_var_0 == 353) { [it.second] = arr; }
        if(env_var_0 == 354) { [it.second] = arr+ans; }
        if(env_var_0 == 355) { [it.second] = arr+count; }
        if(env_var_0 == 356) { [it.second] = arr+it.second; }
        if(env_var_0 == 357) { [it.second] = arr+n; }
        if(env_var_0 == 358) { [it.second] = arr[ans]; }
        if(env_var_0 == 359) { [it.second] = arr[count]; }
        if(env_var_0 == 360) { [it.second] = arr[it.second]; }
        if(env_var_0 == 361) { [it.second] = arr[n]; }
        if(env_var_0 == 362) { [it.second] = count; }
        if(env_var_0 == 363) { [it.second] = isupper( ans ); }
        if(env_var_0 == 364) { [it.second] = isupper( arr[ans] ); }
        if(env_var_0 == 365) { [it.second] = isupper( arr[count] ); }
        if(env_var_0 == 366) { [it.second] = isupper( arr[it.second] ); }
        if(env_var_0 == 367) { [it.second] = isupper( arr[n] ); }
        if(env_var_0 == 368) { [it.second] = isupper( count ); }
        if(env_var_0 == 369) { [it.second] = isupper( it.first ); }
        if(env_var_0 == 370) { [it.second] = isupper( it.second ); }
        if(env_var_0 == 371) { [it.second] = isupper( n ); }
        if(env_var_0 == 372) { [it.second] = it; }
        if(env_var_0 == 373) { [it.second] = it.first; }
        if(env_var_0 == 374) { [it.second] = it.second; }
        if(env_var_0 == 375) { [it.second] = mp; }
        if(env_var_0 == 376) { [it.second] = mp.begin(); }
        if(env_var_0 == 377) { [it.second] = mp.cbegin(); }
        if(env_var_0 == 378) { [it.second] = mp.clear(); }
        if(env_var_0 == 379) { [it.second] = mp.crbegin(); }
        if(env_var_0 == 380) { [it.second] = mp.empty(); }
        if(env_var_0 == 381) { [it.second] = mp.end(); }
        if(env_var_0 == 382) { [it.second] = mp.key_comp(); }
        if(env_var_0 == 383) { [it.second] = mp.max_size(); }
        if(env_var_0 == 384) { [it.second] = mp.rbegin(); }
        if(env_var_0 == 385) { [it.second] = mp.rend(); }
        if(env_var_0 == 386) { [it.second] = n; }
        if(env_var_0 == 387) { [it.second] = toupper( ans ); }
        if(env_var_0 == 388) { [it.second] = toupper( arr[ans] ); }
        if(env_var_0 == 389) { [it.second] = toupper( arr[count] ); }
        if(env_var_0 == 390) { [it.second] = toupper( arr[it.second] ); }
        if(env_var_0 == 391) { [it.second] = toupper( arr[n] ); }
        if(env_var_0 == 392) { [it.second] = toupper( count ); }
        if(env_var_0 == 393) { [it.second] = toupper( it.first ); }
        if(env_var_0 == 394) { [it.second] = toupper( it.second ); }
        if(env_var_0 == 395) { [it.second] = toupper( n ); }
        if(env_var_0 == 396) { [n] = ans; }
        if(env_var_0 == 397) { [n] = arr; }
        if(env_var_0 == 398) { [n] = arr+ans; }
        if(env_var_0 == 399) { [n] = arr+count; }
        if(env_var_0 == 400) { [n] = arr+it.second; }
        if(env_var_0 == 401) { [n] = arr+n; }
        if(env_var_0 == 402) { [n] = arr[ans]; }
        if(env_var_0 == 403) { [n] = arr[count]; }
        if(env_var_0 == 404) { [n] = arr[it.second]; }
        if(env_var_0 == 405) { [n] = arr[n]; }
        if(env_var_0 == 406) { [n] = count; }
        if(env_var_0 == 407) { [n] = isupper( ans ); }
        if(env_var_0 == 408) { [n] = isupper( arr[ans] ); }
        if(env_var_0 == 409) { [n] = isupper( arr[count] ); }
        if(env_var_0 == 410) { [n] = isupper( arr[it.second] ); }
        if(env_var_0 == 411) { [n] = isupper( arr[n] ); }
        if(env_var_0 == 412) { [n] = isupper( count ); }
        if(env_var_0 == 413) { [n] = isupper( it.first ); }
        if(env_var_0 == 414) { [n] = isupper( it.second ); }
        if(env_var_0 == 415) { [n] = isupper( n ); }
        if(env_var_0 == 416) { [n] = it; }
        if(env_var_0 == 417) { [n] = it.first; }
        if(env_var_0 == 418) { [n] = it.second; }
        if(env_var_0 == 419) { [n] = mp; }
        if(env_var_0 == 420) { [n] = mp.begin(); }
        if(env_var_0 == 421) { [n] = mp.cbegin(); }
        if(env_var_0 == 422) { [n] = mp.clear(); }
        if(env_var_0 == 423) { [n] = mp.crbegin(); }
        if(env_var_0 == 424) { [n] = mp.empty(); }
        if(env_var_0 == 425) { [n] = mp.end(); }
        if(env_var_0 == 426) { [n] = mp.key_comp(); }
        if(env_var_0 == 427) { [n] = mp.max_size(); }
        if(env_var_0 == 428) { [n] = mp.rbegin(); }
        if(env_var_0 == 429) { [n] = mp.rend(); }
        if(env_var_0 == 430) { [n] = n; }
        if(env_var_0 == 431) { [n] = toupper( ans ); }
        if(env_var_0 == 432) { [n] = toupper( arr[ans] ); }
        if(env_var_0 == 433) { [n] = toupper( arr[count] ); }
        if(env_var_0 == 434) { [n] = toupper( arr[it.second] ); }
        if(env_var_0 == 435) { [n] = toupper( arr[n] ); }
        if(env_var_0 == 436) { [n] = toupper( count ); }
        if(env_var_0 == 437) { [n] = toupper( it.first ); }
        if(env_var_0 == 438) { [n] = toupper( it.second ); }
        if(env_var_0 == 439) { [n] = toupper( n ); }
        if(env_var_0 == 440) { nt = ans; }
        if(env_var_0 == 441) { nt = arr; }
        if(env_var_0 == 442) { nt = arr+ans; }
        if(env_var_0 == 443) { nt = arr+count; }
        if(env_var_0 == 444) { nt = arr+it.second; }
        if(env_var_0 == 445) { nt = arr+n; }
        if(env_var_0 == 446) { nt = arr[ans]; }
        if(env_var_0 == 447) { nt = arr[count]; }
        if(env_var_0 == 448) { nt = arr[it.second]; }
        if(env_var_0 == 449) { nt = arr[n]; }
        if(env_var_0 == 450) { nt = count; }
        if(env_var_0 == 451) { nt = isupper( ans ); }
        if(env_var_0 == 452) { nt = isupper( arr[ans] ); }
        if(env_var_0 == 453) { nt = isupper( arr[count] ); }
        if(env_var_0 == 454) { nt = isupper( arr[it.second] ); }
        if(env_var_0 == 455) { nt = isupper( arr[n] ); }
        if(env_var_0 == 456) { nt = isupper( count ); }
        if(env_var_0 == 457) { nt = isupper( it.first ); }
        if(env_var_0 == 458) { nt = isupper( it.second ); }
        if(env_var_0 == 459) { nt = isupper( n ); }
        if(env_var_0 == 460) { nt = it; }
        if(env_var_0 == 461) { nt = it.first; }
        if(env_var_0 == 462) { nt = it.second; }
        if(env_var_0 == 463) { nt = mp; }
        if(env_var_0 == 464) { nt = mp.begin(); }
        if(env_var_0 == 465) { nt = mp.cbegin(); }
        if(env_var_0 == 466) { nt = mp.clear(); }
        if(env_var_0 == 467) { nt = mp.crbegin(); }
        if(env_var_0 == 468) { nt = mp.empty(); }
        if(env_var_0 == 469) { nt = mp.end(); }
        if(env_var_0 == 470) { nt = mp.key_comp(); }
        if(env_var_0 == 471) { nt = mp.max_size(); }
        if(env_var_0 == 472) { nt = mp.rbegin(); }
        if(env_var_0 == 473) { nt = mp.rend(); }
        if(env_var_0 == 474) { nt = n; }
        if(env_var_0 == 475) { nt = toupper( ans ); }
        if(env_var_0 == 476) { nt = toupper( arr[ans] ); }
        if(env_var_0 == 477) { nt = toupper( arr[count] ); }
        if(env_var_0 == 478) { nt = toupper( arr[it.second] ); }
        if(env_var_0 == 479) { nt = toupper( arr[n] ); }
        if(env_var_0 == 480) { nt = toupper( count ); }
        if(env_var_0 == 481) { nt = toupper( it.first ); }
        if(env_var_0 == 482) { nt = toupper( it.second ); }
        if(env_var_0 == 483) { nt = toupper( n ); }
        if(env_var_0 == 484) { = ans; }
        if(env_var_0 == 485) { = arr; }
        if(env_var_0 == 486) { = arr+ans; }
        if(env_var_0 == 487) { = arr+count; }
        if(env_var_0 == 488) { = arr+it.second; }
        if(env_var_0 == 489) { = arr+n; }
        if(env_var_0 == 490) { = arr[ans]; }
        if(env_var_0 == 491) { = arr[count]; }
        if(env_var_0 == 492) { = arr[it.second]; }
        if(env_var_0 == 493) { = arr[n]; }
        if(env_var_0 == 494) { = count; }
        if(env_var_0 == 495) { = isupper( ans ); }
        if(env_var_0 == 496) { = isupper( arr[ans] ); }
        if(env_var_0 == 497) { = isupper( arr[count] ); }
        if(env_var_0 == 498) { = isupper( arr[it.second] ); }
        if(env_var_0 == 499) { = isupper( arr[n] ); }
        if(env_var_0 == 500) { = isupper( count ); }
        if(env_var_0 == 501) { = isupper( it.first ); }
        if(env_var_0 == 502) { = isupper( it.second ); }
        if(env_var_0 == 503) { = isupper( n ); }
        if(env_var_0 == 504) { = it; }
        if(env_var_0 == 505) { = it.first; }
        if(env_var_0 == 506) { = it.second; }
        if(env_var_0 == 507) { = mp; }
        if(env_var_0 == 508) { = mp.begin(); }
        if(env_var_0 == 509) { = mp.cbegin(); }
        if(env_var_0 == 510) { = mp.clear(); }
        if(env_var_0 == 511) { = mp.crbegin(); }
        if(env_var_0 == 512) { = mp.empty(); }
        if(env_var_0 == 513) { = mp.end(); }
        if(env_var_0 == 514) { = mp.key_comp(); }
        if(env_var_0 == 515) { = mp.max_size(); }
        if(env_var_0 == 516) { = mp.rbegin(); }
        if(env_var_0 == 517) { = mp.rend(); }
        if(env_var_0 == 518) { = n; }
        if(env_var_0 == 519) { = toupper( ans ); }
        if(env_var_0 == 520) { = toupper( arr[ans] ); }
        if(env_var_0 == 521) { = toupper( arr[count] ); }
        if(env_var_0 == 522) { = toupper( arr[it.second] ); }
        if(env_var_0 == 523) { = toupper( arr[n] ); }
        if(env_var_0 == 524) { = toupper( count ); }
        if(env_var_0 == 525) { = toupper( it.first ); }
        if(env_var_0 == 526) { = toupper( it.second ); }
        if(env_var_0 == 527) { = toupper( n ); }
        if(env_var_0 == 528) { first = ans; }
        if(env_var_0 == 529) { first = arr; }
        if(env_var_0 == 530) { first = arr+ans; }
        if(env_var_0 == 531) { first = arr+count; }
        if(env_var_0 == 532) { first = arr+it.second; }
        if(env_var_0 == 533) { first = arr+n; }
        if(env_var_0 == 534) { first = arr[ans]; }
        if(env_var_0 == 535) { first = arr[count]; }
        if(env_var_0 == 536) { first = arr[it.second]; }
        if(env_var_0 == 537) { first = arr[n]; }
        if(env_var_0 == 538) { first = count; }
        if(env_var_0 == 539) { first = isupper( ans ); }
        if(env_var_0 == 540) { first = isupper( arr[ans] ); }
        if(env_var_0 == 541) { first = isupper( arr[count] ); }
        if(env_var_0 == 542) { first = isupper( arr[it.second] ); }
        if(env_var_0 == 543) { first = isupper( arr[n] ); }
        if(env_var_0 == 544) { first = isupper( count ); }
        if(env_var_0 == 545) { first = isupper( it.first ); }
        if(env_var_0 == 546) { first = isupper( it.second ); }
        if(env_var_0 == 547) { first = isupper( n ); }
        if(env_var_0 == 548) { first = it; }
        if(env_var_0 == 549) { first = it.first; }
        if(env_var_0 == 550) { first = it.second; }
        if(env_var_0 == 551) { first = mp; }
        if(env_var_0 == 552) { first = mp.begin(); }
        if(env_var_0 == 553) { first = mp.cbegin(); }
        if(env_var_0 == 554) { first = mp.clear(); }
        if(env_var_0 == 555) { first = mp.crbegin(); }
        if(env_var_0 == 556) { first = mp.empty(); }
        if(env_var_0 == 557) { first = mp.end(); }
        if(env_var_0 == 558) { first = mp.key_comp(); }
        if(env_var_0 == 559) { first = mp.max_size(); }
        if(env_var_0 == 560) { first = mp.rbegin(); }
        if(env_var_0 == 561) { first = mp.rend(); }
        if(env_var_0 == 562) { first = n; }
        if(env_var_0 == 563) { first = toupper( ans ); }
        if(env_var_0 == 564) { first = toupper( arr[ans] ); }
        if(env_var_0 == 565) { first = toupper( arr[count] ); }
        if(env_var_0 == 566) { first = toupper( arr[it.second] ); }
        if(env_var_0 == 567) { first = toupper( arr[n] ); }
        if(env_var_0 == 568) { first = toupper( count ); }
        if(env_var_0 == 569) { first = toupper( it.first ); }
        if(env_var_0 == 570) { first = toupper( it.second ); }
        if(env_var_0 == 571) { first = toupper( n ); }
        if(env_var_0 == 572) { second = ans; }
        if(env_var_0 == 573) { second = arr; }
        if(env_var_0 == 574) { second = arr+ans; }
        if(env_var_0 == 575) { second = arr+count; }
        if(env_var_0 == 576) { second = arr+it.second; }
        if(env_var_0 == 577) { second = arr+n; }
        if(env_var_0 == 578) { second = arr[ans]; }
        if(env_var_0 == 579) { second = arr[count]; }
        if(env_var_0 == 580) { second = arr[it.second]; }
        if(env_var_0 == 581) { second = arr[n]; }
        if(env_var_0 == 582) { second = count; }
        if(env_var_0 == 583) { second = isupper( ans ); }
        if(env_var_0 == 584) { second = isupper( arr[ans] ); }
        if(env_var_0 == 585) { second = isupper( arr[count] ); }
        if(env_var_0 == 586) { second = isupper( arr[it.second] ); }
        if(env_var_0 == 587) { second = isupper( arr[n] ); }
        if(env_var_0 == 588) { second = isupper( count ); }
        if(env_var_0 == 589) { second = isupper( it.first ); }
        if(env_var_0 == 590) { second = isupper( it.second ); }
        if(env_var_0 == 591) { second = isupper( n ); }
        if(env_var_0 == 592) { second = it; }
        if(env_var_0 == 593) { second = it.first; }
        if(env_var_0 == 594) { second = it.second; }
        if(env_var_0 == 595) { second = mp; }
        if(env_var_0 == 596) { second = mp.begin(); }
        if(env_var_0 == 597) { second = mp.cbegin(); }
        if(env_var_0 == 598) { second = mp.clear(); }
        if(env_var_0 == 599) { second = mp.crbegin(); }
        if(env_var_0 == 600) { second = mp.empty(); }
        if(env_var_0 == 601) { second = mp.end(); }
        if(env_var_0 == 602) { second = mp.key_comp(); }
        if(env_var_0 == 603) { second = mp.max_size(); }
        if(env_var_0 == 604) { second = mp.rbegin(); }
        if(env_var_0 == 605) { second = mp.rend(); }
        if(env_var_0 == 606) { second = n; }
        if(env_var_0 == 607) { second = toupper( ans ); }
        if(env_var_0 == 608) { second = toupper( arr[ans] ); }
        if(env_var_0 == 609) { second = toupper( arr[count] ); }
        if(env_var_0 == 610) { second = toupper( arr[it.second] ); }
        if(env_var_0 == 611) { second = toupper( arr[n] ); }
        if(env_var_0 == 612) { second = toupper( count ); }
        if(env_var_0 == 613) { second = toupper( it.first ); }
        if(env_var_0 == 614) { second = toupper( it.second ); }
        if(env_var_0 == 615) { second = toupper( n ); }
        if(env_var_0 == 616) { = ans; }
        if(env_var_0 == 617) { = arr; }
        if(env_var_0 == 618) { = arr+ans; }
        if(env_var_0 == 619) { = arr+count; }
        if(env_var_0 == 620) { = arr+it.second; }
        if(env_var_0 == 621) { = arr+n; }
        if(env_var_0 == 622) { = arr[ans]; }
        if(env_var_0 == 623) { = arr[count]; }
        if(env_var_0 == 624) { = arr[it.second]; }
        if(env_var_0 == 625) { = arr[n]; }
        if(env_var_0 == 626) { = count; }
        if(env_var_0 == 627) { = isupper( ans ); }
        if(env_var_0 == 628) { = isupper( arr[ans] ); }
        if(env_var_0 == 629) { = isupper( arr[count] ); }
        if(env_var_0 == 630) { = isupper( arr[it.second] ); }
        if(env_var_0 == 631) { = isupper( arr[n] ); }
        if(env_var_0 == 632) { = isupper( count ); }
        if(env_var_0 == 633) { = isupper( it.first ); }
        if(env_var_0 == 634) { = isupper( it.second ); }
        if(env_var_0 == 635) { = isupper( n ); }
        if(env_var_0 == 636) { = it; }
        if(env_var_0 == 637) { = it.first; }
        if(env_var_0 == 638) { = it.second; }
        if(env_var_0 == 639) { = mp; }
        if(env_var_0 == 640) { = mp.begin(); }
        if(env_var_0 == 641) { = mp.cbegin(); }
        if(env_var_0 == 642) { = mp.clear(); }
        if(env_var_0 == 643) { = mp.crbegin(); }
        if(env_var_0 == 644) { = mp.empty(); }
        if(env_var_0 == 645) { = mp.end(); }
        if(env_var_0 == 646) { = mp.key_comp(); }
        if(env_var_0 == 647) { = mp.max_size(); }
        if(env_var_0 == 648) { = mp.rbegin(); }
        if(env_var_0 == 649) { = mp.rend(); }
        if(env_var_0 == 650) { = n; }
        if(env_var_0 == 651) { = toupper( ans ); }
        if(env_var_0 == 652) { = toupper( arr[ans] ); }
        if(env_var_0 == 653) { = toupper( arr[count] ); }
        if(env_var_0 == 654) { = toupper( arr[it.second] ); }
        if(env_var_0 == 655) { = toupper( arr[n] ); }
        if(env_var_0 == 656) { = toupper( count ); }
        if(env_var_0 == 657) { = toupper( it.first ); }
        if(env_var_0 == 658) { = toupper( it.second ); }
        if(env_var_0 == 659) { = toupper( n ); }
        if(env_var_0 == 660) { begin() = ans; }
        if(env_var_0 == 661) { begin() = arr; }
        if(env_var_0 == 662) { begin() = arr+ans; }
        if(env_var_0 == 663) { begin() = arr+count; }
        if(env_var_0 == 664) { begin() = arr+it.second; }
        if(env_var_0 == 665) { begin() = arr+n; }
        if(env_var_0 == 666) { begin() = arr[ans]; }
        if(env_var_0 == 667) { begin() = arr[count]; }
        if(env_var_0 == 668) { begin() = arr[it.second]; }
        if(env_var_0 == 669) { begin() = arr[n]; }
        if(env_var_0 == 670) { begin() = count; }
        if(env_var_0 == 671) { begin() = isupper( ans ); }
        if(env_var_0 == 672) { begin() = isupper( arr[ans] ); }
        if(env_var_0 == 673) { begin() = isupper( arr[count] ); }
        if(env_var_0 == 674) { begin() = isupper( arr[it.second] ); }
        if(env_var_0 == 675) { begin() = isupper( arr[n] ); }
        if(env_var_0 == 676) { begin() = isupper( count ); }
        if(env_var_0 == 677) { begin() = isupper( it.first ); }
        if(env_var_0 == 678) { begin() = isupper( it.second ); }
        if(env_var_0 == 679) { begin() = isupper( n ); }
        if(env_var_0 == 680) { begin() = it; }
        if(env_var_0 == 681) { begin() = it.first; }
        if(env_var_0 == 682) { begin() = it.second; }
        if(env_var_0 == 683) { begin() = mp; }
        if(env_var_0 == 684) { begin() = mp.begin(); }
        if(env_var_0 == 685) { begin() = mp.cbegin(); }
        if(env_var_0 == 686) { begin() = mp.clear(); }
        if(env_var_0 == 687) { begin() = mp.crbegin(); }
        if(env_var_0 == 688) { begin() = mp.empty(); }
        if(env_var_0 == 689) { begin() = mp.end(); }
        if(env_var_0 == 690) { begin() = mp.key_comp(); }
        if(env_var_0 == 691) { begin() = mp.max_size(); }
        if(env_var_0 == 692) { begin() = mp.rbegin(); }
        if(env_var_0 == 693) { begin() = mp.rend(); }
        if(env_var_0 == 694) { begin() = n; }
        if(env_var_0 == 695) { begin() = toupper( ans ); }
        if(env_var_0 == 696) { begin() = toupper( arr[ans] ); }
        if(env_var_0 == 697) { begin() = toupper( arr[count] ); }
        if(env_var_0 == 698) { begin() = toupper( arr[it.second] ); }
        if(env_var_0 == 699) { begin() = toupper( arr[n] ); }
        if(env_var_0 == 700) { begin() = toupper( count ); }
        if(env_var_0 == 701) { begin() = toupper( it.first ); }
        if(env_var_0 == 702) { begin() = toupper( it.second ); }
        if(env_var_0 == 703) { begin() = toupper( n ); }
        if(env_var_0 == 704) { end() = ans; }
        if(env_var_0 == 705) { end() = arr; }
        if(env_var_0 == 706) { end() = arr+ans; }
        if(env_var_0 == 707) { end() = arr+count; }
        if(env_var_0 == 708) { end() = arr+it.second; }
        if(env_var_0 == 709) { end() = arr+n; }
        if(env_var_0 == 710) { end() = arr[ans]; }
        if(env_var_0 == 711) { end() = arr[count]; }
        if(env_var_0 == 712) { end() = arr[it.second]; }
        if(env_var_0 == 713) { end() = arr[n]; }
        if(env_var_0 == 714) { end() = count; }
        if(env_var_0 == 715) { end() = isupper( ans ); }
        if(env_var_0 == 716) { end() = isupper( arr[ans] ); }
        if(env_var_0 == 717) { end() = isupper( arr[count] ); }
        if(env_var_0 == 718) { end() = isupper( arr[it.second] ); }
        if(env_var_0 == 719) { end() = isupper( arr[n] ); }
        if(env_var_0 == 720) { end() = isupper( count ); }
        if(env_var_0 == 721) { end() = isupper( it.first ); }
        if(env_var_0 == 722) { end() = isupper( it.second ); }
        if(env_var_0 == 723) { end() = isupper( n ); }
        if(env_var_0 == 724) { end() = it; }
        if(env_var_0 == 725) { end() = it.first; }
        if(env_var_0 == 726) { end() = it.second; }
        if(env_var_0 == 727) { end() = mp; }
        if(env_var_0 == 728) { end() = mp.begin(); }
        if(env_var_0 == 729) { end() = mp.cbegin(); }
        if(env_var_0 == 730) { end() = mp.clear(); }
        if(env_var_0 == 731) { end() = mp.crbegin(); }
        if(env_var_0 == 732) { end() = mp.empty(); }
        if(env_var_0 == 733) { end() = mp.end(); }
        if(env_var_0 == 734) { end() = mp.key_comp(); }
        if(env_var_0 == 735) { end() = mp.max_size(); }
        if(env_var_0 == 736) { end() = mp.rbegin(); }
        if(env_var_0 == 737) { end() = mp.rend(); }
        if(env_var_0 == 738) { end() = n; }
        if(env_var_0 == 739) { end() = toupper( ans ); }
        if(env_var_0 == 740) { end() = toupper( arr[ans] ); }
        if(env_var_0 == 741) { end() = toupper( arr[count] ); }
        if(env_var_0 == 742) { end() = toupper( arr[it.second] ); }
        if(env_var_0 == 743) { end() = toupper( arr[n] ); }
        if(env_var_0 == 744) { end() = toupper( count ); }
        if(env_var_0 == 745) { end() = toupper( it.first ); }
        if(env_var_0 == 746) { end() = toupper( it.second ); }
        if(env_var_0 == 747) { end() = toupper( n ); }
        if(env_var_0 == 748) {  ans; }
        if(env_var_0 == 749) {  arr; }
        if(env_var_0 == 750) {  arr+ans; }
        if(env_var_0 == 751) {  arr+count; }
        if(env_var_0 == 752) {  arr+it.second; }
        if(env_var_0 == 753) {  arr+n; }
        if(env_var_0 == 754) {  arr[ans]; }
        if(env_var_0 == 755) {  arr[count]; }
        if(env_var_0 == 756) {  arr[it.second]; }
        if(env_var_0 == 757) {  arr[n]; }
        if(env_var_0 == 758) {  count; }
        if(env_var_0 == 759) {  isupper( ans ); }
        if(env_var_0 == 760) {  isupper( arr[ans] ); }
        if(env_var_0 == 761) {  isupper( arr[count] ); }
        if(env_var_0 == 762) {  isupper( arr[it.second] ); }
        if(env_var_0 == 763) {  isupper( arr[n] ); }
        if(env_var_0 == 764) {  isupper( count ); }
        if(env_var_0 == 765) {  isupper( it.first ); }
        if(env_var_0 == 766) {  isupper( it.second ); }
        if(env_var_0 == 767) {  isupper( n ); }
        if(env_var_0 == 768) {  it; }
        if(env_var_0 == 769) {  it.first; }
        if(env_var_0 == 770) {  it.second; }
        if(env_var_0 == 771) {  mp; }
        if(env_var_0 == 772) {  mp.begin(); }
        if(env_var_0 == 773) {  mp.cbegin(); }
        if(env_var_0 == 774) {  mp.clear(); }
        if(env_var_0 == 775) {  mp.crbegin(); }
        if(env_var_0 == 776) {  mp.empty(); }
        if(env_var_0 == 777) {  mp.end(); }
        if(env_var_0 == 778) {  mp.key_comp(); }
        if(env_var_0 == 779) {  mp.max_size(); }
        if(env_var_0 == 780) {  mp.rbegin(); }
        if(env_var_0 == 781) {  mp.rend(); }
        if(env_var_0 == 782) {  n; }
        if(env_var_0 == 783) {  toupper( ans ); }
        if(env_var_0 == 784) {  toupper( arr[ans] ); }
        if(env_var_0 == 785) {  toupper( arr[count] ); }
        if(env_var_0 == 786) {  toupper( arr[it.second] ); }
        if(env_var_0 == 787) {  toupper( arr[n] ); }
        if(env_var_0 == 788) {  toupper( count ); }
        if(env_var_0 == 789) {  toupper( it.first ); }
        if(env_var_0 == 790) {  toupper( it.second ); }
        if(env_var_0 == 791) {  toupper( n ); }

        ans += (count * (count - 1)) / 2;
    }
    return ans;
}



int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{5,11,18,22,40,46,50,51,53,55,64,67,73,78,86},{14,-98,98,58,-82,90,-80,-56,-30,-36,-56,-30,-58,68,72,-76,38,-90,-72,4,-32,32,-28,2,12,-72,54,2,0,-74,8,12,46,72,-84,-66,70,18,26,72,-26,44,-8,20,-32,-56,28},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{93,23,62,64,31,78,99},{-94,-94,-92,-86,-84,-76,-76,-68,-66,-56,-56,-54,-50,-46,-38,-34,-34,-30,-26,-18,-16,2,8,42,52,54,56,64,68,82,82,82,94,96,98},{0},{3,18,18,20,21,23,24,27,35,36,38,40,46,50,50,51,52,53,59,61,63,63,65,66,68,68,70,71,74,75,96,98},{-68,40,16,50,36,42,-20,-46,-92,4,-18,-12,48,0,-46,64,-74,-50,42,44,-56,28,-10,78,62,70,-60,12,-44,-78},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{31,5}};
    vector<int> param1 {14,24,13,4,19,0,19,23,30,1};
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
