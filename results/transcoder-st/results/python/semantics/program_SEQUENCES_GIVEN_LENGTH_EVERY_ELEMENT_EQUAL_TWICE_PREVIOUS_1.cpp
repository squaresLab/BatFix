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
int f_gold ( int m, int n ) {
  int T [ m + 1 ] [ n + 1 ];
  for ( int i = 0;
  i < m + 1;
  i ++ ) {
    for ( int j = 0;
    j < n + 1;
    j ++ ) {
      if ( i == 0 || j == 0 ) T [ i ] [ j ] = 0;
      else if ( i < j ) T [ i ] [ j ] = 0;
      else if ( j == 1 ) T [ i ] [ j ] = i;
      else T [ i ] [ j ] = T [ i - 1 ] [ j ] + T [ i / 2 ] [ j - 1 ];
    }
  }
  return T [ m ] [ n ];
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int m , int n ) {
  if(env_var_0 == 0) { m = [[0 for m in isupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 1) { m = [[0 for m in isupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 2) { m = [[0 for m in isupper( m )] for m in m]; }
  if(env_var_0 == 3) { m = [[0 for m in isupper( m )] for m in n]; }
  if(env_var_0 == 4) { m = [[0 for m in isupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 5) { m = [[0 for m in isupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 6) { m = [[0 for m in isupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 7) { m = [[0 for m in isupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 8) { m = [[0 for m in isupper( m )] for n in m]; }
  if(env_var_0 == 9) { m = [[0 for m in isupper( m )] for n in n]; }
  if(env_var_0 == 10) { m = [[0 for m in isupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 11) { m = [[0 for m in isupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 12) { m = [[0 for m in isupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 13) { m = [[0 for m in isupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 14) { m = [[0 for m in isupper( n )] for m in m]; }
  if(env_var_0 == 15) { m = [[0 for m in isupper( n )] for m in n]; }
  if(env_var_0 == 16) { m = [[0 for m in isupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 17) { m = [[0 for m in isupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 18) { m = [[0 for m in isupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 19) { m = [[0 for m in isupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 20) { m = [[0 for m in isupper( n )] for n in m]; }
  if(env_var_0 == 21) { m = [[0 for m in isupper( n )] for n in n]; }
  if(env_var_0 == 22) { m = [[0 for m in isupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 23) { m = [[0 for m in isupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 24) { m = [[0 for m in m] for m in isupper( m )]; }
  if(env_var_0 == 25) { m = [[0 for m in m] for m in isupper( n )]; }
  if(env_var_0 == 26) { m = [[0 for m in m] for m in m]; }
  if(env_var_0 == 27) { m = [[0 for m in m] for m in n]; }
  if(env_var_0 == 28) { m = [[0 for m in m] for m in toupper( m )]; }
  if(env_var_0 == 29) { m = [[0 for m in m] for m in toupper( n )]; }
  if(env_var_0 == 30) { m = [[0 for m in m] for n in isupper( m )]; }
  if(env_var_0 == 31) { m = [[0 for m in m] for n in isupper( n )]; }
  if(env_var_0 == 32) { m = [[0 for m in m] for n in m]; }
  if(env_var_0 == 33) { m = [[0 for m in m] for n in n]; }
  if(env_var_0 == 34) { m = [[0 for m in m] for n in toupper( m )]; }
  if(env_var_0 == 35) { m = [[0 for m in m] for n in toupper( n )]; }
  if(env_var_0 == 36) { m = [[0 for m in n] for m in isupper( m )]; }
  if(env_var_0 == 37) { m = [[0 for m in n] for m in isupper( n )]; }
  if(env_var_0 == 38) { m = [[0 for m in n] for m in m]; }
  if(env_var_0 == 39) { m = [[0 for m in n] for m in n]; }
  if(env_var_0 == 40) { m = [[0 for m in n] for m in toupper( m )]; }
  if(env_var_0 == 41) { m = [[0 for m in n] for m in toupper( n )]; }
  if(env_var_0 == 42) { m = [[0 for m in n] for n in isupper( m )]; }
  if(env_var_0 == 43) { m = [[0 for m in n] for n in isupper( n )]; }
  if(env_var_0 == 44) { m = [[0 for m in n] for n in m]; }
  if(env_var_0 == 45) { m = [[0 for m in n] for n in n]; }
  if(env_var_0 == 46) { m = [[0 for m in n] for n in toupper( m )]; }
  if(env_var_0 == 47) { m = [[0 for m in n] for n in toupper( n )]; }
  if(env_var_0 == 48) { m = [[0 for m in std::max( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 49) { m = [[0 for m in std::max( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 50) { m = [[0 for m in std::max( m,m )] for m in m]; }
  if(env_var_0 == 51) { m = [[0 for m in std::max( m,m )] for m in n]; }
  if(env_var_0 == 52) { m = [[0 for m in std::max( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 53) { m = [[0 for m in std::max( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 54) { m = [[0 for m in std::max( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 55) { m = [[0 for m in std::max( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 56) { m = [[0 for m in std::max( m,m )] for n in m]; }
  if(env_var_0 == 57) { m = [[0 for m in std::max( m,m )] for n in n]; }
  if(env_var_0 == 58) { m = [[0 for m in std::max( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 59) { m = [[0 for m in std::max( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 60) { m = [[0 for m in std::max( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 61) { m = [[0 for m in std::max( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 62) { m = [[0 for m in std::max( m,n )] for m in m]; }
  if(env_var_0 == 63) { m = [[0 for m in std::max( m,n )] for m in n]; }
  if(env_var_0 == 64) { m = [[0 for m in std::max( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 65) { m = [[0 for m in std::max( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 66) { m = [[0 for m in std::max( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 67) { m = [[0 for m in std::max( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 68) { m = [[0 for m in std::max( m,n )] for n in m]; }
  if(env_var_0 == 69) { m = [[0 for m in std::max( m,n )] for n in n]; }
  if(env_var_0 == 70) { m = [[0 for m in std::max( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 71) { m = [[0 for m in std::max( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 72) { m = [[0 for m in std::max( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 73) { m = [[0 for m in std::max( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 74) { m = [[0 for m in std::max( n,m )] for m in m]; }
  if(env_var_0 == 75) { m = [[0 for m in std::max( n,m )] for m in n]; }
  if(env_var_0 == 76) { m = [[0 for m in std::max( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 77) { m = [[0 for m in std::max( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 78) { m = [[0 for m in std::max( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 79) { m = [[0 for m in std::max( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 80) { m = [[0 for m in std::max( n,m )] for n in m]; }
  if(env_var_0 == 81) { m = [[0 for m in std::max( n,m )] for n in n]; }
  if(env_var_0 == 82) { m = [[0 for m in std::max( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 83) { m = [[0 for m in std::max( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 84) { m = [[0 for m in std::max( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 85) { m = [[0 for m in std::max( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 86) { m = [[0 for m in std::max( n,n )] for m in m]; }
  if(env_var_0 == 87) { m = [[0 for m in std::max( n,n )] for m in n]; }
  if(env_var_0 == 88) { m = [[0 for m in std::max( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 89) { m = [[0 for m in std::max( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 90) { m = [[0 for m in std::max( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 91) { m = [[0 for m in std::max( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 92) { m = [[0 for m in std::max( n,n )] for n in m]; }
  if(env_var_0 == 93) { m = [[0 for m in std::max( n,n )] for n in n]; }
  if(env_var_0 == 94) { m = [[0 for m in std::max( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 95) { m = [[0 for m in std::max( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 96) { m = [[0 for m in std::min( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 97) { m = [[0 for m in std::min( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 98) { m = [[0 for m in std::min( m,m )] for m in m]; }
  if(env_var_0 == 99) { m = [[0 for m in std::min( m,m )] for m in n]; }
  if(env_var_0 == 100) { m = [[0 for m in std::min( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 101) { m = [[0 for m in std::min( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 102) { m = [[0 for m in std::min( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 103) { m = [[0 for m in std::min( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 104) { m = [[0 for m in std::min( m,m )] for n in m]; }
  if(env_var_0 == 105) { m = [[0 for m in std::min( m,m )] for n in n]; }
  if(env_var_0 == 106) { m = [[0 for m in std::min( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 107) { m = [[0 for m in std::min( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 108) { m = [[0 for m in std::min( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 109) { m = [[0 for m in std::min( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 110) { m = [[0 for m in std::min( m,n )] for m in m]; }
  if(env_var_0 == 111) { m = [[0 for m in std::min( m,n )] for m in n]; }
  if(env_var_0 == 112) { m = [[0 for m in std::min( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 113) { m = [[0 for m in std::min( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 114) { m = [[0 for m in std::min( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 115) { m = [[0 for m in std::min( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 116) { m = [[0 for m in std::min( m,n )] for n in m]; }
  if(env_var_0 == 117) { m = [[0 for m in std::min( m,n )] for n in n]; }
  if(env_var_0 == 118) { m = [[0 for m in std::min( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 119) { m = [[0 for m in std::min( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 120) { m = [[0 for m in std::min( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 121) { m = [[0 for m in std::min( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 122) { m = [[0 for m in std::min( n,m )] for m in m]; }
  if(env_var_0 == 123) { m = [[0 for m in std::min( n,m )] for m in n]; }
  if(env_var_0 == 124) { m = [[0 for m in std::min( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 125) { m = [[0 for m in std::min( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 126) { m = [[0 for m in std::min( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 127) { m = [[0 for m in std::min( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 128) { m = [[0 for m in std::min( n,m )] for n in m]; }
  if(env_var_0 == 129) { m = [[0 for m in std::min( n,m )] for n in n]; }
  if(env_var_0 == 130) { m = [[0 for m in std::min( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 131) { m = [[0 for m in std::min( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 132) { m = [[0 for m in std::min( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 133) { m = [[0 for m in std::min( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 134) { m = [[0 for m in std::min( n,n )] for m in m]; }
  if(env_var_0 == 135) { m = [[0 for m in std::min( n,n )] for m in n]; }
  if(env_var_0 == 136) { m = [[0 for m in std::min( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 137) { m = [[0 for m in std::min( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 138) { m = [[0 for m in std::min( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 139) { m = [[0 for m in std::min( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 140) { m = [[0 for m in std::min( n,n )] for n in m]; }
  if(env_var_0 == 141) { m = [[0 for m in std::min( n,n )] for n in n]; }
  if(env_var_0 == 142) { m = [[0 for m in std::min( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 143) { m = [[0 for m in std::min( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 144) { m = [[0 for m in toupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 145) { m = [[0 for m in toupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 146) { m = [[0 for m in toupper( m )] for m in m]; }
  if(env_var_0 == 147) { m = [[0 for m in toupper( m )] for m in n]; }
  if(env_var_0 == 148) { m = [[0 for m in toupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 149) { m = [[0 for m in toupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 150) { m = [[0 for m in toupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 151) { m = [[0 for m in toupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 152) { m = [[0 for m in toupper( m )] for n in m]; }
  if(env_var_0 == 153) { m = [[0 for m in toupper( m )] for n in n]; }
  if(env_var_0 == 154) { m = [[0 for m in toupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 155) { m = [[0 for m in toupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 156) { m = [[0 for m in toupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 157) { m = [[0 for m in toupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 158) { m = [[0 for m in toupper( n )] for m in m]; }
  if(env_var_0 == 159) { m = [[0 for m in toupper( n )] for m in n]; }
  if(env_var_0 == 160) { m = [[0 for m in toupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 161) { m = [[0 for m in toupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 162) { m = [[0 for m in toupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 163) { m = [[0 for m in toupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 164) { m = [[0 for m in toupper( n )] for n in m]; }
  if(env_var_0 == 165) { m = [[0 for m in toupper( n )] for n in n]; }
  if(env_var_0 == 166) { m = [[0 for m in toupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 167) { m = [[0 for m in toupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 168) { m = [[0 for n in isupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 169) { m = [[0 for n in isupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 170) { m = [[0 for n in isupper( m )] for m in m]; }
  if(env_var_0 == 171) { m = [[0 for n in isupper( m )] for m in n]; }
  if(env_var_0 == 172) { m = [[0 for n in isupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 173) { m = [[0 for n in isupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 174) { m = [[0 for n in isupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 175) { m = [[0 for n in isupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 176) { m = [[0 for n in isupper( m )] for n in m]; }
  if(env_var_0 == 177) { m = [[0 for n in isupper( m )] for n in n]; }
  if(env_var_0 == 178) { m = [[0 for n in isupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 179) { m = [[0 for n in isupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 180) { m = [[0 for n in isupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 181) { m = [[0 for n in isupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 182) { m = [[0 for n in isupper( n )] for m in m]; }
  if(env_var_0 == 183) { m = [[0 for n in isupper( n )] for m in n]; }
  if(env_var_0 == 184) { m = [[0 for n in isupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 185) { m = [[0 for n in isupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 186) { m = [[0 for n in isupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 187) { m = [[0 for n in isupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 188) { m = [[0 for n in isupper( n )] for n in m]; }
  if(env_var_0 == 189) { m = [[0 for n in isupper( n )] for n in n]; }
  if(env_var_0 == 190) { m = [[0 for n in isupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 191) { m = [[0 for n in isupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 192) { m = [[0 for n in m] for m in isupper( m )]; }
  if(env_var_0 == 193) { m = [[0 for n in m] for m in isupper( n )]; }
  if(env_var_0 == 194) { m = [[0 for n in m] for m in m]; }
  if(env_var_0 == 195) { m = [[0 for n in m] for m in n]; }
  if(env_var_0 == 196) { m = [[0 for n in m] for m in toupper( m )]; }
  if(env_var_0 == 197) { m = [[0 for n in m] for m in toupper( n )]; }
  if(env_var_0 == 198) { m = [[0 for n in m] for n in isupper( m )]; }
  if(env_var_0 == 199) { m = [[0 for n in m] for n in isupper( n )]; }
  if(env_var_0 == 200) { m = [[0 for n in m] for n in m]; }
  if(env_var_0 == 201) { m = [[0 for n in m] for n in n]; }
  if(env_var_0 == 202) { m = [[0 for n in m] for n in toupper( m )]; }
  if(env_var_0 == 203) { m = [[0 for n in m] for n in toupper( n )]; }
  if(env_var_0 == 204) { m = [[0 for n in n] for m in isupper( m )]; }
  if(env_var_0 == 205) { m = [[0 for n in n] for m in isupper( n )]; }
  if(env_var_0 == 206) { m = [[0 for n in n] for m in m]; }
  if(env_var_0 == 207) { m = [[0 for n in n] for m in n]; }
  if(env_var_0 == 208) { m = [[0 for n in n] for m in toupper( m )]; }
  if(env_var_0 == 209) { m = [[0 for n in n] for m in toupper( n )]; }
  if(env_var_0 == 210) { m = [[0 for n in n] for n in isupper( m )]; }
  if(env_var_0 == 211) { m = [[0 for n in n] for n in isupper( n )]; }
  if(env_var_0 == 212) { m = [[0 for n in n] for n in m]; }
  if(env_var_0 == 213) { m = [[0 for n in n] for n in n]; }
  if(env_var_0 == 214) { m = [[0 for n in n] for n in toupper( m )]; }
  if(env_var_0 == 215) { m = [[0 for n in n] for n in toupper( n )]; }
  if(env_var_0 == 216) { m = [[0 for n in std::max( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 217) { m = [[0 for n in std::max( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 218) { m = [[0 for n in std::max( m,m )] for m in m]; }
  if(env_var_0 == 219) { m = [[0 for n in std::max( m,m )] for m in n]; }
  if(env_var_0 == 220) { m = [[0 for n in std::max( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 221) { m = [[0 for n in std::max( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 222) { m = [[0 for n in std::max( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 223) { m = [[0 for n in std::max( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 224) { m = [[0 for n in std::max( m,m )] for n in m]; }
  if(env_var_0 == 225) { m = [[0 for n in std::max( m,m )] for n in n]; }
  if(env_var_0 == 226) { m = [[0 for n in std::max( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 227) { m = [[0 for n in std::max( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 228) { m = [[0 for n in std::max( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 229) { m = [[0 for n in std::max( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 230) { m = [[0 for n in std::max( m,n )] for m in m]; }
  if(env_var_0 == 231) { m = [[0 for n in std::max( m,n )] for m in n]; }
  if(env_var_0 == 232) { m = [[0 for n in std::max( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 233) { m = [[0 for n in std::max( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 234) { m = [[0 for n in std::max( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 235) { m = [[0 for n in std::max( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 236) { m = [[0 for n in std::max( m,n )] for n in m]; }
  if(env_var_0 == 237) { m = [[0 for n in std::max( m,n )] for n in n]; }
  if(env_var_0 == 238) { m = [[0 for n in std::max( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 239) { m = [[0 for n in std::max( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 240) { m = [[0 for n in std::max( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 241) { m = [[0 for n in std::max( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 242) { m = [[0 for n in std::max( n,m )] for m in m]; }
  if(env_var_0 == 243) { m = [[0 for n in std::max( n,m )] for m in n]; }
  if(env_var_0 == 244) { m = [[0 for n in std::max( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 245) { m = [[0 for n in std::max( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 246) { m = [[0 for n in std::max( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 247) { m = [[0 for n in std::max( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 248) { m = [[0 for n in std::max( n,m )] for n in m]; }
  if(env_var_0 == 249) { m = [[0 for n in std::max( n,m )] for n in n]; }
  if(env_var_0 == 250) { m = [[0 for n in std::max( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 251) { m = [[0 for n in std::max( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 252) { m = [[0 for n in std::max( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 253) { m = [[0 for n in std::max( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 254) { m = [[0 for n in std::max( n,n )] for m in m]; }
  if(env_var_0 == 255) { m = [[0 for n in std::max( n,n )] for m in n]; }
  if(env_var_0 == 256) { m = [[0 for n in std::max( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 257) { m = [[0 for n in std::max( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 258) { m = [[0 for n in std::max( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 259) { m = [[0 for n in std::max( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 260) { m = [[0 for n in std::max( n,n )] for n in m]; }
  if(env_var_0 == 261) { m = [[0 for n in std::max( n,n )] for n in n]; }
  if(env_var_0 == 262) { m = [[0 for n in std::max( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 263) { m = [[0 for n in std::max( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 264) { m = [[0 for n in std::min( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 265) { m = [[0 for n in std::min( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 266) { m = [[0 for n in std::min( m,m )] for m in m]; }
  if(env_var_0 == 267) { m = [[0 for n in std::min( m,m )] for m in n]; }
  if(env_var_0 == 268) { m = [[0 for n in std::min( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 269) { m = [[0 for n in std::min( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 270) { m = [[0 for n in std::min( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 271) { m = [[0 for n in std::min( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 272) { m = [[0 for n in std::min( m,m )] for n in m]; }
  if(env_var_0 == 273) { m = [[0 for n in std::min( m,m )] for n in n]; }
  if(env_var_0 == 274) { m = [[0 for n in std::min( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 275) { m = [[0 for n in std::min( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 276) { m = [[0 for n in std::min( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 277) { m = [[0 for n in std::min( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 278) { m = [[0 for n in std::min( m,n )] for m in m]; }
  if(env_var_0 == 279) { m = [[0 for n in std::min( m,n )] for m in n]; }
  if(env_var_0 == 280) { m = [[0 for n in std::min( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 281) { m = [[0 for n in std::min( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 282) { m = [[0 for n in std::min( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 283) { m = [[0 for n in std::min( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 284) { m = [[0 for n in std::min( m,n )] for n in m]; }
  if(env_var_0 == 285) { m = [[0 for n in std::min( m,n )] for n in n]; }
  if(env_var_0 == 286) { m = [[0 for n in std::min( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 287) { m = [[0 for n in std::min( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 288) { m = [[0 for n in std::min( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 289) { m = [[0 for n in std::min( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 290) { m = [[0 for n in std::min( n,m )] for m in m]; }
  if(env_var_0 == 291) { m = [[0 for n in std::min( n,m )] for m in n]; }
  if(env_var_0 == 292) { m = [[0 for n in std::min( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 293) { m = [[0 for n in std::min( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 294) { m = [[0 for n in std::min( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 295) { m = [[0 for n in std::min( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 296) { m = [[0 for n in std::min( n,m )] for n in m]; }
  if(env_var_0 == 297) { m = [[0 for n in std::min( n,m )] for n in n]; }
  if(env_var_0 == 298) { m = [[0 for n in std::min( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 299) { m = [[0 for n in std::min( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 300) { m = [[0 for n in std::min( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 301) { m = [[0 for n in std::min( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 302) { m = [[0 for n in std::min( n,n )] for m in m]; }
  if(env_var_0 == 303) { m = [[0 for n in std::min( n,n )] for m in n]; }
  if(env_var_0 == 304) { m = [[0 for n in std::min( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 305) { m = [[0 for n in std::min( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 306) { m = [[0 for n in std::min( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 307) { m = [[0 for n in std::min( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 308) { m = [[0 for n in std::min( n,n )] for n in m]; }
  if(env_var_0 == 309) { m = [[0 for n in std::min( n,n )] for n in n]; }
  if(env_var_0 == 310) { m = [[0 for n in std::min( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 311) { m = [[0 for n in std::min( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 312) { m = [[0 for n in toupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 313) { m = [[0 for n in toupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 314) { m = [[0 for n in toupper( m )] for m in m]; }
  if(env_var_0 == 315) { m = [[0 for n in toupper( m )] for m in n]; }
  if(env_var_0 == 316) { m = [[0 for n in toupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 317) { m = [[0 for n in toupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 318) { m = [[0 for n in toupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 319) { m = [[0 for n in toupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 320) { m = [[0 for n in toupper( m )] for n in m]; }
  if(env_var_0 == 321) { m = [[0 for n in toupper( m )] for n in n]; }
  if(env_var_0 == 322) { m = [[0 for n in toupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 323) { m = [[0 for n in toupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 324) { m = [[0 for n in toupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 325) { m = [[0 for n in toupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 326) { m = [[0 for n in toupper( n )] for m in m]; }
  if(env_var_0 == 327) { m = [[0 for n in toupper( n )] for m in n]; }
  if(env_var_0 == 328) { m = [[0 for n in toupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 329) { m = [[0 for n in toupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 330) { m = [[0 for n in toupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 331) { m = [[0 for n in toupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 332) { m = [[0 for n in toupper( n )] for n in m]; }
  if(env_var_0 == 333) { m = [[0 for n in toupper( n )] for n in n]; }
  if(env_var_0 == 334) { m = [[0 for n in toupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 335) { m = [[0 for n in toupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 336) { n = [[0 for m in isupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 337) { n = [[0 for m in isupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 338) { n = [[0 for m in isupper( m )] for m in m]; }
  if(env_var_0 == 339) { n = [[0 for m in isupper( m )] for m in n]; }
  if(env_var_0 == 340) { n = [[0 for m in isupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 341) { n = [[0 for m in isupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 342) { n = [[0 for m in isupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 343) { n = [[0 for m in isupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 344) { n = [[0 for m in isupper( m )] for n in m]; }
  if(env_var_0 == 345) { n = [[0 for m in isupper( m )] for n in n]; }
  if(env_var_0 == 346) { n = [[0 for m in isupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 347) { n = [[0 for m in isupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 348) { n = [[0 for m in isupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 349) { n = [[0 for m in isupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 350) { n = [[0 for m in isupper( n )] for m in m]; }
  if(env_var_0 == 351) { n = [[0 for m in isupper( n )] for m in n]; }
  if(env_var_0 == 352) { n = [[0 for m in isupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 353) { n = [[0 for m in isupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 354) { n = [[0 for m in isupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 355) { n = [[0 for m in isupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 356) { n = [[0 for m in isupper( n )] for n in m]; }
  if(env_var_0 == 357) { n = [[0 for m in isupper( n )] for n in n]; }
  if(env_var_0 == 358) { n = [[0 for m in isupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 359) { n = [[0 for m in isupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 360) { n = [[0 for m in m] for m in isupper( m )]; }
  if(env_var_0 == 361) { n = [[0 for m in m] for m in isupper( n )]; }
  if(env_var_0 == 362) { n = [[0 for m in m] for m in m]; }
  if(env_var_0 == 363) { n = [[0 for m in m] for m in n]; }
  if(env_var_0 == 364) { n = [[0 for m in m] for m in toupper( m )]; }
  if(env_var_0 == 365) { n = [[0 for m in m] for m in toupper( n )]; }
  if(env_var_0 == 366) { n = [[0 for m in m] for n in isupper( m )]; }
  if(env_var_0 == 367) { n = [[0 for m in m] for n in isupper( n )]; }
  if(env_var_0 == 368) { n = [[0 for m in m] for n in m]; }
  if(env_var_0 == 369) { n = [[0 for m in m] for n in n]; }
  if(env_var_0 == 370) { n = [[0 for m in m] for n in toupper( m )]; }
  if(env_var_0 == 371) { n = [[0 for m in m] for n in toupper( n )]; }
  if(env_var_0 == 372) { n = [[0 for m in n] for m in isupper( m )]; }
  if(env_var_0 == 373) { n = [[0 for m in n] for m in isupper( n )]; }
  if(env_var_0 == 374) { n = [[0 for m in n] for m in m]; }
  if(env_var_0 == 375) { n = [[0 for m in n] for m in n]; }
  if(env_var_0 == 376) { n = [[0 for m in n] for m in toupper( m )]; }
  if(env_var_0 == 377) { n = [[0 for m in n] for m in toupper( n )]; }
  if(env_var_0 == 378) { n = [[0 for m in n] for n in isupper( m )]; }
  if(env_var_0 == 379) { n = [[0 for m in n] for n in isupper( n )]; }
  if(env_var_0 == 380) { n = [[0 for m in n] for n in m]; }
  if(env_var_0 == 381) { n = [[0 for m in n] for n in n]; }
  if(env_var_0 == 382) { n = [[0 for m in n] for n in toupper( m )]; }
  if(env_var_0 == 383) { n = [[0 for m in n] for n in toupper( n )]; }
  if(env_var_0 == 384) { n = [[0 for m in std::max( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 385) { n = [[0 for m in std::max( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 386) { n = [[0 for m in std::max( m,m )] for m in m]; }
  if(env_var_0 == 387) { n = [[0 for m in std::max( m,m )] for m in n]; }
  if(env_var_0 == 388) { n = [[0 for m in std::max( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 389) { n = [[0 for m in std::max( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 390) { n = [[0 for m in std::max( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 391) { n = [[0 for m in std::max( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 392) { n = [[0 for m in std::max( m,m )] for n in m]; }
  if(env_var_0 == 393) { n = [[0 for m in std::max( m,m )] for n in n]; }
  if(env_var_0 == 394) { n = [[0 for m in std::max( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 395) { n = [[0 for m in std::max( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 396) { n = [[0 for m in std::max( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 397) { n = [[0 for m in std::max( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 398) { n = [[0 for m in std::max( m,n )] for m in m]; }
  if(env_var_0 == 399) { n = [[0 for m in std::max( m,n )] for m in n]; }
  if(env_var_0 == 400) { n = [[0 for m in std::max( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 401) { n = [[0 for m in std::max( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 402) { n = [[0 for m in std::max( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 403) { n = [[0 for m in std::max( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 404) { n = [[0 for m in std::max( m,n )] for n in m]; }
  if(env_var_0 == 405) { n = [[0 for m in std::max( m,n )] for n in n]; }
  if(env_var_0 == 406) { n = [[0 for m in std::max( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 407) { n = [[0 for m in std::max( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 408) { n = [[0 for m in std::max( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 409) { n = [[0 for m in std::max( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 410) { n = [[0 for m in std::max( n,m )] for m in m]; }
  if(env_var_0 == 411) { n = [[0 for m in std::max( n,m )] for m in n]; }
  if(env_var_0 == 412) { n = [[0 for m in std::max( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 413) { n = [[0 for m in std::max( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 414) { n = [[0 for m in std::max( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 415) { n = [[0 for m in std::max( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 416) { n = [[0 for m in std::max( n,m )] for n in m]; }
  if(env_var_0 == 417) { n = [[0 for m in std::max( n,m )] for n in n]; }
  if(env_var_0 == 418) { n = [[0 for m in std::max( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 419) { n = [[0 for m in std::max( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 420) { n = [[0 for m in std::max( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 421) { n = [[0 for m in std::max( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 422) { n = [[0 for m in std::max( n,n )] for m in m]; }
  if(env_var_0 == 423) { n = [[0 for m in std::max( n,n )] for m in n]; }
  if(env_var_0 == 424) { n = [[0 for m in std::max( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 425) { n = [[0 for m in std::max( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 426) { n = [[0 for m in std::max( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 427) { n = [[0 for m in std::max( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 428) { n = [[0 for m in std::max( n,n )] for n in m]; }
  if(env_var_0 == 429) { n = [[0 for m in std::max( n,n )] for n in n]; }
  if(env_var_0 == 430) { n = [[0 for m in std::max( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 431) { n = [[0 for m in std::max( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 432) { n = [[0 for m in std::min( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 433) { n = [[0 for m in std::min( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 434) { n = [[0 for m in std::min( m,m )] for m in m]; }
  if(env_var_0 == 435) { n = [[0 for m in std::min( m,m )] for m in n]; }
  if(env_var_0 == 436) { n = [[0 for m in std::min( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 437) { n = [[0 for m in std::min( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 438) { n = [[0 for m in std::min( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 439) { n = [[0 for m in std::min( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 440) { n = [[0 for m in std::min( m,m )] for n in m]; }
  if(env_var_0 == 441) { n = [[0 for m in std::min( m,m )] for n in n]; }
  if(env_var_0 == 442) { n = [[0 for m in std::min( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 443) { n = [[0 for m in std::min( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 444) { n = [[0 for m in std::min( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 445) { n = [[0 for m in std::min( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 446) { n = [[0 for m in std::min( m,n )] for m in m]; }
  if(env_var_0 == 447) { n = [[0 for m in std::min( m,n )] for m in n]; }
  if(env_var_0 == 448) { n = [[0 for m in std::min( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 449) { n = [[0 for m in std::min( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 450) { n = [[0 for m in std::min( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 451) { n = [[0 for m in std::min( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 452) { n = [[0 for m in std::min( m,n )] for n in m]; }
  if(env_var_0 == 453) { n = [[0 for m in std::min( m,n )] for n in n]; }
  if(env_var_0 == 454) { n = [[0 for m in std::min( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 455) { n = [[0 for m in std::min( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 456) { n = [[0 for m in std::min( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 457) { n = [[0 for m in std::min( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 458) { n = [[0 for m in std::min( n,m )] for m in m]; }
  if(env_var_0 == 459) { n = [[0 for m in std::min( n,m )] for m in n]; }
  if(env_var_0 == 460) { n = [[0 for m in std::min( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 461) { n = [[0 for m in std::min( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 462) { n = [[0 for m in std::min( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 463) { n = [[0 for m in std::min( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 464) { n = [[0 for m in std::min( n,m )] for n in m]; }
  if(env_var_0 == 465) { n = [[0 for m in std::min( n,m )] for n in n]; }
  if(env_var_0 == 466) { n = [[0 for m in std::min( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 467) { n = [[0 for m in std::min( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 468) { n = [[0 for m in std::min( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 469) { n = [[0 for m in std::min( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 470) { n = [[0 for m in std::min( n,n )] for m in m]; }
  if(env_var_0 == 471) { n = [[0 for m in std::min( n,n )] for m in n]; }
  if(env_var_0 == 472) { n = [[0 for m in std::min( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 473) { n = [[0 for m in std::min( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 474) { n = [[0 for m in std::min( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 475) { n = [[0 for m in std::min( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 476) { n = [[0 for m in std::min( n,n )] for n in m]; }
  if(env_var_0 == 477) { n = [[0 for m in std::min( n,n )] for n in n]; }
  if(env_var_0 == 478) { n = [[0 for m in std::min( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 479) { n = [[0 for m in std::min( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 480) { n = [[0 for m in toupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 481) { n = [[0 for m in toupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 482) { n = [[0 for m in toupper( m )] for m in m]; }
  if(env_var_0 == 483) { n = [[0 for m in toupper( m )] for m in n]; }
  if(env_var_0 == 484) { n = [[0 for m in toupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 485) { n = [[0 for m in toupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 486) { n = [[0 for m in toupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 487) { n = [[0 for m in toupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 488) { n = [[0 for m in toupper( m )] for n in m]; }
  if(env_var_0 == 489) { n = [[0 for m in toupper( m )] for n in n]; }
  if(env_var_0 == 490) { n = [[0 for m in toupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 491) { n = [[0 for m in toupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 492) { n = [[0 for m in toupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 493) { n = [[0 for m in toupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 494) { n = [[0 for m in toupper( n )] for m in m]; }
  if(env_var_0 == 495) { n = [[0 for m in toupper( n )] for m in n]; }
  if(env_var_0 == 496) { n = [[0 for m in toupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 497) { n = [[0 for m in toupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 498) { n = [[0 for m in toupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 499) { n = [[0 for m in toupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 500) { n = [[0 for m in toupper( n )] for n in m]; }
  if(env_var_0 == 501) { n = [[0 for m in toupper( n )] for n in n]; }
  if(env_var_0 == 502) { n = [[0 for m in toupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 503) { n = [[0 for m in toupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 504) { n = [[0 for n in isupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 505) { n = [[0 for n in isupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 506) { n = [[0 for n in isupper( m )] for m in m]; }
  if(env_var_0 == 507) { n = [[0 for n in isupper( m )] for m in n]; }
  if(env_var_0 == 508) { n = [[0 for n in isupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 509) { n = [[0 for n in isupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 510) { n = [[0 for n in isupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 511) { n = [[0 for n in isupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 512) { n = [[0 for n in isupper( m )] for n in m]; }
  if(env_var_0 == 513) { n = [[0 for n in isupper( m )] for n in n]; }
  if(env_var_0 == 514) { n = [[0 for n in isupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 515) { n = [[0 for n in isupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 516) { n = [[0 for n in isupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 517) { n = [[0 for n in isupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 518) { n = [[0 for n in isupper( n )] for m in m]; }
  if(env_var_0 == 519) { n = [[0 for n in isupper( n )] for m in n]; }
  if(env_var_0 == 520) { n = [[0 for n in isupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 521) { n = [[0 for n in isupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 522) { n = [[0 for n in isupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 523) { n = [[0 for n in isupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 524) { n = [[0 for n in isupper( n )] for n in m]; }
  if(env_var_0 == 525) { n = [[0 for n in isupper( n )] for n in n]; }
  if(env_var_0 == 526) { n = [[0 for n in isupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 527) { n = [[0 for n in isupper( n )] for n in toupper( n )]; }
  if(env_var_0 == 528) { n = [[0 for n in m] for m in isupper( m )]; }
  if(env_var_0 == 529) { n = [[0 for n in m] for m in isupper( n )]; }
  if(env_var_0 == 530) { n = [[0 for n in m] for m in m]; }
  if(env_var_0 == 531) { n = [[0 for n in m] for m in n]; }
  if(env_var_0 == 532) { n = [[0 for n in m] for m in toupper( m )]; }
  if(env_var_0 == 533) { n = [[0 for n in m] for m in toupper( n )]; }
  if(env_var_0 == 534) { n = [[0 for n in m] for n in isupper( m )]; }
  if(env_var_0 == 535) { n = [[0 for n in m] for n in isupper( n )]; }
  if(env_var_0 == 536) { n = [[0 for n in m] for n in m]; }
  if(env_var_0 == 537) { n = [[0 for n in m] for n in n]; }
  if(env_var_0 == 538) { n = [[0 for n in m] for n in toupper( m )]; }
  if(env_var_0 == 539) { n = [[0 for n in m] for n in toupper( n )]; }
  if(env_var_0 == 540) { n = [[0 for n in n] for m in isupper( m )]; }
  if(env_var_0 == 541) { n = [[0 for n in n] for m in isupper( n )]; }
  if(env_var_0 == 542) { n = [[0 for n in n] for m in m]; }
  if(env_var_0 == 543) { n = [[0 for n in n] for m in n]; }
  if(env_var_0 == 544) { n = [[0 for n in n] for m in toupper( m )]; }
  if(env_var_0 == 545) { n = [[0 for n in n] for m in toupper( n )]; }
  if(env_var_0 == 546) { n = [[0 for n in n] for n in isupper( m )]; }
  if(env_var_0 == 547) { n = [[0 for n in n] for n in isupper( n )]; }
  if(env_var_0 == 548) { n = [[0 for n in n] for n in m]; }
  if(env_var_0 == 549) { n = [[0 for n in n] for n in n]; }
  if(env_var_0 == 550) { n = [[0 for n in n] for n in toupper( m )]; }
  if(env_var_0 == 551) { n = [[0 for n in n] for n in toupper( n )]; }
  if(env_var_0 == 552) { n = [[0 for n in std::max( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 553) { n = [[0 for n in std::max( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 554) { n = [[0 for n in std::max( m,m )] for m in m]; }
  if(env_var_0 == 555) { n = [[0 for n in std::max( m,m )] for m in n]; }
  if(env_var_0 == 556) { n = [[0 for n in std::max( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 557) { n = [[0 for n in std::max( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 558) { n = [[0 for n in std::max( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 559) { n = [[0 for n in std::max( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 560) { n = [[0 for n in std::max( m,m )] for n in m]; }
  if(env_var_0 == 561) { n = [[0 for n in std::max( m,m )] for n in n]; }
  if(env_var_0 == 562) { n = [[0 for n in std::max( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 563) { n = [[0 for n in std::max( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 564) { n = [[0 for n in std::max( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 565) { n = [[0 for n in std::max( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 566) { n = [[0 for n in std::max( m,n )] for m in m]; }
  if(env_var_0 == 567) { n = [[0 for n in std::max( m,n )] for m in n]; }
  if(env_var_0 == 568) { n = [[0 for n in std::max( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 569) { n = [[0 for n in std::max( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 570) { n = [[0 for n in std::max( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 571) { n = [[0 for n in std::max( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 572) { n = [[0 for n in std::max( m,n )] for n in m]; }
  if(env_var_0 == 573) { n = [[0 for n in std::max( m,n )] for n in n]; }
  if(env_var_0 == 574) { n = [[0 for n in std::max( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 575) { n = [[0 for n in std::max( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 576) { n = [[0 for n in std::max( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 577) { n = [[0 for n in std::max( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 578) { n = [[0 for n in std::max( n,m )] for m in m]; }
  if(env_var_0 == 579) { n = [[0 for n in std::max( n,m )] for m in n]; }
  if(env_var_0 == 580) { n = [[0 for n in std::max( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 581) { n = [[0 for n in std::max( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 582) { n = [[0 for n in std::max( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 583) { n = [[0 for n in std::max( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 584) { n = [[0 for n in std::max( n,m )] for n in m]; }
  if(env_var_0 == 585) { n = [[0 for n in std::max( n,m )] for n in n]; }
  if(env_var_0 == 586) { n = [[0 for n in std::max( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 587) { n = [[0 for n in std::max( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 588) { n = [[0 for n in std::max( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 589) { n = [[0 for n in std::max( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 590) { n = [[0 for n in std::max( n,n )] for m in m]; }
  if(env_var_0 == 591) { n = [[0 for n in std::max( n,n )] for m in n]; }
  if(env_var_0 == 592) { n = [[0 for n in std::max( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 593) { n = [[0 for n in std::max( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 594) { n = [[0 for n in std::max( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 595) { n = [[0 for n in std::max( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 596) { n = [[0 for n in std::max( n,n )] for n in m]; }
  if(env_var_0 == 597) { n = [[0 for n in std::max( n,n )] for n in n]; }
  if(env_var_0 == 598) { n = [[0 for n in std::max( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 599) { n = [[0 for n in std::max( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 600) { n = [[0 for n in std::min( m,m )] for m in isupper( m )]; }
  if(env_var_0 == 601) { n = [[0 for n in std::min( m,m )] for m in isupper( n )]; }
  if(env_var_0 == 602) { n = [[0 for n in std::min( m,m )] for m in m]; }
  if(env_var_0 == 603) { n = [[0 for n in std::min( m,m )] for m in n]; }
  if(env_var_0 == 604) { n = [[0 for n in std::min( m,m )] for m in toupper( m )]; }
  if(env_var_0 == 605) { n = [[0 for n in std::min( m,m )] for m in toupper( n )]; }
  if(env_var_0 == 606) { n = [[0 for n in std::min( m,m )] for n in isupper( m )]; }
  if(env_var_0 == 607) { n = [[0 for n in std::min( m,m )] for n in isupper( n )]; }
  if(env_var_0 == 608) { n = [[0 for n in std::min( m,m )] for n in m]; }
  if(env_var_0 == 609) { n = [[0 for n in std::min( m,m )] for n in n]; }
  if(env_var_0 == 610) { n = [[0 for n in std::min( m,m )] for n in toupper( m )]; }
  if(env_var_0 == 611) { n = [[0 for n in std::min( m,m )] for n in toupper( n )]; }
  if(env_var_0 == 612) { n = [[0 for n in std::min( m,n )] for m in isupper( m )]; }
  if(env_var_0 == 613) { n = [[0 for n in std::min( m,n )] for m in isupper( n )]; }
  if(env_var_0 == 614) { n = [[0 for n in std::min( m,n )] for m in m]; }
  if(env_var_0 == 615) { n = [[0 for n in std::min( m,n )] for m in n]; }
  if(env_var_0 == 616) { n = [[0 for n in std::min( m,n )] for m in toupper( m )]; }
  if(env_var_0 == 617) { n = [[0 for n in std::min( m,n )] for m in toupper( n )]; }
  if(env_var_0 == 618) { n = [[0 for n in std::min( m,n )] for n in isupper( m )]; }
  if(env_var_0 == 619) { n = [[0 for n in std::min( m,n )] for n in isupper( n )]; }
  if(env_var_0 == 620) { n = [[0 for n in std::min( m,n )] for n in m]; }
  if(env_var_0 == 621) { n = [[0 for n in std::min( m,n )] for n in n]; }
  if(env_var_0 == 622) { n = [[0 for n in std::min( m,n )] for n in toupper( m )]; }
  if(env_var_0 == 623) { n = [[0 for n in std::min( m,n )] for n in toupper( n )]; }
  if(env_var_0 == 624) { n = [[0 for n in std::min( n,m )] for m in isupper( m )]; }
  if(env_var_0 == 625) { n = [[0 for n in std::min( n,m )] for m in isupper( n )]; }
  if(env_var_0 == 626) { n = [[0 for n in std::min( n,m )] for m in m]; }
  if(env_var_0 == 627) { n = [[0 for n in std::min( n,m )] for m in n]; }
  if(env_var_0 == 628) { n = [[0 for n in std::min( n,m )] for m in toupper( m )]; }
  if(env_var_0 == 629) { n = [[0 for n in std::min( n,m )] for m in toupper( n )]; }
  if(env_var_0 == 630) { n = [[0 for n in std::min( n,m )] for n in isupper( m )]; }
  if(env_var_0 == 631) { n = [[0 for n in std::min( n,m )] for n in isupper( n )]; }
  if(env_var_0 == 632) { n = [[0 for n in std::min( n,m )] for n in m]; }
  if(env_var_0 == 633) { n = [[0 for n in std::min( n,m )] for n in n]; }
  if(env_var_0 == 634) { n = [[0 for n in std::min( n,m )] for n in toupper( m )]; }
  if(env_var_0 == 635) { n = [[0 for n in std::min( n,m )] for n in toupper( n )]; }
  if(env_var_0 == 636) { n = [[0 for n in std::min( n,n )] for m in isupper( m )]; }
  if(env_var_0 == 637) { n = [[0 for n in std::min( n,n )] for m in isupper( n )]; }
  if(env_var_0 == 638) { n = [[0 for n in std::min( n,n )] for m in m]; }
  if(env_var_0 == 639) { n = [[0 for n in std::min( n,n )] for m in n]; }
  if(env_var_0 == 640) { n = [[0 for n in std::min( n,n )] for m in toupper( m )]; }
  if(env_var_0 == 641) { n = [[0 for n in std::min( n,n )] for m in toupper( n )]; }
  if(env_var_0 == 642) { n = [[0 for n in std::min( n,n )] for n in isupper( m )]; }
  if(env_var_0 == 643) { n = [[0 for n in std::min( n,n )] for n in isupper( n )]; }
  if(env_var_0 == 644) { n = [[0 for n in std::min( n,n )] for n in m]; }
  if(env_var_0 == 645) { n = [[0 for n in std::min( n,n )] for n in n]; }
  if(env_var_0 == 646) { n = [[0 for n in std::min( n,n )] for n in toupper( m )]; }
  if(env_var_0 == 647) { n = [[0 for n in std::min( n,n )] for n in toupper( n )]; }
  if(env_var_0 == 648) { n = [[0 for n in toupper( m )] for m in isupper( m )]; }
  if(env_var_0 == 649) { n = [[0 for n in toupper( m )] for m in isupper( n )]; }
  if(env_var_0 == 650) { n = [[0 for n in toupper( m )] for m in m]; }
  if(env_var_0 == 651) { n = [[0 for n in toupper( m )] for m in n]; }
  if(env_var_0 == 652) { n = [[0 for n in toupper( m )] for m in toupper( m )]; }
  if(env_var_0 == 653) { n = [[0 for n in toupper( m )] for m in toupper( n )]; }
  if(env_var_0 == 654) { n = [[0 for n in toupper( m )] for n in isupper( m )]; }
  if(env_var_0 == 655) { n = [[0 for n in toupper( m )] for n in isupper( n )]; }
  if(env_var_0 == 656) { n = [[0 for n in toupper( m )] for n in m]; }
  if(env_var_0 == 657) { n = [[0 for n in toupper( m )] for n in n]; }
  if(env_var_0 == 658) { n = [[0 for n in toupper( m )] for n in toupper( m )]; }
  if(env_var_0 == 659) { n = [[0 for n in toupper( m )] for n in toupper( n )]; }
  if(env_var_0 == 660) { n = [[0 for n in toupper( n )] for m in isupper( m )]; }
  if(env_var_0 == 661) { n = [[0 for n in toupper( n )] for m in isupper( n )]; }
  if(env_var_0 == 662) { n = [[0 for n in toupper( n )] for m in m]; }
  if(env_var_0 == 663) { n = [[0 for n in toupper( n )] for m in n]; }
  if(env_var_0 == 664) { n = [[0 for n in toupper( n )] for m in toupper( m )]; }
  if(env_var_0 == 665) { n = [[0 for n in toupper( n )] for m in toupper( n )]; }
  if(env_var_0 == 666) { n = [[0 for n in toupper( n )] for n in isupper( m )]; }
  if(env_var_0 == 667) { n = [[0 for n in toupper( n )] for n in isupper( n )]; }
  if(env_var_0 == 668) { n = [[0 for n in toupper( n )] for n in m]; }
  if(env_var_0 == 669) { n = [[0 for n in toupper( n )] for n in n]; }
  if(env_var_0 == 670) { n = [[0 for n in toupper( n )] for n in toupper( m )]; }
  if(env_var_0 == 671) { n = [[0 for n in toupper( n )] for n in toupper( n )]; }
  
  memset( T,  0, sizeof( T ));
  memset( T,  0, sizeof( T ));
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      if ( i == 0 || j == 0 ) T [ i ] [ j ] = 0 ;
      else if ( i < j ) T [ i ] [ j ] = 0 ;
      else if ( j == 1 ) T [ i ] [ j ] = i ;
      else T [ i ] [ j ] = T [ i - 1 ] [ j ] + T [ i / 2 ] [ j - 1 ] ;
    }
  }
  int returnT [ m ] [ n ] ;
  for ( int i = 0 ;
  i < m + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < n + 1 ;
    j ++ ) {
      if ( i == 0 || j == 0 ) T [ i ] [ j ] = 0 ;
      else if ( i < j ) T [ i ] [ j ] = 0 ;
      else if ( j == 1 ) T [ i ] [ j ] = i ;
      else T [ i ] [ j ] = T [ i - 1 ] [ j ] + T [ i / 2 ] [ j - 1 ] ;
    }
  }
  return returnT [ m ] [ n ] ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {10,5,2,83,91,18,83,98,43,31};
    vector<int> param1 {4,2,8,7,0,53,41,53,37,20};
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

