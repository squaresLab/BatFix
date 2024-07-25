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
#include <queue>
#include <set>
using namespace std;
int f_gold ( int arr [ ], int n, int sum ) {
  unordered_map < int, int > prevSum;
  int res = 0;
  int currsum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    currsum += arr [ i ];
    if ( currsum == sum ) res ++;
    if ( prevSum . find ( currsum - sum ) != prevSum . end ( ) ) res += ( prevSum [ currsum - sum ] );
    prevSum [ currsum ] ++;
  }
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n , int sum ) {
  unordered_map < int , int > prevSum ;
  int res = 0 ;
  int currsum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currsum += arr [ i ] ;
    if ( currsum == sum ) {
      res ++ ;
    }
    if ( prevSum . find ( currsum - sum ) != prevSum . end ( ) ) {
      res += prevSum [ currsum - sum ] ;
    }
    auto count = prevSum . find ( currsum ) ;
    if ( count == prevSum . end ( ) ) {
      prevSum [ currsum ] = 1 ;
    }
    else {
   if(env_var_0 == 0) { arr; }
      if(env_var_0 == 1) { arr+count.operator->()->second; }
      if(env_var_0 == 2) { arr+currsum; }
      if(env_var_0 == 3) { arr+i; }
      if(env_var_0 == 4) { arr+n; }
      if(env_var_0 == 5) { arr+res; }
      if(env_var_0 == 6) { arr+sum; }
      if(env_var_0 == 7) { arr[count.operator->()->second]; }
      if(env_var_0 == 8) { arr[currsum]; }
      if(env_var_0 == 9) { arr[i]; }
      if(env_var_0 == 10) { arr[n]; }
      if(env_var_0 == 11) { arr[res]; }
      if(env_var_0 == 12) { arr[sum]; }
      if(env_var_0 == 13) { count; }
      if(env_var_0 == 14) { count.operator->()->first; }
      if(env_var_0 == 15) { count.operator->()->second; }
      if(env_var_0 == 16) { currsum; }
      if(env_var_0 == 17) { i; }
      if(env_var_0 == 18) { isupper( arr[count.operator->()->second] ); }
      if(env_var_0 == 19) { isupper( arr[currsum] ); }
      if(env_var_0 == 20) { isupper( arr[i] ); }
      if(env_var_0 == 21) { isupper( arr[n] ); }
      if(env_var_0 == 22) { isupper( arr[res] ); }
      if(env_var_0 == 23) { isupper( arr[sum] ); }
      if(env_var_0 == 24) { isupper( count.operator->()->first ); }
      if(env_var_0 == 25) { isupper( count.operator->()->second ); }
      if(env_var_0 == 26) { isupper( currsum ); }
      if(env_var_0 == 27) { isupper( i ); }
      if(env_var_0 == 28) { isupper( n ); }
      if(env_var_0 == 29) { isupper( res ); }
      if(env_var_0 == 30) { isupper( sum ); }
      if(env_var_0 == 31) { n; }
      if(env_var_0 == 32) { prevSum; }
      if(env_var_0 == 33) { prevSum.begin(); }
      if(env_var_0 == 34) { prevSum.end(); }
      if(env_var_0 == 35) { res; }
      if(env_var_0 == 36) { std::max( arr[count.operator->()->second],arr[count.operator->()->second] ); }
      if(env_var_0 == 37) { std::max( arr[count.operator->()->second],arr[currsum] ); }
      if(env_var_0 == 38) { std::max( arr[count.operator->()->second],arr[i] ); }
      if(env_var_0 == 39) { std::max( arr[count.operator->()->second],arr[n] ); }
      if(env_var_0 == 40) { std::max( arr[count.operator->()->second],arr[res] ); }
      if(env_var_0 == 41) { std::max( arr[count.operator->()->second],arr[sum] ); }
      if(env_var_0 == 42) { std::max( arr[count.operator->()->second],count.operator->()->first ); }
      if(env_var_0 == 43) { std::max( arr[count.operator->()->second],count.operator->()->second ); }
      if(env_var_0 == 44) { std::max( arr[count.operator->()->second],currsum ); }
      if(env_var_0 == 45) { std::max( arr[count.operator->()->second],i ); }
      if(env_var_0 == 46) { std::max( arr[count.operator->()->second],n ); }
      if(env_var_0 == 47) { std::max( arr[count.operator->()->second],res ); }
      if(env_var_0 == 48) { std::max( arr[count.operator->()->second],sum ); }
      if(env_var_0 == 49) { std::max( arr[currsum],arr[count.operator->()->second] ); }
      if(env_var_0 == 50) { std::max( arr[currsum],arr[currsum] ); }
      if(env_var_0 == 51) { std::max( arr[currsum],arr[i] ); }
      if(env_var_0 == 52) { std::max( arr[currsum],arr[n] ); }
      if(env_var_0 == 53) { std::max( arr[currsum],arr[res] ); }
      if(env_var_0 == 54) { std::max( arr[currsum],arr[sum] ); }
      if(env_var_0 == 55) { std::max( arr[currsum],count.operator->()->first ); }
      if(env_var_0 == 56) { std::max( arr[currsum],count.operator->()->second ); }
      if(env_var_0 == 57) { std::max( arr[currsum],currsum ); }
      if(env_var_0 == 58) { std::max( arr[currsum],i ); }
      if(env_var_0 == 59) { std::max( arr[currsum],n ); }
      if(env_var_0 == 60) { std::max( arr[currsum],res ); }
      if(env_var_0 == 61) { std::max( arr[currsum],sum ); }
      if(env_var_0 == 62) { std::max( arr[i],arr[count.operator->()->second] ); }
      if(env_var_0 == 63) { std::max( arr[i],arr[currsum] ); }
      if(env_var_0 == 64) { std::max( arr[i],arr[i] ); }
      if(env_var_0 == 65) { std::max( arr[i],arr[n] ); }
      if(env_var_0 == 66) { std::max( arr[i],arr[res] ); }
      if(env_var_0 == 67) { std::max( arr[i],arr[sum] ); }
      if(env_var_0 == 68) { std::max( arr[i],count.operator->()->first ); }
      if(env_var_0 == 69) { std::max( arr[i],count.operator->()->second ); }
      if(env_var_0 == 70) { std::max( arr[i],currsum ); }
      if(env_var_0 == 71) { std::max( arr[i],i ); }
      if(env_var_0 == 72) { std::max( arr[i],n ); }
      if(env_var_0 == 73) { std::max( arr[i],res ); }
      if(env_var_0 == 74) { std::max( arr[i],sum ); }
      if(env_var_0 == 75) { std::max( arr[n],arr[count.operator->()->second] ); }
      if(env_var_0 == 76) { std::max( arr[n],arr[currsum] ); }
      if(env_var_0 == 77) { std::max( arr[n],arr[i] ); }
      if(env_var_0 == 78) { std::max( arr[n],arr[n] ); }
      if(env_var_0 == 79) { std::max( arr[n],arr[res] ); }
      if(env_var_0 == 80) { std::max( arr[n],arr[sum] ); }
      if(env_var_0 == 81) { std::max( arr[n],count.operator->()->first ); }
      if(env_var_0 == 82) { std::max( arr[n],count.operator->()->second ); }
      if(env_var_0 == 83) { std::max( arr[n],currsum ); }
      if(env_var_0 == 84) { std::max( arr[n],i ); }
      if(env_var_0 == 85) { std::max( arr[n],n ); }
      if(env_var_0 == 86) { std::max( arr[n],res ); }
      if(env_var_0 == 87) { std::max( arr[n],sum ); }
      if(env_var_0 == 88) { std::max( arr[res],arr[count.operator->()->second] ); }
      if(env_var_0 == 89) { std::max( arr[res],arr[currsum] ); }
      if(env_var_0 == 90) { std::max( arr[res],arr[i] ); }
      if(env_var_0 == 91) { std::max( arr[res],arr[n] ); }
      if(env_var_0 == 92) { std::max( arr[res],arr[res] ); }
      if(env_var_0 == 93) { std::max( arr[res],arr[sum] ); }
      if(env_var_0 == 94) { std::max( arr[res],count.operator->()->first ); }
      if(env_var_0 == 95) { std::max( arr[res],count.operator->()->second ); }
      if(env_var_0 == 96) { std::max( arr[res],currsum ); }
      if(env_var_0 == 97) { std::max( arr[res],i ); }
      if(env_var_0 == 98) { std::max( arr[res],n ); }
      if(env_var_0 == 99) { std::max( arr[res],res ); }
      if(env_var_0 == 100) { std::max( arr[res],sum ); }
      if(env_var_0 == 101) { std::max( arr[sum],arr[count.operator->()->second] ); }
      if(env_var_0 == 102) { std::max( arr[sum],arr[currsum] ); }
      if(env_var_0 == 103) { std::max( arr[sum],arr[i] ); }
      if(env_var_0 == 104) { std::max( arr[sum],arr[n] ); }
      if(env_var_0 == 105) { std::max( arr[sum],arr[res] ); }
      if(env_var_0 == 106) { std::max( arr[sum],arr[sum] ); }
      if(env_var_0 == 107) { std::max( arr[sum],count.operator->()->first ); }
      if(env_var_0 == 108) { std::max( arr[sum],count.operator->()->second ); }
      if(env_var_0 == 109) { std::max( arr[sum],currsum ); }
      if(env_var_0 == 110) { std::max( arr[sum],i ); }
      if(env_var_0 == 111) { std::max( arr[sum],n ); }
      if(env_var_0 == 112) { std::max( arr[sum],res ); }
      if(env_var_0 == 113) { std::max( arr[sum],sum ); }
      if(env_var_0 == 114) { std::max( count.operator->()->first,arr[count.operator->()->second] ); }
      if(env_var_0 == 115) { std::max( count.operator->()->first,arr[currsum] ); }
      if(env_var_0 == 116) { std::max( count.operator->()->first,arr[i] ); }
      if(env_var_0 == 117) { std::max( count.operator->()->first,arr[n] ); }
      if(env_var_0 == 118) { std::max( count.operator->()->first,arr[res] ); }
      if(env_var_0 == 119) { std::max( count.operator->()->first,arr[sum] ); }
      if(env_var_0 == 120) { std::max( count.operator->()->first,count.operator->()->first ); }
      if(env_var_0 == 121) { std::max( count.operator->()->first,count.operator->()->second ); }
      if(env_var_0 == 122) { std::max( count.operator->()->first,currsum ); }
      if(env_var_0 == 123) { std::max( count.operator->()->first,i ); }
      if(env_var_0 == 124) { std::max( count.operator->()->first,n ); }
      if(env_var_0 == 125) { std::max( count.operator->()->first,res ); }
      if(env_var_0 == 126) { std::max( count.operator->()->first,sum ); }
      if(env_var_0 == 127) { std::max( count.operator->()->second,arr[count.operator->()->second] ); }
      if(env_var_0 == 128) { std::max( count.operator->()->second,arr[currsum] ); }
      if(env_var_0 == 129) { std::max( count.operator->()->second,arr[i] ); }
      if(env_var_0 == 130) { std::max( count.operator->()->second,arr[n] ); }
      if(env_var_0 == 131) { std::max( count.operator->()->second,arr[res] ); }
      if(env_var_0 == 132) { std::max( count.operator->()->second,arr[sum] ); }
      if(env_var_0 == 133) { std::max( count.operator->()->second,count.operator->()->first ); }
      if(env_var_0 == 134) { std::max( count.operator->()->second,count.operator->()->second ); }
      if(env_var_0 == 135) { std::max( count.operator->()->second,currsum ); }
      if(env_var_0 == 136) { std::max( count.operator->()->second,i ); }
      if(env_var_0 == 137) { std::max( count.operator->()->second,n ); }
      if(env_var_0 == 138) { std::max( count.operator->()->second,res ); }
      if(env_var_0 == 139) { std::max( count.operator->()->second,sum ); }
      if(env_var_0 == 140) { std::max( currsum,arr[count.operator->()->second] ); }
      if(env_var_0 == 141) { std::max( currsum,arr[currsum] ); }
      if(env_var_0 == 142) { std::max( currsum,arr[i] ); }
      if(env_var_0 == 143) { std::max( currsum,arr[n] ); }
      if(env_var_0 == 144) { std::max( currsum,arr[res] ); }
      if(env_var_0 == 145) { std::max( currsum,arr[sum] ); }
      if(env_var_0 == 146) { std::max( currsum,count.operator->()->first ); }
      if(env_var_0 == 147) { std::max( currsum,count.operator->()->second ); }
      if(env_var_0 == 148) { std::max( currsum,currsum ); }
      if(env_var_0 == 149) { std::max( currsum,i ); }
      if(env_var_0 == 150) { std::max( currsum,n ); }
      if(env_var_0 == 151) { std::max( currsum,res ); }
      if(env_var_0 == 152) { std::max( currsum,sum ); }
      if(env_var_0 == 153) { std::max( i,arr[count.operator->()->second] ); }
      if(env_var_0 == 154) { std::max( i,arr[currsum] ); }
      if(env_var_0 == 155) { std::max( i,arr[i] ); }
      if(env_var_0 == 156) { std::max( i,arr[n] ); }
      if(env_var_0 == 157) { std::max( i,arr[res] ); }
      if(env_var_0 == 158) { std::max( i,arr[sum] ); }
      if(env_var_0 == 159) { std::max( i,count.operator->()->first ); }
      if(env_var_0 == 160) { std::max( i,count.operator->()->second ); }
      if(env_var_0 == 161) { std::max( i,currsum ); }
      if(env_var_0 == 162) { std::max( i,i ); }
      if(env_var_0 == 163) { std::max( i,n ); }
      if(env_var_0 == 164) { std::max( i,res ); }
      if(env_var_0 == 165) { std::max( i,sum ); }
      if(env_var_0 == 166) { std::max( n,arr[count.operator->()->second] ); }
      if(env_var_0 == 167) { std::max( n,arr[currsum] ); }
      if(env_var_0 == 168) { std::max( n,arr[i] ); }
      if(env_var_0 == 169) { std::max( n,arr[n] ); }
      if(env_var_0 == 170) { std::max( n,arr[res] ); }
      if(env_var_0 == 171) { std::max( n,arr[sum] ); }
      if(env_var_0 == 172) { std::max( n,count.operator->()->first ); }
      if(env_var_0 == 173) { std::max( n,count.operator->()->second ); }
      if(env_var_0 == 174) { std::max( n,currsum ); }
      if(env_var_0 == 175) { std::max( n,i ); }
      if(env_var_0 == 176) { std::max( n,n ); }
      if(env_var_0 == 177) { std::max( n,res ); }
      if(env_var_0 == 178) { std::max( n,sum ); }
      if(env_var_0 == 179) { std::max( res,arr[count.operator->()->second] ); }
      if(env_var_0 == 180) { std::max( res,arr[currsum] ); }
      if(env_var_0 == 181) { std::max( res,arr[i] ); }
      if(env_var_0 == 182) { std::max( res,arr[n] ); }
      if(env_var_0 == 183) { std::max( res,arr[res] ); }
      if(env_var_0 == 184) { std::max( res,arr[sum] ); }
      if(env_var_0 == 185) { std::max( res,count.operator->()->first ); }
      if(env_var_0 == 186) { std::max( res,count.operator->()->second ); }
      if(env_var_0 == 187) { std::max( res,currsum ); }
      if(env_var_0 == 188) { std::max( res,i ); }
      if(env_var_0 == 189) { std::max( res,n ); }
      if(env_var_0 == 190) { std::max( res,res ); }
      if(env_var_0 == 191) { std::max( res,sum ); }
      if(env_var_0 == 192) { std::max( sum,arr[count.operator->()->second] ); }
      if(env_var_0 == 193) { std::max( sum,arr[currsum] ); }
      if(env_var_0 == 194) { std::max( sum,arr[i] ); }
      if(env_var_0 == 195) { std::max( sum,arr[n] ); }
      if(env_var_0 == 196) { std::max( sum,arr[res] ); }
      if(env_var_0 == 197) { std::max( sum,arr[sum] ); }
      if(env_var_0 == 198) { std::max( sum,count.operator->()->first ); }
      if(env_var_0 == 199) { std::max( sum,count.operator->()->second ); }
      if(env_var_0 == 200) { std::max( sum,currsum ); }
      if(env_var_0 == 201) { std::max( sum,i ); }
      if(env_var_0 == 202) { std::max( sum,n ); }
      if(env_var_0 == 203) { std::max( sum,res ); }
      if(env_var_0 == 204) { std::max( sum,sum ); }
      if(env_var_0 == 205) { std::max(); }
      if(env_var_0 == 206) { std::min( arr[count.operator->()->second],arr[count.operator->()->second] ); }
      if(env_var_0 == 207) { std::min( arr[count.operator->()->second],arr[currsum] ); }
      if(env_var_0 == 208) { std::min( arr[count.operator->()->second],arr[i] ); }
      if(env_var_0 == 209) { std::min( arr[count.operator->()->second],arr[n] ); }
      if(env_var_0 == 210) { std::min( arr[count.operator->()->second],arr[res] ); }
      if(env_var_0 == 211) { std::min( arr[count.operator->()->second],arr[sum] ); }
      if(env_var_0 == 212) { std::min( arr[count.operator->()->second],count.operator->()->first ); }
      if(env_var_0 == 213) { std::min( arr[count.operator->()->second],count.operator->()->second ); }
      if(env_var_0 == 214) { std::min( arr[count.operator->()->second],currsum ); }
      if(env_var_0 == 215) { std::min( arr[count.operator->()->second],i ); }
      if(env_var_0 == 216) { std::min( arr[count.operator->()->second],n ); }
      if(env_var_0 == 217) { std::min( arr[count.operator->()->second],res ); }
      if(env_var_0 == 218) { std::min( arr[count.operator->()->second],sum ); }
      if(env_var_0 == 219) { std::min( arr[currsum],arr[count.operator->()->second] ); }
      if(env_var_0 == 220) { std::min( arr[currsum],arr[currsum] ); }
      if(env_var_0 == 221) { std::min( arr[currsum],arr[i] ); }
      if(env_var_0 == 222) { std::min( arr[currsum],arr[n] ); }
      if(env_var_0 == 223) { std::min( arr[currsum],arr[res] ); }
      if(env_var_0 == 224) { std::min( arr[currsum],arr[sum] ); }
      if(env_var_0 == 225) { std::min( arr[currsum],count.operator->()->first ); }
      if(env_var_0 == 226) { std::min( arr[currsum],count.operator->()->second ); }
      if(env_var_0 == 227) { std::min( arr[currsum],currsum ); }
      if(env_var_0 == 228) { std::min( arr[currsum],i ); }
      if(env_var_0 == 229) { std::min( arr[currsum],n ); }
      if(env_var_0 == 230) { std::min( arr[currsum],res ); }
      if(env_var_0 == 231) { std::min( arr[currsum],sum ); }
      if(env_var_0 == 232) { std::min( arr[i],arr[count.operator->()->second] ); }
      if(env_var_0 == 233) { std::min( arr[i],arr[currsum] ); }
      if(env_var_0 == 234) { std::min( arr[i],arr[i] ); }
      if(env_var_0 == 235) { std::min( arr[i],arr[n] ); }
      if(env_var_0 == 236) { std::min( arr[i],arr[res] ); }
      if(env_var_0 == 237) { std::min( arr[i],arr[sum] ); }
      if(env_var_0 == 238) { std::min( arr[i],count.operator->()->first ); }
      if(env_var_0 == 239) { std::min( arr[i],count.operator->()->second ); }
      if(env_var_0 == 240) { std::min( arr[i],currsum ); }
      if(env_var_0 == 241) { std::min( arr[i],i ); }
      if(env_var_0 == 242) { std::min( arr[i],n ); }
      if(env_var_0 == 243) { std::min( arr[i],res ); }
      if(env_var_0 == 244) { std::min( arr[i],sum ); }
      if(env_var_0 == 245) { std::min( arr[n],arr[count.operator->()->second] ); }
      if(env_var_0 == 246) { std::min( arr[n],arr[currsum] ); }
      if(env_var_0 == 247) { std::min( arr[n],arr[i] ); }
      if(env_var_0 == 248) { std::min( arr[n],arr[n] ); }
      if(env_var_0 == 249) { std::min( arr[n],arr[res] ); }
      if(env_var_0 == 250) { std::min( arr[n],arr[sum] ); }
      if(env_var_0 == 251) { std::min( arr[n],count.operator->()->first ); }
      if(env_var_0 == 252) { std::min( arr[n],count.operator->()->second ); }
      if(env_var_0 == 253) { std::min( arr[n],currsum ); }
      if(env_var_0 == 254) { std::min( arr[n],i ); }
      if(env_var_0 == 255) { std::min( arr[n],n ); }
      if(env_var_0 == 256) { std::min( arr[n],res ); }
      if(env_var_0 == 257) { std::min( arr[n],sum ); }
      if(env_var_0 == 258) { std::min( arr[res],arr[count.operator->()->second] ); }
      if(env_var_0 == 259) { std::min( arr[res],arr[currsum] ); }
      if(env_var_0 == 260) { std::min( arr[res],arr[i] ); }
      if(env_var_0 == 261) { std::min( arr[res],arr[n] ); }
      if(env_var_0 == 262) { std::min( arr[res],arr[res] ); }
      if(env_var_0 == 263) { std::min( arr[res],arr[sum] ); }
      if(env_var_0 == 264) { std::min( arr[res],count.operator->()->first ); }
      if(env_var_0 == 265) { std::min( arr[res],count.operator->()->second ); }
      if(env_var_0 == 266) { std::min( arr[res],currsum ); }
      if(env_var_0 == 267) { std::min( arr[res],i ); }
      if(env_var_0 == 268) { std::min( arr[res],n ); }
      if(env_var_0 == 269) { std::min( arr[res],res ); }
      if(env_var_0 == 270) { std::min( arr[res],sum ); }
      if(env_var_0 == 271) { std::min( arr[sum],arr[count.operator->()->second] ); }
      if(env_var_0 == 272) { std::min( arr[sum],arr[currsum] ); }
      if(env_var_0 == 273) { std::min( arr[sum],arr[i] ); }
      if(env_var_0 == 274) { std::min( arr[sum],arr[n] ); }
      if(env_var_0 == 275) { std::min( arr[sum],arr[res] ); }
      if(env_var_0 == 276) { std::min( arr[sum],arr[sum] ); }
      if(env_var_0 == 277) { std::min( arr[sum],count.operator->()->first ); }
      if(env_var_0 == 278) { std::min( arr[sum],count.operator->()->second ); }
      if(env_var_0 == 279) { std::min( arr[sum],currsum ); }
      if(env_var_0 == 280) { std::min( arr[sum],i ); }
      if(env_var_0 == 281) { std::min( arr[sum],n ); }
      if(env_var_0 == 282) { std::min( arr[sum],res ); }
      if(env_var_0 == 283) { std::min( arr[sum],sum ); }
      if(env_var_0 == 284) { std::min( count.operator->()->first,arr[count.operator->()->second] ); }
      if(env_var_0 == 285) { std::min( count.operator->()->first,arr[currsum] ); }
      if(env_var_0 == 286) { std::min( count.operator->()->first,arr[i] ); }
      if(env_var_0 == 287) { std::min( count.operator->()->first,arr[n] ); }
      if(env_var_0 == 288) { std::min( count.operator->()->first,arr[res] ); }
      if(env_var_0 == 289) { std::min( count.operator->()->first,arr[sum] ); }
      if(env_var_0 == 290) { std::min( count.operator->()->first,count.operator->()->first ); }
      if(env_var_0 == 291) { std::min( count.operator->()->first,count.operator->()->second ); }
      if(env_var_0 == 292) { std::min( count.operator->()->first,currsum ); }
      if(env_var_0 == 293) { std::min( count.operator->()->first,i ); }
      if(env_var_0 == 294) { std::min( count.operator->()->first,n ); }
      if(env_var_0 == 295) { std::min( count.operator->()->first,res ); }
      if(env_var_0 == 296) { std::min( count.operator->()->first,sum ); }
      if(env_var_0 == 297) { std::min( count.operator->()->second,arr[count.operator->()->second] ); }
      if(env_var_0 == 298) { std::min( count.operator->()->second,arr[currsum] ); }
      if(env_var_0 == 299) { std::min( count.operator->()->second,arr[i] ); }
      if(env_var_0 == 300) { std::min( count.operator->()->second,arr[n] ); }
      if(env_var_0 == 301) { std::min( count.operator->()->second,arr[res] ); }
      if(env_var_0 == 302) { std::min( count.operator->()->second,arr[sum] ); }
      if(env_var_0 == 303) { std::min( count.operator->()->second,count.operator->()->first ); }
      if(env_var_0 == 304) { std::min( count.operator->()->second,count.operator->()->second ); }
      if(env_var_0 == 305) { std::min( count.operator->()->second,currsum ); }
      if(env_var_0 == 306) { std::min( count.operator->()->second,i ); }
      if(env_var_0 == 307) { std::min( count.operator->()->second,n ); }
      if(env_var_0 == 308) { std::min( count.operator->()->second,res ); }
      if(env_var_0 == 309) { std::min( count.operator->()->second,sum ); }
      if(env_var_0 == 310) { std::min( currsum,arr[count.operator->()->second] ); }
      if(env_var_0 == 311) { std::min( currsum,arr[currsum] ); }
      if(env_var_0 == 312) { std::min( currsum,arr[i] ); }
      if(env_var_0 == 313) { std::min( currsum,arr[n] ); }
      if(env_var_0 == 314) { std::min( currsum,arr[res] ); }
      if(env_var_0 == 315) { std::min( currsum,arr[sum] ); }
      if(env_var_0 == 316) { std::min( currsum,count.operator->()->first ); }
      if(env_var_0 == 317) { std::min( currsum,count.operator->()->second ); }
      if(env_var_0 == 318) { std::min( currsum,currsum ); }
      if(env_var_0 == 319) { std::min( currsum,i ); }
      if(env_var_0 == 320) { std::min( currsum,n ); }
      if(env_var_0 == 321) { std::min( currsum,res ); }
      if(env_var_0 == 322) { std::min( currsum,sum ); }
      if(env_var_0 == 323) { std::min( i,arr[count.operator->()->second] ); }
      if(env_var_0 == 324) { std::min( i,arr[currsum] ); }
      if(env_var_0 == 325) { std::min( i,arr[i] ); }
      if(env_var_0 == 326) { std::min( i,arr[n] ); }
      if(env_var_0 == 327) { std::min( i,arr[res] ); }
      if(env_var_0 == 328) { std::min( i,arr[sum] ); }
      if(env_var_0 == 329) { std::min( i,count.operator->()->first ); }
      if(env_var_0 == 330) { std::min( i,count.operator->()->second ); }
      if(env_var_0 == 331) { std::min( i,currsum ); }
      if(env_var_0 == 332) { std::min( i,i ); }
      if(env_var_0 == 333) { std::min( i,n ); }
      if(env_var_0 == 334) { std::min( i,res ); }
      if(env_var_0 == 335) { std::min( i,sum ); }
      if(env_var_0 == 336) { std::min( n,arr[count.operator->()->second] ); }
      if(env_var_0 == 337) { std::min( n,arr[currsum] ); }
      if(env_var_0 == 338) { std::min( n,arr[i] ); }
      if(env_var_0 == 339) { std::min( n,arr[n] ); }
      if(env_var_0 == 340) { std::min( n,arr[res] ); }
      if(env_var_0 == 341) { std::min( n,arr[sum] ); }
      if(env_var_0 == 342) { std::min( n,count.operator->()->first ); }
      if(env_var_0 == 343) { std::min( n,count.operator->()->second ); }
      if(env_var_0 == 344) { std::min( n,currsum ); }
      if(env_var_0 == 345) { std::min( n,i ); }
      if(env_var_0 == 346) { std::min( n,n ); }
      if(env_var_0 == 347) { std::min( n,res ); }
      if(env_var_0 == 348) { std::min( n,sum ); }
      if(env_var_0 == 349) { std::min( res,arr[count.operator->()->second] ); }
      if(env_var_0 == 350) { std::min( res,arr[currsum] ); }
      if(env_var_0 == 351) { std::min( res,arr[i] ); }
      if(env_var_0 == 352) { std::min( res,arr[n] ); }
      if(env_var_0 == 353) { std::min( res,arr[res] ); }
      if(env_var_0 == 354) { std::min( res,arr[sum] ); }
      if(env_var_0 == 355) { std::min( res,count.operator->()->first ); }
      if(env_var_0 == 356) { std::min( res,count.operator->()->second ); }
      if(env_var_0 == 357) { std::min( res,currsum ); }
      if(env_var_0 == 358) { std::min( res,i ); }
      if(env_var_0 == 359) { std::min( res,n ); }
      if(env_var_0 == 360) { std::min( res,res ); }
      if(env_var_0 == 361) { std::min( res,sum ); }
      if(env_var_0 == 362) { std::min( sum,arr[count.operator->()->second] ); }
      if(env_var_0 == 363) { std::min( sum,arr[currsum] ); }
      if(env_var_0 == 364) { std::min( sum,arr[i] ); }
      if(env_var_0 == 365) { std::min( sum,arr[n] ); }
      if(env_var_0 == 366) { std::min( sum,arr[res] ); }
      if(env_var_0 == 367) { std::min( sum,arr[sum] ); }
      if(env_var_0 == 368) { std::min( sum,count.operator->()->first ); }
      if(env_var_0 == 369) { std::min( sum,count.operator->()->second ); }
      if(env_var_0 == 370) { std::min( sum,currsum ); }
      if(env_var_0 == 371) { std::min( sum,i ); }
      if(env_var_0 == 372) { std::min( sum,n ); }
      if(env_var_0 == 373) { std::min( sum,res ); }
      if(env_var_0 == 374) { std::min( sum,sum ); }
      if(env_var_0 == 375) { sum; }
      if(env_var_0 == 376) { toupper( arr[count.operator->()->second] ); }
      if(env_var_0 == 377) { toupper( arr[currsum] ); }
      if(env_var_0 == 378) { toupper( arr[i] ); }
      if(env_var_0 == 379) { toupper( arr[n] ); }
      if(env_var_0 == 380) { toupper( arr[res] ); }
      if(env_var_0 == 381) { toupper( arr[sum] ); }
      if(env_var_0 == 382) { toupper( count.operator->()->first ); }
      if(env_var_0 == 383) { toupper( count.operator->()->second ); }
      if(env_var_0 == 384) { toupper( currsum ); }
      if(env_var_0 == 385) { toupper( i ); }
      if(env_var_0 == 386) { toupper( n ); }
      if(env_var_0 == 387) { toupper( res ); }
      if(env_var_0 == 388) { toupper( sum ); }
          ;
    }
  }
  return res ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{9,18,27,52,70,91},{60,-88,-48,90,-28,20,18,34,-58,76,-78,-18,68,-48,8,34,60,-34,-10,32,78,-84,-22,54,-18,-82,-70,-58,-20,-76,88,-30,-6,68},{0,0,0,0,0,0,0,0,1,1,1,1},{67,39,22,32,59,44,86,26,46,60,99,12,32,46,16,22,45,85,21,92,77,50,65,23,93,26,23,20,32,83,60,22,11,45,99,31,72},{-86,-84,-82,-82,-28,-12,4,24,62,72},{1,0,0,1,0,1,1,1,0,1,1,1,0,0,1,1,1,1},{8,20,25,27,28,28,30,31,32,36,39,41,51,53,53,54,56,58,59,77,78,85,88,92,99},{60,40,-96,-76,-34,-18,38,-62,50,56,64,-94,-50,50,-80,42,-66,-42,68,70,78,-18,-24,-48,-92,64,14,24,-94,-98,18,44,-58},{0,0,0,0,1,1,1,1,1,1,1,1},{73,52,37,80,4,26,3,76,32,79,31,32,8,87,42,50,51}};
    vector<int> param1 {5,32,11,25,7,16,13,22,11,8};
    vector<int> param2 {4,30,11,25,5,13,18,17,8,14};
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

