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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
bool f_gold ( int arr [ ], int n ) {
  int max = * max_element ( arr, arr + n );
  int min = * min_element ( arr, arr + n );
  int m = max - min + 1;
  if ( m > n ) return false;
  bool visited [ m ];
  memset ( visited, false, sizeof ( visited ) );
  for ( int i = 0;
  i < n;
  i ++ ) visited [ arr [ i ] - min ] = true;
  for ( int i = 0;
  i < m;
  i ++ ) if ( visited [ i ] == false ) return false;
  return true;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int arr [ ], int n ) {
  int max = INT_MIN;
  int min = INT_MIN;
  for ( int i = 0;
  i < n;
  i ++ ) {
 if(env_var_0 == 0) { max = *std::max_element( arr+i,arr ); }
    if(env_var_0 == 1) { max = *std::max_element( arr+i,arr+i ); }
    if(env_var_0 == 2) { max = *std::max_element( arr+i,arr+max ); }
    if(env_var_0 == 3) { max = *std::max_element( arr+i,arr+min ); }
    if(env_var_0 == 4) { max = *std::max_element( arr+i,arr+n ); }
    if(env_var_0 == 5) { max = *std::max_element( arr+max,arr ); }
    if(env_var_0 == 6) { max = *std::max_element( arr+max,arr+i ); }
    if(env_var_0 == 7) { max = *std::max_element( arr+max,arr+max ); }
    if(env_var_0 == 8) { max = *std::max_element( arr+max,arr+min ); }
    if(env_var_0 == 9) { max = *std::max_element( arr+max,arr+n ); }
    if(env_var_0 == 10) { max = *std::max_element( arr+min,arr ); }
    if(env_var_0 == 11) { max = *std::max_element( arr+min,arr+i ); }
    if(env_var_0 == 12) { max = *std::max_element( arr+min,arr+max ); }
    if(env_var_0 == 13) { max = *std::max_element( arr+min,arr+min ); }
    if(env_var_0 == 14) { max = *std::max_element( arr+min,arr+n ); }
    if(env_var_0 == 15) { max = *std::max_element( arr+n,arr ); }
    if(env_var_0 == 16) { max = *std::max_element( arr+n,arr+i ); }
    if(env_var_0 == 17) { max = *std::max_element( arr+n,arr+max ); }
    if(env_var_0 == 18) { max = *std::max_element( arr+n,arr+min ); }
    if(env_var_0 == 19) { max = *std::max_element( arr+n,arr+n ); }
    if(env_var_0 == 20) { max = *std::max_element( arr,arr ); }
    if(env_var_0 == 21) { max = *std::max_element( arr,arr+i ); }
    if(env_var_0 == 22) { max = *std::max_element( arr,arr+max ); }
    if(env_var_0 == 23) { max = *std::max_element( arr,arr+min ); }
    if(env_var_0 == 24) { max = *std::max_element( arr,arr+n ); }
    if(env_var_0 == 25) { max = *std::min_element( arr+i,arr ); }
    if(env_var_0 == 26) { max = *std::min_element( arr+i,arr+i ); }
    if(env_var_0 == 27) { max = *std::min_element( arr+i,arr+max ); }
    if(env_var_0 == 28) { max = *std::min_element( arr+i,arr+min ); }
    if(env_var_0 == 29) { max = *std::min_element( arr+i,arr+n ); }
    if(env_var_0 == 30) { max = *std::min_element( arr+max,arr ); }
    if(env_var_0 == 31) { max = *std::min_element( arr+max,arr+i ); }
    if(env_var_0 == 32) { max = *std::min_element( arr+max,arr+max ); }
    if(env_var_0 == 33) { max = *std::min_element( arr+max,arr+min ); }
    if(env_var_0 == 34) { max = *std::min_element( arr+max,arr+n ); }
    if(env_var_0 == 35) { max = *std::min_element( arr+min,arr ); }
    if(env_var_0 == 36) { max = *std::min_element( arr+min,arr+i ); }
    if(env_var_0 == 37) { max = *std::min_element( arr+min,arr+max ); }
    if(env_var_0 == 38) { max = *std::min_element( arr+min,arr+min ); }
    if(env_var_0 == 39) { max = *std::min_element( arr+min,arr+n ); }
    if(env_var_0 == 40) { max = *std::min_element( arr+n,arr ); }
    if(env_var_0 == 41) { max = *std::min_element( arr+n,arr+i ); }
    if(env_var_0 == 42) { max = *std::min_element( arr+n,arr+max ); }
    if(env_var_0 == 43) { max = *std::min_element( arr+n,arr+min ); }
    if(env_var_0 == 44) { max = *std::min_element( arr+n,arr+n ); }
    if(env_var_0 == 45) { max = *std::min_element( arr,arr ); }
    if(env_var_0 == 46) { max = *std::min_element( arr,arr+i ); }
    if(env_var_0 == 47) { max = *std::min_element( arr,arr+max ); }
    if(env_var_0 == 48) { max = *std::min_element( arr,arr+min ); }
    if(env_var_0 == 49) { max = *std::min_element( arr,arr+n ); }
    if(env_var_0 == 50) { max = arr; }
    if(env_var_0 == 51) { max = arr+i; }
    if(env_var_0 == 52) { max = arr+max; }
    if(env_var_0 == 53) { max = arr+min; }
    if(env_var_0 == 54) { max = arr+n; }
    if(env_var_0 == 55) { max = arr[i]; }
    if(env_var_0 == 56) { max = arr[max]; }
    if(env_var_0 == 57) { max = arr[min]; }
    if(env_var_0 == 58) { max = arr[n]; }
    if(env_var_0 == 59) { max = i; }
    if(env_var_0 == 60) { max = isupper( arr[i] ); }
    if(env_var_0 == 61) { max = isupper( arr[max] ); }
    if(env_var_0 == 62) { max = isupper( arr[min] ); }
    if(env_var_0 == 63) { max = isupper( arr[n] ); }
    if(env_var_0 == 64) { max = isupper( i ); }
    if(env_var_0 == 65) { max = isupper( max ); }
    if(env_var_0 == 66) { max = isupper( min ); }
    if(env_var_0 == 67) { max = isupper( n ); }
    if(env_var_0 == 68) { max = max; }
    if(env_var_0 == 69) { max = min; }
    if(env_var_0 == 70) { max = n; }
    if(env_var_0 == 71) { max = std::max( arr[i],arr[i] ); }
    if(env_var_0 == 72) { max = std::max( arr[i],arr[max] ); }
    if(env_var_0 == 73) { max = std::max( arr[i],arr[min] ); }
    if(env_var_0 == 74) { max = std::max( arr[i],arr[n] ); }
    if(env_var_0 == 75) { max = std::max( arr[i],i ); }
    if(env_var_0 == 76) { max = std::max( arr[i],max ); }
    if(env_var_0 == 77) { max = std::max( arr[i],min ); }
    if(env_var_0 == 78) { max = std::max( arr[i],n ); }
    if(env_var_0 == 79) { max = std::max( arr[max],arr[i] ); }
    if(env_var_0 == 80) { max = std::max( arr[max],arr[max] ); }
    if(env_var_0 == 81) { max = std::max( arr[max],arr[min] ); }
    if(env_var_0 == 82) { max = std::max( arr[max],arr[n] ); }
    if(env_var_0 == 83) { max = std::max( arr[max],i ); }
    if(env_var_0 == 84) { max = std::max( arr[max],max ); }
    if(env_var_0 == 85) { max = std::max( arr[max],min ); }
    if(env_var_0 == 86) { max = std::max( arr[max],n ); }
    if(env_var_0 == 87) { max = std::max( arr[min],arr[i] ); }
    if(env_var_0 == 88) { max = std::max( arr[min],arr[max] ); }
    if(env_var_0 == 89) { max = std::max( arr[min],arr[min] ); }
    if(env_var_0 == 90) { max = std::max( arr[min],arr[n] ); }
    if(env_var_0 == 91) { max = std::max( arr[min],i ); }
    if(env_var_0 == 92) { max = std::max( arr[min],max ); }
    if(env_var_0 == 93) { max = std::max( arr[min],min ); }
    if(env_var_0 == 94) { max = std::max( arr[min],n ); }
    if(env_var_0 == 95) { max = std::max( arr[n],arr[i] ); }
    if(env_var_0 == 96) { max = std::max( arr[n],arr[max] ); }
    if(env_var_0 == 97) { max = std::max( arr[n],arr[min] ); }
    if(env_var_0 == 98) { max = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 99) { max = std::max( arr[n],i ); }
    if(env_var_0 == 100) { max = std::max( arr[n],max ); }
    if(env_var_0 == 101) { max = std::max( arr[n],min ); }
    if(env_var_0 == 102) { max = std::max( arr[n],n ); }
    if(env_var_0 == 103) { max = std::max( i,arr[i] ); }
    if(env_var_0 == 104) { max = std::max( i,arr[max] ); }
    if(env_var_0 == 105) { max = std::max( i,arr[min] ); }
    if(env_var_0 == 106) { max = std::max( i,arr[n] ); }
    if(env_var_0 == 107) { max = std::max( i,i ); }
    if(env_var_0 == 108) { max = std::max( i,max ); }
    if(env_var_0 == 109) { max = std::max( i,min ); }
    if(env_var_0 == 110) { max = std::max( i,n ); }
    if(env_var_0 == 111) { max = std::max( max,arr[i] ); }
    if(env_var_0 == 112) { max = std::max( max,arr[max] ); }
    if(env_var_0 == 113) { max = std::max( max,arr[min] ); }
    if(env_var_0 == 114) { max = std::max( max,arr[n] ); }
    if(env_var_0 == 115) { max = std::max( max,i ); }
    if(env_var_0 == 116) { max = std::max( max,max ); }
    if(env_var_0 == 117) { max = std::max( max,min ); }
    if(env_var_0 == 118) { max = std::max( max,n ); }
    if(env_var_0 == 119) { max = std::max( min,arr[i] ); }
    if(env_var_0 == 120) { max = std::max( min,arr[max] ); }
    if(env_var_0 == 121) { max = std::max( min,arr[min] ); }
    if(env_var_0 == 122) { max = std::max( min,arr[n] ); }
    if(env_var_0 == 123) { max = std::max( min,i ); }
    if(env_var_0 == 124) { max = std::max( min,max ); }
    if(env_var_0 == 125) { max = std::max( min,min ); }
    if(env_var_0 == 126) { max = std::max( min,n ); }
    if(env_var_0 == 127) { max = std::max( n,arr[i] ); }
    if(env_var_0 == 128) { max = std::max( n,arr[max] ); }
    if(env_var_0 == 129) { max = std::max( n,arr[min] ); }
    if(env_var_0 == 130) { max = std::max( n,arr[n] ); }
    if(env_var_0 == 131) { max = std::max( n,i ); }
    if(env_var_0 == 132) { max = std::max( n,max ); }
    if(env_var_0 == 133) { max = std::max( n,min ); }
    if(env_var_0 == 134) { max = std::max( n,n ); }
    if(env_var_0 == 135) { max = std::max(); }
    if(env_var_0 == 136) { max = std::min( arr[i],arr[i] ); }
    if(env_var_0 == 137) { max = std::min( arr[i],arr[max] ); }
    if(env_var_0 == 138) { max = std::min( arr[i],arr[min] ); }
    if(env_var_0 == 139) { max = std::min( arr[i],arr[n] ); }
    if(env_var_0 == 140) { max = std::min( arr[i],i ); }
    if(env_var_0 == 141) { max = std::min( arr[i],max ); }
    if(env_var_0 == 142) { max = std::min( arr[i],min ); }
    if(env_var_0 == 143) { max = std::min( arr[i],n ); }
    if(env_var_0 == 144) { max = std::min( arr[max],arr[i] ); }
    if(env_var_0 == 145) { max = std::min( arr[max],arr[max] ); }
    if(env_var_0 == 146) { max = std::min( arr[max],arr[min] ); }
    if(env_var_0 == 147) { max = std::min( arr[max],arr[n] ); }
    if(env_var_0 == 148) { max = std::min( arr[max],i ); }
    if(env_var_0 == 149) { max = std::min( arr[max],max ); }
    if(env_var_0 == 150) { max = std::min( arr[max],min ); }
    if(env_var_0 == 151) { max = std::min( arr[max],n ); }
    if(env_var_0 == 152) { max = std::min( arr[min],arr[i] ); }
    if(env_var_0 == 153) { max = std::min( arr[min],arr[max] ); }
    if(env_var_0 == 154) { max = std::min( arr[min],arr[min] ); }
    if(env_var_0 == 155) { max = std::min( arr[min],arr[n] ); }
    if(env_var_0 == 156) { max = std::min( arr[min],i ); }
    if(env_var_0 == 157) { max = std::min( arr[min],max ); }
    if(env_var_0 == 158) { max = std::min( arr[min],min ); }
    if(env_var_0 == 159) { max = std::min( arr[min],n ); }
    if(env_var_0 == 160) { max = std::min( arr[n],arr[i] ); }
    if(env_var_0 == 161) { max = std::min( arr[n],arr[max] ); }
    if(env_var_0 == 162) { max = std::min( arr[n],arr[min] ); }
    if(env_var_0 == 163) { max = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 164) { max = std::min( arr[n],i ); }
    if(env_var_0 == 165) { max = std::min( arr[n],max ); }
    if(env_var_0 == 166) { max = std::min( arr[n],min ); }
    if(env_var_0 == 167) { max = std::min( arr[n],n ); }
    if(env_var_0 == 168) { max = std::min( i,arr[i] ); }
    if(env_var_0 == 169) { max = std::min( i,arr[max] ); }
    if(env_var_0 == 170) { max = std::min( i,arr[min] ); }
    if(env_var_0 == 171) { max = std::min( i,arr[n] ); }
    if(env_var_0 == 172) { max = std::min( i,i ); }
    if(env_var_0 == 173) { max = std::min( i,max ); }
    if(env_var_0 == 174) { max = std::min( i,min ); }
    if(env_var_0 == 175) { max = std::min( i,n ); }
    if(env_var_0 == 176) { max = std::min( max,arr[i] ); }
    if(env_var_0 == 177) { max = std::min( max,arr[max] ); }
    if(env_var_0 == 178) { max = std::min( max,arr[min] ); }
    if(env_var_0 == 179) { max = std::min( max,arr[n] ); }
    if(env_var_0 == 180) { max = std::min( max,i ); }
    if(env_var_0 == 181) { max = std::min( max,max ); }
    if(env_var_0 == 182) { max = std::min( max,min ); }
    if(env_var_0 == 183) { max = std::min( max,n ); }
    if(env_var_0 == 184) { max = std::min( min,arr[i] ); }
    if(env_var_0 == 185) { max = std::min( min,arr[max] ); }
    if(env_var_0 == 186) { max = std::min( min,arr[min] ); }
    if(env_var_0 == 187) { max = std::min( min,arr[n] ); }
    if(env_var_0 == 188) { max = std::min( min,i ); }
    if(env_var_0 == 189) { max = std::min( min,max ); }
    if(env_var_0 == 190) { max = std::min( min,min ); }
    if(env_var_0 == 191) { max = std::min( min,n ); }
    if(env_var_0 == 192) { max = std::min( n,arr[i] ); }
    if(env_var_0 == 193) { max = std::min( n,arr[max] ); }
    if(env_var_0 == 194) { max = std::min( n,arr[min] ); }
    if(env_var_0 == 195) { max = std::min( n,arr[n] ); }
    if(env_var_0 == 196) { max = std::min( n,i ); }
    if(env_var_0 == 197) { max = std::min( n,max ); }
    if(env_var_0 == 198) { max = std::min( n,min ); }
    if(env_var_0 == 199) { max = std::min( n,n ); }
    if(env_var_0 == 200) { max = toupper( arr[i] ); }
    if(env_var_0 == 201) { max = toupper( arr[max] ); }
    if(env_var_0 == 202) { max = toupper( arr[min] ); }
    if(env_var_0 == 203) { max = toupper( arr[n] ); }
    if(env_var_0 == 204) { max = toupper( i ); }
    if(env_var_0 == 205) { max = toupper( max ); }
    if(env_var_0 == 206) { max = toupper( min ); }
    if(env_var_0 == 207) { max = toupper( n ); }
       ;
 if(env_var_1 == 0) { min = *std::max_element( arr+i,arr ); }
    if(env_var_1 == 1) { min = *std::max_element( arr+i,arr+i ); }
    if(env_var_1 == 2) { min = *std::max_element( arr+i,arr+max ); }
    if(env_var_1 == 3) { min = *std::max_element( arr+i,arr+min ); }
    if(env_var_1 == 4) { min = *std::max_element( arr+i,arr+n ); }
    if(env_var_1 == 5) { min = *std::max_element( arr+max,arr ); }
    if(env_var_1 == 6) { min = *std::max_element( arr+max,arr+i ); }
    if(env_var_1 == 7) { min = *std::max_element( arr+max,arr+max ); }
    if(env_var_1 == 8) { min = *std::max_element( arr+max,arr+min ); }
    if(env_var_1 == 9) { min = *std::max_element( arr+max,arr+n ); }
    if(env_var_1 == 10) { min = *std::max_element( arr+min,arr ); }
    if(env_var_1 == 11) { min = *std::max_element( arr+min,arr+i ); }
    if(env_var_1 == 12) { min = *std::max_element( arr+min,arr+max ); }
    if(env_var_1 == 13) { min = *std::max_element( arr+min,arr+min ); }
    if(env_var_1 == 14) { min = *std::max_element( arr+min,arr+n ); }
    if(env_var_1 == 15) { min = *std::max_element( arr+n,arr ); }
    if(env_var_1 == 16) { min = *std::max_element( arr+n,arr+i ); }
    if(env_var_1 == 17) { min = *std::max_element( arr+n,arr+max ); }
    if(env_var_1 == 18) { min = *std::max_element( arr+n,arr+min ); }
    if(env_var_1 == 19) { min = *std::max_element( arr+n,arr+n ); }
    if(env_var_1 == 20) { min = *std::max_element( arr,arr ); }
    if(env_var_1 == 21) { min = *std::max_element( arr,arr+i ); }
    if(env_var_1 == 22) { min = *std::max_element( arr,arr+max ); }
    if(env_var_1 == 23) { min = *std::max_element( arr,arr+min ); }
    if(env_var_1 == 24) { min = *std::max_element( arr,arr+n ); }
    if(env_var_1 == 25) { min = *std::min_element( arr+i,arr ); }
    if(env_var_1 == 26) { min = *std::min_element( arr+i,arr+i ); }
    if(env_var_1 == 27) { min = *std::min_element( arr+i,arr+max ); }
    if(env_var_1 == 28) { min = *std::min_element( arr+i,arr+min ); }
    if(env_var_1 == 29) { min = *std::min_element( arr+i,arr+n ); }
    if(env_var_1 == 30) { min = *std::min_element( arr+max,arr ); }
    if(env_var_1 == 31) { min = *std::min_element( arr+max,arr+i ); }
    if(env_var_1 == 32) { min = *std::min_element( arr+max,arr+max ); }
    if(env_var_1 == 33) { min = *std::min_element( arr+max,arr+min ); }
    if(env_var_1 == 34) { min = *std::min_element( arr+max,arr+n ); }
    if(env_var_1 == 35) { min = *std::min_element( arr+min,arr ); }
    if(env_var_1 == 36) { min = *std::min_element( arr+min,arr+i ); }
    if(env_var_1 == 37) { min = *std::min_element( arr+min,arr+max ); }
    if(env_var_1 == 38) { min = *std::min_element( arr+min,arr+min ); }
    if(env_var_1 == 39) { min = *std::min_element( arr+min,arr+n ); }
    if(env_var_1 == 40) { min = *std::min_element( arr+n,arr ); }
    if(env_var_1 == 41) { min = *std::min_element( arr+n,arr+i ); }
    if(env_var_1 == 42) { min = *std::min_element( arr+n,arr+max ); }
    if(env_var_1 == 43) { min = *std::min_element( arr+n,arr+min ); }
    if(env_var_1 == 44) { min = *std::min_element( arr+n,arr+n ); }
    if(env_var_1 == 45) { min = *std::min_element( arr,arr ); }
    if(env_var_1 == 46) { min = *std::min_element( arr,arr+i ); }
    if(env_var_1 == 47) { min = *std::min_element( arr,arr+max ); }
    if(env_var_1 == 48) { min = *std::min_element( arr,arr+min ); }
    if(env_var_1 == 49) { min = *std::min_element( arr,arr+n ); }
    if(env_var_1 == 50) { min = arr; }
    if(env_var_1 == 51) { min = arr+i; }
    if(env_var_1 == 52) { min = arr+max; }
    if(env_var_1 == 53) { min = arr+min; }
    if(env_var_1 == 54) { min = arr+n; }
    if(env_var_1 == 55) { min = arr[i]; }
    if(env_var_1 == 56) { min = arr[max]; }
    if(env_var_1 == 57) { min = arr[min]; }
    if(env_var_1 == 58) { min = arr[n]; }
    if(env_var_1 == 59) { min = i; }
    if(env_var_1 == 60) { min = isupper( arr[i] ); }
    if(env_var_1 == 61) { min = isupper( arr[max] ); }
    if(env_var_1 == 62) { min = isupper( arr[min] ); }
    if(env_var_1 == 63) { min = isupper( arr[n] ); }
    if(env_var_1 == 64) { min = isupper( i ); }
    if(env_var_1 == 65) { min = isupper( max ); }
    if(env_var_1 == 66) { min = isupper( min ); }
    if(env_var_1 == 67) { min = isupper( n ); }
    if(env_var_1 == 68) { min = max; }
    if(env_var_1 == 69) { min = min; }
    if(env_var_1 == 70) { min = n; }
    if(env_var_1 == 71) { min = std::max( arr[i],arr[i] ); }
    if(env_var_1 == 72) { min = std::max( arr[i],arr[max] ); }
    if(env_var_1 == 73) { min = std::max( arr[i],arr[min] ); }
    if(env_var_1 == 74) { min = std::max( arr[i],arr[n] ); }
    if(env_var_1 == 75) { min = std::max( arr[i],i ); }
    if(env_var_1 == 76) { min = std::max( arr[i],max ); }
    if(env_var_1 == 77) { min = std::max( arr[i],min ); }
    if(env_var_1 == 78) { min = std::max( arr[i],n ); }
    if(env_var_1 == 79) { min = std::max( arr[max],arr[i] ); }
    if(env_var_1 == 80) { min = std::max( arr[max],arr[max] ); }
    if(env_var_1 == 81) { min = std::max( arr[max],arr[min] ); }
    if(env_var_1 == 82) { min = std::max( arr[max],arr[n] ); }
    if(env_var_1 == 83) { min = std::max( arr[max],i ); }
    if(env_var_1 == 84) { min = std::max( arr[max],max ); }
    if(env_var_1 == 85) { min = std::max( arr[max],min ); }
    if(env_var_1 == 86) { min = std::max( arr[max],n ); }
    if(env_var_1 == 87) { min = std::max( arr[min],arr[i] ); }
    if(env_var_1 == 88) { min = std::max( arr[min],arr[max] ); }
    if(env_var_1 == 89) { min = std::max( arr[min],arr[min] ); }
    if(env_var_1 == 90) { min = std::max( arr[min],arr[n] ); }
    if(env_var_1 == 91) { min = std::max( arr[min],i ); }
    if(env_var_1 == 92) { min = std::max( arr[min],max ); }
    if(env_var_1 == 93) { min = std::max( arr[min],min ); }
    if(env_var_1 == 94) { min = std::max( arr[min],n ); }
    if(env_var_1 == 95) { min = std::max( arr[n],arr[i] ); }
    if(env_var_1 == 96) { min = std::max( arr[n],arr[max] ); }
    if(env_var_1 == 97) { min = std::max( arr[n],arr[min] ); }
    if(env_var_1 == 98) { min = std::max( arr[n],arr[n] ); }
    if(env_var_1 == 99) { min = std::max( arr[n],i ); }
    if(env_var_1 == 100) { min = std::max( arr[n],max ); }
    if(env_var_1 == 101) { min = std::max( arr[n],min ); }
    if(env_var_1 == 102) { min = std::max( arr[n],n ); }
    if(env_var_1 == 103) { min = std::max( i,arr[i] ); }
    if(env_var_1 == 104) { min = std::max( i,arr[max] ); }
    if(env_var_1 == 105) { min = std::max( i,arr[min] ); }
    if(env_var_1 == 106) { min = std::max( i,arr[n] ); }
    if(env_var_1 == 107) { min = std::max( i,i ); }
    if(env_var_1 == 108) { min = std::max( i,max ); }
    if(env_var_1 == 109) { min = std::max( i,min ); }
    if(env_var_1 == 110) { min = std::max( i,n ); }
    if(env_var_1 == 111) { min = std::max( max,arr[i] ); }
    if(env_var_1 == 112) { min = std::max( max,arr[max] ); }
    if(env_var_1 == 113) { min = std::max( max,arr[min] ); }
    if(env_var_1 == 114) { min = std::max( max,arr[n] ); }
    if(env_var_1 == 115) { min = std::max( max,i ); }
    if(env_var_1 == 116) { min = std::max( max,max ); }
    if(env_var_1 == 117) { min = std::max( max,min ); }
    if(env_var_1 == 118) { min = std::max( max,n ); }
    if(env_var_1 == 119) { min = std::max( min,arr[i] ); }
    if(env_var_1 == 120) { min = std::max( min,arr[max] ); }
    if(env_var_1 == 121) { min = std::max( min,arr[min] ); }
    if(env_var_1 == 122) { min = std::max( min,arr[n] ); }
    if(env_var_1 == 123) { min = std::max( min,i ); }
    if(env_var_1 == 124) { min = std::max( min,max ); }
    if(env_var_1 == 125) { min = std::max( min,min ); }
    if(env_var_1 == 126) { min = std::max( min,n ); }
    if(env_var_1 == 127) { min = std::max( n,arr[i] ); }
    if(env_var_1 == 128) { min = std::max( n,arr[max] ); }
    if(env_var_1 == 129) { min = std::max( n,arr[min] ); }
    if(env_var_1 == 130) { min = std::max( n,arr[n] ); }
    if(env_var_1 == 131) { min = std::max( n,i ); }
    if(env_var_1 == 132) { min = std::max( n,max ); }
    if(env_var_1 == 133) { min = std::max( n,min ); }
    if(env_var_1 == 134) { min = std::max( n,n ); }
    if(env_var_1 == 135) { min = std::max(); }
    if(env_var_1 == 136) { min = std::min( arr[i],arr[i] ); }
    if(env_var_1 == 137) { min = std::min( arr[i],arr[max] ); }
    if(env_var_1 == 138) { min = std::min( arr[i],arr[min] ); }
    if(env_var_1 == 139) { min = std::min( arr[i],arr[n] ); }
    if(env_var_1 == 140) { min = std::min( arr[i],i ); }
    if(env_var_1 == 141) { min = std::min( arr[i],max ); }
    if(env_var_1 == 142) { min = std::min( arr[i],min ); }
    if(env_var_1 == 143) { min = std::min( arr[i],n ); }
    if(env_var_1 == 144) { min = std::min( arr[max],arr[i] ); }
    if(env_var_1 == 145) { min = std::min( arr[max],arr[max] ); }
    if(env_var_1 == 146) { min = std::min( arr[max],arr[min] ); }
    if(env_var_1 == 147) { min = std::min( arr[max],arr[n] ); }
    if(env_var_1 == 148) { min = std::min( arr[max],i ); }
    if(env_var_1 == 149) { min = std::min( arr[max],max ); }
    if(env_var_1 == 150) { min = std::min( arr[max],min ); }
    if(env_var_1 == 151) { min = std::min( arr[max],n ); }
    if(env_var_1 == 152) { min = std::min( arr[min],arr[i] ); }
    if(env_var_1 == 153) { min = std::min( arr[min],arr[max] ); }
    if(env_var_1 == 154) { min = std::min( arr[min],arr[min] ); }
    if(env_var_1 == 155) { min = std::min( arr[min],arr[n] ); }
    if(env_var_1 == 156) { min = std::min( arr[min],i ); }
    if(env_var_1 == 157) { min = std::min( arr[min],max ); }
    if(env_var_1 == 158) { min = std::min( arr[min],min ); }
    if(env_var_1 == 159) { min = std::min( arr[min],n ); }
    if(env_var_1 == 160) { min = std::min( arr[n],arr[i] ); }
    if(env_var_1 == 161) { min = std::min( arr[n],arr[max] ); }
    if(env_var_1 == 162) { min = std::min( arr[n],arr[min] ); }
    if(env_var_1 == 163) { min = std::min( arr[n],arr[n] ); }
    if(env_var_1 == 164) { min = std::min( arr[n],i ); }
    if(env_var_1 == 165) { min = std::min( arr[n],max ); }
    if(env_var_1 == 166) { min = std::min( arr[n],min ); }
    if(env_var_1 == 167) { min = std::min( arr[n],n ); }
    if(env_var_1 == 168) { min = std::min( i,arr[i] ); }
    if(env_var_1 == 169) { min = std::min( i,arr[max] ); }
    if(env_var_1 == 170) { min = std::min( i,arr[min] ); }
    if(env_var_1 == 171) { min = std::min( i,arr[n] ); }
    if(env_var_1 == 172) { min = std::min( i,i ); }
    if(env_var_1 == 173) { min = std::min( i,max ); }
    if(env_var_1 == 174) { min = std::min( i,min ); }
    if(env_var_1 == 175) { min = std::min( i,n ); }
    if(env_var_1 == 176) { min = std::min( max,arr[i] ); }
    if(env_var_1 == 177) { min = std::min( max,arr[max] ); }
    if(env_var_1 == 178) { min = std::min( max,arr[min] ); }
    if(env_var_1 == 179) { min = std::min( max,arr[n] ); }
    if(env_var_1 == 180) { min = std::min( max,i ); }
    if(env_var_1 == 181) { min = std::min( max,max ); }
    if(env_var_1 == 182) { min = std::min( max,min ); }
    if(env_var_1 == 183) { min = std::min( max,n ); }
    if(env_var_1 == 184) { min = std::min( min,arr[i] ); }
    if(env_var_1 == 185) { min = std::min( min,arr[max] ); }
    if(env_var_1 == 186) { min = std::min( min,arr[min] ); }
    if(env_var_1 == 187) { min = std::min( min,arr[n] ); }
    if(env_var_1 == 188) { min = std::min( min,i ); }
    if(env_var_1 == 189) { min = std::min( min,max ); }
    if(env_var_1 == 190) { min = std::min( min,min ); }
    if(env_var_1 == 191) { min = std::min( min,n ); }
    if(env_var_1 == 192) { min = std::min( n,arr[i] ); }
    if(env_var_1 == 193) { min = std::min( n,arr[max] ); }
    if(env_var_1 == 194) { min = std::min( n,arr[min] ); }
    if(env_var_1 == 195) { min = std::min( n,arr[n] ); }
    if(env_var_1 == 196) { min = std::min( n,i ); }
    if(env_var_1 == 197) { min = std::min( n,max ); }
    if(env_var_1 == 198) { min = std::min( n,min ); }
    if(env_var_1 == 199) { min = std::min( n,n ); }
    if(env_var_1 == 200) { min = toupper( arr[i] ); }
    if(env_var_1 == 201) { min = toupper( arr[max] ); }
    if(env_var_1 == 202) { min = toupper( arr[min] ); }
    if(env_var_1 == 203) { min = toupper( arr[n] ); }
    if(env_var_1 == 204) { min = toupper( i ); }
    if(env_var_1 == 205) { min = toupper( max ); }
    if(env_var_1 == 206) { min = toupper( min ); }
    if(env_var_1 == 207) { min = toupper( n ); }
       ;
  }
  int m = max - min + 1;
  if ( m > n ) return false;
  bool visited [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    visited [ arr [ i ] - min ] = true;
  }
  for ( int i = 0;
  i < m;
  i ++ ) if ( visited [ i ] == false ) return false;
  return true;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,4,19,25,65,72,75,83,90,92},{46,2,28,-44,74,-36,-8,30,-96,60,52,-58,16,-38,78,38,-28,16,26,-42,48,40,6,72},{0,1,1,1},{50,21,9,29,86,2,82,49,34,18,77,83,44,67,85,58,15,85,22,3,39,67,42,37,6,35,18,57,41,32,39,30,41,68,84,36,64,36},{-92,-82,-80,-78,-66,-66,-62,-58,-54,-52,-48,-30,-26,-22,-20,-20,-18,-14,-2,12,20,24,26,26,28,28,32,36,42,48,50,52,56,64,70,72,72,80,82,84,86,92},{1,0,0,1,0,0,1,0,0,1,1,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,1,1,0,0,1,1,0,1,1,1,0,0,1,0,1,0,0,0,0},{18,19,21,23,30,33,38,40,45,56,63,68,93,96},{20,-90,-42,48,18,-46,82,-12,-88,82,62,24,20,64,-68,-34,-38,8,-54,-20,-92,34,-90,78,18,8,-6,10,98,-24,72,-92,76,-22,12,-44,2,68,-72,42,34,20,-48},{0,0,0,0,0,1,1,1,1},{81,25,50,48,35,38,49,21,47,94,94,55,23,45,92,23,93,33,64,9,90,64,81,17,2,73,8,7,35,36,72}};
    vector<int> param1 {8,14,2,23,26,43,8,34,8,27};
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

