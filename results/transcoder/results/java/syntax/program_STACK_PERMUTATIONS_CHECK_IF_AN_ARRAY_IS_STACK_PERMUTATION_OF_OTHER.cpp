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
bool f_gold ( int ip [ ], int op [ ], int n ) {
  queue < int > input;
  for ( int i = 0;
  i < n;
  i ++ ) input . push ( ip [ i ] );
  queue < int > output;
  for ( int i = 0;
  i < n;
  i ++ ) output . push ( op [ i ] );
  stack < int > tempStack;
  while ( ! input . empty ( ) ) {
    int ele = input . front ( );
    input . pop ( );
    if ( ele == output . front ( ) ) {
      output . pop ( );
      while ( ! tempStack . empty ( ) ) {
        if ( tempStack . top ( ) == output . front ( ) ) {
          tempStack . pop ( );
          output . pop ( );
        }
        else break;
      }
    }
    else tempStack . push ( ele );
  }
  return ( input . empty ( ) && tempStack . empty ( ) );
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int ip [ ], int op [ ], int n ) {
  queue < int > input;
  for ( int i = 0;
  i < n;
  i ++ ) input . push ( ip [ i ] );
  queue < int > output;
  for ( int i = 0;
  i < n;
  i ++ ) output . push ( op [ i ] );
  stack < int > tempStack;
  while ( ! input . empty ( ) ) {
   auto ele ;
    if(env_var_0 == 0) { ele = ele; }
    if(env_var_0 == 1) { ele = input; }
    if(env_var_0 == 2) { ele = ip; }
    if(env_var_0 == 3) { ele = ip+ele; }
    if(env_var_0 == 4) { ele = ip+n; }
    if(env_var_0 == 5) { ele = ip[ele]; }
    if(env_var_0 == 6) { ele = ip[n]; }
    if(env_var_0 == 7) { ele = isupper( ele ); }
    if(env_var_0 == 8) { ele = isupper( ip[ele] ); }
    if(env_var_0 == 9) { ele = isupper( ip[n] ); }
    if(env_var_0 == 10) { ele = isupper( n ); }
    if(env_var_0 == 11) { ele = isupper( op[ele] ); }
    if(env_var_0 == 12) { ele = isupper( op[n] ); }
    if(env_var_0 == 13) { ele = n; }
    if(env_var_0 == 14) { ele = op; }
    if(env_var_0 == 15) { ele = op+ele; }
    if(env_var_0 == 16) { ele = op+n; }
    if(env_var_0 == 17) { ele = op[ele]; }
    if(env_var_0 == 18) { ele = op[n]; }
    if(env_var_0 == 19) { ele = output; }
    if(env_var_0 == 20) { ele = output.back(); }
    if(env_var_0 == 21) { ele = output.front(); }
    if(env_var_0 == 22) { ele = output.size(); }
    if(env_var_0 == 23) { ele = tempStack; }
    if(env_var_0 == 24) { ele = tempStack.empty(); }
    if(env_var_0 == 25) { ele = tempStack.pop(); }
    if(env_var_0 == 26) { ele = tempStack.top(); }
    if(env_var_0 == 27) { ele = toupper( ele ); }
    if(env_var_0 == 28) { ele = toupper( ip[ele] ); }
    if(env_var_0 == 29) { ele = toupper( ip[n] ); }
    if(env_var_0 == 30) { ele = toupper( n ); }
    if(env_var_0 == 31) { ele = toupper( op[ele] ); }
    if(env_var_0 == 32) { ele = toupper( op[n] ); }

    int _res_key_if_0;
    if(env_var_1 == 0) { _res_key_if_0 = ele == ele; }
    if(env_var_1 == 1) { _res_key_if_0 = ele == input; }
    if(env_var_1 == 2) { _res_key_if_0 = ele == ip; }
    if(env_var_1 == 3) { _res_key_if_0 = ele == ip+ele; }
    if(env_var_1 == 4) { _res_key_if_0 = ele == ip+n; }
    if(env_var_1 == 5) { _res_key_if_0 = ele == ip[ele]; }
    if(env_var_1 == 6) { _res_key_if_0 = ele == ip[n]; }
    if(env_var_1 == 7) { _res_key_if_0 = ele == isupper( ele ); }
    if(env_var_1 == 8) { _res_key_if_0 = ele == isupper( ip[ele] ); }
    if(env_var_1 == 9) { _res_key_if_0 = ele == isupper( ip[n] ); }
    if(env_var_1 == 10) { _res_key_if_0 = ele == isupper( n ); }
    if(env_var_1 == 11) { _res_key_if_0 = ele == isupper( op[ele] ); }
    if(env_var_1 == 12) { _res_key_if_0 = ele == isupper( op[n] ); }
    if(env_var_1 == 13) { _res_key_if_0 = ele == n; }
    if(env_var_1 == 14) { _res_key_if_0 = ele == op; }
    if(env_var_1 == 15) { _res_key_if_0 = ele == op+ele; }
    if(env_var_1 == 16) { _res_key_if_0 = ele == op+n; }
    if(env_var_1 == 17) { _res_key_if_0 = ele == op[ele]; }
    if(env_var_1 == 18) { _res_key_if_0 = ele == op[n]; }
    if(env_var_1 == 19) { _res_key_if_0 = ele == output; }
    if(env_var_1 == 20) { _res_key_if_0 = ele == output.back(); }
    if(env_var_1 == 21) { _res_key_if_0 = ele == output.front(); }
    if(env_var_1 == 22) { _res_key_if_0 = ele == output.size(); }
    if(env_var_1 == 23) { _res_key_if_0 = ele == tempStack; }
    if(env_var_1 == 24) { _res_key_if_0 = ele == tempStack.empty(); }
    if(env_var_1 == 25) { _res_key_if_0 = ele == tempStack.pop(); }
    if(env_var_1 == 26) { _res_key_if_0 = ele == tempStack.top(); }
    if(env_var_1 == 27) { _res_key_if_0 = ele == toupper( ele ); }
    if(env_var_1 == 28) { _res_key_if_0 = ele == toupper( ip[ele] ); }
    if(env_var_1 == 29) { _res_key_if_0 = ele == toupper( ip[n] ); }
    if(env_var_1 == 30) { _res_key_if_0 = ele == toupper( n ); }
    if(env_var_1 == 31) { _res_key_if_0 = ele == toupper( op[ele] ); }
    if(env_var_1 == 32) { _res_key_if_0 = ele == toupper( op[n] ); }
    if(env_var_1 == 33) { _res_key_if_0 = input == ele; }
    if(env_var_1 == 34) { _res_key_if_0 = input == input; }
    if(env_var_1 == 35) { _res_key_if_0 = input == ip; }
    if(env_var_1 == 36) { _res_key_if_0 = input == ip+ele; }
    if(env_var_1 == 37) { _res_key_if_0 = input == ip+n; }
    if(env_var_1 == 38) { _res_key_if_0 = input == ip[ele]; }
    if(env_var_1 == 39) { _res_key_if_0 = input == ip[n]; }
    if(env_var_1 == 40) { _res_key_if_0 = input == isupper( ele ); }
    if(env_var_1 == 41) { _res_key_if_0 = input == isupper( ip[ele] ); }
    if(env_var_1 == 42) { _res_key_if_0 = input == isupper( ip[n] ); }
    if(env_var_1 == 43) { _res_key_if_0 = input == isupper( n ); }
    if(env_var_1 == 44) { _res_key_if_0 = input == isupper( op[ele] ); }
    if(env_var_1 == 45) { _res_key_if_0 = input == isupper( op[n] ); }
    if(env_var_1 == 46) { _res_key_if_0 = input == n; }
    if(env_var_1 == 47) { _res_key_if_0 = input == op; }
    if(env_var_1 == 48) { _res_key_if_0 = input == op+ele; }
    if(env_var_1 == 49) { _res_key_if_0 = input == op+n; }
    if(env_var_1 == 50) { _res_key_if_0 = input == op[ele]; }
    if(env_var_1 == 51) { _res_key_if_0 = input == op[n]; }
    if(env_var_1 == 52) { _res_key_if_0 = input == output; }
    if(env_var_1 == 53) { _res_key_if_0 = input == output.back(); }
    if(env_var_1 == 54) { _res_key_if_0 = input == output.front(); }
    if(env_var_1 == 55) { _res_key_if_0 = input == output.size(); }
    if(env_var_1 == 56) { _res_key_if_0 = input == tempStack; }
    if(env_var_1 == 57) { _res_key_if_0 = input == tempStack.empty(); }
    if(env_var_1 == 58) { _res_key_if_0 = input == tempStack.pop(); }
    if(env_var_1 == 59) { _res_key_if_0 = input == tempStack.top(); }
    if(env_var_1 == 60) { _res_key_if_0 = input == toupper( ele ); }
    if(env_var_1 == 61) { _res_key_if_0 = input == toupper( ip[ele] ); }
    if(env_var_1 == 62) { _res_key_if_0 = input == toupper( ip[n] ); }
    if(env_var_1 == 63) { _res_key_if_0 = input == toupper( n ); }
    if(env_var_1 == 64) { _res_key_if_0 = input == toupper( op[ele] ); }
    if(env_var_1 == 65) { _res_key_if_0 = input == toupper( op[n] ); }
    if(env_var_1 == 66) { _res_key_if_0 = ip == ele; }
    if(env_var_1 == 67) { _res_key_if_0 = ip == input; }
    if(env_var_1 == 68) { _res_key_if_0 = ip == ip; }
    if(env_var_1 == 69) { _res_key_if_0 = ip == ip+ele; }
    if(env_var_1 == 70) { _res_key_if_0 = ip == ip+n; }
    if(env_var_1 == 71) { _res_key_if_0 = ip == ip[ele]; }
    if(env_var_1 == 72) { _res_key_if_0 = ip == ip[n]; }
    if(env_var_1 == 73) { _res_key_if_0 = ip == isupper( ele ); }
    if(env_var_1 == 74) { _res_key_if_0 = ip == isupper( ip[ele] ); }
    if(env_var_1 == 75) { _res_key_if_0 = ip == isupper( ip[n] ); }
    if(env_var_1 == 76) { _res_key_if_0 = ip == isupper( n ); }
    if(env_var_1 == 77) { _res_key_if_0 = ip == isupper( op[ele] ); }
    if(env_var_1 == 78) { _res_key_if_0 = ip == isupper( op[n] ); }
    if(env_var_1 == 79) { _res_key_if_0 = ip == n; }
    if(env_var_1 == 80) { _res_key_if_0 = ip == op; }
    if(env_var_1 == 81) { _res_key_if_0 = ip == op+ele; }
    if(env_var_1 == 82) { _res_key_if_0 = ip == op+n; }
    if(env_var_1 == 83) { _res_key_if_0 = ip == op[ele]; }
    if(env_var_1 == 84) { _res_key_if_0 = ip == op[n]; }
    if(env_var_1 == 85) { _res_key_if_0 = ip == output; }
    if(env_var_1 == 86) { _res_key_if_0 = ip == output.back(); }
    if(env_var_1 == 87) { _res_key_if_0 = ip == output.front(); }
    if(env_var_1 == 88) { _res_key_if_0 = ip == output.size(); }
    if(env_var_1 == 89) { _res_key_if_0 = ip == tempStack; }
    if(env_var_1 == 90) { _res_key_if_0 = ip == tempStack.empty(); }
    if(env_var_1 == 91) { _res_key_if_0 = ip == tempStack.pop(); }
    if(env_var_1 == 92) { _res_key_if_0 = ip == tempStack.top(); }
    if(env_var_1 == 93) { _res_key_if_0 = ip == toupper( ele ); }
    if(env_var_1 == 94) { _res_key_if_0 = ip == toupper( ip[ele] ); }
    if(env_var_1 == 95) { _res_key_if_0 = ip == toupper( ip[n] ); }
    if(env_var_1 == 96) { _res_key_if_0 = ip == toupper( n ); }
    if(env_var_1 == 97) { _res_key_if_0 = ip == toupper( op[ele] ); }
    if(env_var_1 == 98) { _res_key_if_0 = ip == toupper( op[n] ); }
    if(env_var_1 == 99) { _res_key_if_0 = ip+ele == ele; }
    if(env_var_1 == 100) { _res_key_if_0 = ip+ele == input; }
    if(env_var_1 == 101) { _res_key_if_0 = ip+ele == ip; }
    if(env_var_1 == 102) { _res_key_if_0 = ip+ele == ip+ele; }
    if(env_var_1 == 103) { _res_key_if_0 = ip+ele == ip+n; }
    if(env_var_1 == 104) { _res_key_if_0 = ip+ele == ip[ele]; }
    if(env_var_1 == 105) { _res_key_if_0 = ip+ele == ip[n]; }
    if(env_var_1 == 106) { _res_key_if_0 = ip+ele == isupper( ele ); }
    if(env_var_1 == 107) { _res_key_if_0 = ip+ele == isupper( ip[ele] ); }
    if(env_var_1 == 108) { _res_key_if_0 = ip+ele == isupper( ip[n] ); }
    if(env_var_1 == 109) { _res_key_if_0 = ip+ele == isupper( n ); }
    if(env_var_1 == 110) { _res_key_if_0 = ip+ele == isupper( op[ele] ); }
    if(env_var_1 == 111) { _res_key_if_0 = ip+ele == isupper( op[n] ); }
    if(env_var_1 == 112) { _res_key_if_0 = ip+ele == n; }
    if(env_var_1 == 113) { _res_key_if_0 = ip+ele == op; }
    if(env_var_1 == 114) { _res_key_if_0 = ip+ele == op+ele; }
    if(env_var_1 == 115) { _res_key_if_0 = ip+ele == op+n; }
    if(env_var_1 == 116) { _res_key_if_0 = ip+ele == op[ele]; }
    if(env_var_1 == 117) { _res_key_if_0 = ip+ele == op[n]; }
    if(env_var_1 == 118) { _res_key_if_0 = ip+ele == output; }
    if(env_var_1 == 119) { _res_key_if_0 = ip+ele == output.back(); }
    if(env_var_1 == 120) { _res_key_if_0 = ip+ele == output.front(); }
    if(env_var_1 == 121) { _res_key_if_0 = ip+ele == output.size(); }
    if(env_var_1 == 122) { _res_key_if_0 = ip+ele == tempStack; }
    if(env_var_1 == 123) { _res_key_if_0 = ip+ele == tempStack.empty(); }
    if(env_var_1 == 124) { _res_key_if_0 = ip+ele == tempStack.pop(); }
    if(env_var_1 == 125) { _res_key_if_0 = ip+ele == tempStack.top(); }
    if(env_var_1 == 126) { _res_key_if_0 = ip+ele == toupper( ele ); }
    if(env_var_1 == 127) { _res_key_if_0 = ip+ele == toupper( ip[ele] ); }
    if(env_var_1 == 128) { _res_key_if_0 = ip+ele == toupper( ip[n] ); }
    if(env_var_1 == 129) { _res_key_if_0 = ip+ele == toupper( n ); }
    if(env_var_1 == 130) { _res_key_if_0 = ip+ele == toupper( op[ele] ); }
    if(env_var_1 == 131) { _res_key_if_0 = ip+ele == toupper( op[n] ); }
    if(env_var_1 == 132) { _res_key_if_0 = ip+n == ele; }
    if(env_var_1 == 133) { _res_key_if_0 = ip+n == input; }
    if(env_var_1 == 134) { _res_key_if_0 = ip+n == ip; }
    if(env_var_1 == 135) { _res_key_if_0 = ip+n == ip+ele; }
    if(env_var_1 == 136) { _res_key_if_0 = ip+n == ip+n; }
    if(env_var_1 == 137) { _res_key_if_0 = ip+n == ip[ele]; }
    if(env_var_1 == 138) { _res_key_if_0 = ip+n == ip[n]; }
    if(env_var_1 == 139) { _res_key_if_0 = ip+n == isupper( ele ); }
    if(env_var_1 == 140) { _res_key_if_0 = ip+n == isupper( ip[ele] ); }
    if(env_var_1 == 141) { _res_key_if_0 = ip+n == isupper( ip[n] ); }
    if(env_var_1 == 142) { _res_key_if_0 = ip+n == isupper( n ); }
    if(env_var_1 == 143) { _res_key_if_0 = ip+n == isupper( op[ele] ); }
    if(env_var_1 == 144) { _res_key_if_0 = ip+n == isupper( op[n] ); }
    if(env_var_1 == 145) { _res_key_if_0 = ip+n == n; }
    if(env_var_1 == 146) { _res_key_if_0 = ip+n == op; }
    if(env_var_1 == 147) { _res_key_if_0 = ip+n == op+ele; }
    if(env_var_1 == 148) { _res_key_if_0 = ip+n == op+n; }
    if(env_var_1 == 149) { _res_key_if_0 = ip+n == op[ele]; }
    if(env_var_1 == 150) { _res_key_if_0 = ip+n == op[n]; }
    if(env_var_1 == 151) { _res_key_if_0 = ip+n == output; }
    if(env_var_1 == 152) { _res_key_if_0 = ip+n == output.back(); }
    if(env_var_1 == 153) { _res_key_if_0 = ip+n == output.front(); }
    if(env_var_1 == 154) { _res_key_if_0 = ip+n == output.size(); }
    if(env_var_1 == 155) { _res_key_if_0 = ip+n == tempStack; }
    if(env_var_1 == 156) { _res_key_if_0 = ip+n == tempStack.empty(); }
    if(env_var_1 == 157) { _res_key_if_0 = ip+n == tempStack.pop(); }
    if(env_var_1 == 158) { _res_key_if_0 = ip+n == tempStack.top(); }
    if(env_var_1 == 159) { _res_key_if_0 = ip+n == toupper( ele ); }
    if(env_var_1 == 160) { _res_key_if_0 = ip+n == toupper( ip[ele] ); }
    if(env_var_1 == 161) { _res_key_if_0 = ip+n == toupper( ip[n] ); }
    if(env_var_1 == 162) { _res_key_if_0 = ip+n == toupper( n ); }
    if(env_var_1 == 163) { _res_key_if_0 = ip+n == toupper( op[ele] ); }
    if(env_var_1 == 164) { _res_key_if_0 = ip+n == toupper( op[n] ); }
    if(env_var_1 == 165) { _res_key_if_0 = ip[ele] == ele; }
    if(env_var_1 == 166) { _res_key_if_0 = ip[ele] == input; }
    if(env_var_1 == 167) { _res_key_if_0 = ip[ele] == ip; }
    if(env_var_1 == 168) { _res_key_if_0 = ip[ele] == ip+ele; }
    if(env_var_1 == 169) { _res_key_if_0 = ip[ele] == ip+n; }
    if(env_var_1 == 170) { _res_key_if_0 = ip[ele] == ip[ele]; }
    if(env_var_1 == 171) { _res_key_if_0 = ip[ele] == ip[n]; }
    if(env_var_1 == 172) { _res_key_if_0 = ip[ele] == isupper( ele ); }
    if(env_var_1 == 173) { _res_key_if_0 = ip[ele] == isupper( ip[ele] ); }
    if(env_var_1 == 174) { _res_key_if_0 = ip[ele] == isupper( ip[n] ); }
    if(env_var_1 == 175) { _res_key_if_0 = ip[ele] == isupper( n ); }
    if(env_var_1 == 176) { _res_key_if_0 = ip[ele] == isupper( op[ele] ); }
    if(env_var_1 == 177) { _res_key_if_0 = ip[ele] == isupper( op[n] ); }
    if(env_var_1 == 178) { _res_key_if_0 = ip[ele] == n; }
    if(env_var_1 == 179) { _res_key_if_0 = ip[ele] == op; }
    if(env_var_1 == 180) { _res_key_if_0 = ip[ele] == op+ele; }
    if(env_var_1 == 181) { _res_key_if_0 = ip[ele] == op+n; }
    if(env_var_1 == 182) { _res_key_if_0 = ip[ele] == op[ele]; }
    if(env_var_1 == 183) { _res_key_if_0 = ip[ele] == op[n]; }
    if(env_var_1 == 184) { _res_key_if_0 = ip[ele] == output; }
    if(env_var_1 == 185) { _res_key_if_0 = ip[ele] == output.back(); }
    if(env_var_1 == 186) { _res_key_if_0 = ip[ele] == output.front(); }
    if(env_var_1 == 187) { _res_key_if_0 = ip[ele] == output.size(); }
    if(env_var_1 == 188) { _res_key_if_0 = ip[ele] == tempStack; }
    if(env_var_1 == 189) { _res_key_if_0 = ip[ele] == tempStack.empty(); }
    if(env_var_1 == 190) { _res_key_if_0 = ip[ele] == tempStack.pop(); }
    if(env_var_1 == 191) { _res_key_if_0 = ip[ele] == tempStack.top(); }
    if(env_var_1 == 192) { _res_key_if_0 = ip[ele] == toupper( ele ); }
    if(env_var_1 == 193) { _res_key_if_0 = ip[ele] == toupper( ip[ele] ); }
    if(env_var_1 == 194) { _res_key_if_0 = ip[ele] == toupper( ip[n] ); }
    if(env_var_1 == 195) { _res_key_if_0 = ip[ele] == toupper( n ); }
    if(env_var_1 == 196) { _res_key_if_0 = ip[ele] == toupper( op[ele] ); }
    if(env_var_1 == 197) { _res_key_if_0 = ip[ele] == toupper( op[n] ); }
    if(env_var_1 == 198) { _res_key_if_0 = ip[n] == ele; }
    if(env_var_1 == 199) { _res_key_if_0 = ip[n] == input; }
    if(env_var_1 == 200) { _res_key_if_0 = ip[n] == ip; }
    if(env_var_1 == 201) { _res_key_if_0 = ip[n] == ip+ele; }
    if(env_var_1 == 202) { _res_key_if_0 = ip[n] == ip+n; }
    if(env_var_1 == 203) { _res_key_if_0 = ip[n] == ip[ele]; }
    if(env_var_1 == 204) { _res_key_if_0 = ip[n] == ip[n]; }
    if(env_var_1 == 205) { _res_key_if_0 = ip[n] == isupper( ele ); }
    if(env_var_1 == 206) { _res_key_if_0 = ip[n] == isupper( ip[ele] ); }
    if(env_var_1 == 207) { _res_key_if_0 = ip[n] == isupper( ip[n] ); }
    if(env_var_1 == 208) { _res_key_if_0 = ip[n] == isupper( n ); }
    if(env_var_1 == 209) { _res_key_if_0 = ip[n] == isupper( op[ele] ); }
    if(env_var_1 == 210) { _res_key_if_0 = ip[n] == isupper( op[n] ); }
    if(env_var_1 == 211) { _res_key_if_0 = ip[n] == n; }
    if(env_var_1 == 212) { _res_key_if_0 = ip[n] == op; }
    if(env_var_1 == 213) { _res_key_if_0 = ip[n] == op+ele; }
    if(env_var_1 == 214) { _res_key_if_0 = ip[n] == op+n; }
    if(env_var_1 == 215) { _res_key_if_0 = ip[n] == op[ele]; }
    if(env_var_1 == 216) { _res_key_if_0 = ip[n] == op[n]; }
    if(env_var_1 == 217) { _res_key_if_0 = ip[n] == output; }
    if(env_var_1 == 218) { _res_key_if_0 = ip[n] == output.back(); }
    if(env_var_1 == 219) { _res_key_if_0 = ip[n] == output.front(); }
    if(env_var_1 == 220) { _res_key_if_0 = ip[n] == output.size(); }
    if(env_var_1 == 221) { _res_key_if_0 = ip[n] == tempStack; }
    if(env_var_1 == 222) { _res_key_if_0 = ip[n] == tempStack.empty(); }
    if(env_var_1 == 223) { _res_key_if_0 = ip[n] == tempStack.pop(); }
    if(env_var_1 == 224) { _res_key_if_0 = ip[n] == tempStack.top(); }
    if(env_var_1 == 225) { _res_key_if_0 = ip[n] == toupper( ele ); }
    if(env_var_1 == 226) { _res_key_if_0 = ip[n] == toupper( ip[ele] ); }
    if(env_var_1 == 227) { _res_key_if_0 = ip[n] == toupper( ip[n] ); }
    if(env_var_1 == 228) { _res_key_if_0 = ip[n] == toupper( n ); }
    if(env_var_1 == 229) { _res_key_if_0 = ip[n] == toupper( op[ele] ); }
    if(env_var_1 == 230) { _res_key_if_0 = ip[n] == toupper( op[n] ); }
    if(env_var_1 == 231) { _res_key_if_0 = n == ele; }
    if(env_var_1 == 232) { _res_key_if_0 = n == input; }
    if(env_var_1 == 233) { _res_key_if_0 = n == ip; }
    if(env_var_1 == 234) { _res_key_if_0 = n == ip+ele; }
    if(env_var_1 == 235) { _res_key_if_0 = n == ip+n; }
    if(env_var_1 == 236) { _res_key_if_0 = n == ip[ele]; }
    if(env_var_1 == 237) { _res_key_if_0 = n == ip[n]; }
    if(env_var_1 == 238) { _res_key_if_0 = n == isupper( ele ); }
    if(env_var_1 == 239) { _res_key_if_0 = n == isupper( ip[ele] ); }
    if(env_var_1 == 240) { _res_key_if_0 = n == isupper( ip[n] ); }
    if(env_var_1 == 241) { _res_key_if_0 = n == isupper( n ); }
    if(env_var_1 == 242) { _res_key_if_0 = n == isupper( op[ele] ); }
    if(env_var_1 == 243) { _res_key_if_0 = n == isupper( op[n] ); }
    if(env_var_1 == 244) { _res_key_if_0 = n == n; }
    if(env_var_1 == 245) { _res_key_if_0 = n == op; }
    if(env_var_1 == 246) { _res_key_if_0 = n == op+ele; }
    if(env_var_1 == 247) { _res_key_if_0 = n == op+n; }
    if(env_var_1 == 248) { _res_key_if_0 = n == op[ele]; }
    if(env_var_1 == 249) { _res_key_if_0 = n == op[n]; }
    if(env_var_1 == 250) { _res_key_if_0 = n == output; }
    if(env_var_1 == 251) { _res_key_if_0 = n == output.back(); }
    if(env_var_1 == 252) { _res_key_if_0 = n == output.front(); }
    if(env_var_1 == 253) { _res_key_if_0 = n == output.size(); }
    if(env_var_1 == 254) { _res_key_if_0 = n == tempStack; }
    if(env_var_1 == 255) { _res_key_if_0 = n == tempStack.empty(); }
    if(env_var_1 == 256) { _res_key_if_0 = n == tempStack.pop(); }
    if(env_var_1 == 257) { _res_key_if_0 = n == tempStack.top(); }
    if(env_var_1 == 258) { _res_key_if_0 = n == toupper( ele ); }
    if(env_var_1 == 259) { _res_key_if_0 = n == toupper( ip[ele] ); }
    if(env_var_1 == 260) { _res_key_if_0 = n == toupper( ip[n] ); }
    if(env_var_1 == 261) { _res_key_if_0 = n == toupper( n ); }
    if(env_var_1 == 262) { _res_key_if_0 = n == toupper( op[ele] ); }
    if(env_var_1 == 263) { _res_key_if_0 = n == toupper( op[n] ); }
    if(env_var_1 == 264) { _res_key_if_0 = op == ele; }
    if(env_var_1 == 265) { _res_key_if_0 = op == input; }
    if(env_var_1 == 266) { _res_key_if_0 = op == ip; }
    if(env_var_1 == 267) { _res_key_if_0 = op == ip+ele; }
    if(env_var_1 == 268) { _res_key_if_0 = op == ip+n; }
    if(env_var_1 == 269) { _res_key_if_0 = op == ip[ele]; }
    if(env_var_1 == 270) { _res_key_if_0 = op == ip[n]; }
    if(env_var_1 == 271) { _res_key_if_0 = op == isupper( ele ); }
    if(env_var_1 == 272) { _res_key_if_0 = op == isupper( ip[ele] ); }
    if(env_var_1 == 273) { _res_key_if_0 = op == isupper( ip[n] ); }
    if(env_var_1 == 274) { _res_key_if_0 = op == isupper( n ); }
    if(env_var_1 == 275) { _res_key_if_0 = op == isupper( op[ele] ); }
    if(env_var_1 == 276) { _res_key_if_0 = op == isupper( op[n] ); }
    if(env_var_1 == 277) { _res_key_if_0 = op == n; }
    if(env_var_1 == 278) { _res_key_if_0 = op == op; }
    if(env_var_1 == 279) { _res_key_if_0 = op == op+ele; }
    if(env_var_1 == 280) { _res_key_if_0 = op == op+n; }
    if(env_var_1 == 281) { _res_key_if_0 = op == op[ele]; }
    if(env_var_1 == 282) { _res_key_if_0 = op == op[n]; }
    if(env_var_1 == 283) { _res_key_if_0 = op == output; }
    if(env_var_1 == 284) { _res_key_if_0 = op == output.back(); }
    if(env_var_1 == 285) { _res_key_if_0 = op == output.front(); }
    if(env_var_1 == 286) { _res_key_if_0 = op == output.size(); }
    if(env_var_1 == 287) { _res_key_if_0 = op == tempStack; }
    if(env_var_1 == 288) { _res_key_if_0 = op == tempStack.empty(); }
    if(env_var_1 == 289) { _res_key_if_0 = op == tempStack.pop(); }
    if(env_var_1 == 290) { _res_key_if_0 = op == tempStack.top(); }
    if(env_var_1 == 291) { _res_key_if_0 = op == toupper( ele ); }
    if(env_var_1 == 292) { _res_key_if_0 = op == toupper( ip[ele] ); }
    if(env_var_1 == 293) { _res_key_if_0 = op == toupper( ip[n] ); }
    if(env_var_1 == 294) { _res_key_if_0 = op == toupper( n ); }
    if(env_var_1 == 295) { _res_key_if_0 = op == toupper( op[ele] ); }
    if(env_var_1 == 296) { _res_key_if_0 = op == toupper( op[n] ); }
    if(env_var_1 == 297) { _res_key_if_0 = op+ele == ele; }
    if(env_var_1 == 298) { _res_key_if_0 = op+ele == input; }
    if(env_var_1 == 299) { _res_key_if_0 = op+ele == ip; }
    if(env_var_1 == 300) { _res_key_if_0 = op+ele == ip+ele; }
    if(env_var_1 == 301) { _res_key_if_0 = op+ele == ip+n; }
    if(env_var_1 == 302) { _res_key_if_0 = op+ele == ip[ele]; }
    if(env_var_1 == 303) { _res_key_if_0 = op+ele == ip[n]; }
    if(env_var_1 == 304) { _res_key_if_0 = op+ele == isupper( ele ); }
    if(env_var_1 == 305) { _res_key_if_0 = op+ele == isupper( ip[ele] ); }
    if(env_var_1 == 306) { _res_key_if_0 = op+ele == isupper( ip[n] ); }
    if(env_var_1 == 307) { _res_key_if_0 = op+ele == isupper( n ); }
    if(env_var_1 == 308) { _res_key_if_0 = op+ele == isupper( op[ele] ); }
    if(env_var_1 == 309) { _res_key_if_0 = op+ele == isupper( op[n] ); }
    if(env_var_1 == 310) { _res_key_if_0 = op+ele == n; }
    if(env_var_1 == 311) { _res_key_if_0 = op+ele == op; }
    if(env_var_1 == 312) { _res_key_if_0 = op+ele == op+ele; }
    if(env_var_1 == 313) { _res_key_if_0 = op+ele == op+n; }
    if(env_var_1 == 314) { _res_key_if_0 = op+ele == op[ele]; }
    if(env_var_1 == 315) { _res_key_if_0 = op+ele == op[n]; }
    if(env_var_1 == 316) { _res_key_if_0 = op+ele == output; }
    if(env_var_1 == 317) { _res_key_if_0 = op+ele == output.back(); }
    if(env_var_1 == 318) { _res_key_if_0 = op+ele == output.front(); }
    if(env_var_1 == 319) { _res_key_if_0 = op+ele == output.size(); }
    if(env_var_1 == 320) { _res_key_if_0 = op+ele == tempStack; }
    if(env_var_1 == 321) { _res_key_if_0 = op+ele == tempStack.empty(); }
    if(env_var_1 == 322) { _res_key_if_0 = op+ele == tempStack.pop(); }
    if(env_var_1 == 323) { _res_key_if_0 = op+ele == tempStack.top(); }
    if(env_var_1 == 324) { _res_key_if_0 = op+ele == toupper( ele ); }
    if(env_var_1 == 325) { _res_key_if_0 = op+ele == toupper( ip[ele] ); }
    if(env_var_1 == 326) { _res_key_if_0 = op+ele == toupper( ip[n] ); }
    if(env_var_1 == 327) { _res_key_if_0 = op+ele == toupper( n ); }
    if(env_var_1 == 328) { _res_key_if_0 = op+ele == toupper( op[ele] ); }
    if(env_var_1 == 329) { _res_key_if_0 = op+ele == toupper( op[n] ); }
    if(env_var_1 == 330) { _res_key_if_0 = op+n == ele; }
    if(env_var_1 == 331) { _res_key_if_0 = op+n == input; }
    if(env_var_1 == 332) { _res_key_if_0 = op+n == ip; }
    if(env_var_1 == 333) { _res_key_if_0 = op+n == ip+ele; }
    if(env_var_1 == 334) { _res_key_if_0 = op+n == ip+n; }
    if(env_var_1 == 335) { _res_key_if_0 = op+n == ip[ele]; }
    if(env_var_1 == 336) { _res_key_if_0 = op+n == ip[n]; }
    if(env_var_1 == 337) { _res_key_if_0 = op+n == isupper( ele ); }
    if(env_var_1 == 338) { _res_key_if_0 = op+n == isupper( ip[ele] ); }
    if(env_var_1 == 339) { _res_key_if_0 = op+n == isupper( ip[n] ); }
    if(env_var_1 == 340) { _res_key_if_0 = op+n == isupper( n ); }
    if(env_var_1 == 341) { _res_key_if_0 = op+n == isupper( op[ele] ); }
    if(env_var_1 == 342) { _res_key_if_0 = op+n == isupper( op[n] ); }
    if(env_var_1 == 343) { _res_key_if_0 = op+n == n; }
    if(env_var_1 == 344) { _res_key_if_0 = op+n == op; }
    if(env_var_1 == 345) { _res_key_if_0 = op+n == op+ele; }
    if(env_var_1 == 346) { _res_key_if_0 = op+n == op+n; }
    if(env_var_1 == 347) { _res_key_if_0 = op+n == op[ele]; }
    if(env_var_1 == 348) { _res_key_if_0 = op+n == op[n]; }
    if(env_var_1 == 349) { _res_key_if_0 = op+n == output; }
    if(env_var_1 == 350) { _res_key_if_0 = op+n == output.back(); }
    if(env_var_1 == 351) { _res_key_if_0 = op+n == output.front(); }
    if(env_var_1 == 352) { _res_key_if_0 = op+n == output.size(); }
    if(env_var_1 == 353) { _res_key_if_0 = op+n == tempStack; }
    if(env_var_1 == 354) { _res_key_if_0 = op+n == tempStack.empty(); }
    if(env_var_1 == 355) { _res_key_if_0 = op+n == tempStack.pop(); }
    if(env_var_1 == 356) { _res_key_if_0 = op+n == tempStack.top(); }
    if(env_var_1 == 357) { _res_key_if_0 = op+n == toupper( ele ); }
    if(env_var_1 == 358) { _res_key_if_0 = op+n == toupper( ip[ele] ); }
    if(env_var_1 == 359) { _res_key_if_0 = op+n == toupper( ip[n] ); }
    if(env_var_1 == 360) { _res_key_if_0 = op+n == toupper( n ); }
    if(env_var_1 == 361) { _res_key_if_0 = op+n == toupper( op[ele] ); }
    if(env_var_1 == 362) { _res_key_if_0 = op+n == toupper( op[n] ); }
    if(env_var_1 == 363) { _res_key_if_0 = op[ele] == ele; }
    if(env_var_1 == 364) { _res_key_if_0 = op[ele] == input; }
    if(env_var_1 == 365) { _res_key_if_0 = op[ele] == ip; }
    if(env_var_1 == 366) { _res_key_if_0 = op[ele] == ip+ele; }
    if(env_var_1 == 367) { _res_key_if_0 = op[ele] == ip+n; }
    if(env_var_1 == 368) { _res_key_if_0 = op[ele] == ip[ele]; }
    if(env_var_1 == 369) { _res_key_if_0 = op[ele] == ip[n]; }
    if(env_var_1 == 370) { _res_key_if_0 = op[ele] == isupper( ele ); }
    if(env_var_1 == 371) { _res_key_if_0 = op[ele] == isupper( ip[ele] ); }
    if(env_var_1 == 372) { _res_key_if_0 = op[ele] == isupper( ip[n] ); }
    if(env_var_1 == 373) { _res_key_if_0 = op[ele] == isupper( n ); }
    if(env_var_1 == 374) { _res_key_if_0 = op[ele] == isupper( op[ele] ); }
    if(env_var_1 == 375) { _res_key_if_0 = op[ele] == isupper( op[n] ); }
    if(env_var_1 == 376) { _res_key_if_0 = op[ele] == n; }
    if(env_var_1 == 377) { _res_key_if_0 = op[ele] == op; }
    if(env_var_1 == 378) { _res_key_if_0 = op[ele] == op+ele; }
    if(env_var_1 == 379) { _res_key_if_0 = op[ele] == op+n; }
    if(env_var_1 == 380) { _res_key_if_0 = op[ele] == op[ele]; }
    if(env_var_1 == 381) { _res_key_if_0 = op[ele] == op[n]; }
    if(env_var_1 == 382) { _res_key_if_0 = op[ele] == output; }
    if(env_var_1 == 383) { _res_key_if_0 = op[ele] == output.back(); }
    if(env_var_1 == 384) { _res_key_if_0 = op[ele] == output.front(); }
    if(env_var_1 == 385) { _res_key_if_0 = op[ele] == output.size(); }
    if(env_var_1 == 386) { _res_key_if_0 = op[ele] == tempStack; }
    if(env_var_1 == 387) { _res_key_if_0 = op[ele] == tempStack.empty(); }
    if(env_var_1 == 388) { _res_key_if_0 = op[ele] == tempStack.pop(); }
    if(env_var_1 == 389) { _res_key_if_0 = op[ele] == tempStack.top(); }
    if(env_var_1 == 390) { _res_key_if_0 = op[ele] == toupper( ele ); }
    if(env_var_1 == 391) { _res_key_if_0 = op[ele] == toupper( ip[ele] ); }
    if(env_var_1 == 392) { _res_key_if_0 = op[ele] == toupper( ip[n] ); }
    if(env_var_1 == 393) { _res_key_if_0 = op[ele] == toupper( n ); }
    if(env_var_1 == 394) { _res_key_if_0 = op[ele] == toupper( op[ele] ); }
    if(env_var_1 == 395) { _res_key_if_0 = op[ele] == toupper( op[n] ); }
    if(env_var_1 == 396) { _res_key_if_0 = op[n] == ele; }
    if(env_var_1 == 397) { _res_key_if_0 = op[n] == input; }
    if(env_var_1 == 398) { _res_key_if_0 = op[n] == ip; }
    if(env_var_1 == 399) { _res_key_if_0 = op[n] == ip+ele; }
    if(env_var_1 == 400) { _res_key_if_0 = op[n] == ip+n; }
    if(env_var_1 == 401) { _res_key_if_0 = op[n] == ip[ele]; }
    if(env_var_1 == 402) { _res_key_if_0 = op[n] == ip[n]; }
    if(env_var_1 == 403) { _res_key_if_0 = op[n] == isupper( ele ); }
    if(env_var_1 == 404) { _res_key_if_0 = op[n] == isupper( ip[ele] ); }
    if(env_var_1 == 405) { _res_key_if_0 = op[n] == isupper( ip[n] ); }
    if(env_var_1 == 406) { _res_key_if_0 = op[n] == isupper( n ); }
    if(env_var_1 == 407) { _res_key_if_0 = op[n] == isupper( op[ele] ); }
    if(env_var_1 == 408) { _res_key_if_0 = op[n] == isupper( op[n] ); }
    if(env_var_1 == 409) { _res_key_if_0 = op[n] == n; }
    if(env_var_1 == 410) { _res_key_if_0 = op[n] == op; }
    if(env_var_1 == 411) { _res_key_if_0 = op[n] == op+ele; }
    if(env_var_1 == 412) { _res_key_if_0 = op[n] == op+n; }
    if(env_var_1 == 413) { _res_key_if_0 = op[n] == op[ele]; }
    if(env_var_1 == 414) { _res_key_if_0 = op[n] == op[n]; }
    if(env_var_1 == 415) { _res_key_if_0 = op[n] == output; }
    if(env_var_1 == 416) { _res_key_if_0 = op[n] == output.back(); }
    if(env_var_1 == 417) { _res_key_if_0 = op[n] == output.front(); }
    if(env_var_1 == 418) { _res_key_if_0 = op[n] == output.size(); }
    if(env_var_1 == 419) { _res_key_if_0 = op[n] == tempStack; }
    if(env_var_1 == 420) { _res_key_if_0 = op[n] == tempStack.empty(); }
    if(env_var_1 == 421) { _res_key_if_0 = op[n] == tempStack.pop(); }
    if(env_var_1 == 422) { _res_key_if_0 = op[n] == tempStack.top(); }
    if(env_var_1 == 423) { _res_key_if_0 = op[n] == toupper( ele ); }
    if(env_var_1 == 424) { _res_key_if_0 = op[n] == toupper( ip[ele] ); }
    if(env_var_1 == 425) { _res_key_if_0 = op[n] == toupper( ip[n] ); }
    if(env_var_1 == 426) { _res_key_if_0 = op[n] == toupper( n ); }
    if(env_var_1 == 427) { _res_key_if_0 = op[n] == toupper( op[ele] ); }
    if(env_var_1 == 428) { _res_key_if_0 = op[n] == toupper( op[n] ); }
    if(env_var_1 == 429) { _res_key_if_0 = output == ele; }
    if(env_var_1 == 430) { _res_key_if_0 = output == input; }
    if(env_var_1 == 431) { _res_key_if_0 = output == ip; }
    if(env_var_1 == 432) { _res_key_if_0 = output == ip+ele; }
    if(env_var_1 == 433) { _res_key_if_0 = output == ip+n; }
    if(env_var_1 == 434) { _res_key_if_0 = output == ip[ele]; }
    if(env_var_1 == 435) { _res_key_if_0 = output == ip[n]; }
    if(env_var_1 == 436) { _res_key_if_0 = output == isupper( ele ); }
    if(env_var_1 == 437) { _res_key_if_0 = output == isupper( ip[ele] ); }
    if(env_var_1 == 438) { _res_key_if_0 = output == isupper( ip[n] ); }
    if(env_var_1 == 439) { _res_key_if_0 = output == isupper( n ); }
    if(env_var_1 == 440) { _res_key_if_0 = output == isupper( op[ele] ); }
    if(env_var_1 == 441) { _res_key_if_0 = output == isupper( op[n] ); }
    if(env_var_1 == 442) { _res_key_if_0 = output == n; }
    if(env_var_1 == 443) { _res_key_if_0 = output == op; }
    if(env_var_1 == 444) { _res_key_if_0 = output == op+ele; }
    if(env_var_1 == 445) { _res_key_if_0 = output == op+n; }
    if(env_var_1 == 446) { _res_key_if_0 = output == op[ele]; }
    if(env_var_1 == 447) { _res_key_if_0 = output == op[n]; }
    if(env_var_1 == 448) { _res_key_if_0 = output == output; }
    if(env_var_1 == 449) { _res_key_if_0 = output == output.back(); }
    if(env_var_1 == 450) { _res_key_if_0 = output == output.front(); }
    if(env_var_1 == 451) { _res_key_if_0 = output == output.size(); }
    if(env_var_1 == 452) { _res_key_if_0 = output == tempStack; }
    if(env_var_1 == 453) { _res_key_if_0 = output == tempStack.empty(); }
    if(env_var_1 == 454) { _res_key_if_0 = output == tempStack.pop(); }
    if(env_var_1 == 455) { _res_key_if_0 = output == tempStack.top(); }
    if(env_var_1 == 456) { _res_key_if_0 = output == toupper( ele ); }
    if(env_var_1 == 457) { _res_key_if_0 = output == toupper( ip[ele] ); }
    if(env_var_1 == 458) { _res_key_if_0 = output == toupper( ip[n] ); }
    if(env_var_1 == 459) { _res_key_if_0 = output == toupper( n ); }
    if(env_var_1 == 460) { _res_key_if_0 = output == toupper( op[ele] ); }
    if(env_var_1 == 461) { _res_key_if_0 = output == toupper( op[n] ); }
    if(env_var_1 == 462) { _res_key_if_0 = tempStack == ele; }
    if(env_var_1 == 463) { _res_key_if_0 = tempStack == input; }
    if(env_var_1 == 464) { _res_key_if_0 = tempStack == ip; }
    if(env_var_1 == 465) { _res_key_if_0 = tempStack == ip+ele; }
    if(env_var_1 == 466) { _res_key_if_0 = tempStack == ip+n; }
    if(env_var_1 == 467) { _res_key_if_0 = tempStack == ip[ele]; }
    if(env_var_1 == 468) { _res_key_if_0 = tempStack == ip[n]; }
    if(env_var_1 == 469) { _res_key_if_0 = tempStack == isupper( ele ); }
    if(env_var_1 == 470) { _res_key_if_0 = tempStack == isupper( ip[ele] ); }
    if(env_var_1 == 471) { _res_key_if_0 = tempStack == isupper( ip[n] ); }
    if(env_var_1 == 472) { _res_key_if_0 = tempStack == isupper( n ); }
    if(env_var_1 == 473) { _res_key_if_0 = tempStack == isupper( op[ele] ); }
    if(env_var_1 == 474) { _res_key_if_0 = tempStack == isupper( op[n] ); }
    if(env_var_1 == 475) { _res_key_if_0 = tempStack == n; }
    if(env_var_1 == 476) { _res_key_if_0 = tempStack == op; }
    if(env_var_1 == 477) { _res_key_if_0 = tempStack == op+ele; }
    if(env_var_1 == 478) { _res_key_if_0 = tempStack == op+n; }
    if(env_var_1 == 479) { _res_key_if_0 = tempStack == op[ele]; }
    if(env_var_1 == 480) { _res_key_if_0 = tempStack == op[n]; }
    if(env_var_1 == 481) { _res_key_if_0 = tempStack == output; }
    if(env_var_1 == 482) { _res_key_if_0 = tempStack == output.back(); }
    if(env_var_1 == 483) { _res_key_if_0 = tempStack == output.front(); }
    if(env_var_1 == 484) { _res_key_if_0 = tempStack == output.size(); }
    if(env_var_1 == 485) { _res_key_if_0 = tempStack == tempStack; }
    if(env_var_1 == 486) { _res_key_if_0 = tempStack == tempStack.empty(); }
    if(env_var_1 == 487) { _res_key_if_0 = tempStack == tempStack.pop(); }
    if(env_var_1 == 488) { _res_key_if_0 = tempStack == tempStack.top(); }
    if(env_var_1 == 489) { _res_key_if_0 = tempStack == toupper( ele ); }
    if(env_var_1 == 490) { _res_key_if_0 = tempStack == toupper( ip[ele] ); }
    if(env_var_1 == 491) { _res_key_if_0 = tempStack == toupper( ip[n] ); }
    if(env_var_1 == 492) { _res_key_if_0 = tempStack == toupper( n ); }
    if(env_var_1 == 493) { _res_key_if_0 = tempStack == toupper( op[ele] ); }
    if(env_var_1 == 494) { _res_key_if_0 = tempStack == toupper( op[n] ); }
    if ( _res_key_if_0 ) {
      output . pop ( );
      while ( ! tempStack . empty ( ) ) {
        if ( tempStack . top ( ) == output . top ( ) ) {
          tempStack . pop ( );
          output . pop ( );
        }
        else break;
      }
    }
    else tempStack . push ( ele );
  }
  return ( input . empty ( ) && tempStack . empty ( ) );
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,3,3,3,4,5,6,9,18,20,35,39,39,45,50,55,57,61,63,65,72,73,77,77,78,87,88,91,93,95,98},{-86,10,-8,8,-24,-2,-84,-86,-54,50,56,-22,-8,-62,0,-50,-32},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{3,42,88,89,41,71,67,5,84,20,75,36,34,20,31,16,86,89,53,47,57,27,47,93,59,66,40,18,69,36,98,99,81},{-98,-94,-94,-90,-88,-82,-80,-78,-78,-68,-58,-58,-52,-36,-30,-14,-12,-6,-2,-2,2,4,10,14,22,24,26,38,38,46,46,48,50,54,58,60,64,64,66,70,74,74,86,88,96,96},{1,0,1,0,1,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1},{19,37,44,65,72,87},{88},{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1},{5,8,53,60,85,94,77,53,81,54,67,48,56,49,16,1,85,6,55,98,62,36,4,7,64}};
    vector<vector<int>> param1 {{2,5,7,13,16,23,24,25,27,31,31,33,34,35,38,46,49,49,51,52,58,61,62,66,68,71,73,78,91,94,98},{-8,-46,22,-66,-94,-96,70,58,-4,-70,-96,34,-80,-26,-52,52,-76},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{16,61,39,99,71,73,35,47,62,80,1,49,54,35,39,55,7,6,85,84,11,51,38,4,72,10,33,65,64,32,16,99,9},{-92,-92,-80,-72,-72,-72,-70,-68,-64,-56,-40,-38,-34,-24,-10,-8,-8,-2,0,2,4,6,14,14,18,20,34,36,36,38,38,42,48,56,64,70,72,76,76,76,76,78,84,90,94,96},{0,0,1,0,1,0,1,1,1,1,0,0,0,0,1,0,1,1,1,0,0,0},{17,31,39,46,56,88},{-30},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1},{69,37,32,5,84,14,25,9,86,85,30,82,99,92,32,43,79,58,75,90,49,54,95,76,80}};
    vector<int> param2 {23,16,21,19,27,19,4,0,13,12};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
