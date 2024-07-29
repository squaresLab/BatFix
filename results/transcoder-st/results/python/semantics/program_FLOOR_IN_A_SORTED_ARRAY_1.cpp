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
int f_gold ( int arr [ ], int low, int high, int x ) {
  if ( low > high ) return - 1;
  if ( x >= arr [ high ] ) return high;
  int mid = ( low + high ) / 2;
  if ( arr [ mid ] == x ) return mid;
  if ( mid > 0 && arr [ mid - 1 ] <= x && x < arr [ mid ] ) return mid - 1;
  if ( x < arr [ mid ] ) return f_gold ( arr, low, mid - 1, x );
  return f_gold ( arr, mid + 1, high, x );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int low , int high , int x ) {
  if ( ( low > high ) || ( x >= arr [ high ] ) ) return - 1 ;
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = arr >= arr; }
  if(env_var_0 == 1) { _res_key_if_0 = arr >= arr+high; }
  if(env_var_0 == 2) { _res_key_if_0 = arr >= arr+low; }
  if(env_var_0 == 3) { _res_key_if_0 = arr >= arr+x; }
  if(env_var_0 == 4) { _res_key_if_0 = arr >= arr[high]; }
  if(env_var_0 == 5) { _res_key_if_0 = arr >= arr[low]; }
  if(env_var_0 == 6) { _res_key_if_0 = arr >= arr[x]; }
  if(env_var_0 == 7) { _res_key_if_0 = arr >= high; }
  if(env_var_0 == 8) { _res_key_if_0 = arr >= isupper( arr[high] ); }
  if(env_var_0 == 9) { _res_key_if_0 = arr >= isupper( arr[low] ); }
  if(env_var_0 == 10) { _res_key_if_0 = arr >= isupper( arr[x] ); }
  if(env_var_0 == 11) { _res_key_if_0 = arr >= isupper( high ); }
  if(env_var_0 == 12) { _res_key_if_0 = arr >= isupper( low ); }
  if(env_var_0 == 13) { _res_key_if_0 = arr >= isupper( x ); }
  if(env_var_0 == 14) { _res_key_if_0 = arr >= low; }
  if(env_var_0 == 15) { _res_key_if_0 = arr >= toupper( arr[high] ); }
  if(env_var_0 == 16) { _res_key_if_0 = arr >= toupper( arr[low] ); }
  if(env_var_0 == 17) { _res_key_if_0 = arr >= toupper( arr[x] ); }
  if(env_var_0 == 18) { _res_key_if_0 = arr >= toupper( high ); }
  if(env_var_0 == 19) { _res_key_if_0 = arr >= toupper( low ); }
  if(env_var_0 == 20) { _res_key_if_0 = arr >= toupper( x ); }
  if(env_var_0 == 21) { _res_key_if_0 = arr >= x; }
  if(env_var_0 == 22) { _res_key_if_0 = arr+high >= arr; }
  if(env_var_0 == 23) { _res_key_if_0 = arr+high >= arr+high; }
  if(env_var_0 == 24) { _res_key_if_0 = arr+high >= arr+low; }
  if(env_var_0 == 25) { _res_key_if_0 = arr+high >= arr+x; }
  if(env_var_0 == 26) { _res_key_if_0 = arr+high >= arr[high]; }
  if(env_var_0 == 27) { _res_key_if_0 = arr+high >= arr[low]; }
  if(env_var_0 == 28) { _res_key_if_0 = arr+high >= arr[x]; }
  if(env_var_0 == 29) { _res_key_if_0 = arr+high >= high; }
  if(env_var_0 == 30) { _res_key_if_0 = arr+high >= isupper( arr[high] ); }
  if(env_var_0 == 31) { _res_key_if_0 = arr+high >= isupper( arr[low] ); }
  if(env_var_0 == 32) { _res_key_if_0 = arr+high >= isupper( arr[x] ); }
  if(env_var_0 == 33) { _res_key_if_0 = arr+high >= isupper( high ); }
  if(env_var_0 == 34) { _res_key_if_0 = arr+high >= isupper( low ); }
  if(env_var_0 == 35) { _res_key_if_0 = arr+high >= isupper( x ); }
  if(env_var_0 == 36) { _res_key_if_0 = arr+high >= low; }
  if(env_var_0 == 37) { _res_key_if_0 = arr+high >= toupper( arr[high] ); }
  if(env_var_0 == 38) { _res_key_if_0 = arr+high >= toupper( arr[low] ); }
  if(env_var_0 == 39) { _res_key_if_0 = arr+high >= toupper( arr[x] ); }
  if(env_var_0 == 40) { _res_key_if_0 = arr+high >= toupper( high ); }
  if(env_var_0 == 41) { _res_key_if_0 = arr+high >= toupper( low ); }
  if(env_var_0 == 42) { _res_key_if_0 = arr+high >= toupper( x ); }
  if(env_var_0 == 43) { _res_key_if_0 = arr+high >= x; }
  if(env_var_0 == 44) { _res_key_if_0 = arr+low >= arr; }
  if(env_var_0 == 45) { _res_key_if_0 = arr+low >= arr+high; }
  if(env_var_0 == 46) { _res_key_if_0 = arr+low >= arr+low; }
  if(env_var_0 == 47) { _res_key_if_0 = arr+low >= arr+x; }
  if(env_var_0 == 48) { _res_key_if_0 = arr+low >= arr[high]; }
  if(env_var_0 == 49) { _res_key_if_0 = arr+low >= arr[low]; }
  if(env_var_0 == 50) { _res_key_if_0 = arr+low >= arr[x]; }
  if(env_var_0 == 51) { _res_key_if_0 = arr+low >= high; }
  if(env_var_0 == 52) { _res_key_if_0 = arr+low >= isupper( arr[high] ); }
  if(env_var_0 == 53) { _res_key_if_0 = arr+low >= isupper( arr[low] ); }
  if(env_var_0 == 54) { _res_key_if_0 = arr+low >= isupper( arr[x] ); }
  if(env_var_0 == 55) { _res_key_if_0 = arr+low >= isupper( high ); }
  if(env_var_0 == 56) { _res_key_if_0 = arr+low >= isupper( low ); }
  if(env_var_0 == 57) { _res_key_if_0 = arr+low >= isupper( x ); }
  if(env_var_0 == 58) { _res_key_if_0 = arr+low >= low; }
  if(env_var_0 == 59) { _res_key_if_0 = arr+low >= toupper( arr[high] ); }
  if(env_var_0 == 60) { _res_key_if_0 = arr+low >= toupper( arr[low] ); }
  if(env_var_0 == 61) { _res_key_if_0 = arr+low >= toupper( arr[x] ); }
  if(env_var_0 == 62) { _res_key_if_0 = arr+low >= toupper( high ); }
  if(env_var_0 == 63) { _res_key_if_0 = arr+low >= toupper( low ); }
  if(env_var_0 == 64) { _res_key_if_0 = arr+low >= toupper( x ); }
  if(env_var_0 == 65) { _res_key_if_0 = arr+low >= x; }
  if(env_var_0 == 66) { _res_key_if_0 = arr+x >= arr; }
  if(env_var_0 == 67) { _res_key_if_0 = arr+x >= arr+high; }
  if(env_var_0 == 68) { _res_key_if_0 = arr+x >= arr+low; }
  if(env_var_0 == 69) { _res_key_if_0 = arr+x >= arr+x; }
  if(env_var_0 == 70) { _res_key_if_0 = arr+x >= arr[high]; }
  if(env_var_0 == 71) { _res_key_if_0 = arr+x >= arr[low]; }
  if(env_var_0 == 72) { _res_key_if_0 = arr+x >= arr[x]; }
  if(env_var_0 == 73) { _res_key_if_0 = arr+x >= high; }
  if(env_var_0 == 74) { _res_key_if_0 = arr+x >= isupper( arr[high] ); }
  if(env_var_0 == 75) { _res_key_if_0 = arr+x >= isupper( arr[low] ); }
  if(env_var_0 == 76) { _res_key_if_0 = arr+x >= isupper( arr[x] ); }
  if(env_var_0 == 77) { _res_key_if_0 = arr+x >= isupper( high ); }
  if(env_var_0 == 78) { _res_key_if_0 = arr+x >= isupper( low ); }
  if(env_var_0 == 79) { _res_key_if_0 = arr+x >= isupper( x ); }
  if(env_var_0 == 80) { _res_key_if_0 = arr+x >= low; }
  if(env_var_0 == 81) { _res_key_if_0 = arr+x >= toupper( arr[high] ); }
  if(env_var_0 == 82) { _res_key_if_0 = arr+x >= toupper( arr[low] ); }
  if(env_var_0 == 83) { _res_key_if_0 = arr+x >= toupper( arr[x] ); }
  if(env_var_0 == 84) { _res_key_if_0 = arr+x >= toupper( high ); }
  if(env_var_0 == 85) { _res_key_if_0 = arr+x >= toupper( low ); }
  if(env_var_0 == 86) { _res_key_if_0 = arr+x >= toupper( x ); }
  if(env_var_0 == 87) { _res_key_if_0 = arr+x >= x; }
  if(env_var_0 == 88) { _res_key_if_0 = arr[high] >= arr; }
  if(env_var_0 == 89) { _res_key_if_0 = arr[high] >= arr+high; }
  if(env_var_0 == 90) { _res_key_if_0 = arr[high] >= arr+low; }
  if(env_var_0 == 91) { _res_key_if_0 = arr[high] >= arr+x; }
  if(env_var_0 == 92) { _res_key_if_0 = arr[high] >= arr[high]; }
  if(env_var_0 == 93) { _res_key_if_0 = arr[high] >= arr[low]; }
  if(env_var_0 == 94) { _res_key_if_0 = arr[high] >= arr[x]; }
  if(env_var_0 == 95) { _res_key_if_0 = arr[high] >= high; }
  if(env_var_0 == 96) { _res_key_if_0 = arr[high] >= isupper( arr[high] ); }
  if(env_var_0 == 97) { _res_key_if_0 = arr[high] >= isupper( arr[low] ); }
  if(env_var_0 == 98) { _res_key_if_0 = arr[high] >= isupper( arr[x] ); }
  if(env_var_0 == 99) { _res_key_if_0 = arr[high] >= isupper( high ); }
  if(env_var_0 == 100) { _res_key_if_0 = arr[high] >= isupper( low ); }
  if(env_var_0 == 101) { _res_key_if_0 = arr[high] >= isupper( x ); }
  if(env_var_0 == 102) { _res_key_if_0 = arr[high] >= low; }
  if(env_var_0 == 103) { _res_key_if_0 = arr[high] >= toupper( arr[high] ); }
  if(env_var_0 == 104) { _res_key_if_0 = arr[high] >= toupper( arr[low] ); }
  if(env_var_0 == 105) { _res_key_if_0 = arr[high] >= toupper( arr[x] ); }
  if(env_var_0 == 106) { _res_key_if_0 = arr[high] >= toupper( high ); }
  if(env_var_0 == 107) { _res_key_if_0 = arr[high] >= toupper( low ); }
  if(env_var_0 == 108) { _res_key_if_0 = arr[high] >= toupper( x ); }
  if(env_var_0 == 109) { _res_key_if_0 = arr[high] >= x; }
  if(env_var_0 == 110) { _res_key_if_0 = arr[low] >= arr; }
  if(env_var_0 == 111) { _res_key_if_0 = arr[low] >= arr+high; }
  if(env_var_0 == 112) { _res_key_if_0 = arr[low] >= arr+low; }
  if(env_var_0 == 113) { _res_key_if_0 = arr[low] >= arr+x; }
  if(env_var_0 == 114) { _res_key_if_0 = arr[low] >= arr[high]; }
  if(env_var_0 == 115) { _res_key_if_0 = arr[low] >= arr[low]; }
  if(env_var_0 == 116) { _res_key_if_0 = arr[low] >= arr[x]; }
  if(env_var_0 == 117) { _res_key_if_0 = arr[low] >= high; }
  if(env_var_0 == 118) { _res_key_if_0 = arr[low] >= isupper( arr[high] ); }
  if(env_var_0 == 119) { _res_key_if_0 = arr[low] >= isupper( arr[low] ); }
  if(env_var_0 == 120) { _res_key_if_0 = arr[low] >= isupper( arr[x] ); }
  if(env_var_0 == 121) { _res_key_if_0 = arr[low] >= isupper( high ); }
  if(env_var_0 == 122) { _res_key_if_0 = arr[low] >= isupper( low ); }
  if(env_var_0 == 123) { _res_key_if_0 = arr[low] >= isupper( x ); }
  if(env_var_0 == 124) { _res_key_if_0 = arr[low] >= low; }
  if(env_var_0 == 125) { _res_key_if_0 = arr[low] >= toupper( arr[high] ); }
  if(env_var_0 == 126) { _res_key_if_0 = arr[low] >= toupper( arr[low] ); }
  if(env_var_0 == 127) { _res_key_if_0 = arr[low] >= toupper( arr[x] ); }
  if(env_var_0 == 128) { _res_key_if_0 = arr[low] >= toupper( high ); }
  if(env_var_0 == 129) { _res_key_if_0 = arr[low] >= toupper( low ); }
  if(env_var_0 == 130) { _res_key_if_0 = arr[low] >= toupper( x ); }
  if(env_var_0 == 131) { _res_key_if_0 = arr[low] >= x; }
  if(env_var_0 == 132) { _res_key_if_0 = arr[x] >= arr; }
  if(env_var_0 == 133) { _res_key_if_0 = arr[x] >= arr+high; }
  if(env_var_0 == 134) { _res_key_if_0 = arr[x] >= arr+low; }
  if(env_var_0 == 135) { _res_key_if_0 = arr[x] >= arr+x; }
  if(env_var_0 == 136) { _res_key_if_0 = arr[x] >= arr[high]; }
  if(env_var_0 == 137) { _res_key_if_0 = arr[x] >= arr[low]; }
  if(env_var_0 == 138) { _res_key_if_0 = arr[x] >= arr[x]; }
  if(env_var_0 == 139) { _res_key_if_0 = arr[x] >= high; }
  if(env_var_0 == 140) { _res_key_if_0 = arr[x] >= isupper( arr[high] ); }
  if(env_var_0 == 141) { _res_key_if_0 = arr[x] >= isupper( arr[low] ); }
  if(env_var_0 == 142) { _res_key_if_0 = arr[x] >= isupper( arr[x] ); }
  if(env_var_0 == 143) { _res_key_if_0 = arr[x] >= isupper( high ); }
  if(env_var_0 == 144) { _res_key_if_0 = arr[x] >= isupper( low ); }
  if(env_var_0 == 145) { _res_key_if_0 = arr[x] >= isupper( x ); }
  if(env_var_0 == 146) { _res_key_if_0 = arr[x] >= low; }
  if(env_var_0 == 147) { _res_key_if_0 = arr[x] >= toupper( arr[high] ); }
  if(env_var_0 == 148) { _res_key_if_0 = arr[x] >= toupper( arr[low] ); }
  if(env_var_0 == 149) { _res_key_if_0 = arr[x] >= toupper( arr[x] ); }
  if(env_var_0 == 150) { _res_key_if_0 = arr[x] >= toupper( high ); }
  if(env_var_0 == 151) { _res_key_if_0 = arr[x] >= toupper( low ); }
  if(env_var_0 == 152) { _res_key_if_0 = arr[x] >= toupper( x ); }
  if(env_var_0 == 153) { _res_key_if_0 = arr[x] >= x; }
  if(env_var_0 == 154) { _res_key_if_0 = high >= arr; }
  if(env_var_0 == 155) { _res_key_if_0 = high >= arr+high; }
  if(env_var_0 == 156) { _res_key_if_0 = high >= arr+low; }
  if(env_var_0 == 157) { _res_key_if_0 = high >= arr+x; }
  if(env_var_0 == 158) { _res_key_if_0 = high >= arr[high]; }
  if(env_var_0 == 159) { _res_key_if_0 = high >= arr[low]; }
  if(env_var_0 == 160) { _res_key_if_0 = high >= arr[x]; }
  if(env_var_0 == 161) { _res_key_if_0 = high >= high; }
  if(env_var_0 == 162) { _res_key_if_0 = high >= isupper( arr[high] ); }
  if(env_var_0 == 163) { _res_key_if_0 = high >= isupper( arr[low] ); }
  if(env_var_0 == 164) { _res_key_if_0 = high >= isupper( arr[x] ); }
  if(env_var_0 == 165) { _res_key_if_0 = high >= isupper( high ); }
  if(env_var_0 == 166) { _res_key_if_0 = high >= isupper( low ); }
  if(env_var_0 == 167) { _res_key_if_0 = high >= isupper( x ); }
  if(env_var_0 == 168) { _res_key_if_0 = high >= low; }
  if(env_var_0 == 169) { _res_key_if_0 = high >= toupper( arr[high] ); }
  if(env_var_0 == 170) { _res_key_if_0 = high >= toupper( arr[low] ); }
  if(env_var_0 == 171) { _res_key_if_0 = high >= toupper( arr[x] ); }
  if(env_var_0 == 172) { _res_key_if_0 = high >= toupper( high ); }
  if(env_var_0 == 173) { _res_key_if_0 = high >= toupper( low ); }
  if(env_var_0 == 174) { _res_key_if_0 = high >= toupper( x ); }
  if(env_var_0 == 175) { _res_key_if_0 = high >= x; }
  if(env_var_0 == 176) { _res_key_if_0 = low >= arr; }
  if(env_var_0 == 177) { _res_key_if_0 = low >= arr+high; }
  if(env_var_0 == 178) { _res_key_if_0 = low >= arr+low; }
  if(env_var_0 == 179) { _res_key_if_0 = low >= arr+x; }
  if(env_var_0 == 180) { _res_key_if_0 = low >= arr[high]; }
  if(env_var_0 == 181) { _res_key_if_0 = low >= arr[low]; }
  if(env_var_0 == 182) { _res_key_if_0 = low >= arr[x]; }
  if(env_var_0 == 183) { _res_key_if_0 = low >= high; }
  if(env_var_0 == 184) { _res_key_if_0 = low >= isupper( arr[high] ); }
  if(env_var_0 == 185) { _res_key_if_0 = low >= isupper( arr[low] ); }
  if(env_var_0 == 186) { _res_key_if_0 = low >= isupper( arr[x] ); }
  if(env_var_0 == 187) { _res_key_if_0 = low >= isupper( high ); }
  if(env_var_0 == 188) { _res_key_if_0 = low >= isupper( low ); }
  if(env_var_0 == 189) { _res_key_if_0 = low >= isupper( x ); }
  if(env_var_0 == 190) { _res_key_if_0 = low >= low; }
  if(env_var_0 == 191) { _res_key_if_0 = low >= toupper( arr[high] ); }
  if(env_var_0 == 192) { _res_key_if_0 = low >= toupper( arr[low] ); }
  if(env_var_0 == 193) { _res_key_if_0 = low >= toupper( arr[x] ); }
  if(env_var_0 == 194) { _res_key_if_0 = low >= toupper( high ); }
  if(env_var_0 == 195) { _res_key_if_0 = low >= toupper( low ); }
  if(env_var_0 == 196) { _res_key_if_0 = low >= toupper( x ); }
  if(env_var_0 == 197) { _res_key_if_0 = low >= x; }
  if(env_var_0 == 198) { _res_key_if_0 = x >= arr; }
  if(env_var_0 == 199) { _res_key_if_0 = x >= arr+high; }
  if(env_var_0 == 200) { _res_key_if_0 = x >= arr+low; }
  if(env_var_0 == 201) { _res_key_if_0 = x >= arr+x; }
  if(env_var_0 == 202) { _res_key_if_0 = x >= arr[high]; }
  if(env_var_0 == 203) { _res_key_if_0 = x >= arr[low]; }
  if(env_var_0 == 204) { _res_key_if_0 = x >= arr[x]; }
  if(env_var_0 == 205) { _res_key_if_0 = x >= high; }
  if(env_var_0 == 206) { _res_key_if_0 = x >= isupper( arr[high] ); }
  if(env_var_0 == 207) { _res_key_if_0 = x >= isupper( arr[low] ); }
  if(env_var_0 == 208) { _res_key_if_0 = x >= isupper( arr[x] ); }
  if(env_var_0 == 209) { _res_key_if_0 = x >= isupper( high ); }
  if(env_var_0 == 210) { _res_key_if_0 = x >= isupper( low ); }
  if(env_var_0 == 211) { _res_key_if_0 = x >= isupper( x ); }
  if(env_var_0 == 212) { _res_key_if_0 = x >= low; }
  if(env_var_0 == 213) { _res_key_if_0 = x >= toupper( arr[high] ); }
  if(env_var_0 == 214) { _res_key_if_0 = x >= toupper( arr[low] ); }
  if(env_var_0 == 215) { _res_key_if_0 = x >= toupper( arr[x] ); }
  if(env_var_0 == 216) { _res_key_if_0 = x >= toupper( high ); }
  if(env_var_0 == 217) { _res_key_if_0 = x >= toupper( low ); }
  if(env_var_0 == 218) { _res_key_if_0 = x >= toupper( x ); }
  if(env_var_0 == 219) { _res_key_if_0 = x >= x; }
  if ( _res_key_if_0 ) return high ;
  int mid = ( int ) ( ( low + high ) / 2 ) ;
  if ( ( arr [ mid ] == x ) || ( arr [ mid ] == x ) ) return mid - 1 ;
  if ( ( x < arr [ mid ] ) || ( x > arr [ mid ] ) ) return f_filled ( arr , low , mid - 1 , x ) ;
  return f_filled ( arr , mid + 1 , high , x ) ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{5,11,20,42,42,55,58,98,99},{50,-90,-38,-46,-10,-22,-66,72,-52,38,90,34,-12,-44,-6,0,-20,-38,86,26,64,-24,40,90,-26,-2,-28,12,22,-14},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{69,28,68,98,24,67,86,2,18,22,44,77,52,62,24,46},{-96,-94,-88,-84,-68,-60,-52,-52,-42,-34,-32,-16,-12,-6,-6,-4,-2,0,16,18,38,58,70,72,76,78,90,92,98},{0,1,1,0,0,1,0,1,1,1,0,0,0,0,1,0,1,1,1,1,1,1,0,0,1,0,0},{1,6,7,9,10,11,19,19,22,22,26,34,36,37,37,38,39,40,49,54,60,62,65,67,71,76,78,79,82,82,89,95,97},{76,-32,-98,-18,-80,74,-22,-82,40,-64,58,-18,-64,34,-44,-82,-46,62,-80,-76,32,44,-32,98,-26,62,16,86,-52,-72,-90,-30,6},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{81,69,15,52,49,54,18,92,33,21,91,21,5,25,77,92,26,58,72,55,76,18,13,59,9,12,31,24,36,33,71,87,55,19,42,25}};
    vector<int> param1 {5,26,11,15,22,24,22,28,28,35};
    vector<int> param2 {7,28,9,11,27,15,26,31,29,19};
    vector<int> param3 {6,23,18,13,20,26,25,24,30,33};
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
