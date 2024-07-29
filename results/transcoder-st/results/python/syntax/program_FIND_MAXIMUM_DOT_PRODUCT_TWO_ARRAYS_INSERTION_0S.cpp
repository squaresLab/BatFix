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
long long int f_gold ( int A [ ], int B [ ], int m, int n ) {
  long long int dp [ n + 1 ] [ m + 1 ];
  memset ( dp, 0, sizeof ( dp ) );
  for ( int i = 1;
  i <= n;
  i ++ ) for ( int j = i;
  j <= m;
  j ++ ) dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ), dp [ i ] [ j - 1 ] );
  return dp [ n ] [ m ];
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
double f_filled(double *A, double *B, int m, int n) {
    double *dp[m + 1][n + 1];
    for (int i = 0; i < m + 1; i++) {
        for (int j = 0; j < n + 1; j++)
            if(env_var_0 == 0) { A; }
            if(env_var_0 == 1) { A+i; }
            if(env_var_0 == 2) { A+j; }
            if(env_var_0 == 3) { A+m; }
            if(env_var_0 == 4) { A+n; }
            if(env_var_0 == 5) { A[i]; }
            if(env_var_0 == 6) { A[j]; }
            if(env_var_0 == 7) { A[m]; }
            if(env_var_0 == 8) { A[n]; }
            if(env_var_0 == 9) { B; }
            if(env_var_0 == 10) { B+i; }
            if(env_var_0 == 11) { B+j; }
            if(env_var_0 == 12) { B+m; }
            if(env_var_0 == 13) { B+n; }
            if(env_var_0 == 14) { B[i]; }
            if(env_var_0 == 15) { B[j]; }
            if(env_var_0 == 16) { B[m]; }
            if(env_var_0 == 17) { B[n]; }
            if(env_var_0 == 18) { dp; }
            if(env_var_0 == 19) { dp[i]; }
            if(env_var_0 == 20) { i; }
            if(env_var_0 == 21) { j; }
            if(env_var_0 == 22) { m; }
            if(env_var_0 == 23) { n; }
            if(env_var_0 == 24) { std::max( A[i],A[i] ); }
            if(env_var_0 == 25) { std::max( A[i],A[j] ); }
            if(env_var_0 == 26) { std::max( A[i],A[m] ); }
            if(env_var_0 == 27) { std::max( A[i],A[n] ); }
            if(env_var_0 == 28) { std::max( A[i],B[i] ); }
            if(env_var_0 == 29) { std::max( A[i],B[j] ); }
            if(env_var_0 == 30) { std::max( A[i],B[m] ); }
            if(env_var_0 == 31) { std::max( A[i],B[n] ); }
            if(env_var_0 == 32) { std::max( A[i],i ); }
            if(env_var_0 == 33) { std::max( A[i],j ); }
            if(env_var_0 == 34) { std::max( A[i],m ); }
            if(env_var_0 == 35) { std::max( A[i],n ); }
            if(env_var_0 == 36) { std::max( A[j],A[i] ); }
            if(env_var_0 == 37) { std::max( A[j],A[j] ); }
            if(env_var_0 == 38) { std::max( A[j],A[m] ); }
            if(env_var_0 == 39) { std::max( A[j],A[n] ); }
            if(env_var_0 == 40) { std::max( A[j],B[i] ); }
            if(env_var_0 == 41) { std::max( A[j],B[j] ); }
            if(env_var_0 == 42) { std::max( A[j],B[m] ); }
            if(env_var_0 == 43) { std::max( A[j],B[n] ); }
            if(env_var_0 == 44) { std::max( A[j],i ); }
            if(env_var_0 == 45) { std::max( A[j],j ); }
            if(env_var_0 == 46) { std::max( A[j],m ); }
            if(env_var_0 == 47) { std::max( A[j],n ); }
            if(env_var_0 == 48) { std::max( A[m],A[i] ); }
            if(env_var_0 == 49) { std::max( A[m],A[j] ); }
            if(env_var_0 == 50) { std::max( A[m],A[m] ); }
            if(env_var_0 == 51) { std::max( A[m],A[n] ); }
            if(env_var_0 == 52) { std::max( A[m],B[i] ); }
            if(env_var_0 == 53) { std::max( A[m],B[j] ); }
            if(env_var_0 == 54) { std::max( A[m],B[m] ); }
            if(env_var_0 == 55) { std::max( A[m],B[n] ); }
            if(env_var_0 == 56) { std::max( A[m],i ); }
            if(env_var_0 == 57) { std::max( A[m],j ); }
            if(env_var_0 == 58) { std::max( A[m],m ); }
            if(env_var_0 == 59) { std::max( A[m],n ); }
            if(env_var_0 == 60) { std::max( A[n],A[i] ); }
            if(env_var_0 == 61) { std::max( A[n],A[j] ); }
            if(env_var_0 == 62) { std::max( A[n],A[m] ); }
            if(env_var_0 == 63) { std::max( A[n],A[n] ); }
            if(env_var_0 == 64) { std::max( A[n],B[i] ); }
            if(env_var_0 == 65) { std::max( A[n],B[j] ); }
            if(env_var_0 == 66) { std::max( A[n],B[m] ); }
            if(env_var_0 == 67) { std::max( A[n],B[n] ); }
            if(env_var_0 == 68) { std::max( A[n],i ); }
            if(env_var_0 == 69) { std::max( A[n],j ); }
            if(env_var_0 == 70) { std::max( A[n],m ); }
            if(env_var_0 == 71) { std::max( A[n],n ); }
            if(env_var_0 == 72) { std::max( B[i],A[i] ); }
            if(env_var_0 == 73) { std::max( B[i],A[j] ); }
            if(env_var_0 == 74) { std::max( B[i],A[m] ); }
            if(env_var_0 == 75) { std::max( B[i],A[n] ); }
            if(env_var_0 == 76) { std::max( B[i],B[i] ); }
            if(env_var_0 == 77) { std::max( B[i],B[j] ); }
            if(env_var_0 == 78) { std::max( B[i],B[m] ); }
            if(env_var_0 == 79) { std::max( B[i],B[n] ); }
            if(env_var_0 == 80) { std::max( B[i],i ); }
            if(env_var_0 == 81) { std::max( B[i],j ); }
            if(env_var_0 == 82) { std::max( B[i],m ); }
            if(env_var_0 == 83) { std::max( B[i],n ); }
            if(env_var_0 == 84) { std::max( B[j],A[i] ); }
            if(env_var_0 == 85) { std::max( B[j],A[j] ); }
            if(env_var_0 == 86) { std::max( B[j],A[m] ); }
            if(env_var_0 == 87) { std::max( B[j],A[n] ); }
            if(env_var_0 == 88) { std::max( B[j],B[i] ); }
            if(env_var_0 == 89) { std::max( B[j],B[j] ); }
            if(env_var_0 == 90) { std::max( B[j],B[m] ); }
            if(env_var_0 == 91) { std::max( B[j],B[n] ); }
            if(env_var_0 == 92) { std::max( B[j],i ); }
            if(env_var_0 == 93) { std::max( B[j],j ); }
            if(env_var_0 == 94) { std::max( B[j],m ); }
            if(env_var_0 == 95) { std::max( B[j],n ); }
            if(env_var_0 == 96) { std::max( B[m],A[i] ); }
            if(env_var_0 == 97) { std::max( B[m],A[j] ); }
            if(env_var_0 == 98) { std::max( B[m],A[m] ); }
            if(env_var_0 == 99) { std::max( B[m],A[n] ); }
            if(env_var_0 == 100) { std::max( B[m],B[i] ); }
            if(env_var_0 == 101) { std::max( B[m],B[j] ); }
            if(env_var_0 == 102) { std::max( B[m],B[m] ); }
            if(env_var_0 == 103) { std::max( B[m],B[n] ); }
            if(env_var_0 == 104) { std::max( B[m],i ); }
            if(env_var_0 == 105) { std::max( B[m],j ); }
            if(env_var_0 == 106) { std::max( B[m],m ); }
            if(env_var_0 == 107) { std::max( B[m],n ); }
            if(env_var_0 == 108) { std::max( B[n],A[i] ); }
            if(env_var_0 == 109) { std::max( B[n],A[j] ); }
            if(env_var_0 == 110) { std::max( B[n],A[m] ); }
            if(env_var_0 == 111) { std::max( B[n],A[n] ); }
            if(env_var_0 == 112) { std::max( B[n],B[i] ); }
            if(env_var_0 == 113) { std::max( B[n],B[j] ); }
            if(env_var_0 == 114) { std::max( B[n],B[m] ); }
            if(env_var_0 == 115) { std::max( B[n],B[n] ); }
            if(env_var_0 == 116) { std::max( B[n],i ); }
            if(env_var_0 == 117) { std::max( B[n],j ); }
            if(env_var_0 == 118) { std::max( B[n],m ); }
            if(env_var_0 == 119) { std::max( B[n],n ); }
            if(env_var_0 == 120) { std::max( i,A[i] ); }
            if(env_var_0 == 121) { std::max( i,A[j] ); }
            if(env_var_0 == 122) { std::max( i,A[m] ); }
            if(env_var_0 == 123) { std::max( i,A[n] ); }
            if(env_var_0 == 124) { std::max( i,B[i] ); }
            if(env_var_0 == 125) { std::max( i,B[j] ); }
            if(env_var_0 == 126) { std::max( i,B[m] ); }
            if(env_var_0 == 127) { std::max( i,B[n] ); }
            if(env_var_0 == 128) { std::max( i,i ); }
            if(env_var_0 == 129) { std::max( i,j ); }
            if(env_var_0 == 130) { std::max( i,m ); }
            if(env_var_0 == 131) { std::max( i,n ); }
            if(env_var_0 == 132) { std::max( j,A[i] ); }
            if(env_var_0 == 133) { std::max( j,A[j] ); }
            if(env_var_0 == 134) { std::max( j,A[m] ); }
            if(env_var_0 == 135) { std::max( j,A[n] ); }
            if(env_var_0 == 136) { std::max( j,B[i] ); }
            if(env_var_0 == 137) { std::max( j,B[j] ); }
            if(env_var_0 == 138) { std::max( j,B[m] ); }
            if(env_var_0 == 139) { std::max( j,B[n] ); }
            if(env_var_0 == 140) { std::max( j,i ); }
            if(env_var_0 == 141) { std::max( j,j ); }
            if(env_var_0 == 142) { std::max( j,m ); }
            if(env_var_0 == 143) { std::max( j,n ); }
            if(env_var_0 == 144) { std::max( m,A[i] ); }
            if(env_var_0 == 145) { std::max( m,A[j] ); }
            if(env_var_0 == 146) { std::max( m,A[m] ); }
            if(env_var_0 == 147) { std::max( m,A[n] ); }
            if(env_var_0 == 148) { std::max( m,B[i] ); }
            if(env_var_0 == 149) { std::max( m,B[j] ); }
            if(env_var_0 == 150) { std::max( m,B[m] ); }
            if(env_var_0 == 151) { std::max( m,B[n] ); }
            if(env_var_0 == 152) { std::max( m,i ); }
            if(env_var_0 == 153) { std::max( m,j ); }
            if(env_var_0 == 154) { std::max( m,m ); }
            if(env_var_0 == 155) { std::max( m,n ); }
            if(env_var_0 == 156) { std::max( n,A[i] ); }
            if(env_var_0 == 157) { std::max( n,A[j] ); }
            if(env_var_0 == 158) { std::max( n,A[m] ); }
            if(env_var_0 == 159) { std::max( n,A[n] ); }
            if(env_var_0 == 160) { std::max( n,B[i] ); }
            if(env_var_0 == 161) { std::max( n,B[j] ); }
            if(env_var_0 == 162) { std::max( n,B[m] ); }
            if(env_var_0 == 163) { std::max( n,B[n] ); }
            if(env_var_0 == 164) { std::max( n,i ); }
            if(env_var_0 == 165) { std::max( n,j ); }
            if(env_var_0 == 166) { std::max( n,m ); }
            if(env_var_0 == 167) { std::max( n,n ); }
            if(env_var_0 == 168) { std::min( A[i],A[i] ); }
            if(env_var_0 == 169) { std::min( A[i],A[j] ); }
            if(env_var_0 == 170) { std::min( A[i],A[m] ); }
            if(env_var_0 == 171) { std::min( A[i],A[n] ); }
            if(env_var_0 == 172) { std::min( A[i],B[i] ); }
            if(env_var_0 == 173) { std::min( A[i],B[j] ); }
            if(env_var_0 == 174) { std::min( A[i],B[m] ); }
            if(env_var_0 == 175) { std::min( A[i],B[n] ); }
            if(env_var_0 == 176) { std::min( A[i],i ); }
            if(env_var_0 == 177) { std::min( A[i],j ); }
            if(env_var_0 == 178) { std::min( A[i],m ); }
            if(env_var_0 == 179) { std::min( A[i],n ); }
            if(env_var_0 == 180) { std::min( A[j],A[i] ); }
            if(env_var_0 == 181) { std::min( A[j],A[j] ); }
            if(env_var_0 == 182) { std::min( A[j],A[m] ); }
            if(env_var_0 == 183) { std::min( A[j],A[n] ); }
            if(env_var_0 == 184) { std::min( A[j],B[i] ); }
            if(env_var_0 == 185) { std::min( A[j],B[j] ); }
            if(env_var_0 == 186) { std::min( A[j],B[m] ); }
            if(env_var_0 == 187) { std::min( A[j],B[n] ); }
            if(env_var_0 == 188) { std::min( A[j],i ); }
            if(env_var_0 == 189) { std::min( A[j],j ); }
            if(env_var_0 == 190) { std::min( A[j],m ); }
            if(env_var_0 == 191) { std::min( A[j],n ); }
            if(env_var_0 == 192) { std::min( A[m],A[i] ); }
            if(env_var_0 == 193) { std::min( A[m],A[j] ); }
            if(env_var_0 == 194) { std::min( A[m],A[m] ); }
            if(env_var_0 == 195) { std::min( A[m],A[n] ); }
            if(env_var_0 == 196) { std::min( A[m],B[i] ); }
            if(env_var_0 == 197) { std::min( A[m],B[j] ); }
            if(env_var_0 == 198) { std::min( A[m],B[m] ); }
            if(env_var_0 == 199) { std::min( A[m],B[n] ); }
            if(env_var_0 == 200) { std::min( A[m],i ); }
            if(env_var_0 == 201) { std::min( A[m],j ); }
            if(env_var_0 == 202) { std::min( A[m],m ); }
            if(env_var_0 == 203) { std::min( A[m],n ); }
            if(env_var_0 == 204) { std::min( A[n],A[i] ); }
            if(env_var_0 == 205) { std::min( A[n],A[j] ); }
            if(env_var_0 == 206) { std::min( A[n],A[m] ); }
            if(env_var_0 == 207) { std::min( A[n],A[n] ); }
            if(env_var_0 == 208) { std::min( A[n],B[i] ); }
            if(env_var_0 == 209) { std::min( A[n],B[j] ); }
            if(env_var_0 == 210) { std::min( A[n],B[m] ); }
            if(env_var_0 == 211) { std::min( A[n],B[n] ); }
            if(env_var_0 == 212) { std::min( A[n],i ); }
            if(env_var_0 == 213) { std::min( A[n],j ); }
            if(env_var_0 == 214) { std::min( A[n],m ); }
            if(env_var_0 == 215) { std::min( A[n],n ); }
            if(env_var_0 == 216) { std::min( B[i],A[i] ); }
            if(env_var_0 == 217) { std::min( B[i],A[j] ); }
            if(env_var_0 == 218) { std::min( B[i],A[m] ); }
            if(env_var_0 == 219) { std::min( B[i],A[n] ); }
            if(env_var_0 == 220) { std::min( B[i],B[i] ); }
            if(env_var_0 == 221) { std::min( B[i],B[j] ); }
            if(env_var_0 == 222) { std::min( B[i],B[m] ); }
            if(env_var_0 == 223) { std::min( B[i],B[n] ); }
            if(env_var_0 == 224) { std::min( B[i],i ); }
            if(env_var_0 == 225) { std::min( B[i],j ); }
            if(env_var_0 == 226) { std::min( B[i],m ); }
            if(env_var_0 == 227) { std::min( B[i],n ); }
            if(env_var_0 == 228) { std::min( B[j],A[i] ); }
            if(env_var_0 == 229) { std::min( B[j],A[j] ); }
            if(env_var_0 == 230) { std::min( B[j],A[m] ); }
            if(env_var_0 == 231) { std::min( B[j],A[n] ); }
            if(env_var_0 == 232) { std::min( B[j],B[i] ); }
            if(env_var_0 == 233) { std::min( B[j],B[j] ); }
            if(env_var_0 == 234) { std::min( B[j],B[m] ); }
            if(env_var_0 == 235) { std::min( B[j],B[n] ); }
            if(env_var_0 == 236) { std::min( B[j],i ); }
            if(env_var_0 == 237) { std::min( B[j],j ); }
            if(env_var_0 == 238) { std::min( B[j],m ); }
            if(env_var_0 == 239) { std::min( B[j],n ); }
            if(env_var_0 == 240) { std::min( B[m],A[i] ); }
            if(env_var_0 == 241) { std::min( B[m],A[j] ); }
            if(env_var_0 == 242) { std::min( B[m],A[m] ); }
            if(env_var_0 == 243) { std::min( B[m],A[n] ); }
            if(env_var_0 == 244) { std::min( B[m],B[i] ); }
            if(env_var_0 == 245) { std::min( B[m],B[j] ); }
            if(env_var_0 == 246) { std::min( B[m],B[m] ); }
            if(env_var_0 == 247) { std::min( B[m],B[n] ); }
            if(env_var_0 == 248) { std::min( B[m],i ); }
            if(env_var_0 == 249) { std::min( B[m],j ); }
            if(env_var_0 == 250) { std::min( B[m],m ); }
            if(env_var_0 == 251) { std::min( B[m],n ); }
            if(env_var_0 == 252) { std::min( B[n],A[i] ); }
            if(env_var_0 == 253) { std::min( B[n],A[j] ); }
            if(env_var_0 == 254) { std::min( B[n],A[m] ); }
            if(env_var_0 == 255) { std::min( B[n],A[n] ); }
            if(env_var_0 == 256) { std::min( B[n],B[i] ); }
            if(env_var_0 == 257) { std::min( B[n],B[j] ); }
            if(env_var_0 == 258) { std::min( B[n],B[m] ); }
            if(env_var_0 == 259) { std::min( B[n],B[n] ); }
            if(env_var_0 == 260) { std::min( B[n],i ); }
            if(env_var_0 == 261) { std::min( B[n],j ); }
            if(env_var_0 == 262) { std::min( B[n],m ); }
            if(env_var_0 == 263) { std::min( B[n],n ); }
            if(env_var_0 == 264) { std::min( i,A[i] ); }
            if(env_var_0 == 265) { std::min( i,A[j] ); }
            if(env_var_0 == 266) { std::min( i,A[m] ); }
            if(env_var_0 == 267) { std::min( i,A[n] ); }
            if(env_var_0 == 268) { std::min( i,B[i] ); }
            if(env_var_0 == 269) { std::min( i,B[j] ); }
            if(env_var_0 == 270) { std::min( i,B[m] ); }
            if(env_var_0 == 271) { std::min( i,B[n] ); }
            if(env_var_0 == 272) { std::min( i,i ); }
            if(env_var_0 == 273) { std::min( i,j ); }
            if(env_var_0 == 274) { std::min( i,m ); }
            if(env_var_0 == 275) { std::min( i,n ); }
            if(env_var_0 == 276) { std::min( j,A[i] ); }
            if(env_var_0 == 277) { std::min( j,A[j] ); }
            if(env_var_0 == 278) { std::min( j,A[m] ); }
            if(env_var_0 == 279) { std::min( j,A[n] ); }
            if(env_var_0 == 280) { std::min( j,B[i] ); }
            if(env_var_0 == 281) { std::min( j,B[j] ); }
            if(env_var_0 == 282) { std::min( j,B[m] ); }
            if(env_var_0 == 283) { std::min( j,B[n] ); }
            if(env_var_0 == 284) { std::min( j,i ); }
            if(env_var_0 == 285) { std::min( j,j ); }
            if(env_var_0 == 286) { std::min( j,m ); }
            if(env_var_0 == 287) { std::min( j,n ); }
            if(env_var_0 == 288) { std::min( m,A[i] ); }
            if(env_var_0 == 289) { std::min( m,A[j] ); }
            if(env_var_0 == 290) { std::min( m,A[m] ); }
            if(env_var_0 == 291) { std::min( m,A[n] ); }
            if(env_var_0 == 292) { std::min( m,B[i] ); }
            if(env_var_0 == 293) { std::min( m,B[j] ); }
            if(env_var_0 == 294) { std::min( m,B[m] ); }
            if(env_var_0 == 295) { std::min( m,B[n] ); }
            if(env_var_0 == 296) { std::min( m,i ); }
            if(env_var_0 == 297) { std::min( m,j ); }
            if(env_var_0 == 298) { std::min( m,m ); }
            if(env_var_0 == 299) { std::min( m,n ); }
            if(env_var_0 == 300) { std::min( n,A[i] ); }
            if(env_var_0 == 301) { std::min( n,A[j] ); }
            if(env_var_0 == 302) { std::min( n,A[m] ); }
            if(env_var_0 == 303) { std::min( n,A[n] ); }
            if(env_var_0 == 304) { std::min( n,B[i] ); }
            if(env_var_0 == 305) { std::min( n,B[j] ); }
            if(env_var_0 == 306) { std::min( n,B[m] ); }
            if(env_var_0 == 307) { std::min( n,B[n] ); }
            if(env_var_0 == 308) { std::min( n,i ); }
            if(env_var_0 == 309) { std::min( n,j ); }
            if(env_var_0 == 310) { std::min( n,m ); }
            if(env_var_0 == 311) { std::min( n,n ); }
            if(env_var_0 == 312) { toupper(); }
            ;
    }
}





int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{7,9,22,68},{24,40,98,58,-24,24,76,48,-92,-16,-46,-48,-70,88,66,2,44,36,34,34,46,90,-80,-24,-58,68,72,-20,-62,-40},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{32,15,41,41,4,42,22,33,33,11,68,5,41,80,39,15,36,75,41,11,25,40,50,19,39,12,75,28,52,20,63,5,27,53,19,62,98,72,10,90,74,93,52,81,91,65,90,93},{-94,-76,-68,-50,-28,-20,18,24,30,54,74,84,98},{1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,0,1,1,0,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,1,0,1,0},{14,27,43,49},{78,-26,-12,38,-90},{0,1,1,1},{12,69,57,7,52,14,15,83,67,57,15,86,81,43,1,64,45,68,30,23,14,70,13,51,23,33,98,68,24,43,12,82,46}};
    vector<vector<int>> param1 {{14,22,54,58},{30,-88,6,-26,-76,14,-80,-30,-58,76,40,-28,-54,38,-60,-60,88,-80,-22,90,50,-48,68,-26,26,-2,68,-16,88,-72},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{80,18,9,29,62,89,4,40,47,15,35,82,22,97,63,54,7,58,64,73,54,79,21,21,20,19,56,42,6,97,7,34,55,35,57,86,73,88,20,29,48,52,8,77,2,12,6,47},{-88,-80,-78,-68,-44,-38,42,50,62,68,70,80,92},{1,0,0,1,1,1,1,1,1,0,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1},{51,59,76,83},{14,50,-6,-38,80},{0,0,0,1},{12,48,57,40,47,36,22,50,68,98,77,78,39,55,87,75,65,27,33,27,70,34,67,71,84,33,7,61,3,9,67,92,60}};
    vector<int> param2 {3,22,22,30,11,21,2,3,3,17};
    vector<int> param3 {2,22,19,25,8,33,2,2,2,32};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i],param3[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
