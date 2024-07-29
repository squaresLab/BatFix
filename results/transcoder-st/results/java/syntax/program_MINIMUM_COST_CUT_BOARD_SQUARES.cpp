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
int f_gold ( int X [ ], int Y [ ], int m, int n ) {
  int res = 0;
  sort ( X, X + m, greater < int > ( ) );
  sort ( Y, Y + n, greater < int > ( ) );
  int hzntl = 1, vert = 1;
  int i = 0, j = 0;
  while ( i < m && j < n ) {
    if ( X [ i ] > Y [ j ] ) {
      res += X [ i ] * vert;
      hzntl ++;
      i ++;
    }
    else {
      res += Y [ j ] * hzntl;
      vert ++;
      j ++;
    }
  }
  int total = 0;
  while ( i < m ) total += X [ i ++ ];
  res += total * vert;
  total = 0;
  while ( j < n ) total += Y [ j ++ ];
  res += total * hzntl;
  return res;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int32_t X [ ] , int32_t Y [ ] , int m , int n ) {
  int res = 0 ;
  if(env_var_0 == 0) { isupper( X[m] ); }
  if(env_var_0 == 1) { isupper( X[n] ); }
  if(env_var_0 == 2) { isupper( X[res] ); }
  if(env_var_0 == 3) { isupper( Y[m] ); }
  if(env_var_0 == 4) { isupper( Y[n] ); }
  if(env_var_0 == 5) { isupper( Y[res] ); }
  if(env_var_0 == 6) { isupper( m ); }
  if(env_var_0 == 7) { isupper( n ); }
  if(env_var_0 == 8) { isupper( res ); }
  if(env_var_0 == 9) { std::max( X[m],X[m] ); }
  if(env_var_0 == 10) { std::max( X[m],X[n] ); }
  if(env_var_0 == 11) { std::max( X[m],X[res] ); }
  if(env_var_0 == 12) { std::max( X[m],Y[m] ); }
  if(env_var_0 == 13) { std::max( X[m],Y[n] ); }
  if(env_var_0 == 14) { std::max( X[m],Y[res] ); }
  if(env_var_0 == 15) { std::max( X[m],m ); }
  if(env_var_0 == 16) { std::max( X[m],n ); }
  if(env_var_0 == 17) { std::max( X[m],res ); }
  if(env_var_0 == 18) { std::max( X[n],X[m] ); }
  if(env_var_0 == 19) { std::max( X[n],X[n] ); }
  if(env_var_0 == 20) { std::max( X[n],X[res] ); }
  if(env_var_0 == 21) { std::max( X[n],Y[m] ); }
  if(env_var_0 == 22) { std::max( X[n],Y[n] ); }
  if(env_var_0 == 23) { std::max( X[n],Y[res] ); }
  if(env_var_0 == 24) { std::max( X[n],m ); }
  if(env_var_0 == 25) { std::max( X[n],n ); }
  if(env_var_0 == 26) { std::max( X[n],res ); }
  if(env_var_0 == 27) { std::max( X[res],X[m] ); }
  if(env_var_0 == 28) { std::max( X[res],X[n] ); }
  if(env_var_0 == 29) { std::max( X[res],X[res] ); }
  if(env_var_0 == 30) { std::max( X[res],Y[m] ); }
  if(env_var_0 == 31) { std::max( X[res],Y[n] ); }
  if(env_var_0 == 32) { std::max( X[res],Y[res] ); }
  if(env_var_0 == 33) { std::max( X[res],m ); }
  if(env_var_0 == 34) { std::max( X[res],n ); }
  if(env_var_0 == 35) { std::max( X[res],res ); }
  if(env_var_0 == 36) { std::max( Y[m],X[m] ); }
  if(env_var_0 == 37) { std::max( Y[m],X[n] ); }
  if(env_var_0 == 38) { std::max( Y[m],X[res] ); }
  if(env_var_0 == 39) { std::max( Y[m],Y[m] ); }
  if(env_var_0 == 40) { std::max( Y[m],Y[n] ); }
  if(env_var_0 == 41) { std::max( Y[m],Y[res] ); }
  if(env_var_0 == 42) { std::max( Y[m],m ); }
  if(env_var_0 == 43) { std::max( Y[m],n ); }
  if(env_var_0 == 44) { std::max( Y[m],res ); }
  if(env_var_0 == 45) { std::max( Y[n],X[m] ); }
  if(env_var_0 == 46) { std::max( Y[n],X[n] ); }
  if(env_var_0 == 47) { std::max( Y[n],X[res] ); }
  if(env_var_0 == 48) { std::max( Y[n],Y[m] ); }
  if(env_var_0 == 49) { std::max( Y[n],Y[n] ); }
  if(env_var_0 == 50) { std::max( Y[n],Y[res] ); }
  if(env_var_0 == 51) { std::max( Y[n],m ); }
  if(env_var_0 == 52) { std::max( Y[n],n ); }
  if(env_var_0 == 53) { std::max( Y[n],res ); }
  if(env_var_0 == 54) { std::max( Y[res],X[m] ); }
  if(env_var_0 == 55) { std::max( Y[res],X[n] ); }
  if(env_var_0 == 56) { std::max( Y[res],X[res] ); }
  if(env_var_0 == 57) { std::max( Y[res],Y[m] ); }
  if(env_var_0 == 58) { std::max( Y[res],Y[n] ); }
  if(env_var_0 == 59) { std::max( Y[res],Y[res] ); }
  if(env_var_0 == 60) { std::max( Y[res],m ); }
  if(env_var_0 == 61) { std::max( Y[res],n ); }
  if(env_var_0 == 62) { std::max( Y[res],res ); }
  if(env_var_0 == 63) { std::max( m,X[m] ); }
  if(env_var_0 == 64) { std::max( m,X[n] ); }
  if(env_var_0 == 65) { std::max( m,X[res] ); }
  if(env_var_0 == 66) { std::max( m,Y[m] ); }
  if(env_var_0 == 67) { std::max( m,Y[n] ); }
  if(env_var_0 == 68) { std::max( m,Y[res] ); }
  if(env_var_0 == 69) { std::max( m,m ); }
  if(env_var_0 == 70) { std::max( m,n ); }
  if(env_var_0 == 71) { std::max( m,res ); }
  if(env_var_0 == 72) { std::max( n,X[m] ); }
  if(env_var_0 == 73) { std::max( n,X[n] ); }
  if(env_var_0 == 74) { std::max( n,X[res] ); }
  if(env_var_0 == 75) { std::max( n,Y[m] ); }
  if(env_var_0 == 76) { std::max( n,Y[n] ); }
  if(env_var_0 == 77) { std::max( n,Y[res] ); }
  if(env_var_0 == 78) { std::max( n,m ); }
  if(env_var_0 == 79) { std::max( n,n ); }
  if(env_var_0 == 80) { std::max( n,res ); }
  if(env_var_0 == 81) { std::max( res,X[m] ); }
  if(env_var_0 == 82) { std::max( res,X[n] ); }
  if(env_var_0 == 83) { std::max( res,X[res] ); }
  if(env_var_0 == 84) { std::max( res,Y[m] ); }
  if(env_var_0 == 85) { std::max( res,Y[n] ); }
  if(env_var_0 == 86) { std::max( res,Y[res] ); }
  if(env_var_0 == 87) { std::max( res,m ); }
  if(env_var_0 == 88) { std::max( res,n ); }
  if(env_var_0 == 89) { std::max( res,res ); }
  if(env_var_0 == 90) { std::min( X[m],X[m] ); }
  if(env_var_0 == 91) { std::min( X[m],X[n] ); }
  if(env_var_0 == 92) { std::min( X[m],X[res] ); }
  if(env_var_0 == 93) { std::min( X[m],Y[m] ); }
  if(env_var_0 == 94) { std::min( X[m],Y[n] ); }
  if(env_var_0 == 95) { std::min( X[m],Y[res] ); }
  if(env_var_0 == 96) { std::min( X[m],m ); }
  if(env_var_0 == 97) { std::min( X[m],n ); }
  if(env_var_0 == 98) { std::min( X[m],res ); }
  if(env_var_0 == 99) { std::min( X[n],X[m] ); }
  if(env_var_0 == 100) { std::min( X[n],X[n] ); }
  if(env_var_0 == 101) { std::min( X[n],X[res] ); }
  if(env_var_0 == 102) { std::min( X[n],Y[m] ); }
  if(env_var_0 == 103) { std::min( X[n],Y[n] ); }
  if(env_var_0 == 104) { std::min( X[n],Y[res] ); }
  if(env_var_0 == 105) { std::min( X[n],m ); }
  if(env_var_0 == 106) { std::min( X[n],n ); }
  if(env_var_0 == 107) { std::min( X[n],res ); }
  if(env_var_0 == 108) { std::min( X[res],X[m] ); }
  if(env_var_0 == 109) { std::min( X[res],X[n] ); }
  if(env_var_0 == 110) { std::min( X[res],X[res] ); }
  if(env_var_0 == 111) { std::min( X[res],Y[m] ); }
  if(env_var_0 == 112) { std::min( X[res],Y[n] ); }
  if(env_var_0 == 113) { std::min( X[res],Y[res] ); }
  if(env_var_0 == 114) { std::min( X[res],m ); }
  if(env_var_0 == 115) { std::min( X[res],n ); }
  if(env_var_0 == 116) { std::min( X[res],res ); }
  if(env_var_0 == 117) { std::min( Y[m],X[m] ); }
  if(env_var_0 == 118) { std::min( Y[m],X[n] ); }
  if(env_var_0 == 119) { std::min( Y[m],X[res] ); }
  if(env_var_0 == 120) { std::min( Y[m],Y[m] ); }
  if(env_var_0 == 121) { std::min( Y[m],Y[n] ); }
  if(env_var_0 == 122) { std::min( Y[m],Y[res] ); }
  if(env_var_0 == 123) { std::min( Y[m],m ); }
  if(env_var_0 == 124) { std::min( Y[m],n ); }
  if(env_var_0 == 125) { std::min( Y[m],res ); }
  if(env_var_0 == 126) { std::min( Y[n],X[m] ); }
  if(env_var_0 == 127) { std::min( Y[n],X[n] ); }
  if(env_var_0 == 128) { std::min( Y[n],X[res] ); }
  if(env_var_0 == 129) { std::min( Y[n],Y[m] ); }
  if(env_var_0 == 130) { std::min( Y[n],Y[n] ); }
  if(env_var_0 == 131) { std::min( Y[n],Y[res] ); }
  if(env_var_0 == 132) { std::min( Y[n],m ); }
  if(env_var_0 == 133) { std::min( Y[n],n ); }
  if(env_var_0 == 134) { std::min( Y[n],res ); }
  if(env_var_0 == 135) { std::min( Y[res],X[m] ); }
  if(env_var_0 == 136) { std::min( Y[res],X[n] ); }
  if(env_var_0 == 137) { std::min( Y[res],X[res] ); }
  if(env_var_0 == 138) { std::min( Y[res],Y[m] ); }
  if(env_var_0 == 139) { std::min( Y[res],Y[n] ); }
  if(env_var_0 == 140) { std::min( Y[res],Y[res] ); }
  if(env_var_0 == 141) { std::min( Y[res],m ); }
  if(env_var_0 == 142) { std::min( Y[res],n ); }
  if(env_var_0 == 143) { std::min( Y[res],res ); }
  if(env_var_0 == 144) { std::min( m,X[m] ); }
  if(env_var_0 == 145) { std::min( m,X[n] ); }
  if(env_var_0 == 146) { std::min( m,X[res] ); }
  if(env_var_0 == 147) { std::min( m,Y[m] ); }
  if(env_var_0 == 148) { std::min( m,Y[n] ); }
  if(env_var_0 == 149) { std::min( m,Y[res] ); }
  if(env_var_0 == 150) { std::min( m,m ); }
  if(env_var_0 == 151) { std::min( m,n ); }
  if(env_var_0 == 152) { std::min( m,res ); }
  if(env_var_0 == 153) { std::min( n,X[m] ); }
  if(env_var_0 == 154) { std::min( n,X[n] ); }
  if(env_var_0 == 155) { std::min( n,X[res] ); }
  if(env_var_0 == 156) { std::min( n,Y[m] ); }
  if(env_var_0 == 157) { std::min( n,Y[n] ); }
  if(env_var_0 == 158) { std::min( n,Y[res] ); }
  if(env_var_0 == 159) { std::min( n,m ); }
  if(env_var_0 == 160) { std::min( n,n ); }
  if(env_var_0 == 161) { std::min( n,res ); }
  if(env_var_0 == 162) { std::min( res,X[m] ); }
  if(env_var_0 == 163) { std::min( res,X[n] ); }
  if(env_var_0 == 164) { std::min( res,X[res] ); }
  if(env_var_0 == 165) { std::min( res,Y[m] ); }
  if(env_var_0 == 166) { std::min( res,Y[n] ); }
  if(env_var_0 == 167) { std::min( res,Y[res] ); }
  if(env_var_0 == 168) { std::min( res,m ); }
  if(env_var_0 == 169) { std::min( res,n ); }
  if(env_var_0 == 170) { std::min( res,res ); }
  if(env_var_0 == 171) { toupper( X[m] ); }
  if(env_var_0 == 172) { toupper( X[n] ); }
  if(env_var_0 == 173) { toupper( X[res] ); }
  if(env_var_0 == 174) { toupper( Y[m] ); }
  if(env_var_0 == 175) { toupper( Y[n] ); }
  if(env_var_0 == 176) { toupper( Y[res] ); }
  if(env_var_0 == 177) { toupper( m ); }
  if(env_var_0 == 178) { toupper( n ); }
  if(env_var_0 == 179) { toupper( res ); }
   ;
  if(env_var_1 == 0) { isupper( X[m] ); }
  if(env_var_1 == 1) { isupper( X[n] ); }
  if(env_var_1 == 2) { isupper( X[res] ); }
  if(env_var_1 == 3) { isupper( Y[m] ); }
  if(env_var_1 == 4) { isupper( Y[n] ); }
  if(env_var_1 == 5) { isupper( Y[res] ); }
  if(env_var_1 == 6) { isupper( m ); }
  if(env_var_1 == 7) { isupper( n ); }
  if(env_var_1 == 8) { isupper( res ); }
  if(env_var_1 == 9) { std::max( X[m],X[m] ); }
  if(env_var_1 == 10) { std::max( X[m],X[n] ); }
  if(env_var_1 == 11) { std::max( X[m],X[res] ); }
  if(env_var_1 == 12) { std::max( X[m],Y[m] ); }
  if(env_var_1 == 13) { std::max( X[m],Y[n] ); }
  if(env_var_1 == 14) { std::max( X[m],Y[res] ); }
  if(env_var_1 == 15) { std::max( X[m],m ); }
  if(env_var_1 == 16) { std::max( X[m],n ); }
  if(env_var_1 == 17) { std::max( X[m],res ); }
  if(env_var_1 == 18) { std::max( X[n],X[m] ); }
  if(env_var_1 == 19) { std::max( X[n],X[n] ); }
  if(env_var_1 == 20) { std::max( X[n],X[res] ); }
  if(env_var_1 == 21) { std::max( X[n],Y[m] ); }
  if(env_var_1 == 22) { std::max( X[n],Y[n] ); }
  if(env_var_1 == 23) { std::max( X[n],Y[res] ); }
  if(env_var_1 == 24) { std::max( X[n],m ); }
  if(env_var_1 == 25) { std::max( X[n],n ); }
  if(env_var_1 == 26) { std::max( X[n],res ); }
  if(env_var_1 == 27) { std::max( X[res],X[m] ); }
  if(env_var_1 == 28) { std::max( X[res],X[n] ); }
  if(env_var_1 == 29) { std::max( X[res],X[res] ); }
  if(env_var_1 == 30) { std::max( X[res],Y[m] ); }
  if(env_var_1 == 31) { std::max( X[res],Y[n] ); }
  if(env_var_1 == 32) { std::max( X[res],Y[res] ); }
  if(env_var_1 == 33) { std::max( X[res],m ); }
  if(env_var_1 == 34) { std::max( X[res],n ); }
  if(env_var_1 == 35) { std::max( X[res],res ); }
  if(env_var_1 == 36) { std::max( Y[m],X[m] ); }
  if(env_var_1 == 37) { std::max( Y[m],X[n] ); }
  if(env_var_1 == 38) { std::max( Y[m],X[res] ); }
  if(env_var_1 == 39) { std::max( Y[m],Y[m] ); }
  if(env_var_1 == 40) { std::max( Y[m],Y[n] ); }
  if(env_var_1 == 41) { std::max( Y[m],Y[res] ); }
  if(env_var_1 == 42) { std::max( Y[m],m ); }
  if(env_var_1 == 43) { std::max( Y[m],n ); }
  if(env_var_1 == 44) { std::max( Y[m],res ); }
  if(env_var_1 == 45) { std::max( Y[n],X[m] ); }
  if(env_var_1 == 46) { std::max( Y[n],X[n] ); }
  if(env_var_1 == 47) { std::max( Y[n],X[res] ); }
  if(env_var_1 == 48) { std::max( Y[n],Y[m] ); }
  if(env_var_1 == 49) { std::max( Y[n],Y[n] ); }
  if(env_var_1 == 50) { std::max( Y[n],Y[res] ); }
  if(env_var_1 == 51) { std::max( Y[n],m ); }
  if(env_var_1 == 52) { std::max( Y[n],n ); }
  if(env_var_1 == 53) { std::max( Y[n],res ); }
  if(env_var_1 == 54) { std::max( Y[res],X[m] ); }
  if(env_var_1 == 55) { std::max( Y[res],X[n] ); }
  if(env_var_1 == 56) { std::max( Y[res],X[res] ); }
  if(env_var_1 == 57) { std::max( Y[res],Y[m] ); }
  if(env_var_1 == 58) { std::max( Y[res],Y[n] ); }
  if(env_var_1 == 59) { std::max( Y[res],Y[res] ); }
  if(env_var_1 == 60) { std::max( Y[res],m ); }
  if(env_var_1 == 61) { std::max( Y[res],n ); }
  if(env_var_1 == 62) { std::max( Y[res],res ); }
  if(env_var_1 == 63) { std::max( m,X[m] ); }
  if(env_var_1 == 64) { std::max( m,X[n] ); }
  if(env_var_1 == 65) { std::max( m,X[res] ); }
  if(env_var_1 == 66) { std::max( m,Y[m] ); }
  if(env_var_1 == 67) { std::max( m,Y[n] ); }
  if(env_var_1 == 68) { std::max( m,Y[res] ); }
  if(env_var_1 == 69) { std::max( m,m ); }
  if(env_var_1 == 70) { std::max( m,n ); }
  if(env_var_1 == 71) { std::max( m,res ); }
  if(env_var_1 == 72) { std::max( n,X[m] ); }
  if(env_var_1 == 73) { std::max( n,X[n] ); }
  if(env_var_1 == 74) { std::max( n,X[res] ); }
  if(env_var_1 == 75) { std::max( n,Y[m] ); }
  if(env_var_1 == 76) { std::max( n,Y[n] ); }
  if(env_var_1 == 77) { std::max( n,Y[res] ); }
  if(env_var_1 == 78) { std::max( n,m ); }
  if(env_var_1 == 79) { std::max( n,n ); }
  if(env_var_1 == 80) { std::max( n,res ); }
  if(env_var_1 == 81) { std::max( res,X[m] ); }
  if(env_var_1 == 82) { std::max( res,X[n] ); }
  if(env_var_1 == 83) { std::max( res,X[res] ); }
  if(env_var_1 == 84) { std::max( res,Y[m] ); }
  if(env_var_1 == 85) { std::max( res,Y[n] ); }
  if(env_var_1 == 86) { std::max( res,Y[res] ); }
  if(env_var_1 == 87) { std::max( res,m ); }
  if(env_var_1 == 88) { std::max( res,n ); }
  if(env_var_1 == 89) { std::max( res,res ); }
  if(env_var_1 == 90) { std::min( X[m],X[m] ); }
  if(env_var_1 == 91) { std::min( X[m],X[n] ); }
  if(env_var_1 == 92) { std::min( X[m],X[res] ); }
  if(env_var_1 == 93) { std::min( X[m],Y[m] ); }
  if(env_var_1 == 94) { std::min( X[m],Y[n] ); }
  if(env_var_1 == 95) { std::min( X[m],Y[res] ); }
  if(env_var_1 == 96) { std::min( X[m],m ); }
  if(env_var_1 == 97) { std::min( X[m],n ); }
  if(env_var_1 == 98) { std::min( X[m],res ); }
  if(env_var_1 == 99) { std::min( X[n],X[m] ); }
  if(env_var_1 == 100) { std::min( X[n],X[n] ); }
  if(env_var_1 == 101) { std::min( X[n],X[res] ); }
  if(env_var_1 == 102) { std::min( X[n],Y[m] ); }
  if(env_var_1 == 103) { std::min( X[n],Y[n] ); }
  if(env_var_1 == 104) { std::min( X[n],Y[res] ); }
  if(env_var_1 == 105) { std::min( X[n],m ); }
  if(env_var_1 == 106) { std::min( X[n],n ); }
  if(env_var_1 == 107) { std::min( X[n],res ); }
  if(env_var_1 == 108) { std::min( X[res],X[m] ); }
  if(env_var_1 == 109) { std::min( X[res],X[n] ); }
  if(env_var_1 == 110) { std::min( X[res],X[res] ); }
  if(env_var_1 == 111) { std::min( X[res],Y[m] ); }
  if(env_var_1 == 112) { std::min( X[res],Y[n] ); }
  if(env_var_1 == 113) { std::min( X[res],Y[res] ); }
  if(env_var_1 == 114) { std::min( X[res],m ); }
  if(env_var_1 == 115) { std::min( X[res],n ); }
  if(env_var_1 == 116) { std::min( X[res],res ); }
  if(env_var_1 == 117) { std::min( Y[m],X[m] ); }
  if(env_var_1 == 118) { std::min( Y[m],X[n] ); }
  if(env_var_1 == 119) { std::min( Y[m],X[res] ); }
  if(env_var_1 == 120) { std::min( Y[m],Y[m] ); }
  if(env_var_1 == 121) { std::min( Y[m],Y[n] ); }
  if(env_var_1 == 122) { std::min( Y[m],Y[res] ); }
  if(env_var_1 == 123) { std::min( Y[m],m ); }
  if(env_var_1 == 124) { std::min( Y[m],n ); }
  if(env_var_1 == 125) { std::min( Y[m],res ); }
  if(env_var_1 == 126) { std::min( Y[n],X[m] ); }
  if(env_var_1 == 127) { std::min( Y[n],X[n] ); }
  if(env_var_1 == 128) { std::min( Y[n],X[res] ); }
  if(env_var_1 == 129) { std::min( Y[n],Y[m] ); }
  if(env_var_1 == 130) { std::min( Y[n],Y[n] ); }
  if(env_var_1 == 131) { std::min( Y[n],Y[res] ); }
  if(env_var_1 == 132) { std::min( Y[n],m ); }
  if(env_var_1 == 133) { std::min( Y[n],n ); }
  if(env_var_1 == 134) { std::min( Y[n],res ); }
  if(env_var_1 == 135) { std::min( Y[res],X[m] ); }
  if(env_var_1 == 136) { std::min( Y[res],X[n] ); }
  if(env_var_1 == 137) { std::min( Y[res],X[res] ); }
  if(env_var_1 == 138) { std::min( Y[res],Y[m] ); }
  if(env_var_1 == 139) { std::min( Y[res],Y[n] ); }
  if(env_var_1 == 140) { std::min( Y[res],Y[res] ); }
  if(env_var_1 == 141) { std::min( Y[res],m ); }
  if(env_var_1 == 142) { std::min( Y[res],n ); }
  if(env_var_1 == 143) { std::min( Y[res],res ); }
  if(env_var_1 == 144) { std::min( m,X[m] ); }
  if(env_var_1 == 145) { std::min( m,X[n] ); }
  if(env_var_1 == 146) { std::min( m,X[res] ); }
  if(env_var_1 == 147) { std::min( m,Y[m] ); }
  if(env_var_1 == 148) { std::min( m,Y[n] ); }
  if(env_var_1 == 149) { std::min( m,Y[res] ); }
  if(env_var_1 == 150) { std::min( m,m ); }
  if(env_var_1 == 151) { std::min( m,n ); }
  if(env_var_1 == 152) { std::min( m,res ); }
  if(env_var_1 == 153) { std::min( n,X[m] ); }
  if(env_var_1 == 154) { std::min( n,X[n] ); }
  if(env_var_1 == 155) { std::min( n,X[res] ); }
  if(env_var_1 == 156) { std::min( n,Y[m] ); }
  if(env_var_1 == 157) { std::min( n,Y[n] ); }
  if(env_var_1 == 158) { std::min( n,Y[res] ); }
  if(env_var_1 == 159) { std::min( n,m ); }
  if(env_var_1 == 160) { std::min( n,n ); }
  if(env_var_1 == 161) { std::min( n,res ); }
  if(env_var_1 == 162) { std::min( res,X[m] ); }
  if(env_var_1 == 163) { std::min( res,X[n] ); }
  if(env_var_1 == 164) { std::min( res,X[res] ); }
  if(env_var_1 == 165) { std::min( res,Y[m] ); }
  if(env_var_1 == 166) { std::min( res,Y[n] ); }
  if(env_var_1 == 167) { std::min( res,Y[res] ); }
  if(env_var_1 == 168) { std::min( res,m ); }
  if(env_var_1 == 169) { std::min( res,n ); }
  if(env_var_1 == 170) { std::min( res,res ); }
  if(env_var_1 == 171) { toupper( X[m] ); }
  if(env_var_1 == 172) { toupper( X[n] ); }
  if(env_var_1 == 173) { toupper( X[res] ); }
  if(env_var_1 == 174) { toupper( Y[m] ); }
  if(env_var_1 == 175) { toupper( Y[n] ); }
  if(env_var_1 == 176) { toupper( Y[res] ); }
  if(env_var_1 == 177) { toupper( m ); }
  if(env_var_1 == 178) { toupper( n ); }
  if(env_var_1 == 179) { toupper( res ); }
   ;
  int hzntl = 1 , vert = 1 ;
  int i = 0 , j = 0 ;
  while ( i < m && j < n ) {
    if ( X [ i ] > Y [ j ] ) {
      res += X [ i ] * vert ;
      hzntl ++ ;
      i ++ ;
    }
    else {
      res += Y [ j ] * hzntl ;
      vert ++ ;
      j ++ ;
    }
  }
  int total = 0 ;
  while ( i < m ) {
    total += X [ i ++ ] ;
  }
  res += total * vert ;
  total = 0 ;
  while ( j < n ) {
    total += Y [ j ++ ] ;
  }
  res += total * hzntl ;
  return res ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,9,9,16,18,20,22,22,23,25,25,26,28,32,33,33,33,34,37,40,44,46,46,52,53,56,58,58,59,60,61,67,67,69,70,70,73,75,77,83,87,87,87,90,90,93,97,98},{-52,66,66,-4,-74,78,52,-72},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{58,78,48,44,63,37,89,76,66,83,52,97,19,28,67,38,54,77,2,96,28,87},{-84,-78,-76,-72,-68,-62,-62,-60,-58,-44,-34,-10,-8,-4,-2,-2,14,16,20,26,26,32,70,78,86,90,96},{0,1,1,0,0,1,1,0,1,0,1,0,1,1,1,1,1,0,0,1,1,1,1,0,0,0,1,1,0},{30,75},{70,78,-60,-10,-8,46,38,60,-54,-68,16,10,36,-10,38,-96,-52,-82,-56,22,-56,0,96,-60,24,70,40,62,-20,-36,74,32,44,14,-18,50,58},{0,0,0,1},{81,40,29,74,13,67,10,25,24,81,90}};
    vector<vector<int>> param1 {{2,3,9,10,13,16,17,19,20,23,25,27,29,30,30,35,37,39,39,45,47,50,55,55,55,56,59,60,62,63,67,70,70,71,72,73,73,74,77,86,87,88,91,92,95,96,97,99},{-40,30,-34,-76,84,88,-78,72},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{37,36,26,5,83,75,33,33,72,63,91,94,75,92,9,19,79,29,40,47,63,36},{-98,-98,-86,-82,-76,-62,-60,-48,-32,-32,-24,-18,-10,-4,0,16,16,26,36,42,48,50,64,66,78,92,98},{1,0,1,1,1,0,1,1,1,0,1,0,1,1,0,0,0,1,1,1,1,0,1,1,1,0,0,1,0},{10,39},{64,-42,-50,-76,46,32,-66,86,-6,46,94,70,-62,90,78,4,6,-20,92,-18,-34,-96,92,-24,-90,-94,62,40,-14,-28,80,-86,-86,-56,40,-92,-22},{0,1,1,1},{51,45,23,7,53,14,49,58,25,75,74}};
    vector<int> param2 {25,6,15,13,15,25,1,19,2,8};
    vector<int> param3 {27,7,19,14,24,26,1,19,2,10};
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
