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
int f_gold ( int arr [ ], int l, int r, int x ) {
  if ( r >= l ) {
    int mid = l + ( r - l ) / 2;
    if ( arr [ mid ] == x ) return mid;
    if ( mid > l && arr [ mid - 1 ] == x ) return ( mid - 1 );
    if ( mid < r && arr [ mid + 1 ] == x ) return ( mid + 1 );
    if ( arr [ mid ] > x ) return f_gold ( arr, l, mid - 2, x );
    return f_gold ( arr, mid + 2, r, x );
  }
  return - 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int l , int r , int x ) {
  if ( ( r >= l ) && ( r <= r ) ) {
    int mid = ( int ) ( l + ( r - l ) / 2 ) ;
    if ( ( arr [ mid ] == x ) && ( arr [ mid - 1 ] == x ) ) return mid ;
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = arr == arr; }
    if(env_var_0 == 1) { _res_key_if_0 = arr == arr+l; }
    if(env_var_0 == 2) { _res_key_if_0 = arr == arr+mid; }
    if(env_var_0 == 3) { _res_key_if_0 = arr == arr+r; }
    if(env_var_0 == 4) { _res_key_if_0 = arr == arr+x; }
    if(env_var_0 == 5) { _res_key_if_0 = arr == arr[l]; }
    if(env_var_0 == 6) { _res_key_if_0 = arr == arr[mid]; }
    if(env_var_0 == 7) { _res_key_if_0 = arr == arr[r]; }
    if(env_var_0 == 8) { _res_key_if_0 = arr == arr[x]; }
    if(env_var_0 == 9) { _res_key_if_0 = arr == l; }
    if(env_var_0 == 10) { _res_key_if_0 = arr == mid; }
    if(env_var_0 == 11) { _res_key_if_0 = arr == r; }
    if(env_var_0 == 12) { _res_key_if_0 = arr == x; }
    if(env_var_0 == 13) { _res_key_if_0 = arr+l == arr; }
    if(env_var_0 == 14) { _res_key_if_0 = arr+l == arr+l; }
    if(env_var_0 == 15) { _res_key_if_0 = arr+l == arr+mid; }
    if(env_var_0 == 16) { _res_key_if_0 = arr+l == arr+r; }
    if(env_var_0 == 17) { _res_key_if_0 = arr+l == arr+x; }
    if(env_var_0 == 18) { _res_key_if_0 = arr+l == arr[l]; }
    if(env_var_0 == 19) { _res_key_if_0 = arr+l == arr[mid]; }
    if(env_var_0 == 20) { _res_key_if_0 = arr+l == arr[r]; }
    if(env_var_0 == 21) { _res_key_if_0 = arr+l == arr[x]; }
    if(env_var_0 == 22) { _res_key_if_0 = arr+l == l; }
    if(env_var_0 == 23) { _res_key_if_0 = arr+l == mid; }
    if(env_var_0 == 24) { _res_key_if_0 = arr+l == r; }
    if(env_var_0 == 25) { _res_key_if_0 = arr+l == x; }
    if(env_var_0 == 26) { _res_key_if_0 = arr+mid == arr; }
    if(env_var_0 == 27) { _res_key_if_0 = arr+mid == arr+l; }
    if(env_var_0 == 28) { _res_key_if_0 = arr+mid == arr+mid; }
    if(env_var_0 == 29) { _res_key_if_0 = arr+mid == arr+r; }
    if(env_var_0 == 30) { _res_key_if_0 = arr+mid == arr+x; }
    if(env_var_0 == 31) { _res_key_if_0 = arr+mid == arr[l]; }
    if(env_var_0 == 32) { _res_key_if_0 = arr+mid == arr[mid]; }
    if(env_var_0 == 33) { _res_key_if_0 = arr+mid == arr[r]; }
    if(env_var_0 == 34) { _res_key_if_0 = arr+mid == arr[x]; }
    if(env_var_0 == 35) { _res_key_if_0 = arr+mid == l; }
    if(env_var_0 == 36) { _res_key_if_0 = arr+mid == mid; }
    if(env_var_0 == 37) { _res_key_if_0 = arr+mid == r; }
    if(env_var_0 == 38) { _res_key_if_0 = arr+mid == x; }
    if(env_var_0 == 39) { _res_key_if_0 = arr+r == arr; }
    if(env_var_0 == 40) { _res_key_if_0 = arr+r == arr+l; }
    if(env_var_0 == 41) { _res_key_if_0 = arr+r == arr+mid; }
    if(env_var_0 == 42) { _res_key_if_0 = arr+r == arr+r; }
    if(env_var_0 == 43) { _res_key_if_0 = arr+r == arr+x; }
    if(env_var_0 == 44) { _res_key_if_0 = arr+r == arr[l]; }
    if(env_var_0 == 45) { _res_key_if_0 = arr+r == arr[mid]; }
    if(env_var_0 == 46) { _res_key_if_0 = arr+r == arr[r]; }
    if(env_var_0 == 47) { _res_key_if_0 = arr+r == arr[x]; }
    if(env_var_0 == 48) { _res_key_if_0 = arr+r == l; }
    if(env_var_0 == 49) { _res_key_if_0 = arr+r == mid; }
    if(env_var_0 == 50) { _res_key_if_0 = arr+r == r; }
    if(env_var_0 == 51) { _res_key_if_0 = arr+r == x; }
    if(env_var_0 == 52) { _res_key_if_0 = arr+x == arr; }
    if(env_var_0 == 53) { _res_key_if_0 = arr+x == arr+l; }
    if(env_var_0 == 54) { _res_key_if_0 = arr+x == arr+mid; }
    if(env_var_0 == 55) { _res_key_if_0 = arr+x == arr+r; }
    if(env_var_0 == 56) { _res_key_if_0 = arr+x == arr+x; }
    if(env_var_0 == 57) { _res_key_if_0 = arr+x == arr[l]; }
    if(env_var_0 == 58) { _res_key_if_0 = arr+x == arr[mid]; }
    if(env_var_0 == 59) { _res_key_if_0 = arr+x == arr[r]; }
    if(env_var_0 == 60) { _res_key_if_0 = arr+x == arr[x]; }
    if(env_var_0 == 61) { _res_key_if_0 = arr+x == l; }
    if(env_var_0 == 62) { _res_key_if_0 = arr+x == mid; }
    if(env_var_0 == 63) { _res_key_if_0 = arr+x == r; }
    if(env_var_0 == 64) { _res_key_if_0 = arr+x == x; }
    if(env_var_0 == 65) { _res_key_if_0 = arr[l] == arr; }
    if(env_var_0 == 66) { _res_key_if_0 = arr[l] == arr+l; }
    if(env_var_0 == 67) { _res_key_if_0 = arr[l] == arr+mid; }
    if(env_var_0 == 68) { _res_key_if_0 = arr[l] == arr+r; }
    if(env_var_0 == 69) { _res_key_if_0 = arr[l] == arr+x; }
    if(env_var_0 == 70) { _res_key_if_0 = arr[l] == arr[l]; }
    if(env_var_0 == 71) { _res_key_if_0 = arr[l] == arr[mid]; }
    if(env_var_0 == 72) { _res_key_if_0 = arr[l] == arr[r]; }
    if(env_var_0 == 73) { _res_key_if_0 = arr[l] == arr[x]; }
    if(env_var_0 == 74) { _res_key_if_0 = arr[l] == l; }
    if(env_var_0 == 75) { _res_key_if_0 = arr[l] == mid; }
    if(env_var_0 == 76) { _res_key_if_0 = arr[l] == r; }
    if(env_var_0 == 77) { _res_key_if_0 = arr[l] == x; }
    if(env_var_0 == 78) { _res_key_if_0 = arr[mid] == arr; }
    if(env_var_0 == 79) { _res_key_if_0 = arr[mid] == arr+l; }
    if(env_var_0 == 80) { _res_key_if_0 = arr[mid] == arr+mid; }
    if(env_var_0 == 81) { _res_key_if_0 = arr[mid] == arr+r; }
    if(env_var_0 == 82) { _res_key_if_0 = arr[mid] == arr+x; }
    if(env_var_0 == 83) { _res_key_if_0 = arr[mid] == arr[l]; }
    if(env_var_0 == 84) { _res_key_if_0 = arr[mid] == arr[mid]; }
    if(env_var_0 == 85) { _res_key_if_0 = arr[mid] == arr[r]; }
    if(env_var_0 == 86) { _res_key_if_0 = arr[mid] == arr[x]; }
    if(env_var_0 == 87) { _res_key_if_0 = arr[mid] == l; }
    if(env_var_0 == 88) { _res_key_if_0 = arr[mid] == mid; }
    if(env_var_0 == 89) { _res_key_if_0 = arr[mid] == r; }
    if(env_var_0 == 90) { _res_key_if_0 = arr[mid] == x; }
    if(env_var_0 == 91) { _res_key_if_0 = arr[r] == arr; }
    if(env_var_0 == 92) { _res_key_if_0 = arr[r] == arr+l; }
    if(env_var_0 == 93) { _res_key_if_0 = arr[r] == arr+mid; }
    if(env_var_0 == 94) { _res_key_if_0 = arr[r] == arr+r; }
    if(env_var_0 == 95) { _res_key_if_0 = arr[r] == arr+x; }
    if(env_var_0 == 96) { _res_key_if_0 = arr[r] == arr[l]; }
    if(env_var_0 == 97) { _res_key_if_0 = arr[r] == arr[mid]; }
    if(env_var_0 == 98) { _res_key_if_0 = arr[r] == arr[r]; }
    if(env_var_0 == 99) { _res_key_if_0 = arr[r] == arr[x]; }
    if(env_var_0 == 100) { _res_key_if_0 = arr[r] == l; }
    if(env_var_0 == 101) { _res_key_if_0 = arr[r] == mid; }
    if(env_var_0 == 102) { _res_key_if_0 = arr[r] == r; }
    if(env_var_0 == 103) { _res_key_if_0 = arr[r] == x; }
    if(env_var_0 == 104) { _res_key_if_0 = arr[x] == arr; }
    if(env_var_0 == 105) { _res_key_if_0 = arr[x] == arr+l; }
    if(env_var_0 == 106) { _res_key_if_0 = arr[x] == arr+mid; }
    if(env_var_0 == 107) { _res_key_if_0 = arr[x] == arr+r; }
    if(env_var_0 == 108) { _res_key_if_0 = arr[x] == arr+x; }
    if(env_var_0 == 109) { _res_key_if_0 = arr[x] == arr[l]; }
    if(env_var_0 == 110) { _res_key_if_0 = arr[x] == arr[mid]; }
    if(env_var_0 == 111) { _res_key_if_0 = arr[x] == arr[r]; }
    if(env_var_0 == 112) { _res_key_if_0 = arr[x] == arr[x]; }
    if(env_var_0 == 113) { _res_key_if_0 = arr[x] == l; }
    if(env_var_0 == 114) { _res_key_if_0 = arr[x] == mid; }
    if(env_var_0 == 115) { _res_key_if_0 = arr[x] == r; }
    if(env_var_0 == 116) { _res_key_if_0 = arr[x] == x; }
    if(env_var_0 == 117) { _res_key_if_0 = isupper( arr[l] ) == arr; }
    if(env_var_0 == 118) { _res_key_if_0 = isupper( arr[l] ) == arr+l; }
    if(env_var_0 == 119) { _res_key_if_0 = isupper( arr[l] ) == arr+mid; }
    if(env_var_0 == 120) { _res_key_if_0 = isupper( arr[l] ) == arr+r; }
    if(env_var_0 == 121) { _res_key_if_0 = isupper( arr[l] ) == arr+x; }
    if(env_var_0 == 122) { _res_key_if_0 = isupper( arr[l] ) == arr[l]; }
    if(env_var_0 == 123) { _res_key_if_0 = isupper( arr[l] ) == arr[mid]; }
    if(env_var_0 == 124) { _res_key_if_0 = isupper( arr[l] ) == arr[r]; }
    if(env_var_0 == 125) { _res_key_if_0 = isupper( arr[l] ) == arr[x]; }
    if(env_var_0 == 126) { _res_key_if_0 = isupper( arr[l] ) == l; }
    if(env_var_0 == 127) { _res_key_if_0 = isupper( arr[l] ) == mid; }
    if(env_var_0 == 128) { _res_key_if_0 = isupper( arr[l] ) == r; }
    if(env_var_0 == 129) { _res_key_if_0 = isupper( arr[l] ) == x; }
    if(env_var_0 == 130) { _res_key_if_0 = isupper( arr[mid] ) == arr; }
    if(env_var_0 == 131) { _res_key_if_0 = isupper( arr[mid] ) == arr+l; }
    if(env_var_0 == 132) { _res_key_if_0 = isupper( arr[mid] ) == arr+mid; }
    if(env_var_0 == 133) { _res_key_if_0 = isupper( arr[mid] ) == arr+r; }
    if(env_var_0 == 134) { _res_key_if_0 = isupper( arr[mid] ) == arr+x; }
    if(env_var_0 == 135) { _res_key_if_0 = isupper( arr[mid] ) == arr[l]; }
    if(env_var_0 == 136) { _res_key_if_0 = isupper( arr[mid] ) == arr[mid]; }
    if(env_var_0 == 137) { _res_key_if_0 = isupper( arr[mid] ) == arr[r]; }
    if(env_var_0 == 138) { _res_key_if_0 = isupper( arr[mid] ) == arr[x]; }
    if(env_var_0 == 139) { _res_key_if_0 = isupper( arr[mid] ) == l; }
    if(env_var_0 == 140) { _res_key_if_0 = isupper( arr[mid] ) == mid; }
    if(env_var_0 == 141) { _res_key_if_0 = isupper( arr[mid] ) == r; }
    if(env_var_0 == 142) { _res_key_if_0 = isupper( arr[mid] ) == x; }
    if(env_var_0 == 143) { _res_key_if_0 = isupper( arr[r] ) == arr; }
    if(env_var_0 == 144) { _res_key_if_0 = isupper( arr[r] ) == arr+l; }
    if(env_var_0 == 145) { _res_key_if_0 = isupper( arr[r] ) == arr+mid; }
    if(env_var_0 == 146) { _res_key_if_0 = isupper( arr[r] ) == arr+r; }
    if(env_var_0 == 147) { _res_key_if_0 = isupper( arr[r] ) == arr+x; }
    if(env_var_0 == 148) { _res_key_if_0 = isupper( arr[r] ) == arr[l]; }
    if(env_var_0 == 149) { _res_key_if_0 = isupper( arr[r] ) == arr[mid]; }
    if(env_var_0 == 150) { _res_key_if_0 = isupper( arr[r] ) == arr[r]; }
    if(env_var_0 == 151) { _res_key_if_0 = isupper( arr[r] ) == arr[x]; }
    if(env_var_0 == 152) { _res_key_if_0 = isupper( arr[r] ) == l; }
    if(env_var_0 == 153) { _res_key_if_0 = isupper( arr[r] ) == mid; }
    if(env_var_0 == 154) { _res_key_if_0 = isupper( arr[r] ) == r; }
    if(env_var_0 == 155) { _res_key_if_0 = isupper( arr[r] ) == x; }
    if(env_var_0 == 156) { _res_key_if_0 = isupper( arr[x] ) == arr; }
    if(env_var_0 == 157) { _res_key_if_0 = isupper( arr[x] ) == arr+l; }
    if(env_var_0 == 158) { _res_key_if_0 = isupper( arr[x] ) == arr+mid; }
    if(env_var_0 == 159) { _res_key_if_0 = isupper( arr[x] ) == arr+r; }
    if(env_var_0 == 160) { _res_key_if_0 = isupper( arr[x] ) == arr+x; }
    if(env_var_0 == 161) { _res_key_if_0 = isupper( arr[x] ) == arr[l]; }
    if(env_var_0 == 162) { _res_key_if_0 = isupper( arr[x] ) == arr[mid]; }
    if(env_var_0 == 163) { _res_key_if_0 = isupper( arr[x] ) == arr[r]; }
    if(env_var_0 == 164) { _res_key_if_0 = isupper( arr[x] ) == arr[x]; }
    if(env_var_0 == 165) { _res_key_if_0 = isupper( arr[x] ) == l; }
    if(env_var_0 == 166) { _res_key_if_0 = isupper( arr[x] ) == mid; }
    if(env_var_0 == 167) { _res_key_if_0 = isupper( arr[x] ) == r; }
    if(env_var_0 == 168) { _res_key_if_0 = isupper( arr[x] ) == x; }
    if(env_var_0 == 169) { _res_key_if_0 = isupper( l ) == arr; }
    if(env_var_0 == 170) { _res_key_if_0 = isupper( l ) == arr+l; }
    if(env_var_0 == 171) { _res_key_if_0 = isupper( l ) == arr+mid; }
    if(env_var_0 == 172) { _res_key_if_0 = isupper( l ) == arr+r; }
    if(env_var_0 == 173) { _res_key_if_0 = isupper( l ) == arr+x; }
    if(env_var_0 == 174) { _res_key_if_0 = isupper( l ) == arr[l]; }
    if(env_var_0 == 175) { _res_key_if_0 = isupper( l ) == arr[mid]; }
    if(env_var_0 == 176) { _res_key_if_0 = isupper( l ) == arr[r]; }
    if(env_var_0 == 177) { _res_key_if_0 = isupper( l ) == arr[x]; }
    if(env_var_0 == 178) { _res_key_if_0 = isupper( l ) == l; }
    if(env_var_0 == 179) { _res_key_if_0 = isupper( l ) == mid; }
    if(env_var_0 == 180) { _res_key_if_0 = isupper( l ) == r; }
    if(env_var_0 == 181) { _res_key_if_0 = isupper( l ) == x; }
    if(env_var_0 == 182) { _res_key_if_0 = isupper( mid ) == arr; }
    if(env_var_0 == 183) { _res_key_if_0 = isupper( mid ) == arr+l; }
    if(env_var_0 == 184) { _res_key_if_0 = isupper( mid ) == arr+mid; }
    if(env_var_0 == 185) { _res_key_if_0 = isupper( mid ) == arr+r; }
    if(env_var_0 == 186) { _res_key_if_0 = isupper( mid ) == arr+x; }
    if(env_var_0 == 187) { _res_key_if_0 = isupper( mid ) == arr[l]; }
    if(env_var_0 == 188) { _res_key_if_0 = isupper( mid ) == arr[mid]; }
    if(env_var_0 == 189) { _res_key_if_0 = isupper( mid ) == arr[r]; }
    if(env_var_0 == 190) { _res_key_if_0 = isupper( mid ) == arr[x]; }
    if(env_var_0 == 191) { _res_key_if_0 = isupper( mid ) == l; }
    if(env_var_0 == 192) { _res_key_if_0 = isupper( mid ) == mid; }
    if(env_var_0 == 193) { _res_key_if_0 = isupper( mid ) == r; }
    if(env_var_0 == 194) { _res_key_if_0 = isupper( mid ) == x; }
    if(env_var_0 == 195) { _res_key_if_0 = isupper( r ) == arr; }
    if(env_var_0 == 196) { _res_key_if_0 = isupper( r ) == arr+l; }
    if(env_var_0 == 197) { _res_key_if_0 = isupper( r ) == arr+mid; }
    if(env_var_0 == 198) { _res_key_if_0 = isupper( r ) == arr+r; }
    if(env_var_0 == 199) { _res_key_if_0 = isupper( r ) == arr+x; }
    if(env_var_0 == 200) { _res_key_if_0 = isupper( r ) == arr[l]; }
    if(env_var_0 == 201) { _res_key_if_0 = isupper( r ) == arr[mid]; }
    if(env_var_0 == 202) { _res_key_if_0 = isupper( r ) == arr[r]; }
    if(env_var_0 == 203) { _res_key_if_0 = isupper( r ) == arr[x]; }
    if(env_var_0 == 204) { _res_key_if_0 = isupper( r ) == l; }
    if(env_var_0 == 205) { _res_key_if_0 = isupper( r ) == mid; }
    if(env_var_0 == 206) { _res_key_if_0 = isupper( r ) == r; }
    if(env_var_0 == 207) { _res_key_if_0 = isupper( r ) == x; }
    if(env_var_0 == 208) { _res_key_if_0 = isupper( x ) == arr; }
    if(env_var_0 == 209) { _res_key_if_0 = isupper( x ) == arr+l; }
    if(env_var_0 == 210) { _res_key_if_0 = isupper( x ) == arr+mid; }
    if(env_var_0 == 211) { _res_key_if_0 = isupper( x ) == arr+r; }
    if(env_var_0 == 212) { _res_key_if_0 = isupper( x ) == arr+x; }
    if(env_var_0 == 213) { _res_key_if_0 = isupper( x ) == arr[l]; }
    if(env_var_0 == 214) { _res_key_if_0 = isupper( x ) == arr[mid]; }
    if(env_var_0 == 215) { _res_key_if_0 = isupper( x ) == arr[r]; }
    if(env_var_0 == 216) { _res_key_if_0 = isupper( x ) == arr[x]; }
    if(env_var_0 == 217) { _res_key_if_0 = isupper( x ) == l; }
    if(env_var_0 == 218) { _res_key_if_0 = isupper( x ) == mid; }
    if(env_var_0 == 219) { _res_key_if_0 = isupper( x ) == r; }
    if(env_var_0 == 220) { _res_key_if_0 = isupper( x ) == x; }
    if(env_var_0 == 221) { _res_key_if_0 = l == arr; }
    if(env_var_0 == 222) { _res_key_if_0 = l == arr+l; }
    if(env_var_0 == 223) { _res_key_if_0 = l == arr+mid; }
    if(env_var_0 == 224) { _res_key_if_0 = l == arr+r; }
    if(env_var_0 == 225) { _res_key_if_0 = l == arr+x; }
    if(env_var_0 == 226) { _res_key_if_0 = l == arr[l]; }
    if(env_var_0 == 227) { _res_key_if_0 = l == arr[mid]; }
    if(env_var_0 == 228) { _res_key_if_0 = l == arr[r]; }
    if(env_var_0 == 229) { _res_key_if_0 = l == arr[x]; }
    if(env_var_0 == 230) { _res_key_if_0 = l == l; }
    if(env_var_0 == 231) { _res_key_if_0 = l == mid; }
    if(env_var_0 == 232) { _res_key_if_0 = l == r; }
    if(env_var_0 == 233) { _res_key_if_0 = l == x; }
    if(env_var_0 == 234) { _res_key_if_0 = mid == arr; }
    if(env_var_0 == 235) { _res_key_if_0 = mid == arr+l; }
    if(env_var_0 == 236) { _res_key_if_0 = mid == arr+mid; }
    if(env_var_0 == 237) { _res_key_if_0 = mid == arr+r; }
    if(env_var_0 == 238) { _res_key_if_0 = mid == arr+x; }
    if(env_var_0 == 239) { _res_key_if_0 = mid == arr[l]; }
    if(env_var_0 == 240) { _res_key_if_0 = mid == arr[mid]; }
    if(env_var_0 == 241) { _res_key_if_0 = mid == arr[r]; }
    if(env_var_0 == 242) { _res_key_if_0 = mid == arr[x]; }
    if(env_var_0 == 243) { _res_key_if_0 = mid == l; }
    if(env_var_0 == 244) { _res_key_if_0 = mid == mid; }
    if(env_var_0 == 245) { _res_key_if_0 = mid == r; }
    if(env_var_0 == 246) { _res_key_if_0 = mid == x; }
    if(env_var_0 == 247) { _res_key_if_0 = r == arr; }
    if(env_var_0 == 248) { _res_key_if_0 = r == arr+l; }
    if(env_var_0 == 249) { _res_key_if_0 = r == arr+mid; }
    if(env_var_0 == 250) { _res_key_if_0 = r == arr+r; }
    if(env_var_0 == 251) { _res_key_if_0 = r == arr+x; }
    if(env_var_0 == 252) { _res_key_if_0 = r == arr[l]; }
    if(env_var_0 == 253) { _res_key_if_0 = r == arr[mid]; }
    if(env_var_0 == 254) { _res_key_if_0 = r == arr[r]; }
    if(env_var_0 == 255) { _res_key_if_0 = r == arr[x]; }
    if(env_var_0 == 256) { _res_key_if_0 = r == l; }
    if(env_var_0 == 257) { _res_key_if_0 = r == mid; }
    if(env_var_0 == 258) { _res_key_if_0 = r == r; }
    if(env_var_0 == 259) { _res_key_if_0 = r == x; }
    if(env_var_0 == 260) { _res_key_if_0 = toupper( arr[l] ) == arr; }
    if(env_var_0 == 261) { _res_key_if_0 = toupper( arr[l] ) == arr+l; }
    if(env_var_0 == 262) { _res_key_if_0 = toupper( arr[l] ) == arr+mid; }
    if(env_var_0 == 263) { _res_key_if_0 = toupper( arr[l] ) == arr+r; }
    if(env_var_0 == 264) { _res_key_if_0 = toupper( arr[l] ) == arr+x; }
    if(env_var_0 == 265) { _res_key_if_0 = toupper( arr[l] ) == arr[l]; }
    if(env_var_0 == 266) { _res_key_if_0 = toupper( arr[l] ) == arr[mid]; }
    if(env_var_0 == 267) { _res_key_if_0 = toupper( arr[l] ) == arr[r]; }
    if(env_var_0 == 268) { _res_key_if_0 = toupper( arr[l] ) == arr[x]; }
    if(env_var_0 == 269) { _res_key_if_0 = toupper( arr[l] ) == l; }
    if(env_var_0 == 270) { _res_key_if_0 = toupper( arr[l] ) == mid; }
    if(env_var_0 == 271) { _res_key_if_0 = toupper( arr[l] ) == r; }
    if(env_var_0 == 272) { _res_key_if_0 = toupper( arr[l] ) == x; }
    if(env_var_0 == 273) { _res_key_if_0 = toupper( arr[mid] ) == arr; }
    if(env_var_0 == 274) { _res_key_if_0 = toupper( arr[mid] ) == arr+l; }
    if(env_var_0 == 275) { _res_key_if_0 = toupper( arr[mid] ) == arr+mid; }
    if(env_var_0 == 276) { _res_key_if_0 = toupper( arr[mid] ) == arr+r; }
    if(env_var_0 == 277) { _res_key_if_0 = toupper( arr[mid] ) == arr+x; }
    if(env_var_0 == 278) { _res_key_if_0 = toupper( arr[mid] ) == arr[l]; }
    if(env_var_0 == 279) { _res_key_if_0 = toupper( arr[mid] ) == arr[mid]; }
    if(env_var_0 == 280) { _res_key_if_0 = toupper( arr[mid] ) == arr[r]; }
    if(env_var_0 == 281) { _res_key_if_0 = toupper( arr[mid] ) == arr[x]; }
    if(env_var_0 == 282) { _res_key_if_0 = toupper( arr[mid] ) == l; }
    if(env_var_0 == 283) { _res_key_if_0 = toupper( arr[mid] ) == mid; }
    if(env_var_0 == 284) { _res_key_if_0 = toupper( arr[mid] ) == r; }
    if(env_var_0 == 285) { _res_key_if_0 = toupper( arr[mid] ) == x; }
    if(env_var_0 == 286) { _res_key_if_0 = toupper( arr[r] ) == arr; }
    if(env_var_0 == 287) { _res_key_if_0 = toupper( arr[r] ) == arr+l; }
    if(env_var_0 == 288) { _res_key_if_0 = toupper( arr[r] ) == arr+mid; }
    if(env_var_0 == 289) { _res_key_if_0 = toupper( arr[r] ) == arr+r; }
    if(env_var_0 == 290) { _res_key_if_0 = toupper( arr[r] ) == arr+x; }
    if(env_var_0 == 291) { _res_key_if_0 = toupper( arr[r] ) == arr[l]; }
    if(env_var_0 == 292) { _res_key_if_0 = toupper( arr[r] ) == arr[mid]; }
    if(env_var_0 == 293) { _res_key_if_0 = toupper( arr[r] ) == arr[r]; }
    if(env_var_0 == 294) { _res_key_if_0 = toupper( arr[r] ) == arr[x]; }
    if(env_var_0 == 295) { _res_key_if_0 = toupper( arr[r] ) == l; }
    if(env_var_0 == 296) { _res_key_if_0 = toupper( arr[r] ) == mid; }
    if(env_var_0 == 297) { _res_key_if_0 = toupper( arr[r] ) == r; }
    if(env_var_0 == 298) { _res_key_if_0 = toupper( arr[r] ) == x; }
    if(env_var_0 == 299) { _res_key_if_0 = toupper( arr[x] ) == arr; }
    if(env_var_0 == 300) { _res_key_if_0 = toupper( arr[x] ) == arr+l; }
    if(env_var_0 == 301) { _res_key_if_0 = toupper( arr[x] ) == arr+mid; }
    if(env_var_0 == 302) { _res_key_if_0 = toupper( arr[x] ) == arr+r; }
    if(env_var_0 == 303) { _res_key_if_0 = toupper( arr[x] ) == arr+x; }
    if(env_var_0 == 304) { _res_key_if_0 = toupper( arr[x] ) == arr[l]; }
    if(env_var_0 == 305) { _res_key_if_0 = toupper( arr[x] ) == arr[mid]; }
    if(env_var_0 == 306) { _res_key_if_0 = toupper( arr[x] ) == arr[r]; }
    if(env_var_0 == 307) { _res_key_if_0 = toupper( arr[x] ) == arr[x]; }
    if(env_var_0 == 308) { _res_key_if_0 = toupper( arr[x] ) == l; }
    if(env_var_0 == 309) { _res_key_if_0 = toupper( arr[x] ) == mid; }
    if(env_var_0 == 310) { _res_key_if_0 = toupper( arr[x] ) == r; }
    if(env_var_0 == 311) { _res_key_if_0 = toupper( arr[x] ) == x; }
    if(env_var_0 == 312) { _res_key_if_0 = toupper( l ) == arr; }
    if(env_var_0 == 313) { _res_key_if_0 = toupper( l ) == arr+l; }
    if(env_var_0 == 314) { _res_key_if_0 = toupper( l ) == arr+mid; }
    if(env_var_0 == 315) { _res_key_if_0 = toupper( l ) == arr+r; }
    if(env_var_0 == 316) { _res_key_if_0 = toupper( l ) == arr+x; }
    if(env_var_0 == 317) { _res_key_if_0 = toupper( l ) == arr[l]; }
    if(env_var_0 == 318) { _res_key_if_0 = toupper( l ) == arr[mid]; }
    if(env_var_0 == 319) { _res_key_if_0 = toupper( l ) == arr[r]; }
    if(env_var_0 == 320) { _res_key_if_0 = toupper( l ) == arr[x]; }
    if(env_var_0 == 321) { _res_key_if_0 = toupper( l ) == l; }
    if(env_var_0 == 322) { _res_key_if_0 = toupper( l ) == mid; }
    if(env_var_0 == 323) { _res_key_if_0 = toupper( l ) == r; }
    if(env_var_0 == 324) { _res_key_if_0 = toupper( l ) == x; }
    if(env_var_0 == 325) { _res_key_if_0 = toupper( mid ) == arr; }
    if(env_var_0 == 326) { _res_key_if_0 = toupper( mid ) == arr+l; }
    if(env_var_0 == 327) { _res_key_if_0 = toupper( mid ) == arr+mid; }
    if(env_var_0 == 328) { _res_key_if_0 = toupper( mid ) == arr+r; }
    if(env_var_0 == 329) { _res_key_if_0 = toupper( mid ) == arr+x; }
    if(env_var_0 == 330) { _res_key_if_0 = toupper( mid ) == arr[l]; }
    if(env_var_0 == 331) { _res_key_if_0 = toupper( mid ) == arr[mid]; }
    if(env_var_0 == 332) { _res_key_if_0 = toupper( mid ) == arr[r]; }
    if(env_var_0 == 333) { _res_key_if_0 = toupper( mid ) == arr[x]; }
    if(env_var_0 == 334) { _res_key_if_0 = toupper( mid ) == l; }
    if(env_var_0 == 335) { _res_key_if_0 = toupper( mid ) == mid; }
    if(env_var_0 == 336) { _res_key_if_0 = toupper( mid ) == r; }
    if(env_var_0 == 337) { _res_key_if_0 = toupper( mid ) == x; }
    if(env_var_0 == 338) { _res_key_if_0 = toupper( r ) == arr; }
    if(env_var_0 == 339) { _res_key_if_0 = toupper( r ) == arr+l; }
    if(env_var_0 == 340) { _res_key_if_0 = toupper( r ) == arr+mid; }
    if(env_var_0 == 341) { _res_key_if_0 = toupper( r ) == arr+r; }
    if(env_var_0 == 342) { _res_key_if_0 = toupper( r ) == arr+x; }
    if(env_var_0 == 343) { _res_key_if_0 = toupper( r ) == arr[l]; }
    if(env_var_0 == 344) { _res_key_if_0 = toupper( r ) == arr[mid]; }
    if(env_var_0 == 345) { _res_key_if_0 = toupper( r ) == arr[r]; }
    if(env_var_0 == 346) { _res_key_if_0 = toupper( r ) == arr[x]; }
    if(env_var_0 == 347) { _res_key_if_0 = toupper( r ) == l; }
    if(env_var_0 == 348) { _res_key_if_0 = toupper( r ) == mid; }
    if(env_var_0 == 349) { _res_key_if_0 = toupper( r ) == r; }
    if(env_var_0 == 350) { _res_key_if_0 = toupper( r ) == x; }
    if(env_var_0 == 351) { _res_key_if_0 = toupper( x ) == arr; }
    if(env_var_0 == 352) { _res_key_if_0 = toupper( x ) == arr+l; }
    if(env_var_0 == 353) { _res_key_if_0 = toupper( x ) == arr+mid; }
    if(env_var_0 == 354) { _res_key_if_0 = toupper( x ) == arr+r; }
    if(env_var_0 == 355) { _res_key_if_0 = toupper( x ) == arr+x; }
    if(env_var_0 == 356) { _res_key_if_0 = toupper( x ) == arr[l]; }
    if(env_var_0 == 357) { _res_key_if_0 = toupper( x ) == arr[mid]; }
    if(env_var_0 == 358) { _res_key_if_0 = toupper( x ) == arr[r]; }
    if(env_var_0 == 359) { _res_key_if_0 = toupper( x ) == arr[x]; }
    if(env_var_0 == 360) { _res_key_if_0 = toupper( x ) == l; }
    if(env_var_0 == 361) { _res_key_if_0 = toupper( x ) == mid; }
    if(env_var_0 == 362) { _res_key_if_0 = toupper( x ) == r; }
    if(env_var_0 == 363) { _res_key_if_0 = toupper( x ) == x; }
    if(env_var_0 == 364) { _res_key_if_0 = x == arr; }
    if(env_var_0 == 365) { _res_key_if_0 = x == arr+l; }
    if(env_var_0 == 366) { _res_key_if_0 = x == arr+mid; }
    if(env_var_0 == 367) { _res_key_if_0 = x == arr+r; }
    if(env_var_0 == 368) { _res_key_if_0 = x == arr+x; }
    if(env_var_0 == 369) { _res_key_if_0 = x == arr[l]; }
    if(env_var_0 == 370) { _res_key_if_0 = x == arr[mid]; }
    if(env_var_0 == 371) { _res_key_if_0 = x == arr[r]; }
    if(env_var_0 == 372) { _res_key_if_0 = x == arr[x]; }
    if(env_var_0 == 373) { _res_key_if_0 = x == l; }
    if(env_var_0 == 374) { _res_key_if_0 = x == mid; }
    if(env_var_0 == 375) { _res_key_if_0 = x == r; }
    if(env_var_0 == 376) { _res_key_if_0 = x == x; }
    if ( _res_key_if_0 ) return ( mid + 1 ) ;
    if ( ( arr [ mid ] > x ) && ( arr [ mid - 2 ] == x ) && ( arr [ mid + 1 ] == x ) ) return f_filled ( arr , l , mid - 2 , x ) ;
    return f_filled ( arr , mid + 2 , r , x ) ;
  }
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{6,7,15,42,47,54,56,59,59,64,68,70,71,75,91,93},{6,7,15,42,47,56,54,59,59,64,68,71,70, 75,91,93},{-92,-96,-68,-40,70},{-92,-86,-68,-40,70},{-3,-1,0,30,10,45,70,60},{-3,-1,0,10,5,45,60,50},{-3,-1,0,10,30,45,60,70},{0,0,1},{1,1,1},{30,2,30,45}};
    vector<int> param1 {0,0,0,0,0,0,0,0,0,0};
    vector<int> param2 {15,15,4,4,7,7,7,2,2,3};
    vector<int> param3 {71,71,-96,20,0,12,18,20,17,28};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i],param3[i]) == f_gold(&param0[i].front(),param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
