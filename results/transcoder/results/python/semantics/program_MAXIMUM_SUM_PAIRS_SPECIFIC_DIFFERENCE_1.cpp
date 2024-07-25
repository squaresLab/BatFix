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
int f_gold ( int arr [ ], int N, int k ) {
  int maxSum = 0;
  sort ( arr, arr + N );
  for ( int i = N - 1;
  i > 0;
  -- i ) {
    if ( arr [ i ] - arr [ i - 1 ] < k ) {
      maxSum += arr [ i ];
      maxSum += arr [ i - 1 ];
      -- i;
    }
  }
  return maxSum;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int N , int k ) {
  int maxSum = 0 ;
  ;
  sort ( arr , arr + N ) ;
  int i = N - 1 ;
  while ( ( i >= 0 ) && ( arr [ i ] - arr [ i - 1 ] < k ) ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = N < N; }
    if(env_var_0 == 1) { _res_key_if_0 = N < arr; }
    if(env_var_0 == 2) { _res_key_if_0 = N < arr+N; }
    if(env_var_0 == 3) { _res_key_if_0 = N < arr+i; }
    if(env_var_0 == 4) { _res_key_if_0 = N < arr+k; }
    if(env_var_0 == 5) { _res_key_if_0 = N < arr+maxSum; }
    if(env_var_0 == 6) { _res_key_if_0 = N < arr[N]; }
    if(env_var_0 == 7) { _res_key_if_0 = N < arr[i]; }
    if(env_var_0 == 8) { _res_key_if_0 = N < arr[k]; }
    if(env_var_0 == 9) { _res_key_if_0 = N < arr[maxSum]; }
    if(env_var_0 == 10) { _res_key_if_0 = N < i; }
    if(env_var_0 == 11) { _res_key_if_0 = N < k; }
    if(env_var_0 == 12) { _res_key_if_0 = N < maxSum; }
    if(env_var_0 == 13) { _res_key_if_0 = arr < N; }
    if(env_var_0 == 14) { _res_key_if_0 = arr < arr; }
    if(env_var_0 == 15) { _res_key_if_0 = arr < arr+N; }
    if(env_var_0 == 16) { _res_key_if_0 = arr < arr+i; }
    if(env_var_0 == 17) { _res_key_if_0 = arr < arr+k; }
    if(env_var_0 == 18) { _res_key_if_0 = arr < arr+maxSum; }
    if(env_var_0 == 19) { _res_key_if_0 = arr < arr[N]; }
    if(env_var_0 == 20) { _res_key_if_0 = arr < arr[i]; }
    if(env_var_0 == 21) { _res_key_if_0 = arr < arr[k]; }
    if(env_var_0 == 22) { _res_key_if_0 = arr < arr[maxSum]; }
    if(env_var_0 == 23) { _res_key_if_0 = arr < i; }
    if(env_var_0 == 24) { _res_key_if_0 = arr < k; }
    if(env_var_0 == 25) { _res_key_if_0 = arr < maxSum; }
    if(env_var_0 == 26) { _res_key_if_0 = arr+N < N; }
    if(env_var_0 == 27) { _res_key_if_0 = arr+N < arr; }
    if(env_var_0 == 28) { _res_key_if_0 = arr+N < arr+N; }
    if(env_var_0 == 29) { _res_key_if_0 = arr+N < arr+i; }
    if(env_var_0 == 30) { _res_key_if_0 = arr+N < arr+k; }
    if(env_var_0 == 31) { _res_key_if_0 = arr+N < arr+maxSum; }
    if(env_var_0 == 32) { _res_key_if_0 = arr+N < arr[N]; }
    if(env_var_0 == 33) { _res_key_if_0 = arr+N < arr[i]; }
    if(env_var_0 == 34) { _res_key_if_0 = arr+N < arr[k]; }
    if(env_var_0 == 35) { _res_key_if_0 = arr+N < arr[maxSum]; }
    if(env_var_0 == 36) { _res_key_if_0 = arr+N < i; }
    if(env_var_0 == 37) { _res_key_if_0 = arr+N < k; }
    if(env_var_0 == 38) { _res_key_if_0 = arr+N < maxSum; }
    if(env_var_0 == 39) { _res_key_if_0 = arr+i < N; }
    if(env_var_0 == 40) { _res_key_if_0 = arr+i < arr; }
    if(env_var_0 == 41) { _res_key_if_0 = arr+i < arr+N; }
    if(env_var_0 == 42) { _res_key_if_0 = arr+i < arr+i; }
    if(env_var_0 == 43) { _res_key_if_0 = arr+i < arr+k; }
    if(env_var_0 == 44) { _res_key_if_0 = arr+i < arr+maxSum; }
    if(env_var_0 == 45) { _res_key_if_0 = arr+i < arr[N]; }
    if(env_var_0 == 46) { _res_key_if_0 = arr+i < arr[i]; }
    if(env_var_0 == 47) { _res_key_if_0 = arr+i < arr[k]; }
    if(env_var_0 == 48) { _res_key_if_0 = arr+i < arr[maxSum]; }
    if(env_var_0 == 49) { _res_key_if_0 = arr+i < i; }
    if(env_var_0 == 50) { _res_key_if_0 = arr+i < k; }
    if(env_var_0 == 51) { _res_key_if_0 = arr+i < maxSum; }
    if(env_var_0 == 52) { _res_key_if_0 = arr+k < N; }
    if(env_var_0 == 53) { _res_key_if_0 = arr+k < arr; }
    if(env_var_0 == 54) { _res_key_if_0 = arr+k < arr+N; }
    if(env_var_0 == 55) { _res_key_if_0 = arr+k < arr+i; }
    if(env_var_0 == 56) { _res_key_if_0 = arr+k < arr+k; }
    if(env_var_0 == 57) { _res_key_if_0 = arr+k < arr+maxSum; }
    if(env_var_0 == 58) { _res_key_if_0 = arr+k < arr[N]; }
    if(env_var_0 == 59) { _res_key_if_0 = arr+k < arr[i]; }
    if(env_var_0 == 60) { _res_key_if_0 = arr+k < arr[k]; }
    if(env_var_0 == 61) { _res_key_if_0 = arr+k < arr[maxSum]; }
    if(env_var_0 == 62) { _res_key_if_0 = arr+k < i; }
    if(env_var_0 == 63) { _res_key_if_0 = arr+k < k; }
    if(env_var_0 == 64) { _res_key_if_0 = arr+k < maxSum; }
    if(env_var_0 == 65) { _res_key_if_0 = arr+maxSum < N; }
    if(env_var_0 == 66) { _res_key_if_0 = arr+maxSum < arr; }
    if(env_var_0 == 67) { _res_key_if_0 = arr+maxSum < arr+N; }
    if(env_var_0 == 68) { _res_key_if_0 = arr+maxSum < arr+i; }
    if(env_var_0 == 69) { _res_key_if_0 = arr+maxSum < arr+k; }
    if(env_var_0 == 70) { _res_key_if_0 = arr+maxSum < arr+maxSum; }
    if(env_var_0 == 71) { _res_key_if_0 = arr+maxSum < arr[N]; }
    if(env_var_0 == 72) { _res_key_if_0 = arr+maxSum < arr[i]; }
    if(env_var_0 == 73) { _res_key_if_0 = arr+maxSum < arr[k]; }
    if(env_var_0 == 74) { _res_key_if_0 = arr+maxSum < arr[maxSum]; }
    if(env_var_0 == 75) { _res_key_if_0 = arr+maxSum < i; }
    if(env_var_0 == 76) { _res_key_if_0 = arr+maxSum < k; }
    if(env_var_0 == 77) { _res_key_if_0 = arr+maxSum < maxSum; }
    if(env_var_0 == 78) { _res_key_if_0 = arr[N] < N; }
    if(env_var_0 == 79) { _res_key_if_0 = arr[N] < arr; }
    if(env_var_0 == 80) { _res_key_if_0 = arr[N] < arr+N; }
    if(env_var_0 == 81) { _res_key_if_0 = arr[N] < arr+i; }
    if(env_var_0 == 82) { _res_key_if_0 = arr[N] < arr+k; }
    if(env_var_0 == 83) { _res_key_if_0 = arr[N] < arr+maxSum; }
    if(env_var_0 == 84) { _res_key_if_0 = arr[N] < arr[N]; }
    if(env_var_0 == 85) { _res_key_if_0 = arr[N] < arr[i]; }
    if(env_var_0 == 86) { _res_key_if_0 = arr[N] < arr[k]; }
    if(env_var_0 == 87) { _res_key_if_0 = arr[N] < arr[maxSum]; }
    if(env_var_0 == 88) { _res_key_if_0 = arr[N] < i; }
    if(env_var_0 == 89) { _res_key_if_0 = arr[N] < k; }
    if(env_var_0 == 90) { _res_key_if_0 = arr[N] < maxSum; }
    if(env_var_0 == 91) { _res_key_if_0 = arr[i] < N; }
    if(env_var_0 == 92) { _res_key_if_0 = arr[i] < arr; }
    if(env_var_0 == 93) { _res_key_if_0 = arr[i] < arr+N; }
    if(env_var_0 == 94) { _res_key_if_0 = arr[i] < arr+i; }
    if(env_var_0 == 95) { _res_key_if_0 = arr[i] < arr+k; }
    if(env_var_0 == 96) { _res_key_if_0 = arr[i] < arr+maxSum; }
    if(env_var_0 == 97) { _res_key_if_0 = arr[i] < arr[N]; }
    if(env_var_0 == 98) { _res_key_if_0 = arr[i] < arr[i]; }
    if(env_var_0 == 99) { _res_key_if_0 = arr[i] < arr[k]; }
    if(env_var_0 == 100) { _res_key_if_0 = arr[i] < arr[maxSum]; }
    if(env_var_0 == 101) { _res_key_if_0 = arr[i] < i; }
    if(env_var_0 == 102) { _res_key_if_0 = arr[i] < k; }
    if(env_var_0 == 103) { _res_key_if_0 = arr[i] < maxSum; }
    if(env_var_0 == 104) { _res_key_if_0 = arr[k] < N; }
    if(env_var_0 == 105) { _res_key_if_0 = arr[k] < arr; }
    if(env_var_0 == 106) { _res_key_if_0 = arr[k] < arr+N; }
    if(env_var_0 == 107) { _res_key_if_0 = arr[k] < arr+i; }
    if(env_var_0 == 108) { _res_key_if_0 = arr[k] < arr+k; }
    if(env_var_0 == 109) { _res_key_if_0 = arr[k] < arr+maxSum; }
    if(env_var_0 == 110) { _res_key_if_0 = arr[k] < arr[N]; }
    if(env_var_0 == 111) { _res_key_if_0 = arr[k] < arr[i]; }
    if(env_var_0 == 112) { _res_key_if_0 = arr[k] < arr[k]; }
    if(env_var_0 == 113) { _res_key_if_0 = arr[k] < arr[maxSum]; }
    if(env_var_0 == 114) { _res_key_if_0 = arr[k] < i; }
    if(env_var_0 == 115) { _res_key_if_0 = arr[k] < k; }
    if(env_var_0 == 116) { _res_key_if_0 = arr[k] < maxSum; }
    if(env_var_0 == 117) { _res_key_if_0 = arr[maxSum] < N; }
    if(env_var_0 == 118) { _res_key_if_0 = arr[maxSum] < arr; }
    if(env_var_0 == 119) { _res_key_if_0 = arr[maxSum] < arr+N; }
    if(env_var_0 == 120) { _res_key_if_0 = arr[maxSum] < arr+i; }
    if(env_var_0 == 121) { _res_key_if_0 = arr[maxSum] < arr+k; }
    if(env_var_0 == 122) { _res_key_if_0 = arr[maxSum] < arr+maxSum; }
    if(env_var_0 == 123) { _res_key_if_0 = arr[maxSum] < arr[N]; }
    if(env_var_0 == 124) { _res_key_if_0 = arr[maxSum] < arr[i]; }
    if(env_var_0 == 125) { _res_key_if_0 = arr[maxSum] < arr[k]; }
    if(env_var_0 == 126) { _res_key_if_0 = arr[maxSum] < arr[maxSum]; }
    if(env_var_0 == 127) { _res_key_if_0 = arr[maxSum] < i; }
    if(env_var_0 == 128) { _res_key_if_0 = arr[maxSum] < k; }
    if(env_var_0 == 129) { _res_key_if_0 = arr[maxSum] < maxSum; }
    if(env_var_0 == 130) { _res_key_if_0 = i < N; }
    if(env_var_0 == 131) { _res_key_if_0 = i < arr; }
    if(env_var_0 == 132) { _res_key_if_0 = i < arr+N; }
    if(env_var_0 == 133) { _res_key_if_0 = i < arr+i; }
    if(env_var_0 == 134) { _res_key_if_0 = i < arr+k; }
    if(env_var_0 == 135) { _res_key_if_0 = i < arr+maxSum; }
    if(env_var_0 == 136) { _res_key_if_0 = i < arr[N]; }
    if(env_var_0 == 137) { _res_key_if_0 = i < arr[i]; }
    if(env_var_0 == 138) { _res_key_if_0 = i < arr[k]; }
    if(env_var_0 == 139) { _res_key_if_0 = i < arr[maxSum]; }
    if(env_var_0 == 140) { _res_key_if_0 = i < i; }
    if(env_var_0 == 141) { _res_key_if_0 = i < k; }
    if(env_var_0 == 142) { _res_key_if_0 = i < maxSum; }
    if(env_var_0 == 143) { _res_key_if_0 = isupper( N ) < N; }
    if(env_var_0 == 144) { _res_key_if_0 = isupper( N ) < arr; }
    if(env_var_0 == 145) { _res_key_if_0 = isupper( N ) < arr+N; }
    if(env_var_0 == 146) { _res_key_if_0 = isupper( N ) < arr+i; }
    if(env_var_0 == 147) { _res_key_if_0 = isupper( N ) < arr+k; }
    if(env_var_0 == 148) { _res_key_if_0 = isupper( N ) < arr+maxSum; }
    if(env_var_0 == 149) { _res_key_if_0 = isupper( N ) < arr[N]; }
    if(env_var_0 == 150) { _res_key_if_0 = isupper( N ) < arr[i]; }
    if(env_var_0 == 151) { _res_key_if_0 = isupper( N ) < arr[k]; }
    if(env_var_0 == 152) { _res_key_if_0 = isupper( N ) < arr[maxSum]; }
    if(env_var_0 == 153) { _res_key_if_0 = isupper( N ) < i; }
    if(env_var_0 == 154) { _res_key_if_0 = isupper( N ) < k; }
    if(env_var_0 == 155) { _res_key_if_0 = isupper( N ) < maxSum; }
    if(env_var_0 == 156) { _res_key_if_0 = isupper( arr[N] ) < N; }
    if(env_var_0 == 157) { _res_key_if_0 = isupper( arr[N] ) < arr; }
    if(env_var_0 == 158) { _res_key_if_0 = isupper( arr[N] ) < arr+N; }
    if(env_var_0 == 159) { _res_key_if_0 = isupper( arr[N] ) < arr+i; }
    if(env_var_0 == 160) { _res_key_if_0 = isupper( arr[N] ) < arr+k; }
    if(env_var_0 == 161) { _res_key_if_0 = isupper( arr[N] ) < arr+maxSum; }
    if(env_var_0 == 162) { _res_key_if_0 = isupper( arr[N] ) < arr[N]; }
    if(env_var_0 == 163) { _res_key_if_0 = isupper( arr[N] ) < arr[i]; }
    if(env_var_0 == 164) { _res_key_if_0 = isupper( arr[N] ) < arr[k]; }
    if(env_var_0 == 165) { _res_key_if_0 = isupper( arr[N] ) < arr[maxSum]; }
    if(env_var_0 == 166) { _res_key_if_0 = isupper( arr[N] ) < i; }
    if(env_var_0 == 167) { _res_key_if_0 = isupper( arr[N] ) < k; }
    if(env_var_0 == 168) { _res_key_if_0 = isupper( arr[N] ) < maxSum; }
    if(env_var_0 == 169) { _res_key_if_0 = isupper( arr[i] ) < N; }
    if(env_var_0 == 170) { _res_key_if_0 = isupper( arr[i] ) < arr; }
    if(env_var_0 == 171) { _res_key_if_0 = isupper( arr[i] ) < arr+N; }
    if(env_var_0 == 172) { _res_key_if_0 = isupper( arr[i] ) < arr+i; }
    if(env_var_0 == 173) { _res_key_if_0 = isupper( arr[i] ) < arr+k; }
    if(env_var_0 == 174) { _res_key_if_0 = isupper( arr[i] ) < arr+maxSum; }
    if(env_var_0 == 175) { _res_key_if_0 = isupper( arr[i] ) < arr[N]; }
    if(env_var_0 == 176) { _res_key_if_0 = isupper( arr[i] ) < arr[i]; }
    if(env_var_0 == 177) { _res_key_if_0 = isupper( arr[i] ) < arr[k]; }
    if(env_var_0 == 178) { _res_key_if_0 = isupper( arr[i] ) < arr[maxSum]; }
    if(env_var_0 == 179) { _res_key_if_0 = isupper( arr[i] ) < i; }
    if(env_var_0 == 180) { _res_key_if_0 = isupper( arr[i] ) < k; }
    if(env_var_0 == 181) { _res_key_if_0 = isupper( arr[i] ) < maxSum; }
    if(env_var_0 == 182) { _res_key_if_0 = isupper( arr[k] ) < N; }
    if(env_var_0 == 183) { _res_key_if_0 = isupper( arr[k] ) < arr; }
    if(env_var_0 == 184) { _res_key_if_0 = isupper( arr[k] ) < arr+N; }
    if(env_var_0 == 185) { _res_key_if_0 = isupper( arr[k] ) < arr+i; }
    if(env_var_0 == 186) { _res_key_if_0 = isupper( arr[k] ) < arr+k; }
    if(env_var_0 == 187) { _res_key_if_0 = isupper( arr[k] ) < arr+maxSum; }
    if(env_var_0 == 188) { _res_key_if_0 = isupper( arr[k] ) < arr[N]; }
    if(env_var_0 == 189) { _res_key_if_0 = isupper( arr[k] ) < arr[i]; }
    if(env_var_0 == 190) { _res_key_if_0 = isupper( arr[k] ) < arr[k]; }
    if(env_var_0 == 191) { _res_key_if_0 = isupper( arr[k] ) < arr[maxSum]; }
    if(env_var_0 == 192) { _res_key_if_0 = isupper( arr[k] ) < i; }
    if(env_var_0 == 193) { _res_key_if_0 = isupper( arr[k] ) < k; }
    if(env_var_0 == 194) { _res_key_if_0 = isupper( arr[k] ) < maxSum; }
    if(env_var_0 == 195) { _res_key_if_0 = isupper( arr[maxSum] ) < N; }
    if(env_var_0 == 196) { _res_key_if_0 = isupper( arr[maxSum] ) < arr; }
    if(env_var_0 == 197) { _res_key_if_0 = isupper( arr[maxSum] ) < arr+N; }
    if(env_var_0 == 198) { _res_key_if_0 = isupper( arr[maxSum] ) < arr+i; }
    if(env_var_0 == 199) { _res_key_if_0 = isupper( arr[maxSum] ) < arr+k; }
    if(env_var_0 == 200) { _res_key_if_0 = isupper( arr[maxSum] ) < arr+maxSum; }
    if(env_var_0 == 201) { _res_key_if_0 = isupper( arr[maxSum] ) < arr[N]; }
    if(env_var_0 == 202) { _res_key_if_0 = isupper( arr[maxSum] ) < arr[i]; }
    if(env_var_0 == 203) { _res_key_if_0 = isupper( arr[maxSum] ) < arr[k]; }
    if(env_var_0 == 204) { _res_key_if_0 = isupper( arr[maxSum] ) < arr[maxSum]; }
    if(env_var_0 == 205) { _res_key_if_0 = isupper( arr[maxSum] ) < i; }
    if(env_var_0 == 206) { _res_key_if_0 = isupper( arr[maxSum] ) < k; }
    if(env_var_0 == 207) { _res_key_if_0 = isupper( arr[maxSum] ) < maxSum; }
    if(env_var_0 == 208) { _res_key_if_0 = isupper( i ) < N; }
    if(env_var_0 == 209) { _res_key_if_0 = isupper( i ) < arr; }
    if(env_var_0 == 210) { _res_key_if_0 = isupper( i ) < arr+N; }
    if(env_var_0 == 211) { _res_key_if_0 = isupper( i ) < arr+i; }
    if(env_var_0 == 212) { _res_key_if_0 = isupper( i ) < arr+k; }
    if(env_var_0 == 213) { _res_key_if_0 = isupper( i ) < arr+maxSum; }
    if(env_var_0 == 214) { _res_key_if_0 = isupper( i ) < arr[N]; }
    if(env_var_0 == 215) { _res_key_if_0 = isupper( i ) < arr[i]; }
    if(env_var_0 == 216) { _res_key_if_0 = isupper( i ) < arr[k]; }
    if(env_var_0 == 217) { _res_key_if_0 = isupper( i ) < arr[maxSum]; }
    if(env_var_0 == 218) { _res_key_if_0 = isupper( i ) < i; }
    if(env_var_0 == 219) { _res_key_if_0 = isupper( i ) < k; }
    if(env_var_0 == 220) { _res_key_if_0 = isupper( i ) < maxSum; }
    if(env_var_0 == 221) { _res_key_if_0 = isupper( k ) < N; }
    if(env_var_0 == 222) { _res_key_if_0 = isupper( k ) < arr; }
    if(env_var_0 == 223) { _res_key_if_0 = isupper( k ) < arr+N; }
    if(env_var_0 == 224) { _res_key_if_0 = isupper( k ) < arr+i; }
    if(env_var_0 == 225) { _res_key_if_0 = isupper( k ) < arr+k; }
    if(env_var_0 == 226) { _res_key_if_0 = isupper( k ) < arr+maxSum; }
    if(env_var_0 == 227) { _res_key_if_0 = isupper( k ) < arr[N]; }
    if(env_var_0 == 228) { _res_key_if_0 = isupper( k ) < arr[i]; }
    if(env_var_0 == 229) { _res_key_if_0 = isupper( k ) < arr[k]; }
    if(env_var_0 == 230) { _res_key_if_0 = isupper( k ) < arr[maxSum]; }
    if(env_var_0 == 231) { _res_key_if_0 = isupper( k ) < i; }
    if(env_var_0 == 232) { _res_key_if_0 = isupper( k ) < k; }
    if(env_var_0 == 233) { _res_key_if_0 = isupper( k ) < maxSum; }
    if(env_var_0 == 234) { _res_key_if_0 = isupper( maxSum ) < N; }
    if(env_var_0 == 235) { _res_key_if_0 = isupper( maxSum ) < arr; }
    if(env_var_0 == 236) { _res_key_if_0 = isupper( maxSum ) < arr+N; }
    if(env_var_0 == 237) { _res_key_if_0 = isupper( maxSum ) < arr+i; }
    if(env_var_0 == 238) { _res_key_if_0 = isupper( maxSum ) < arr+k; }
    if(env_var_0 == 239) { _res_key_if_0 = isupper( maxSum ) < arr+maxSum; }
    if(env_var_0 == 240) { _res_key_if_0 = isupper( maxSum ) < arr[N]; }
    if(env_var_0 == 241) { _res_key_if_0 = isupper( maxSum ) < arr[i]; }
    if(env_var_0 == 242) { _res_key_if_0 = isupper( maxSum ) < arr[k]; }
    if(env_var_0 == 243) { _res_key_if_0 = isupper( maxSum ) < arr[maxSum]; }
    if(env_var_0 == 244) { _res_key_if_0 = isupper( maxSum ) < i; }
    if(env_var_0 == 245) { _res_key_if_0 = isupper( maxSum ) < k; }
    if(env_var_0 == 246) { _res_key_if_0 = isupper( maxSum ) < maxSum; }
    if(env_var_0 == 247) { _res_key_if_0 = k < N; }
    if(env_var_0 == 248) { _res_key_if_0 = k < arr; }
    if(env_var_0 == 249) { _res_key_if_0 = k < arr+N; }
    if(env_var_0 == 250) { _res_key_if_0 = k < arr+i; }
    if(env_var_0 == 251) { _res_key_if_0 = k < arr+k; }
    if(env_var_0 == 252) { _res_key_if_0 = k < arr+maxSum; }
    if(env_var_0 == 253) { _res_key_if_0 = k < arr[N]; }
    if(env_var_0 == 254) { _res_key_if_0 = k < arr[i]; }
    if(env_var_0 == 255) { _res_key_if_0 = k < arr[k]; }
    if(env_var_0 == 256) { _res_key_if_0 = k < arr[maxSum]; }
    if(env_var_0 == 257) { _res_key_if_0 = k < i; }
    if(env_var_0 == 258) { _res_key_if_0 = k < k; }
    if(env_var_0 == 259) { _res_key_if_0 = k < maxSum; }
    if(env_var_0 == 260) { _res_key_if_0 = maxSum < N; }
    if(env_var_0 == 261) { _res_key_if_0 = maxSum < arr; }
    if(env_var_0 == 262) { _res_key_if_0 = maxSum < arr+N; }
    if(env_var_0 == 263) { _res_key_if_0 = maxSum < arr+i; }
    if(env_var_0 == 264) { _res_key_if_0 = maxSum < arr+k; }
    if(env_var_0 == 265) { _res_key_if_0 = maxSum < arr+maxSum; }
    if(env_var_0 == 266) { _res_key_if_0 = maxSum < arr[N]; }
    if(env_var_0 == 267) { _res_key_if_0 = maxSum < arr[i]; }
    if(env_var_0 == 268) { _res_key_if_0 = maxSum < arr[k]; }
    if(env_var_0 == 269) { _res_key_if_0 = maxSum < arr[maxSum]; }
    if(env_var_0 == 270) { _res_key_if_0 = maxSum < i; }
    if(env_var_0 == 271) { _res_key_if_0 = maxSum < k; }
    if(env_var_0 == 272) { _res_key_if_0 = maxSum < maxSum; }
    if(env_var_0 == 273) { _res_key_if_0 = toupper( N ) < N; }
    if(env_var_0 == 274) { _res_key_if_0 = toupper( N ) < arr; }
    if(env_var_0 == 275) { _res_key_if_0 = toupper( N ) < arr+N; }
    if(env_var_0 == 276) { _res_key_if_0 = toupper( N ) < arr+i; }
    if(env_var_0 == 277) { _res_key_if_0 = toupper( N ) < arr+k; }
    if(env_var_0 == 278) { _res_key_if_0 = toupper( N ) < arr+maxSum; }
    if(env_var_0 == 279) { _res_key_if_0 = toupper( N ) < arr[N]; }
    if(env_var_0 == 280) { _res_key_if_0 = toupper( N ) < arr[i]; }
    if(env_var_0 == 281) { _res_key_if_0 = toupper( N ) < arr[k]; }
    if(env_var_0 == 282) { _res_key_if_0 = toupper( N ) < arr[maxSum]; }
    if(env_var_0 == 283) { _res_key_if_0 = toupper( N ) < i; }
    if(env_var_0 == 284) { _res_key_if_0 = toupper( N ) < k; }
    if(env_var_0 == 285) { _res_key_if_0 = toupper( N ) < maxSum; }
    if(env_var_0 == 286) { _res_key_if_0 = toupper( arr[N] ) < N; }
    if(env_var_0 == 287) { _res_key_if_0 = toupper( arr[N] ) < arr; }
    if(env_var_0 == 288) { _res_key_if_0 = toupper( arr[N] ) < arr+N; }
    if(env_var_0 == 289) { _res_key_if_0 = toupper( arr[N] ) < arr+i; }
    if(env_var_0 == 290) { _res_key_if_0 = toupper( arr[N] ) < arr+k; }
    if(env_var_0 == 291) { _res_key_if_0 = toupper( arr[N] ) < arr+maxSum; }
    if(env_var_0 == 292) { _res_key_if_0 = toupper( arr[N] ) < arr[N]; }
    if(env_var_0 == 293) { _res_key_if_0 = toupper( arr[N] ) < arr[i]; }
    if(env_var_0 == 294) { _res_key_if_0 = toupper( arr[N] ) < arr[k]; }
    if(env_var_0 == 295) { _res_key_if_0 = toupper( arr[N] ) < arr[maxSum]; }
    if(env_var_0 == 296) { _res_key_if_0 = toupper( arr[N] ) < i; }
    if(env_var_0 == 297) { _res_key_if_0 = toupper( arr[N] ) < k; }
    if(env_var_0 == 298) { _res_key_if_0 = toupper( arr[N] ) < maxSum; }
    if(env_var_0 == 299) { _res_key_if_0 = toupper( arr[i] ) < N; }
    if(env_var_0 == 300) { _res_key_if_0 = toupper( arr[i] ) < arr; }
    if(env_var_0 == 301) { _res_key_if_0 = toupper( arr[i] ) < arr+N; }
    if(env_var_0 == 302) { _res_key_if_0 = toupper( arr[i] ) < arr+i; }
    if(env_var_0 == 303) { _res_key_if_0 = toupper( arr[i] ) < arr+k; }
    if(env_var_0 == 304) { _res_key_if_0 = toupper( arr[i] ) < arr+maxSum; }
    if(env_var_0 == 305) { _res_key_if_0 = toupper( arr[i] ) < arr[N]; }
    if(env_var_0 == 306) { _res_key_if_0 = toupper( arr[i] ) < arr[i]; }
    if(env_var_0 == 307) { _res_key_if_0 = toupper( arr[i] ) < arr[k]; }
    if(env_var_0 == 308) { _res_key_if_0 = toupper( arr[i] ) < arr[maxSum]; }
    if(env_var_0 == 309) { _res_key_if_0 = toupper( arr[i] ) < i; }
    if(env_var_0 == 310) { _res_key_if_0 = toupper( arr[i] ) < k; }
    if(env_var_0 == 311) { _res_key_if_0 = toupper( arr[i] ) < maxSum; }
    if(env_var_0 == 312) { _res_key_if_0 = toupper( arr[k] ) < N; }
    if(env_var_0 == 313) { _res_key_if_0 = toupper( arr[k] ) < arr; }
    if(env_var_0 == 314) { _res_key_if_0 = toupper( arr[k] ) < arr+N; }
    if(env_var_0 == 315) { _res_key_if_0 = toupper( arr[k] ) < arr+i; }
    if(env_var_0 == 316) { _res_key_if_0 = toupper( arr[k] ) < arr+k; }
    if(env_var_0 == 317) { _res_key_if_0 = toupper( arr[k] ) < arr+maxSum; }
    if(env_var_0 == 318) { _res_key_if_0 = toupper( arr[k] ) < arr[N]; }
    if(env_var_0 == 319) { _res_key_if_0 = toupper( arr[k] ) < arr[i]; }
    if(env_var_0 == 320) { _res_key_if_0 = toupper( arr[k] ) < arr[k]; }
    if(env_var_0 == 321) { _res_key_if_0 = toupper( arr[k] ) < arr[maxSum]; }
    if(env_var_0 == 322) { _res_key_if_0 = toupper( arr[k] ) < i; }
    if(env_var_0 == 323) { _res_key_if_0 = toupper( arr[k] ) < k; }
    if(env_var_0 == 324) { _res_key_if_0 = toupper( arr[k] ) < maxSum; }
    if(env_var_0 == 325) { _res_key_if_0 = toupper( arr[maxSum] ) < N; }
    if(env_var_0 == 326) { _res_key_if_0 = toupper( arr[maxSum] ) < arr; }
    if(env_var_0 == 327) { _res_key_if_0 = toupper( arr[maxSum] ) < arr+N; }
    if(env_var_0 == 328) { _res_key_if_0 = toupper( arr[maxSum] ) < arr+i; }
    if(env_var_0 == 329) { _res_key_if_0 = toupper( arr[maxSum] ) < arr+k; }
    if(env_var_0 == 330) { _res_key_if_0 = toupper( arr[maxSum] ) < arr+maxSum; }
    if(env_var_0 == 331) { _res_key_if_0 = toupper( arr[maxSum] ) < arr[N]; }
    if(env_var_0 == 332) { _res_key_if_0 = toupper( arr[maxSum] ) < arr[i]; }
    if(env_var_0 == 333) { _res_key_if_0 = toupper( arr[maxSum] ) < arr[k]; }
    if(env_var_0 == 334) { _res_key_if_0 = toupper( arr[maxSum] ) < arr[maxSum]; }
    if(env_var_0 == 335) { _res_key_if_0 = toupper( arr[maxSum] ) < i; }
    if(env_var_0 == 336) { _res_key_if_0 = toupper( arr[maxSum] ) < k; }
    if(env_var_0 == 337) { _res_key_if_0 = toupper( arr[maxSum] ) < maxSum; }
    if(env_var_0 == 338) { _res_key_if_0 = toupper( i ) < N; }
    if(env_var_0 == 339) { _res_key_if_0 = toupper( i ) < arr; }
    if(env_var_0 == 340) { _res_key_if_0 = toupper( i ) < arr+N; }
    if(env_var_0 == 341) { _res_key_if_0 = toupper( i ) < arr+i; }
    if(env_var_0 == 342) { _res_key_if_0 = toupper( i ) < arr+k; }
    if(env_var_0 == 343) { _res_key_if_0 = toupper( i ) < arr+maxSum; }
    if(env_var_0 == 344) { _res_key_if_0 = toupper( i ) < arr[N]; }
    if(env_var_0 == 345) { _res_key_if_0 = toupper( i ) < arr[i]; }
    if(env_var_0 == 346) { _res_key_if_0 = toupper( i ) < arr[k]; }
    if(env_var_0 == 347) { _res_key_if_0 = toupper( i ) < arr[maxSum]; }
    if(env_var_0 == 348) { _res_key_if_0 = toupper( i ) < i; }
    if(env_var_0 == 349) { _res_key_if_0 = toupper( i ) < k; }
    if(env_var_0 == 350) { _res_key_if_0 = toupper( i ) < maxSum; }
    if(env_var_0 == 351) { _res_key_if_0 = toupper( k ) < N; }
    if(env_var_0 == 352) { _res_key_if_0 = toupper( k ) < arr; }
    if(env_var_0 == 353) { _res_key_if_0 = toupper( k ) < arr+N; }
    if(env_var_0 == 354) { _res_key_if_0 = toupper( k ) < arr+i; }
    if(env_var_0 == 355) { _res_key_if_0 = toupper( k ) < arr+k; }
    if(env_var_0 == 356) { _res_key_if_0 = toupper( k ) < arr+maxSum; }
    if(env_var_0 == 357) { _res_key_if_0 = toupper( k ) < arr[N]; }
    if(env_var_0 == 358) { _res_key_if_0 = toupper( k ) < arr[i]; }
    if(env_var_0 == 359) { _res_key_if_0 = toupper( k ) < arr[k]; }
    if(env_var_0 == 360) { _res_key_if_0 = toupper( k ) < arr[maxSum]; }
    if(env_var_0 == 361) { _res_key_if_0 = toupper( k ) < i; }
    if(env_var_0 == 362) { _res_key_if_0 = toupper( k ) < k; }
    if(env_var_0 == 363) { _res_key_if_0 = toupper( k ) < maxSum; }
    if(env_var_0 == 364) { _res_key_if_0 = toupper( maxSum ) < N; }
    if(env_var_0 == 365) { _res_key_if_0 = toupper( maxSum ) < arr; }
    if(env_var_0 == 366) { _res_key_if_0 = toupper( maxSum ) < arr+N; }
    if(env_var_0 == 367) { _res_key_if_0 = toupper( maxSum ) < arr+i; }
    if(env_var_0 == 368) { _res_key_if_0 = toupper( maxSum ) < arr+k; }
    if(env_var_0 == 369) { _res_key_if_0 = toupper( maxSum ) < arr+maxSum; }
    if(env_var_0 == 370) { _res_key_if_0 = toupper( maxSum ) < arr[N]; }
    if(env_var_0 == 371) { _res_key_if_0 = toupper( maxSum ) < arr[i]; }
    if(env_var_0 == 372) { _res_key_if_0 = toupper( maxSum ) < arr[k]; }
    if(env_var_0 == 373) { _res_key_if_0 = toupper( maxSum ) < arr[maxSum]; }
    if(env_var_0 == 374) { _res_key_if_0 = toupper( maxSum ) < i; }
    if(env_var_0 == 375) { _res_key_if_0 = toupper( maxSum ) < k; }
    if(env_var_0 == 376) { _res_key_if_0 = toupper( maxSum ) < maxSum; }
    if ( _res_key_if_0 ) {
      maxSum += arr [ i ] ;
      maxSum += arr [ i - 1 ] ;
      i -- ;
    }
    i -- ;
  }
  return maxSum ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,10,11,11,12,14,15,17,27,27,28,36,36,44,47,47,54,55,62,64,68,69,70,70,75,76,78,85,85,91,95,97},{-36,78,10,30,-12,-70,-98,-14,-44,-66,-40,-8,78,2,-70,40,92,58,30,10,-84,-62,-86,-50,82,36,-92,-30,-2,-34,88,2,-4,-72},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{77,78,58},{-88,-88,-88,-82,-58,-54,-48,-46,-46,-44,-20,-2,10,28,28,28,42,42,44,50,50,54,56,58,62,68,70,72,74,76,78,88,90,92},{0,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,0,0,0,0,1,0,1},{5,7,10,11,15,17,20,20,29,29,32,37,38,39,40,41,45,51,60,64,64,68,68,70,71,71,71,75,76,82,84,87,88,88,95,98},{-46,-32,76,-28,44,-14,94,-4,60,-88,-52,32,-66,28,94,76,86,-4,74,52,64,-36,-98,-40,70,18,-22,-20,-16,-74,12,60,94,98,-28,-24,4,-34,-60,56},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{79,13,25,22,61,1,2,73,66,94,47,9,1,99,25,39,95,46,95,20,63,15,14,36,9,91,14}};
    vector<int> param1 {26,26,47,1,21,41,30,33,28,19};
    vector<int> param2 {18,25,26,1,24,40,21,23,41,23};
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

