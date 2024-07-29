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
int f_gold ( int arr [ ], int n, int k ) {
  int max = * max_element ( arr, arr + n );
  int res = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ( max - arr [ i ] ) % k != 0 ) return - 1;
    else res += ( max - arr [ i ] ) / k;
  }
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int arr[], int n, int k)
    {
       int max1 ;
        if(env_var_0 == 0) {  = *std::max_element( arr,arr ); }
        if(env_var_0 == 1) {  = arr; }
        if(env_var_0 == 2) {  = arr+k; }
        if(env_var_0 == 3) {  = arr+max1; }
        if(env_var_0 == 4) {  = arr+n; }
        if(env_var_0 == 5) {  = arr[k]; }
        if(env_var_0 == 6) {  = arr[max1]; }
        if(env_var_0 == 7) {  = arr[n]; }
        if(env_var_0 == 8) {  = isupper( arr[k] ); }
        if(env_var_0 == 9) {  = isupper( arr[max1] ); }
        if(env_var_0 == 10) {  = isupper( arr[n] ); }
        if(env_var_0 == 11) {  = isupper( k ); }
        if(env_var_0 == 12) {  = isupper( max1 ); }
        if(env_var_0 == 13) {  = isupper( n ); }
        if(env_var_0 == 14) {  = k; }
        if(env_var_0 == 15) {  = max1; }
        if(env_var_0 == 16) {  = n; }
        if(env_var_0 == 17) {  = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 18) {  = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 19) {  = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 20) {  = std::max( arr[k],k ); }
        if(env_var_0 == 21) {  = std::max( arr[k],max1 ); }
        if(env_var_0 == 22) {  = std::max( arr[k],n ); }
        if(env_var_0 == 23) {  = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 24) {  = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 25) {  = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 26) {  = std::max( arr[max1],k ); }
        if(env_var_0 == 27) {  = std::max( arr[max1],max1 ); }
        if(env_var_0 == 28) {  = std::max( arr[max1],n ); }
        if(env_var_0 == 29) {  = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 30) {  = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 31) {  = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 32) {  = std::max( arr[n],k ); }
        if(env_var_0 == 33) {  = std::max( arr[n],max1 ); }
        if(env_var_0 == 34) {  = std::max( arr[n],n ); }
        if(env_var_0 == 35) {  = std::max( k,arr[k] ); }
        if(env_var_0 == 36) {  = std::max( k,arr[max1] ); }
        if(env_var_0 == 37) {  = std::max( k,arr[n] ); }
        if(env_var_0 == 38) {  = std::max( k,k ); }
        if(env_var_0 == 39) {  = std::max( k,max1 ); }
        if(env_var_0 == 40) {  = std::max( k,n ); }
        if(env_var_0 == 41) {  = std::max( max1,arr[k] ); }
        if(env_var_0 == 42) {  = std::max( max1,arr[max1] ); }
        if(env_var_0 == 43) {  = std::max( max1,arr[n] ); }
        if(env_var_0 == 44) {  = std::max( max1,k ); }
        if(env_var_0 == 45) {  = std::max( max1,max1 ); }
        if(env_var_0 == 46) {  = std::max( max1,n ); }
        if(env_var_0 == 47) {  = std::max( n,arr[k] ); }
        if(env_var_0 == 48) {  = std::max( n,arr[max1] ); }
        if(env_var_0 == 49) {  = std::max( n,arr[n] ); }
        if(env_var_0 == 50) {  = std::max( n,k ); }
        if(env_var_0 == 51) {  = std::max( n,max1 ); }
        if(env_var_0 == 52) {  = std::max( n,n ); }
        if(env_var_0 == 53) {  = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 54) {  = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 55) {  = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 56) {  = std::min( arr[k],k ); }
        if(env_var_0 == 57) {  = std::min( arr[k],max1 ); }
        if(env_var_0 == 58) {  = std::min( arr[k],n ); }
        if(env_var_0 == 59) {  = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 60) {  = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 61) {  = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 62) {  = std::min( arr[max1],k ); }
        if(env_var_0 == 63) {  = std::min( arr[max1],max1 ); }
        if(env_var_0 == 64) {  = std::min( arr[max1],n ); }
        if(env_var_0 == 65) {  = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 66) {  = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 67) {  = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 68) {  = std::min( arr[n],k ); }
        if(env_var_0 == 69) {  = std::min( arr[n],max1 ); }
        if(env_var_0 == 70) {  = std::min( arr[n],n ); }
        if(env_var_0 == 71) {  = std::min( k,arr[k] ); }
        if(env_var_0 == 72) {  = std::min( k,arr[max1] ); }
        if(env_var_0 == 73) {  = std::min( k,arr[n] ); }
        if(env_var_0 == 74) {  = std::min( k,k ); }
        if(env_var_0 == 75) {  = std::min( k,max1 ); }
        if(env_var_0 == 76) {  = std::min( k,n ); }
        if(env_var_0 == 77) {  = std::min( max1,arr[k] ); }
        if(env_var_0 == 78) {  = std::min( max1,arr[max1] ); }
        if(env_var_0 == 79) {  = std::min( max1,arr[n] ); }
        if(env_var_0 == 80) {  = std::min( max1,k ); }
        if(env_var_0 == 81) {  = std::min( max1,max1 ); }
        if(env_var_0 == 82) {  = std::min( max1,n ); }
        if(env_var_0 == 83) {  = std::min( n,arr[k] ); }
        if(env_var_0 == 84) {  = std::min( n,arr[max1] ); }
        if(env_var_0 == 85) {  = std::min( n,arr[n] ); }
        if(env_var_0 == 86) {  = std::min( n,k ); }
        if(env_var_0 == 87) {  = std::min( n,max1 ); }
        if(env_var_0 == 88) {  = std::min( n,n ); }
        if(env_var_0 == 89) {  = toupper( arr[k] ); }
        if(env_var_0 == 90) {  = toupper( arr[max1] ); }
        if(env_var_0 == 91) {  = toupper( arr[n] ); }
        if(env_var_0 == 92) {  = toupper( k ); }
        if(env_var_0 == 93) {  = toupper( max1 ); }
        if(env_var_0 == 94) {  = toupper( n ); }
        if(env_var_0 == 95) { +k = *std::max_element( arr,arr ); }
        if(env_var_0 == 96) { +k = arr; }
        if(env_var_0 == 97) { +k = arr+k; }
        if(env_var_0 == 98) { +k = arr+max1; }
        if(env_var_0 == 99) { +k = arr+n; }
        if(env_var_0 == 100) { +k = arr[k]; }
        if(env_var_0 == 101) { +k = arr[max1]; }
        if(env_var_0 == 102) { +k = arr[n]; }
        if(env_var_0 == 103) { +k = isupper( arr[k] ); }
        if(env_var_0 == 104) { +k = isupper( arr[max1] ); }
        if(env_var_0 == 105) { +k = isupper( arr[n] ); }
        if(env_var_0 == 106) { +k = isupper( k ); }
        if(env_var_0 == 107) { +k = isupper( max1 ); }
        if(env_var_0 == 108) { +k = isupper( n ); }
        if(env_var_0 == 109) { +k = k; }
        if(env_var_0 == 110) { +k = max1; }
        if(env_var_0 == 111) { +k = n; }
        if(env_var_0 == 112) { +k = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 113) { +k = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 114) { +k = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 115) { +k = std::max( arr[k],k ); }
        if(env_var_0 == 116) { +k = std::max( arr[k],max1 ); }
        if(env_var_0 == 117) { +k = std::max( arr[k],n ); }
        if(env_var_0 == 118) { +k = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 119) { +k = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 120) { +k = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 121) { +k = std::max( arr[max1],k ); }
        if(env_var_0 == 122) { +k = std::max( arr[max1],max1 ); }
        if(env_var_0 == 123) { +k = std::max( arr[max1],n ); }
        if(env_var_0 == 124) { +k = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 125) { +k = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 126) { +k = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 127) { +k = std::max( arr[n],k ); }
        if(env_var_0 == 128) { +k = std::max( arr[n],max1 ); }
        if(env_var_0 == 129) { +k = std::max( arr[n],n ); }
        if(env_var_0 == 130) { +k = std::max( k,arr[k] ); }
        if(env_var_0 == 131) { +k = std::max( k,arr[max1] ); }
        if(env_var_0 == 132) { +k = std::max( k,arr[n] ); }
        if(env_var_0 == 133) { +k = std::max( k,k ); }
        if(env_var_0 == 134) { +k = std::max( k,max1 ); }
        if(env_var_0 == 135) { +k = std::max( k,n ); }
        if(env_var_0 == 136) { +k = std::max( max1,arr[k] ); }
        if(env_var_0 == 137) { +k = std::max( max1,arr[max1] ); }
        if(env_var_0 == 138) { +k = std::max( max1,arr[n] ); }
        if(env_var_0 == 139) { +k = std::max( max1,k ); }
        if(env_var_0 == 140) { +k = std::max( max1,max1 ); }
        if(env_var_0 == 141) { +k = std::max( max1,n ); }
        if(env_var_0 == 142) { +k = std::max( n,arr[k] ); }
        if(env_var_0 == 143) { +k = std::max( n,arr[max1] ); }
        if(env_var_0 == 144) { +k = std::max( n,arr[n] ); }
        if(env_var_0 == 145) { +k = std::max( n,k ); }
        if(env_var_0 == 146) { +k = std::max( n,max1 ); }
        if(env_var_0 == 147) { +k = std::max( n,n ); }
        if(env_var_0 == 148) { +k = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 149) { +k = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 150) { +k = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 151) { +k = std::min( arr[k],k ); }
        if(env_var_0 == 152) { +k = std::min( arr[k],max1 ); }
        if(env_var_0 == 153) { +k = std::min( arr[k],n ); }
        if(env_var_0 == 154) { +k = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 155) { +k = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 156) { +k = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 157) { +k = std::min( arr[max1],k ); }
        if(env_var_0 == 158) { +k = std::min( arr[max1],max1 ); }
        if(env_var_0 == 159) { +k = std::min( arr[max1],n ); }
        if(env_var_0 == 160) { +k = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 161) { +k = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 162) { +k = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 163) { +k = std::min( arr[n],k ); }
        if(env_var_0 == 164) { +k = std::min( arr[n],max1 ); }
        if(env_var_0 == 165) { +k = std::min( arr[n],n ); }
        if(env_var_0 == 166) { +k = std::min( k,arr[k] ); }
        if(env_var_0 == 167) { +k = std::min( k,arr[max1] ); }
        if(env_var_0 == 168) { +k = std::min( k,arr[n] ); }
        if(env_var_0 == 169) { +k = std::min( k,k ); }
        if(env_var_0 == 170) { +k = std::min( k,max1 ); }
        if(env_var_0 == 171) { +k = std::min( k,n ); }
        if(env_var_0 == 172) { +k = std::min( max1,arr[k] ); }
        if(env_var_0 == 173) { +k = std::min( max1,arr[max1] ); }
        if(env_var_0 == 174) { +k = std::min( max1,arr[n] ); }
        if(env_var_0 == 175) { +k = std::min( max1,k ); }
        if(env_var_0 == 176) { +k = std::min( max1,max1 ); }
        if(env_var_0 == 177) { +k = std::min( max1,n ); }
        if(env_var_0 == 178) { +k = std::min( n,arr[k] ); }
        if(env_var_0 == 179) { +k = std::min( n,arr[max1] ); }
        if(env_var_0 == 180) { +k = std::min( n,arr[n] ); }
        if(env_var_0 == 181) { +k = std::min( n,k ); }
        if(env_var_0 == 182) { +k = std::min( n,max1 ); }
        if(env_var_0 == 183) { +k = std::min( n,n ); }
        if(env_var_0 == 184) { +k = toupper( arr[k] ); }
        if(env_var_0 == 185) { +k = toupper( arr[max1] ); }
        if(env_var_0 == 186) { +k = toupper( arr[n] ); }
        if(env_var_0 == 187) { +k = toupper( k ); }
        if(env_var_0 == 188) { +k = toupper( max1 ); }
        if(env_var_0 == 189) { +k = toupper( n ); }
        if(env_var_0 == 190) { +max1 = *std::max_element( arr,arr ); }
        if(env_var_0 == 191) { +max1 = arr; }
        if(env_var_0 == 192) { +max1 = arr+k; }
        if(env_var_0 == 193) { +max1 = arr+max1; }
        if(env_var_0 == 194) { +max1 = arr+n; }
        if(env_var_0 == 195) { +max1 = arr[k]; }
        if(env_var_0 == 196) { +max1 = arr[max1]; }
        if(env_var_0 == 197) { +max1 = arr[n]; }
        if(env_var_0 == 198) { +max1 = isupper( arr[k] ); }
        if(env_var_0 == 199) { +max1 = isupper( arr[max1] ); }
        if(env_var_0 == 200) { +max1 = isupper( arr[n] ); }
        if(env_var_0 == 201) { +max1 = isupper( k ); }
        if(env_var_0 == 202) { +max1 = isupper( max1 ); }
        if(env_var_0 == 203) { +max1 = isupper( n ); }
        if(env_var_0 == 204) { +max1 = k; }
        if(env_var_0 == 205) { +max1 = max1; }
        if(env_var_0 == 206) { +max1 = n; }
        if(env_var_0 == 207) { +max1 = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 208) { +max1 = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 209) { +max1 = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 210) { +max1 = std::max( arr[k],k ); }
        if(env_var_0 == 211) { +max1 = std::max( arr[k],max1 ); }
        if(env_var_0 == 212) { +max1 = std::max( arr[k],n ); }
        if(env_var_0 == 213) { +max1 = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 214) { +max1 = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 215) { +max1 = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 216) { +max1 = std::max( arr[max1],k ); }
        if(env_var_0 == 217) { +max1 = std::max( arr[max1],max1 ); }
        if(env_var_0 == 218) { +max1 = std::max( arr[max1],n ); }
        if(env_var_0 == 219) { +max1 = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 220) { +max1 = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 221) { +max1 = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 222) { +max1 = std::max( arr[n],k ); }
        if(env_var_0 == 223) { +max1 = std::max( arr[n],max1 ); }
        if(env_var_0 == 224) { +max1 = std::max( arr[n],n ); }
        if(env_var_0 == 225) { +max1 = std::max( k,arr[k] ); }
        if(env_var_0 == 226) { +max1 = std::max( k,arr[max1] ); }
        if(env_var_0 == 227) { +max1 = std::max( k,arr[n] ); }
        if(env_var_0 == 228) { +max1 = std::max( k,k ); }
        if(env_var_0 == 229) { +max1 = std::max( k,max1 ); }
        if(env_var_0 == 230) { +max1 = std::max( k,n ); }
        if(env_var_0 == 231) { +max1 = std::max( max1,arr[k] ); }
        if(env_var_0 == 232) { +max1 = std::max( max1,arr[max1] ); }
        if(env_var_0 == 233) { +max1 = std::max( max1,arr[n] ); }
        if(env_var_0 == 234) { +max1 = std::max( max1,k ); }
        if(env_var_0 == 235) { +max1 = std::max( max1,max1 ); }
        if(env_var_0 == 236) { +max1 = std::max( max1,n ); }
        if(env_var_0 == 237) { +max1 = std::max( n,arr[k] ); }
        if(env_var_0 == 238) { +max1 = std::max( n,arr[max1] ); }
        if(env_var_0 == 239) { +max1 = std::max( n,arr[n] ); }
        if(env_var_0 == 240) { +max1 = std::max( n,k ); }
        if(env_var_0 == 241) { +max1 = std::max( n,max1 ); }
        if(env_var_0 == 242) { +max1 = std::max( n,n ); }
        if(env_var_0 == 243) { +max1 = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 244) { +max1 = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 245) { +max1 = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 246) { +max1 = std::min( arr[k],k ); }
        if(env_var_0 == 247) { +max1 = std::min( arr[k],max1 ); }
        if(env_var_0 == 248) { +max1 = std::min( arr[k],n ); }
        if(env_var_0 == 249) { +max1 = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 250) { +max1 = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 251) { +max1 = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 252) { +max1 = std::min( arr[max1],k ); }
        if(env_var_0 == 253) { +max1 = std::min( arr[max1],max1 ); }
        if(env_var_0 == 254) { +max1 = std::min( arr[max1],n ); }
        if(env_var_0 == 255) { +max1 = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 256) { +max1 = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 257) { +max1 = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 258) { +max1 = std::min( arr[n],k ); }
        if(env_var_0 == 259) { +max1 = std::min( arr[n],max1 ); }
        if(env_var_0 == 260) { +max1 = std::min( arr[n],n ); }
        if(env_var_0 == 261) { +max1 = std::min( k,arr[k] ); }
        if(env_var_0 == 262) { +max1 = std::min( k,arr[max1] ); }
        if(env_var_0 == 263) { +max1 = std::min( k,arr[n] ); }
        if(env_var_0 == 264) { +max1 = std::min( k,k ); }
        if(env_var_0 == 265) { +max1 = std::min( k,max1 ); }
        if(env_var_0 == 266) { +max1 = std::min( k,n ); }
        if(env_var_0 == 267) { +max1 = std::min( max1,arr[k] ); }
        if(env_var_0 == 268) { +max1 = std::min( max1,arr[max1] ); }
        if(env_var_0 == 269) { +max1 = std::min( max1,arr[n] ); }
        if(env_var_0 == 270) { +max1 = std::min( max1,k ); }
        if(env_var_0 == 271) { +max1 = std::min( max1,max1 ); }
        if(env_var_0 == 272) { +max1 = std::min( max1,n ); }
        if(env_var_0 == 273) { +max1 = std::min( n,arr[k] ); }
        if(env_var_0 == 274) { +max1 = std::min( n,arr[max1] ); }
        if(env_var_0 == 275) { +max1 = std::min( n,arr[n] ); }
        if(env_var_0 == 276) { +max1 = std::min( n,k ); }
        if(env_var_0 == 277) { +max1 = std::min( n,max1 ); }
        if(env_var_0 == 278) { +max1 = std::min( n,n ); }
        if(env_var_0 == 279) { +max1 = toupper( arr[k] ); }
        if(env_var_0 == 280) { +max1 = toupper( arr[max1] ); }
        if(env_var_0 == 281) { +max1 = toupper( arr[n] ); }
        if(env_var_0 == 282) { +max1 = toupper( k ); }
        if(env_var_0 == 283) { +max1 = toupper( max1 ); }
        if(env_var_0 == 284) { +max1 = toupper( n ); }
        if(env_var_0 == 285) { +n = *std::max_element( arr,arr ); }
        if(env_var_0 == 286) { +n = arr; }
        if(env_var_0 == 287) { +n = arr+k; }
        if(env_var_0 == 288) { +n = arr+max1; }
        if(env_var_0 == 289) { +n = arr+n; }
        if(env_var_0 == 290) { +n = arr[k]; }
        if(env_var_0 == 291) { +n = arr[max1]; }
        if(env_var_0 == 292) { +n = arr[n]; }
        if(env_var_0 == 293) { +n = isupper( arr[k] ); }
        if(env_var_0 == 294) { +n = isupper( arr[max1] ); }
        if(env_var_0 == 295) { +n = isupper( arr[n] ); }
        if(env_var_0 == 296) { +n = isupper( k ); }
        if(env_var_0 == 297) { +n = isupper( max1 ); }
        if(env_var_0 == 298) { +n = isupper( n ); }
        if(env_var_0 == 299) { +n = k; }
        if(env_var_0 == 300) { +n = max1; }
        if(env_var_0 == 301) { +n = n; }
        if(env_var_0 == 302) { +n = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 303) { +n = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 304) { +n = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 305) { +n = std::max( arr[k],k ); }
        if(env_var_0 == 306) { +n = std::max( arr[k],max1 ); }
        if(env_var_0 == 307) { +n = std::max( arr[k],n ); }
        if(env_var_0 == 308) { +n = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 309) { +n = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 310) { +n = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 311) { +n = std::max( arr[max1],k ); }
        if(env_var_0 == 312) { +n = std::max( arr[max1],max1 ); }
        if(env_var_0 == 313) { +n = std::max( arr[max1],n ); }
        if(env_var_0 == 314) { +n = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 315) { +n = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 316) { +n = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 317) { +n = std::max( arr[n],k ); }
        if(env_var_0 == 318) { +n = std::max( arr[n],max1 ); }
        if(env_var_0 == 319) { +n = std::max( arr[n],n ); }
        if(env_var_0 == 320) { +n = std::max( k,arr[k] ); }
        if(env_var_0 == 321) { +n = std::max( k,arr[max1] ); }
        if(env_var_0 == 322) { +n = std::max( k,arr[n] ); }
        if(env_var_0 == 323) { +n = std::max( k,k ); }
        if(env_var_0 == 324) { +n = std::max( k,max1 ); }
        if(env_var_0 == 325) { +n = std::max( k,n ); }
        if(env_var_0 == 326) { +n = std::max( max1,arr[k] ); }
        if(env_var_0 == 327) { +n = std::max( max1,arr[max1] ); }
        if(env_var_0 == 328) { +n = std::max( max1,arr[n] ); }
        if(env_var_0 == 329) { +n = std::max( max1,k ); }
        if(env_var_0 == 330) { +n = std::max( max1,max1 ); }
        if(env_var_0 == 331) { +n = std::max( max1,n ); }
        if(env_var_0 == 332) { +n = std::max( n,arr[k] ); }
        if(env_var_0 == 333) { +n = std::max( n,arr[max1] ); }
        if(env_var_0 == 334) { +n = std::max( n,arr[n] ); }
        if(env_var_0 == 335) { +n = std::max( n,k ); }
        if(env_var_0 == 336) { +n = std::max( n,max1 ); }
        if(env_var_0 == 337) { +n = std::max( n,n ); }
        if(env_var_0 == 338) { +n = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 339) { +n = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 340) { +n = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 341) { +n = std::min( arr[k],k ); }
        if(env_var_0 == 342) { +n = std::min( arr[k],max1 ); }
        if(env_var_0 == 343) { +n = std::min( arr[k],n ); }
        if(env_var_0 == 344) { +n = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 345) { +n = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 346) { +n = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 347) { +n = std::min( arr[max1],k ); }
        if(env_var_0 == 348) { +n = std::min( arr[max1],max1 ); }
        if(env_var_0 == 349) { +n = std::min( arr[max1],n ); }
        if(env_var_0 == 350) { +n = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 351) { +n = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 352) { +n = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 353) { +n = std::min( arr[n],k ); }
        if(env_var_0 == 354) { +n = std::min( arr[n],max1 ); }
        if(env_var_0 == 355) { +n = std::min( arr[n],n ); }
        if(env_var_0 == 356) { +n = std::min( k,arr[k] ); }
        if(env_var_0 == 357) { +n = std::min( k,arr[max1] ); }
        if(env_var_0 == 358) { +n = std::min( k,arr[n] ); }
        if(env_var_0 == 359) { +n = std::min( k,k ); }
        if(env_var_0 == 360) { +n = std::min( k,max1 ); }
        if(env_var_0 == 361) { +n = std::min( k,n ); }
        if(env_var_0 == 362) { +n = std::min( max1,arr[k] ); }
        if(env_var_0 == 363) { +n = std::min( max1,arr[max1] ); }
        if(env_var_0 == 364) { +n = std::min( max1,arr[n] ); }
        if(env_var_0 == 365) { +n = std::min( max1,k ); }
        if(env_var_0 == 366) { +n = std::min( max1,max1 ); }
        if(env_var_0 == 367) { +n = std::min( max1,n ); }
        if(env_var_0 == 368) { +n = std::min( n,arr[k] ); }
        if(env_var_0 == 369) { +n = std::min( n,arr[max1] ); }
        if(env_var_0 == 370) { +n = std::min( n,arr[n] ); }
        if(env_var_0 == 371) { +n = std::min( n,k ); }
        if(env_var_0 == 372) { +n = std::min( n,max1 ); }
        if(env_var_0 == 373) { +n = std::min( n,n ); }
        if(env_var_0 == 374) { +n = toupper( arr[k] ); }
        if(env_var_0 == 375) { +n = toupper( arr[max1] ); }
        if(env_var_0 == 376) { +n = toupper( arr[n] ); }
        if(env_var_0 == 377) { +n = toupper( k ); }
        if(env_var_0 == 378) { +n = toupper( max1 ); }
        if(env_var_0 == 379) { +n = toupper( n ); }
        if(env_var_0 == 380) { [k] = *std::max_element( arr,arr ); }
        if(env_var_0 == 381) { [k] = arr; }
        if(env_var_0 == 382) { [k] = arr+k; }
        if(env_var_0 == 383) { [k] = arr+max1; }
        if(env_var_0 == 384) { [k] = arr+n; }
        if(env_var_0 == 385) { [k] = arr[k]; }
        if(env_var_0 == 386) { [k] = arr[max1]; }
        if(env_var_0 == 387) { [k] = arr[n]; }
        if(env_var_0 == 388) { [k] = isupper( arr[k] ); }
        if(env_var_0 == 389) { [k] = isupper( arr[max1] ); }
        if(env_var_0 == 390) { [k] = isupper( arr[n] ); }
        if(env_var_0 == 391) { [k] = isupper( k ); }
        if(env_var_0 == 392) { [k] = isupper( max1 ); }
        if(env_var_0 == 393) { [k] = isupper( n ); }
        if(env_var_0 == 394) { [k] = k; }
        if(env_var_0 == 395) { [k] = max1; }
        if(env_var_0 == 396) { [k] = n; }
        if(env_var_0 == 397) { [k] = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 398) { [k] = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 399) { [k] = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 400) { [k] = std::max( arr[k],k ); }
        if(env_var_0 == 401) { [k] = std::max( arr[k],max1 ); }
        if(env_var_0 == 402) { [k] = std::max( arr[k],n ); }
        if(env_var_0 == 403) { [k] = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 404) { [k] = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 405) { [k] = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 406) { [k] = std::max( arr[max1],k ); }
        if(env_var_0 == 407) { [k] = std::max( arr[max1],max1 ); }
        if(env_var_0 == 408) { [k] = std::max( arr[max1],n ); }
        if(env_var_0 == 409) { [k] = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 410) { [k] = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 411) { [k] = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 412) { [k] = std::max( arr[n],k ); }
        if(env_var_0 == 413) { [k] = std::max( arr[n],max1 ); }
        if(env_var_0 == 414) { [k] = std::max( arr[n],n ); }
        if(env_var_0 == 415) { [k] = std::max( k,arr[k] ); }
        if(env_var_0 == 416) { [k] = std::max( k,arr[max1] ); }
        if(env_var_0 == 417) { [k] = std::max( k,arr[n] ); }
        if(env_var_0 == 418) { [k] = std::max( k,k ); }
        if(env_var_0 == 419) { [k] = std::max( k,max1 ); }
        if(env_var_0 == 420) { [k] = std::max( k,n ); }
        if(env_var_0 == 421) { [k] = std::max( max1,arr[k] ); }
        if(env_var_0 == 422) { [k] = std::max( max1,arr[max1] ); }
        if(env_var_0 == 423) { [k] = std::max( max1,arr[n] ); }
        if(env_var_0 == 424) { [k] = std::max( max1,k ); }
        if(env_var_0 == 425) { [k] = std::max( max1,max1 ); }
        if(env_var_0 == 426) { [k] = std::max( max1,n ); }
        if(env_var_0 == 427) { [k] = std::max( n,arr[k] ); }
        if(env_var_0 == 428) { [k] = std::max( n,arr[max1] ); }
        if(env_var_0 == 429) { [k] = std::max( n,arr[n] ); }
        if(env_var_0 == 430) { [k] = std::max( n,k ); }
        if(env_var_0 == 431) { [k] = std::max( n,max1 ); }
        if(env_var_0 == 432) { [k] = std::max( n,n ); }
        if(env_var_0 == 433) { [k] = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 434) { [k] = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 435) { [k] = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 436) { [k] = std::min( arr[k],k ); }
        if(env_var_0 == 437) { [k] = std::min( arr[k],max1 ); }
        if(env_var_0 == 438) { [k] = std::min( arr[k],n ); }
        if(env_var_0 == 439) { [k] = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 440) { [k] = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 441) { [k] = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 442) { [k] = std::min( arr[max1],k ); }
        if(env_var_0 == 443) { [k] = std::min( arr[max1],max1 ); }
        if(env_var_0 == 444) { [k] = std::min( arr[max1],n ); }
        if(env_var_0 == 445) { [k] = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 446) { [k] = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 447) { [k] = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 448) { [k] = std::min( arr[n],k ); }
        if(env_var_0 == 449) { [k] = std::min( arr[n],max1 ); }
        if(env_var_0 == 450) { [k] = std::min( arr[n],n ); }
        if(env_var_0 == 451) { [k] = std::min( k,arr[k] ); }
        if(env_var_0 == 452) { [k] = std::min( k,arr[max1] ); }
        if(env_var_0 == 453) { [k] = std::min( k,arr[n] ); }
        if(env_var_0 == 454) { [k] = std::min( k,k ); }
        if(env_var_0 == 455) { [k] = std::min( k,max1 ); }
        if(env_var_0 == 456) { [k] = std::min( k,n ); }
        if(env_var_0 == 457) { [k] = std::min( max1,arr[k] ); }
        if(env_var_0 == 458) { [k] = std::min( max1,arr[max1] ); }
        if(env_var_0 == 459) { [k] = std::min( max1,arr[n] ); }
        if(env_var_0 == 460) { [k] = std::min( max1,k ); }
        if(env_var_0 == 461) { [k] = std::min( max1,max1 ); }
        if(env_var_0 == 462) { [k] = std::min( max1,n ); }
        if(env_var_0 == 463) { [k] = std::min( n,arr[k] ); }
        if(env_var_0 == 464) { [k] = std::min( n,arr[max1] ); }
        if(env_var_0 == 465) { [k] = std::min( n,arr[n] ); }
        if(env_var_0 == 466) { [k] = std::min( n,k ); }
        if(env_var_0 == 467) { [k] = std::min( n,max1 ); }
        if(env_var_0 == 468) { [k] = std::min( n,n ); }
        if(env_var_0 == 469) { [k] = toupper( arr[k] ); }
        if(env_var_0 == 470) { [k] = toupper( arr[max1] ); }
        if(env_var_0 == 471) { [k] = toupper( arr[n] ); }
        if(env_var_0 == 472) { [k] = toupper( k ); }
        if(env_var_0 == 473) { [k] = toupper( max1 ); }
        if(env_var_0 == 474) { [k] = toupper( n ); }
        if(env_var_0 == 475) { [max1] = *std::max_element( arr,arr ); }
        if(env_var_0 == 476) { [max1] = arr; }
        if(env_var_0 == 477) { [max1] = arr+k; }
        if(env_var_0 == 478) { [max1] = arr+max1; }
        if(env_var_0 == 479) { [max1] = arr+n; }
        if(env_var_0 == 480) { [max1] = arr[k]; }
        if(env_var_0 == 481) { [max1] = arr[max1]; }
        if(env_var_0 == 482) { [max1] = arr[n]; }
        if(env_var_0 == 483) { [max1] = isupper( arr[k] ); }
        if(env_var_0 == 484) { [max1] = isupper( arr[max1] ); }
        if(env_var_0 == 485) { [max1] = isupper( arr[n] ); }
        if(env_var_0 == 486) { [max1] = isupper( k ); }
        if(env_var_0 == 487) { [max1] = isupper( max1 ); }
        if(env_var_0 == 488) { [max1] = isupper( n ); }
        if(env_var_0 == 489) { [max1] = k; }
        if(env_var_0 == 490) { [max1] = max1; }
        if(env_var_0 == 491) { [max1] = n; }
        if(env_var_0 == 492) { [max1] = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 493) { [max1] = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 494) { [max1] = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 495) { [max1] = std::max( arr[k],k ); }
        if(env_var_0 == 496) { [max1] = std::max( arr[k],max1 ); }
        if(env_var_0 == 497) { [max1] = std::max( arr[k],n ); }
        if(env_var_0 == 498) { [max1] = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 499) { [max1] = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 500) { [max1] = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 501) { [max1] = std::max( arr[max1],k ); }
        if(env_var_0 == 502) { [max1] = std::max( arr[max1],max1 ); }
        if(env_var_0 == 503) { [max1] = std::max( arr[max1],n ); }
        if(env_var_0 == 504) { [max1] = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 505) { [max1] = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 506) { [max1] = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 507) { [max1] = std::max( arr[n],k ); }
        if(env_var_0 == 508) { [max1] = std::max( arr[n],max1 ); }
        if(env_var_0 == 509) { [max1] = std::max( arr[n],n ); }
        if(env_var_0 == 510) { [max1] = std::max( k,arr[k] ); }
        if(env_var_0 == 511) { [max1] = std::max( k,arr[max1] ); }
        if(env_var_0 == 512) { [max1] = std::max( k,arr[n] ); }
        if(env_var_0 == 513) { [max1] = std::max( k,k ); }
        if(env_var_0 == 514) { [max1] = std::max( k,max1 ); }
        if(env_var_0 == 515) { [max1] = std::max( k,n ); }
        if(env_var_0 == 516) { [max1] = std::max( max1,arr[k] ); }
        if(env_var_0 == 517) { [max1] = std::max( max1,arr[max1] ); }
        if(env_var_0 == 518) { [max1] = std::max( max1,arr[n] ); }
        if(env_var_0 == 519) { [max1] = std::max( max1,k ); }
        if(env_var_0 == 520) { [max1] = std::max( max1,max1 ); }
        if(env_var_0 == 521) { [max1] = std::max( max1,n ); }
        if(env_var_0 == 522) { [max1] = std::max( n,arr[k] ); }
        if(env_var_0 == 523) { [max1] = std::max( n,arr[max1] ); }
        if(env_var_0 == 524) { [max1] = std::max( n,arr[n] ); }
        if(env_var_0 == 525) { [max1] = std::max( n,k ); }
        if(env_var_0 == 526) { [max1] = std::max( n,max1 ); }
        if(env_var_0 == 527) { [max1] = std::max( n,n ); }
        if(env_var_0 == 528) { [max1] = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 529) { [max1] = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 530) { [max1] = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 531) { [max1] = std::min( arr[k],k ); }
        if(env_var_0 == 532) { [max1] = std::min( arr[k],max1 ); }
        if(env_var_0 == 533) { [max1] = std::min( arr[k],n ); }
        if(env_var_0 == 534) { [max1] = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 535) { [max1] = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 536) { [max1] = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 537) { [max1] = std::min( arr[max1],k ); }
        if(env_var_0 == 538) { [max1] = std::min( arr[max1],max1 ); }
        if(env_var_0 == 539) { [max1] = std::min( arr[max1],n ); }
        if(env_var_0 == 540) { [max1] = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 541) { [max1] = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 542) { [max1] = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 543) { [max1] = std::min( arr[n],k ); }
        if(env_var_0 == 544) { [max1] = std::min( arr[n],max1 ); }
        if(env_var_0 == 545) { [max1] = std::min( arr[n],n ); }
        if(env_var_0 == 546) { [max1] = std::min( k,arr[k] ); }
        if(env_var_0 == 547) { [max1] = std::min( k,arr[max1] ); }
        if(env_var_0 == 548) { [max1] = std::min( k,arr[n] ); }
        if(env_var_0 == 549) { [max1] = std::min( k,k ); }
        if(env_var_0 == 550) { [max1] = std::min( k,max1 ); }
        if(env_var_0 == 551) { [max1] = std::min( k,n ); }
        if(env_var_0 == 552) { [max1] = std::min( max1,arr[k] ); }
        if(env_var_0 == 553) { [max1] = std::min( max1,arr[max1] ); }
        if(env_var_0 == 554) { [max1] = std::min( max1,arr[n] ); }
        if(env_var_0 == 555) { [max1] = std::min( max1,k ); }
        if(env_var_0 == 556) { [max1] = std::min( max1,max1 ); }
        if(env_var_0 == 557) { [max1] = std::min( max1,n ); }
        if(env_var_0 == 558) { [max1] = std::min( n,arr[k] ); }
        if(env_var_0 == 559) { [max1] = std::min( n,arr[max1] ); }
        if(env_var_0 == 560) { [max1] = std::min( n,arr[n] ); }
        if(env_var_0 == 561) { [max1] = std::min( n,k ); }
        if(env_var_0 == 562) { [max1] = std::min( n,max1 ); }
        if(env_var_0 == 563) { [max1] = std::min( n,n ); }
        if(env_var_0 == 564) { [max1] = toupper( arr[k] ); }
        if(env_var_0 == 565) { [max1] = toupper( arr[max1] ); }
        if(env_var_0 == 566) { [max1] = toupper( arr[n] ); }
        if(env_var_0 == 567) { [max1] = toupper( k ); }
        if(env_var_0 == 568) { [max1] = toupper( max1 ); }
        if(env_var_0 == 569) { [max1] = toupper( n ); }
        if(env_var_0 == 570) { [n] = *std::max_element( arr,arr ); }
        if(env_var_0 == 571) { [n] = arr; }
        if(env_var_0 == 572) { [n] = arr+k; }
        if(env_var_0 == 573) { [n] = arr+max1; }
        if(env_var_0 == 574) { [n] = arr+n; }
        if(env_var_0 == 575) { [n] = arr[k]; }
        if(env_var_0 == 576) { [n] = arr[max1]; }
        if(env_var_0 == 577) { [n] = arr[n]; }
        if(env_var_0 == 578) { [n] = isupper( arr[k] ); }
        if(env_var_0 == 579) { [n] = isupper( arr[max1] ); }
        if(env_var_0 == 580) { [n] = isupper( arr[n] ); }
        if(env_var_0 == 581) { [n] = isupper( k ); }
        if(env_var_0 == 582) { [n] = isupper( max1 ); }
        if(env_var_0 == 583) { [n] = isupper( n ); }
        if(env_var_0 == 584) { [n] = k; }
        if(env_var_0 == 585) { [n] = max1; }
        if(env_var_0 == 586) { [n] = n; }
        if(env_var_0 == 587) { [n] = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 588) { [n] = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 589) { [n] = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 590) { [n] = std::max( arr[k],k ); }
        if(env_var_0 == 591) { [n] = std::max( arr[k],max1 ); }
        if(env_var_0 == 592) { [n] = std::max( arr[k],n ); }
        if(env_var_0 == 593) { [n] = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 594) { [n] = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 595) { [n] = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 596) { [n] = std::max( arr[max1],k ); }
        if(env_var_0 == 597) { [n] = std::max( arr[max1],max1 ); }
        if(env_var_0 == 598) { [n] = std::max( arr[max1],n ); }
        if(env_var_0 == 599) { [n] = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 600) { [n] = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 601) { [n] = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 602) { [n] = std::max( arr[n],k ); }
        if(env_var_0 == 603) { [n] = std::max( arr[n],max1 ); }
        if(env_var_0 == 604) { [n] = std::max( arr[n],n ); }
        if(env_var_0 == 605) { [n] = std::max( k,arr[k] ); }
        if(env_var_0 == 606) { [n] = std::max( k,arr[max1] ); }
        if(env_var_0 == 607) { [n] = std::max( k,arr[n] ); }
        if(env_var_0 == 608) { [n] = std::max( k,k ); }
        if(env_var_0 == 609) { [n] = std::max( k,max1 ); }
        if(env_var_0 == 610) { [n] = std::max( k,n ); }
        if(env_var_0 == 611) { [n] = std::max( max1,arr[k] ); }
        if(env_var_0 == 612) { [n] = std::max( max1,arr[max1] ); }
        if(env_var_0 == 613) { [n] = std::max( max1,arr[n] ); }
        if(env_var_0 == 614) { [n] = std::max( max1,k ); }
        if(env_var_0 == 615) { [n] = std::max( max1,max1 ); }
        if(env_var_0 == 616) { [n] = std::max( max1,n ); }
        if(env_var_0 == 617) { [n] = std::max( n,arr[k] ); }
        if(env_var_0 == 618) { [n] = std::max( n,arr[max1] ); }
        if(env_var_0 == 619) { [n] = std::max( n,arr[n] ); }
        if(env_var_0 == 620) { [n] = std::max( n,k ); }
        if(env_var_0 == 621) { [n] = std::max( n,max1 ); }
        if(env_var_0 == 622) { [n] = std::max( n,n ); }
        if(env_var_0 == 623) { [n] = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 624) { [n] = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 625) { [n] = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 626) { [n] = std::min( arr[k],k ); }
        if(env_var_0 == 627) { [n] = std::min( arr[k],max1 ); }
        if(env_var_0 == 628) { [n] = std::min( arr[k],n ); }
        if(env_var_0 == 629) { [n] = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 630) { [n] = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 631) { [n] = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 632) { [n] = std::min( arr[max1],k ); }
        if(env_var_0 == 633) { [n] = std::min( arr[max1],max1 ); }
        if(env_var_0 == 634) { [n] = std::min( arr[max1],n ); }
        if(env_var_0 == 635) { [n] = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 636) { [n] = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 637) { [n] = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 638) { [n] = std::min( arr[n],k ); }
        if(env_var_0 == 639) { [n] = std::min( arr[n],max1 ); }
        if(env_var_0 == 640) { [n] = std::min( arr[n],n ); }
        if(env_var_0 == 641) { [n] = std::min( k,arr[k] ); }
        if(env_var_0 == 642) { [n] = std::min( k,arr[max1] ); }
        if(env_var_0 == 643) { [n] = std::min( k,arr[n] ); }
        if(env_var_0 == 644) { [n] = std::min( k,k ); }
        if(env_var_0 == 645) { [n] = std::min( k,max1 ); }
        if(env_var_0 == 646) { [n] = std::min( k,n ); }
        if(env_var_0 == 647) { [n] = std::min( max1,arr[k] ); }
        if(env_var_0 == 648) { [n] = std::min( max1,arr[max1] ); }
        if(env_var_0 == 649) { [n] = std::min( max1,arr[n] ); }
        if(env_var_0 == 650) { [n] = std::min( max1,k ); }
        if(env_var_0 == 651) { [n] = std::min( max1,max1 ); }
        if(env_var_0 == 652) { [n] = std::min( max1,n ); }
        if(env_var_0 == 653) { [n] = std::min( n,arr[k] ); }
        if(env_var_0 == 654) { [n] = std::min( n,arr[max1] ); }
        if(env_var_0 == 655) { [n] = std::min( n,arr[n] ); }
        if(env_var_0 == 656) { [n] = std::min( n,k ); }
        if(env_var_0 == 657) { [n] = std::min( n,max1 ); }
        if(env_var_0 == 658) { [n] = std::min( n,n ); }
        if(env_var_0 == 659) { [n] = toupper( arr[k] ); }
        if(env_var_0 == 660) { [n] = toupper( arr[max1] ); }
        if(env_var_0 == 661) { [n] = toupper( arr[n] ); }
        if(env_var_0 == 662) { [n] = toupper( k ); }
        if(env_var_0 == 663) { [n] = toupper( max1 ); }
        if(env_var_0 == 664) { [n] = toupper( n ); }
        if(env_var_0 == 665) {  *std::max_element( arr,arr ); }
        if(env_var_0 == 666) {  arr; }
        if(env_var_0 == 667) {  arr+k; }
        if(env_var_0 == 668) {  arr+max1; }
        if(env_var_0 == 669) {  arr+n; }
        if(env_var_0 == 670) {  arr[k]; }
        if(env_var_0 == 671) {  arr[max1]; }
        if(env_var_0 == 672) {  arr[n]; }
        if(env_var_0 == 673) {  isupper( arr[k] ); }
        if(env_var_0 == 674) {  isupper( arr[max1] ); }
        if(env_var_0 == 675) {  isupper( arr[n] ); }
        if(env_var_0 == 676) {  isupper( k ); }
        if(env_var_0 == 677) {  isupper( max1 ); }
        if(env_var_0 == 678) {  isupper( n ); }
        if(env_var_0 == 679) {  k; }
        if(env_var_0 == 680) {  max1; }
        if(env_var_0 == 681) {  n; }
        if(env_var_0 == 682) {  std::max( arr[k],arr[k] ); }
        if(env_var_0 == 683) {  std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 684) {  std::max( arr[k],arr[n] ); }
        if(env_var_0 == 685) {  std::max( arr[k],k ); }
        if(env_var_0 == 686) {  std::max( arr[k],max1 ); }
        if(env_var_0 == 687) {  std::max( arr[k],n ); }
        if(env_var_0 == 688) {  std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 689) {  std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 690) {  std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 691) {  std::max( arr[max1],k ); }
        if(env_var_0 == 692) {  std::max( arr[max1],max1 ); }
        if(env_var_0 == 693) {  std::max( arr[max1],n ); }
        if(env_var_0 == 694) {  std::max( arr[n],arr[k] ); }
        if(env_var_0 == 695) {  std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 696) {  std::max( arr[n],arr[n] ); }
        if(env_var_0 == 697) {  std::max( arr[n],k ); }
        if(env_var_0 == 698) {  std::max( arr[n],max1 ); }
        if(env_var_0 == 699) {  std::max( arr[n],n ); }
        if(env_var_0 == 700) {  std::max( k,arr[k] ); }
        if(env_var_0 == 701) {  std::max( k,arr[max1] ); }
        if(env_var_0 == 702) {  std::max( k,arr[n] ); }
        if(env_var_0 == 703) {  std::max( k,k ); }
        if(env_var_0 == 704) {  std::max( k,max1 ); }
        if(env_var_0 == 705) {  std::max( k,n ); }
        if(env_var_0 == 706) {  std::max( max1,arr[k] ); }
        if(env_var_0 == 707) {  std::max( max1,arr[max1] ); }
        if(env_var_0 == 708) {  std::max( max1,arr[n] ); }
        if(env_var_0 == 709) {  std::max( max1,k ); }
        if(env_var_0 == 710) {  std::max( max1,max1 ); }
        if(env_var_0 == 711) {  std::max( max1,n ); }
        if(env_var_0 == 712) {  std::max( n,arr[k] ); }
        if(env_var_0 == 713) {  std::max( n,arr[max1] ); }
        if(env_var_0 == 714) {  std::max( n,arr[n] ); }
        if(env_var_0 == 715) {  std::max( n,k ); }
        if(env_var_0 == 716) {  std::max( n,max1 ); }
        if(env_var_0 == 717) {  std::max( n,n ); }
        if(env_var_0 == 718) {  std::min( arr[k],arr[k] ); }
        if(env_var_0 == 719) {  std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 720) {  std::min( arr[k],arr[n] ); }
        if(env_var_0 == 721) {  std::min( arr[k],k ); }
        if(env_var_0 == 722) {  std::min( arr[k],max1 ); }
        if(env_var_0 == 723) {  std::min( arr[k],n ); }
        if(env_var_0 == 724) {  std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 725) {  std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 726) {  std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 727) {  std::min( arr[max1],k ); }
        if(env_var_0 == 728) {  std::min( arr[max1],max1 ); }
        if(env_var_0 == 729) {  std::min( arr[max1],n ); }
        if(env_var_0 == 730) {  std::min( arr[n],arr[k] ); }
        if(env_var_0 == 731) {  std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 732) {  std::min( arr[n],arr[n] ); }
        if(env_var_0 == 733) {  std::min( arr[n],k ); }
        if(env_var_0 == 734) {  std::min( arr[n],max1 ); }
        if(env_var_0 == 735) {  std::min( arr[n],n ); }
        if(env_var_0 == 736) {  std::min( k,arr[k] ); }
        if(env_var_0 == 737) {  std::min( k,arr[max1] ); }
        if(env_var_0 == 738) {  std::min( k,arr[n] ); }
        if(env_var_0 == 739) {  std::min( k,k ); }
        if(env_var_0 == 740) {  std::min( k,max1 ); }
        if(env_var_0 == 741) {  std::min( k,n ); }
        if(env_var_0 == 742) {  std::min( max1,arr[k] ); }
        if(env_var_0 == 743) {  std::min( max1,arr[max1] ); }
        if(env_var_0 == 744) {  std::min( max1,arr[n] ); }
        if(env_var_0 == 745) {  std::min( max1,k ); }
        if(env_var_0 == 746) {  std::min( max1,max1 ); }
        if(env_var_0 == 747) {  std::min( max1,n ); }
        if(env_var_0 == 748) {  std::min( n,arr[k] ); }
        if(env_var_0 == 749) {  std::min( n,arr[max1] ); }
        if(env_var_0 == 750) {  std::min( n,arr[n] ); }
        if(env_var_0 == 751) {  std::min( n,k ); }
        if(env_var_0 == 752) {  std::min( n,max1 ); }
        if(env_var_0 == 753) {  std::min( n,n ); }
        if(env_var_0 == 754) {  toupper( arr[k] ); }
        if(env_var_0 == 755) {  toupper( arr[max1] ); }
        if(env_var_0 == 756) {  toupper( arr[n] ); }
        if(env_var_0 == 757) {  toupper( k ); }
        if(env_var_0 == 758) {  toupper( max1 ); }
        if(env_var_0 == 759) {  toupper( n ); }
        if(env_var_0 == 760) { 1 = *std::max_element( arr,arr ); }
        if(env_var_0 == 761) { 1 = arr; }
        if(env_var_0 == 762) { 1 = arr+k; }
        if(env_var_0 == 763) { 1 = arr+max1; }
        if(env_var_0 == 764) { 1 = arr+n; }
        if(env_var_0 == 765) { 1 = arr[k]; }
        if(env_var_0 == 766) { 1 = arr[max1]; }
        if(env_var_0 == 767) { 1 = arr[n]; }
        if(env_var_0 == 768) { 1 = isupper( arr[k] ); }
        if(env_var_0 == 769) { 1 = isupper( arr[max1] ); }
        if(env_var_0 == 770) { 1 = isupper( arr[n] ); }
        if(env_var_0 == 771) { 1 = isupper( k ); }
        if(env_var_0 == 772) { 1 = isupper( max1 ); }
        if(env_var_0 == 773) { 1 = isupper( n ); }
        if(env_var_0 == 774) { 1 = k; }
        if(env_var_0 == 775) { 1 = max1; }
        if(env_var_0 == 776) { 1 = n; }
        if(env_var_0 == 777) { 1 = std::max( arr[k],arr[k] ); }
        if(env_var_0 == 778) { 1 = std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 779) { 1 = std::max( arr[k],arr[n] ); }
        if(env_var_0 == 780) { 1 = std::max( arr[k],k ); }
        if(env_var_0 == 781) { 1 = std::max( arr[k],max1 ); }
        if(env_var_0 == 782) { 1 = std::max( arr[k],n ); }
        if(env_var_0 == 783) { 1 = std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 784) { 1 = std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 785) { 1 = std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 786) { 1 = std::max( arr[max1],k ); }
        if(env_var_0 == 787) { 1 = std::max( arr[max1],max1 ); }
        if(env_var_0 == 788) { 1 = std::max( arr[max1],n ); }
        if(env_var_0 == 789) { 1 = std::max( arr[n],arr[k] ); }
        if(env_var_0 == 790) { 1 = std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 791) { 1 = std::max( arr[n],arr[n] ); }
        if(env_var_0 == 792) { 1 = std::max( arr[n],k ); }
        if(env_var_0 == 793) { 1 = std::max( arr[n],max1 ); }
        if(env_var_0 == 794) { 1 = std::max( arr[n],n ); }
        if(env_var_0 == 795) { 1 = std::max( k,arr[k] ); }
        if(env_var_0 == 796) { 1 = std::max( k,arr[max1] ); }
        if(env_var_0 == 797) { 1 = std::max( k,arr[n] ); }
        if(env_var_0 == 798) { 1 = std::max( k,k ); }
        if(env_var_0 == 799) { 1 = std::max( k,max1 ); }
        if(env_var_0 == 800) { 1 = std::max( k,n ); }
        if(env_var_0 == 801) { 1 = std::max( max1,arr[k] ); }
        if(env_var_0 == 802) { 1 = std::max( max1,arr[max1] ); }
        if(env_var_0 == 803) { 1 = std::max( max1,arr[n] ); }
        if(env_var_0 == 804) { 1 = std::max( max1,k ); }
        if(env_var_0 == 805) { 1 = std::max( max1,max1 ); }
        if(env_var_0 == 806) { 1 = std::max( max1,n ); }
        if(env_var_0 == 807) { 1 = std::max( n,arr[k] ); }
        if(env_var_0 == 808) { 1 = std::max( n,arr[max1] ); }
        if(env_var_0 == 809) { 1 = std::max( n,arr[n] ); }
        if(env_var_0 == 810) { 1 = std::max( n,k ); }
        if(env_var_0 == 811) { 1 = std::max( n,max1 ); }
        if(env_var_0 == 812) { 1 = std::max( n,n ); }
        if(env_var_0 == 813) { 1 = std::min( arr[k],arr[k] ); }
        if(env_var_0 == 814) { 1 = std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 815) { 1 = std::min( arr[k],arr[n] ); }
        if(env_var_0 == 816) { 1 = std::min( arr[k],k ); }
        if(env_var_0 == 817) { 1 = std::min( arr[k],max1 ); }
        if(env_var_0 == 818) { 1 = std::min( arr[k],n ); }
        if(env_var_0 == 819) { 1 = std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 820) { 1 = std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 821) { 1 = std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 822) { 1 = std::min( arr[max1],k ); }
        if(env_var_0 == 823) { 1 = std::min( arr[max1],max1 ); }
        if(env_var_0 == 824) { 1 = std::min( arr[max1],n ); }
        if(env_var_0 == 825) { 1 = std::min( arr[n],arr[k] ); }
        if(env_var_0 == 826) { 1 = std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 827) { 1 = std::min( arr[n],arr[n] ); }
        if(env_var_0 == 828) { 1 = std::min( arr[n],k ); }
        if(env_var_0 == 829) { 1 = std::min( arr[n],max1 ); }
        if(env_var_0 == 830) { 1 = std::min( arr[n],n ); }
        if(env_var_0 == 831) { 1 = std::min( k,arr[k] ); }
        if(env_var_0 == 832) { 1 = std::min( k,arr[max1] ); }
        if(env_var_0 == 833) { 1 = std::min( k,arr[n] ); }
        if(env_var_0 == 834) { 1 = std::min( k,k ); }
        if(env_var_0 == 835) { 1 = std::min( k,max1 ); }
        if(env_var_0 == 836) { 1 = std::min( k,n ); }
        if(env_var_0 == 837) { 1 = std::min( max1,arr[k] ); }
        if(env_var_0 == 838) { 1 = std::min( max1,arr[max1] ); }
        if(env_var_0 == 839) { 1 = std::min( max1,arr[n] ); }
        if(env_var_0 == 840) { 1 = std::min( max1,k ); }
        if(env_var_0 == 841) { 1 = std::min( max1,max1 ); }
        if(env_var_0 == 842) { 1 = std::min( max1,n ); }
        if(env_var_0 == 843) { 1 = std::min( n,arr[k] ); }
        if(env_var_0 == 844) { 1 = std::min( n,arr[max1] ); }
        if(env_var_0 == 845) { 1 = std::min( n,arr[n] ); }
        if(env_var_0 == 846) { 1 = std::min( n,k ); }
        if(env_var_0 == 847) { 1 = std::min( n,max1 ); }
        if(env_var_0 == 848) { 1 = std::min( n,n ); }
        if(env_var_0 == 849) { 1 = toupper( arr[k] ); }
        if(env_var_0 == 850) { 1 = toupper( arr[max1] ); }
        if(env_var_0 == 851) { 1 = toupper( arr[n] ); }
        if(env_var_0 == 852) { 1 = toupper( k ); }
        if(env_var_0 == 853) { 1 = toupper( max1 ); }
        if(env_var_0 == 854) { 1 = toupper( n ); }
        if(env_var_0 == 855) {  *std::max_element( arr,arr ); }
        if(env_var_0 == 856) {  arr; }
        if(env_var_0 == 857) {  arr+k; }
        if(env_var_0 == 858) {  arr+max1; }
        if(env_var_0 == 859) {  arr+n; }
        if(env_var_0 == 860) {  arr[k]; }
        if(env_var_0 == 861) {  arr[max1]; }
        if(env_var_0 == 862) {  arr[n]; }
        if(env_var_0 == 863) {  isupper( arr[k] ); }
        if(env_var_0 == 864) {  isupper( arr[max1] ); }
        if(env_var_0 == 865) {  isupper( arr[n] ); }
        if(env_var_0 == 866) {  isupper( k ); }
        if(env_var_0 == 867) {  isupper( max1 ); }
        if(env_var_0 == 868) {  isupper( n ); }
        if(env_var_0 == 869) {  k; }
        if(env_var_0 == 870) {  max1; }
        if(env_var_0 == 871) {  n; }
        if(env_var_0 == 872) {  std::max( arr[k],arr[k] ); }
        if(env_var_0 == 873) {  std::max( arr[k],arr[max1] ); }
        if(env_var_0 == 874) {  std::max( arr[k],arr[n] ); }
        if(env_var_0 == 875) {  std::max( arr[k],k ); }
        if(env_var_0 == 876) {  std::max( arr[k],max1 ); }
        if(env_var_0 == 877) {  std::max( arr[k],n ); }
        if(env_var_0 == 878) {  std::max( arr[max1],arr[k] ); }
        if(env_var_0 == 879) {  std::max( arr[max1],arr[max1] ); }
        if(env_var_0 == 880) {  std::max( arr[max1],arr[n] ); }
        if(env_var_0 == 881) {  std::max( arr[max1],k ); }
        if(env_var_0 == 882) {  std::max( arr[max1],max1 ); }
        if(env_var_0 == 883) {  std::max( arr[max1],n ); }
        if(env_var_0 == 884) {  std::max( arr[n],arr[k] ); }
        if(env_var_0 == 885) {  std::max( arr[n],arr[max1] ); }
        if(env_var_0 == 886) {  std::max( arr[n],arr[n] ); }
        if(env_var_0 == 887) {  std::max( arr[n],k ); }
        if(env_var_0 == 888) {  std::max( arr[n],max1 ); }
        if(env_var_0 == 889) {  std::max( arr[n],n ); }
        if(env_var_0 == 890) {  std::max( k,arr[k] ); }
        if(env_var_0 == 891) {  std::max( k,arr[max1] ); }
        if(env_var_0 == 892) {  std::max( k,arr[n] ); }
        if(env_var_0 == 893) {  std::max( k,k ); }
        if(env_var_0 == 894) {  std::max( k,max1 ); }
        if(env_var_0 == 895) {  std::max( k,n ); }
        if(env_var_0 == 896) {  std::max( max1,arr[k] ); }
        if(env_var_0 == 897) {  std::max( max1,arr[max1] ); }
        if(env_var_0 == 898) {  std::max( max1,arr[n] ); }
        if(env_var_0 == 899) {  std::max( max1,k ); }
        if(env_var_0 == 900) {  std::max( max1,max1 ); }
        if(env_var_0 == 901) {  std::max( max1,n ); }
        if(env_var_0 == 902) {  std::max( n,arr[k] ); }
        if(env_var_0 == 903) {  std::max( n,arr[max1] ); }
        if(env_var_0 == 904) {  std::max( n,arr[n] ); }
        if(env_var_0 == 905) {  std::max( n,k ); }
        if(env_var_0 == 906) {  std::max( n,max1 ); }
        if(env_var_0 == 907) {  std::max( n,n ); }
        if(env_var_0 == 908) {  std::min( arr[k],arr[k] ); }
        if(env_var_0 == 909) {  std::min( arr[k],arr[max1] ); }
        if(env_var_0 == 910) {  std::min( arr[k],arr[n] ); }
        if(env_var_0 == 911) {  std::min( arr[k],k ); }
        if(env_var_0 == 912) {  std::min( arr[k],max1 ); }
        if(env_var_0 == 913) {  std::min( arr[k],n ); }
        if(env_var_0 == 914) {  std::min( arr[max1],arr[k] ); }
        if(env_var_0 == 915) {  std::min( arr[max1],arr[max1] ); }
        if(env_var_0 == 916) {  std::min( arr[max1],arr[n] ); }
        if(env_var_0 == 917) {  std::min( arr[max1],k ); }
        if(env_var_0 == 918) {  std::min( arr[max1],max1 ); }
        if(env_var_0 == 919) {  std::min( arr[max1],n ); }
        if(env_var_0 == 920) {  std::min( arr[n],arr[k] ); }
        if(env_var_0 == 921) {  std::min( arr[n],arr[max1] ); }
        if(env_var_0 == 922) {  std::min( arr[n],arr[n] ); }
        if(env_var_0 == 923) {  std::min( arr[n],k ); }
        if(env_var_0 == 924) {  std::min( arr[n],max1 ); }
        if(env_var_0 == 925) {  std::min( arr[n],n ); }
        if(env_var_0 == 926) {  std::min( k,arr[k] ); }
        if(env_var_0 == 927) {  std::min( k,arr[max1] ); }
        if(env_var_0 == 928) {  std::min( k,arr[n] ); }
        if(env_var_0 == 929) {  std::min( k,k ); }
        if(env_var_0 == 930) {  std::min( k,max1 ); }
        if(env_var_0 == 931) {  std::min( k,n ); }
        if(env_var_0 == 932) {  std::min( max1,arr[k] ); }
        if(env_var_0 == 933) {  std::min( max1,arr[max1] ); }
        if(env_var_0 == 934) {  std::min( max1,arr[n] ); }
        if(env_var_0 == 935) {  std::min( max1,k ); }
        if(env_var_0 == 936) {  std::min( max1,max1 ); }
        if(env_var_0 == 937) {  std::min( max1,n ); }
        if(env_var_0 == 938) {  std::min( n,arr[k] ); }
        if(env_var_0 == 939) {  std::min( n,arr[max1] ); }
        if(env_var_0 == 940) {  std::min( n,arr[n] ); }
        if(env_var_0 == 941) {  std::min( n,k ); }
        if(env_var_0 == 942) {  std::min( n,max1 ); }
        if(env_var_0 == 943) {  std::min( n,n ); }
        if(env_var_0 == 944) {  toupper( arr[k] ); }
        if(env_var_0 == 945) {  toupper( arr[max1] ); }
        if(env_var_0 == 946) {  toupper( arr[n] ); }
        if(env_var_0 == 947) {  toupper( k ); }
        if(env_var_0 == 948) {  toupper( max1 ); }
        if(env_var_0 == 949) {  toupper( n ); }

        for (int i = 1; i < n; i++)
            if (arr[i] > max1)
                max1 = arr[i];
        int res = 0;
        for (int i = 0; i < n; i++)
            res += (max1 - arr[i]) / k;
        return res;
    }

int main() {
    int n_success = 0;
   vector<vector<int>> param0 {{4, 7, 19, 16},{4,4,4,4,4},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{85,36,52,8,52,15,16},{-10,-5,-5,-20,10,30},{0,1,0,0,1,1,1,0,0,0,0,1,1,0,0,1,0},{1,5,5,9,11,12,12,13,13,14,16,18,26,26,28,28,30,31,32,37,37,38,40,43,44,45,47,47,55,58,60,62,63,64,69,78,83,84,92,96,96,99},{76,-78,92,-98,16,44,86,96,-8,2,-96,74,-28,12,54,-40,-64,-12,4,48,68,-82,8,0,-4,88,48,-54,90,62,-84,76,-48,62,-80,-94,38,-4,36},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{62,99,29,23,55,30,79,63,1,88,59,8,11,80,23,51,97,32,80,48,84,36,73,59,1,34,92,10}};
    vector<int> param1 {4,5,39,5,6,10,26,34,39,18};
    vector<int> param2 {3,3,1,6,5,15,33,3,10,1};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
