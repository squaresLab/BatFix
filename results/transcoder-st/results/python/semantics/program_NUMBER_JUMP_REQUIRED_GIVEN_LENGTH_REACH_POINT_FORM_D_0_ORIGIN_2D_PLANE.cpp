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
int f_gold ( int a, int b, int d ) {
  int temp = a;
  a = min ( a, b );
  b = max ( temp, b );
  if ( d >= b ) return ( d + b - 1 ) / b;
  if ( d == 0 ) return 0;
  if ( d == a ) return 1;
  return 2;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a , int b , int d ) {
  int temp = a ;
  if(env_var_0 == 0) { a = a; }
  if(env_var_0 == 1) { a = b; }
  if(env_var_0 == 2) { a = d; }
  if(env_var_0 == 3) { a = isupper( a ); }
  if(env_var_0 == 4) { a = isupper( b ); }
  if(env_var_0 == 5) { a = isupper( d ); }
  if(env_var_0 == 6) { a = isupper( temp ); }
  if(env_var_0 == 7) { a = std::max( a,a ); }
  if(env_var_0 == 8) { a = std::max( a,b ); }
  if(env_var_0 == 9) { a = std::max( a,d ); }
  if(env_var_0 == 10) { a = std::max( a,temp ); }
  if(env_var_0 == 11) { a = std::max( b,a ); }
  if(env_var_0 == 12) { a = std::max( b,b ); }
  if(env_var_0 == 13) { a = std::max( b,d ); }
  if(env_var_0 == 14) { a = std::max( b,temp ); }
  if(env_var_0 == 15) { a = std::max( d,a ); }
  if(env_var_0 == 16) { a = std::max( d,b ); }
  if(env_var_0 == 17) { a = std::max( d,d ); }
  if(env_var_0 == 18) { a = std::max( d,temp ); }
  if(env_var_0 == 19) { a = std::max( temp,a ); }
  if(env_var_0 == 20) { a = std::max( temp,b ); }
  if(env_var_0 == 21) { a = std::max( temp,d ); }
  if(env_var_0 == 22) { a = std::max( temp,temp ); }
  if(env_var_0 == 23) { a = std::max(); }
  if(env_var_0 == 24) { a = std::min( a,a ); }
  if(env_var_0 == 25) { a = std::min( a,b ); }
  if(env_var_0 == 26) { a = std::min( a,d ); }
  if(env_var_0 == 27) { a = std::min( a,temp ); }
  if(env_var_0 == 28) { a = std::min( b,a ); }
  if(env_var_0 == 29) { a = std::min( b,b ); }
  if(env_var_0 == 30) { a = std::min( b,d ); }
  if(env_var_0 == 31) { a = std::min( b,temp ); }
  if(env_var_0 == 32) { a = std::min( d,a ); }
  if(env_var_0 == 33) { a = std::min( d,b ); }
  if(env_var_0 == 34) { a = std::min( d,d ); }
  if(env_var_0 == 35) { a = std::min( d,temp ); }
  if(env_var_0 == 36) { a = std::min( temp,a ); }
  if(env_var_0 == 37) { a = std::min( temp,b ); }
  if(env_var_0 == 38) { a = std::min( temp,d ); }
  if(env_var_0 == 39) { a = std::min( temp,temp ); }
  if(env_var_0 == 40) { a = temp; }
  if(env_var_0 == 41) { a = toupper( a ); }
  if(env_var_0 == 42) { a = toupper( b ); }
  if(env_var_0 == 43) { a = toupper( d ); }
  if(env_var_0 == 44) { a = toupper( temp ); }
  if(env_var_0 == 45) { b = a; }
  if(env_var_0 == 46) { b = b; }
  if(env_var_0 == 47) { b = d; }
  if(env_var_0 == 48) { b = isupper( a ); }
  if(env_var_0 == 49) { b = isupper( b ); }
  if(env_var_0 == 50) { b = isupper( d ); }
  if(env_var_0 == 51) { b = isupper( temp ); }
  if(env_var_0 == 52) { b = std::max( a,a ); }
  if(env_var_0 == 53) { b = std::max( a,b ); }
  if(env_var_0 == 54) { b = std::max( a,d ); }
  if(env_var_0 == 55) { b = std::max( a,temp ); }
  if(env_var_0 == 56) { b = std::max( b,a ); }
  if(env_var_0 == 57) { b = std::max( b,b ); }
  if(env_var_0 == 58) { b = std::max( b,d ); }
  if(env_var_0 == 59) { b = std::max( b,temp ); }
  if(env_var_0 == 60) { b = std::max( d,a ); }
  if(env_var_0 == 61) { b = std::max( d,b ); }
  if(env_var_0 == 62) { b = std::max( d,d ); }
  if(env_var_0 == 63) { b = std::max( d,temp ); }
  if(env_var_0 == 64) { b = std::max( temp,a ); }
  if(env_var_0 == 65) { b = std::max( temp,b ); }
  if(env_var_0 == 66) { b = std::max( temp,d ); }
  if(env_var_0 == 67) { b = std::max( temp,temp ); }
  if(env_var_0 == 68) { b = std::max(); }
  if(env_var_0 == 69) { b = std::min( a,a ); }
  if(env_var_0 == 70) { b = std::min( a,b ); }
  if(env_var_0 == 71) { b = std::min( a,d ); }
  if(env_var_0 == 72) { b = std::min( a,temp ); }
  if(env_var_0 == 73) { b = std::min( b,a ); }
  if(env_var_0 == 74) { b = std::min( b,b ); }
  if(env_var_0 == 75) { b = std::min( b,d ); }
  if(env_var_0 == 76) { b = std::min( b,temp ); }
  if(env_var_0 == 77) { b = std::min( d,a ); }
  if(env_var_0 == 78) { b = std::min( d,b ); }
  if(env_var_0 == 79) { b = std::min( d,d ); }
  if(env_var_0 == 80) { b = std::min( d,temp ); }
  if(env_var_0 == 81) { b = std::min( temp,a ); }
  if(env_var_0 == 82) { b = std::min( temp,b ); }
  if(env_var_0 == 83) { b = std::min( temp,d ); }
  if(env_var_0 == 84) { b = std::min( temp,temp ); }
  if(env_var_0 == 85) { b = temp; }
  if(env_var_0 == 86) { b = toupper( a ); }
  if(env_var_0 == 87) { b = toupper( b ); }
  if(env_var_0 == 88) { b = toupper( d ); }
  if(env_var_0 == 89) { b = toupper( temp ); }
  if(env_var_0 == 90) { d = a; }
  if(env_var_0 == 91) { d = b; }
  if(env_var_0 == 92) { d = d; }
  if(env_var_0 == 93) { d = isupper( a ); }
  if(env_var_0 == 94) { d = isupper( b ); }
  if(env_var_0 == 95) { d = isupper( d ); }
  if(env_var_0 == 96) { d = isupper( temp ); }
  if(env_var_0 == 97) { d = std::max( a,a ); }
  if(env_var_0 == 98) { d = std::max( a,b ); }
  if(env_var_0 == 99) { d = std::max( a,d ); }
  if(env_var_0 == 100) { d = std::max( a,temp ); }
  if(env_var_0 == 101) { d = std::max( b,a ); }
  if(env_var_0 == 102) { d = std::max( b,b ); }
  if(env_var_0 == 103) { d = std::max( b,d ); }
  if(env_var_0 == 104) { d = std::max( b,temp ); }
  if(env_var_0 == 105) { d = std::max( d,a ); }
  if(env_var_0 == 106) { d = std::max( d,b ); }
  if(env_var_0 == 107) { d = std::max( d,d ); }
  if(env_var_0 == 108) { d = std::max( d,temp ); }
  if(env_var_0 == 109) { d = std::max( temp,a ); }
  if(env_var_0 == 110) { d = std::max( temp,b ); }
  if(env_var_0 == 111) { d = std::max( temp,d ); }
  if(env_var_0 == 112) { d = std::max( temp,temp ); }
  if(env_var_0 == 113) { d = std::max(); }
  if(env_var_0 == 114) { d = std::min( a,a ); }
  if(env_var_0 == 115) { d = std::min( a,b ); }
  if(env_var_0 == 116) { d = std::min( a,d ); }
  if(env_var_0 == 117) { d = std::min( a,temp ); }
  if(env_var_0 == 118) { d = std::min( b,a ); }
  if(env_var_0 == 119) { d = std::min( b,b ); }
  if(env_var_0 == 120) { d = std::min( b,d ); }
  if(env_var_0 == 121) { d = std::min( b,temp ); }
  if(env_var_0 == 122) { d = std::min( d,a ); }
  if(env_var_0 == 123) { d = std::min( d,b ); }
  if(env_var_0 == 124) { d = std::min( d,d ); }
  if(env_var_0 == 125) { d = std::min( d,temp ); }
  if(env_var_0 == 126) { d = std::min( temp,a ); }
  if(env_var_0 == 127) { d = std::min( temp,b ); }
  if(env_var_0 == 128) { d = std::min( temp,d ); }
  if(env_var_0 == 129) { d = std::min( temp,temp ); }
  if(env_var_0 == 130) { d = temp; }
  if(env_var_0 == 131) { d = toupper( a ); }
  if(env_var_0 == 132) { d = toupper( b ); }
  if(env_var_0 == 133) { d = toupper( d ); }
  if(env_var_0 == 134) { d = toupper( temp ); }
  if(env_var_0 == 135) { temp = a; }
  if(env_var_0 == 136) { temp = b; }
  if(env_var_0 == 137) { temp = d; }
  if(env_var_0 == 138) { temp = isupper( a ); }
  if(env_var_0 == 139) { temp = isupper( b ); }
  if(env_var_0 == 140) { temp = isupper( d ); }
  if(env_var_0 == 141) { temp = isupper( temp ); }
  if(env_var_0 == 142) { temp = std::max( a,a ); }
  if(env_var_0 == 143) { temp = std::max( a,b ); }
  if(env_var_0 == 144) { temp = std::max( a,d ); }
  if(env_var_0 == 145) { temp = std::max( a,temp ); }
  if(env_var_0 == 146) { temp = std::max( b,a ); }
  if(env_var_0 == 147) { temp = std::max( b,b ); }
  if(env_var_0 == 148) { temp = std::max( b,d ); }
  if(env_var_0 == 149) { temp = std::max( b,temp ); }
  if(env_var_0 == 150) { temp = std::max( d,a ); }
  if(env_var_0 == 151) { temp = std::max( d,b ); }
  if(env_var_0 == 152) { temp = std::max( d,d ); }
  if(env_var_0 == 153) { temp = std::max( d,temp ); }
  if(env_var_0 == 154) { temp = std::max( temp,a ); }
  if(env_var_0 == 155) { temp = std::max( temp,b ); }
  if(env_var_0 == 156) { temp = std::max( temp,d ); }
  if(env_var_0 == 157) { temp = std::max( temp,temp ); }
  if(env_var_0 == 158) { temp = std::max(); }
  if(env_var_0 == 159) { temp = std::min( a,a ); }
  if(env_var_0 == 160) { temp = std::min( a,b ); }
  if(env_var_0 == 161) { temp = std::min( a,d ); }
  if(env_var_0 == 162) { temp = std::min( a,temp ); }
  if(env_var_0 == 163) { temp = std::min( b,a ); }
  if(env_var_0 == 164) { temp = std::min( b,b ); }
  if(env_var_0 == 165) { temp = std::min( b,d ); }
  if(env_var_0 == 166) { temp = std::min( b,temp ); }
  if(env_var_0 == 167) { temp = std::min( d,a ); }
  if(env_var_0 == 168) { temp = std::min( d,b ); }
  if(env_var_0 == 169) { temp = std::min( d,d ); }
  if(env_var_0 == 170) { temp = std::min( d,temp ); }
  if(env_var_0 == 171) { temp = std::min( temp,a ); }
  if(env_var_0 == 172) { temp = std::min( temp,b ); }
  if(env_var_0 == 173) { temp = std::min( temp,d ); }
  if(env_var_0 == 174) { temp = std::min( temp,temp ); }
  if(env_var_0 == 175) { temp = temp; }
  if(env_var_0 == 176) { temp = toupper( a ); }
  if(env_var_0 == 177) { temp = toupper( b ); }
  if(env_var_0 == 178) { temp = toupper( d ); }
  if(env_var_0 == 179) { temp = toupper( temp ); }
   ;
  b = max ( temp , b ) ;
  if ( ( d >= b ) && ( d <= b ) ) return ( d + b - 1 ) / b ;
  if ( ( d == 0 ) && ( d == a ) ) return 0 ;
  if ( ( d == a ) && ( d == b ) ) return 1 ;
  return 2 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {35,85,22,8,12,58,65,10,23,5};
    vector<int> param1 {8,55,23,43,64,25,4,95,13,50};
    vector<int> param2 {77,33,64,29,11,26,28,55,54,71};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
