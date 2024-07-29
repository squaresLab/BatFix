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
int f_gold ( int a [ ], int b [ ], int n, int m ) {
  unordered_map < int, int > countA, countB;
  for ( int i = 0;
  i < n;
  i ++ ) countA [ a [ i ] ] ++;
  for ( int i = 0;
  i < m;
  i ++ ) countB [ b [ i ] ] ++;
  int res = 0;
  for ( auto x : countA ) if ( countB . find ( x . first ) != countB . end ( ) ) res += min ( x . second, countB [ x . first ] );
  return res;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int a[], int b[], int n, int m) {
    map<int, int> countA;
    map<int, int> countB;
    for (int i = 0; i < n; i++)
     if(env_var_0 == 0) { countB.at( a[i] ); }
        if(env_var_0 == 1) { countB.at( a[m] ); }
        if(env_var_0 == 2) { countB.at( a[n] ); }
        if(env_var_0 == 3) { countB.at( b[i] ); }
        if(env_var_0 == 4) { countB.at( b[m] ); }
        if(env_var_0 == 5) { countB.at( b[n] ); }
        if(env_var_0 == 6) { countB.at( i ); }
        if(env_var_0 == 7) { countB.at( m ); }
        if(env_var_0 == 8) { countB.at( n ); }
        if(env_var_0 == 9) { countB.count( a[i] ); }
        if(env_var_0 == 10) { countB.count( a[m] ); }
        if(env_var_0 == 11) { countB.count( a[n] ); }
        if(env_var_0 == 12) { countB.count( b[i] ); }
        if(env_var_0 == 13) { countB.count( b[m] ); }
        if(env_var_0 == 14) { countB.count( b[n] ); }
        if(env_var_0 == 15) { countB.count( i ); }
        if(env_var_0 == 16) { countB.count( m ); }
        if(env_var_0 == 17) { countB.count( n ); }
        if(env_var_0 == 18) { countB.equal_range( a[i] ); }
        if(env_var_0 == 19) { countB.equal_range( a[m] ); }
        if(env_var_0 == 20) { countB.equal_range( a[n] ); }
        if(env_var_0 == 21) { countB.equal_range( b[i] ); }
        if(env_var_0 == 22) { countB.equal_range( b[m] ); }
        if(env_var_0 == 23) { countB.equal_range( b[n] ); }
        if(env_var_0 == 24) { countB.equal_range( i ); }
        if(env_var_0 == 25) { countB.equal_range( m ); }
        if(env_var_0 == 26) { countB.equal_range( n ); }
        if(env_var_0 == 27) { countB.erase( a[i] ); }
        if(env_var_0 == 28) { countB.erase( a[m] ); }
        if(env_var_0 == 29) { countB.erase( a[n] ); }
        if(env_var_0 == 30) { countB.erase( b[i] ); }
        if(env_var_0 == 31) { countB.erase( b[m] ); }
        if(env_var_0 == 32) { countB.erase( b[n] ); }
        if(env_var_0 == 33) { countB.erase( i ); }
        if(env_var_0 == 34) { countB.erase( m ); }
        if(env_var_0 == 35) { countB.erase( n ); }
        if(env_var_0 == 36) { countB.find( a[i] ); }
        if(env_var_0 == 37) { countB.find( a[m] ); }
        if(env_var_0 == 38) { countB.find( a[n] ); }
        if(env_var_0 == 39) { countB.find( b[i] ); }
        if(env_var_0 == 40) { countB.find( b[m] ); }
        if(env_var_0 == 41) { countB.find( b[n] ); }
        if(env_var_0 == 42) { countB.find( i ); }
        if(env_var_0 == 43) { countB.find( m ); }
        if(env_var_0 == 44) { countB.find( n ); }
        if(env_var_0 == 45) { countB.lower_bound( a[i] ); }
        if(env_var_0 == 46) { countB.lower_bound( a[m] ); }
        if(env_var_0 == 47) { countB.lower_bound( a[n] ); }
        if(env_var_0 == 48) { countB.lower_bound( b[i] ); }
        if(env_var_0 == 49) { countB.lower_bound( b[m] ); }
        if(env_var_0 == 50) { countB.lower_bound( b[n] ); }
        if(env_var_0 == 51) { countB.lower_bound( i ); }
        if(env_var_0 == 52) { countB.lower_bound( m ); }
        if(env_var_0 == 53) { countB.lower_bound( n ); }
        if(env_var_0 == 54) { countB.swap( countA ); }
        if(env_var_0 == 55) { countB.swap( countB ); }
        if(env_var_0 == 56) { countB.upper_bound( a[i] ); }
        if(env_var_0 == 57) { countB.upper_bound( a[m] ); }
        if(env_var_0 == 58) { countB.upper_bound( a[n] ); }
        if(env_var_0 == 59) { countB.upper_bound( b[i] ); }
        if(env_var_0 == 60) { countB.upper_bound( b[m] ); }
        if(env_var_0 == 61) { countB.upper_bound( b[n] ); }
        if(env_var_0 == 62) { countB.upper_bound( i ); }
        if(env_var_0 == 63) { countB.upper_bound( m ); }
        if(env_var_0 == 64) { countB.upper_bound( n ); }
        if(env_var_0 == 65) { isupper( a[i] ); }
        if(env_var_0 == 66) { isupper( a[m] ); }
        if(env_var_0 == 67) { isupper( a[n] ); }
        if(env_var_0 == 68) { isupper( b[i] ); }
        if(env_var_0 == 69) { isupper( b[m] ); }
        if(env_var_0 == 70) { isupper( b[n] ); }
        if(env_var_0 == 71) { isupper( i ); }
        if(env_var_0 == 72) { isupper( m ); }
        if(env_var_0 == 73) { isupper( n ); }
        if(env_var_0 == 74) { std::max( a[i],a[i] ); }
        if(env_var_0 == 75) { std::max( a[i],a[m] ); }
        if(env_var_0 == 76) { std::max( a[i],a[n] ); }
        if(env_var_0 == 77) { std::max( a[i],b[i] ); }
        if(env_var_0 == 78) { std::max( a[i],b[m] ); }
        if(env_var_0 == 79) { std::max( a[i],b[n] ); }
        if(env_var_0 == 80) { std::max( a[i],i ); }
        if(env_var_0 == 81) { std::max( a[i],m ); }
        if(env_var_0 == 82) { std::max( a[i],n ); }
        if(env_var_0 == 83) { std::max( a[m],a[i] ); }
        if(env_var_0 == 84) { std::max( a[m],a[m] ); }
        if(env_var_0 == 85) { std::max( a[m],a[n] ); }
        if(env_var_0 == 86) { std::max( a[m],b[i] ); }
        if(env_var_0 == 87) { std::max( a[m],b[m] ); }
        if(env_var_0 == 88) { std::max( a[m],b[n] ); }
        if(env_var_0 == 89) { std::max( a[m],i ); }
        if(env_var_0 == 90) { std::max( a[m],m ); }
        if(env_var_0 == 91) { std::max( a[m],n ); }
        if(env_var_0 == 92) { std::max( a[n],a[i] ); }
        if(env_var_0 == 93) { std::max( a[n],a[m] ); }
        if(env_var_0 == 94) { std::max( a[n],a[n] ); }
        if(env_var_0 == 95) { std::max( a[n],b[i] ); }
        if(env_var_0 == 96) { std::max( a[n],b[m] ); }
        if(env_var_0 == 97) { std::max( a[n],b[n] ); }
        if(env_var_0 == 98) { std::max( a[n],i ); }
        if(env_var_0 == 99) { std::max( a[n],m ); }
        if(env_var_0 == 100) { std::max( a[n],n ); }
        if(env_var_0 == 101) { std::max( b[i],a[i] ); }
        if(env_var_0 == 102) { std::max( b[i],a[m] ); }
        if(env_var_0 == 103) { std::max( b[i],a[n] ); }
        if(env_var_0 == 104) { std::max( b[i],b[i] ); }
        if(env_var_0 == 105) { std::max( b[i],b[m] ); }
        if(env_var_0 == 106) { std::max( b[i],b[n] ); }
        if(env_var_0 == 107) { std::max( b[i],i ); }
        if(env_var_0 == 108) { std::max( b[i],m ); }
        if(env_var_0 == 109) { std::max( b[i],n ); }
        if(env_var_0 == 110) { std::max( b[m],a[i] ); }
        if(env_var_0 == 111) { std::max( b[m],a[m] ); }
        if(env_var_0 == 112) { std::max( b[m],a[n] ); }
        if(env_var_0 == 113) { std::max( b[m],b[i] ); }
        if(env_var_0 == 114) { std::max( b[m],b[m] ); }
        if(env_var_0 == 115) { std::max( b[m],b[n] ); }
        if(env_var_0 == 116) { std::max( b[m],i ); }
        if(env_var_0 == 117) { std::max( b[m],m ); }
        if(env_var_0 == 118) { std::max( b[m],n ); }
        if(env_var_0 == 119) { std::max( b[n],a[i] ); }
        if(env_var_0 == 120) { std::max( b[n],a[m] ); }
        if(env_var_0 == 121) { std::max( b[n],a[n] ); }
        if(env_var_0 == 122) { std::max( b[n],b[i] ); }
        if(env_var_0 == 123) { std::max( b[n],b[m] ); }
        if(env_var_0 == 124) { std::max( b[n],b[n] ); }
        if(env_var_0 == 125) { std::max( b[n],i ); }
        if(env_var_0 == 126) { std::max( b[n],m ); }
        if(env_var_0 == 127) { std::max( b[n],n ); }
        if(env_var_0 == 128) { std::max( i,a[i] ); }
        if(env_var_0 == 129) { std::max( i,a[m] ); }
        if(env_var_0 == 130) { std::max( i,a[n] ); }
        if(env_var_0 == 131) { std::max( i,b[i] ); }
        if(env_var_0 == 132) { std::max( i,b[m] ); }
        if(env_var_0 == 133) { std::max( i,b[n] ); }
        if(env_var_0 == 134) { std::max( i,i ); }
        if(env_var_0 == 135) { std::max( i,m ); }
        if(env_var_0 == 136) { std::max( i,n ); }
        if(env_var_0 == 137) { std::max( m,a[i] ); }
        if(env_var_0 == 138) { std::max( m,a[m] ); }
        if(env_var_0 == 139) { std::max( m,a[n] ); }
        if(env_var_0 == 140) { std::max( m,b[i] ); }
        if(env_var_0 == 141) { std::max( m,b[m] ); }
        if(env_var_0 == 142) { std::max( m,b[n] ); }
        if(env_var_0 == 143) { std::max( m,i ); }
        if(env_var_0 == 144) { std::max( m,m ); }
        if(env_var_0 == 145) { std::max( m,n ); }
        if(env_var_0 == 146) { std::max( n,a[i] ); }
        if(env_var_0 == 147) { std::max( n,a[m] ); }
        if(env_var_0 == 148) { std::max( n,a[n] ); }
        if(env_var_0 == 149) { std::max( n,b[i] ); }
        if(env_var_0 == 150) { std::max( n,b[m] ); }
        if(env_var_0 == 151) { std::max( n,b[n] ); }
        if(env_var_0 == 152) { std::max( n,i ); }
        if(env_var_0 == 153) { std::max( n,m ); }
        if(env_var_0 == 154) { std::max( n,n ); }
        if(env_var_0 == 155) { std::min( a[i],a[i] ); }
        if(env_var_0 == 156) { std::min( a[i],a[m] ); }
        if(env_var_0 == 157) { std::min( a[i],a[n] ); }
        if(env_var_0 == 158) { std::min( a[i],b[i] ); }
        if(env_var_0 == 159) { std::min( a[i],b[m] ); }
        if(env_var_0 == 160) { std::min( a[i],b[n] ); }
        if(env_var_0 == 161) { std::min( a[i],i ); }
        if(env_var_0 == 162) { std::min( a[i],m ); }
        if(env_var_0 == 163) { std::min( a[i],n ); }
        if(env_var_0 == 164) { std::min( a[m],a[i] ); }
        if(env_var_0 == 165) { std::min( a[m],a[m] ); }
        if(env_var_0 == 166) { std::min( a[m],a[n] ); }
        if(env_var_0 == 167) { std::min( a[m],b[i] ); }
        if(env_var_0 == 168) { std::min( a[m],b[m] ); }
        if(env_var_0 == 169) { std::min( a[m],b[n] ); }
        if(env_var_0 == 170) { std::min( a[m],i ); }
        if(env_var_0 == 171) { std::min( a[m],m ); }
        if(env_var_0 == 172) { std::min( a[m],n ); }
        if(env_var_0 == 173) { std::min( a[n],a[i] ); }
        if(env_var_0 == 174) { std::min( a[n],a[m] ); }
        if(env_var_0 == 175) { std::min( a[n],a[n] ); }
        if(env_var_0 == 176) { std::min( a[n],b[i] ); }
        if(env_var_0 == 177) { std::min( a[n],b[m] ); }
        if(env_var_0 == 178) { std::min( a[n],b[n] ); }
        if(env_var_0 == 179) { std::min( a[n],i ); }
        if(env_var_0 == 180) { std::min( a[n],m ); }
        if(env_var_0 == 181) { std::min( a[n],n ); }
        if(env_var_0 == 182) { std::min( b[i],a[i] ); }
        if(env_var_0 == 183) { std::min( b[i],a[m] ); }
        if(env_var_0 == 184) { std::min( b[i],a[n] ); }
        if(env_var_0 == 185) { std::min( b[i],b[i] ); }
        if(env_var_0 == 186) { std::min( b[i],b[m] ); }
        if(env_var_0 == 187) { std::min( b[i],b[n] ); }
        if(env_var_0 == 188) { std::min( b[i],i ); }
        if(env_var_0 == 189) { std::min( b[i],m ); }
        if(env_var_0 == 190) { std::min( b[i],n ); }
        if(env_var_0 == 191) { std::min( b[m],a[i] ); }
        if(env_var_0 == 192) { std::min( b[m],a[m] ); }
        if(env_var_0 == 193) { std::min( b[m],a[n] ); }
        if(env_var_0 == 194) { std::min( b[m],b[i] ); }
        if(env_var_0 == 195) { std::min( b[m],b[m] ); }
        if(env_var_0 == 196) { std::min( b[m],b[n] ); }
        if(env_var_0 == 197) { std::min( b[m],i ); }
        if(env_var_0 == 198) { std::min( b[m],m ); }
        if(env_var_0 == 199) { std::min( b[m],n ); }
        if(env_var_0 == 200) { std::min( b[n],a[i] ); }
        if(env_var_0 == 201) { std::min( b[n],a[m] ); }
        if(env_var_0 == 202) { std::min( b[n],a[n] ); }
        if(env_var_0 == 203) { std::min( b[n],b[i] ); }
        if(env_var_0 == 204) { std::min( b[n],b[m] ); }
        if(env_var_0 == 205) { std::min( b[n],b[n] ); }
        if(env_var_0 == 206) { std::min( b[n],i ); }
        if(env_var_0 == 207) { std::min( b[n],m ); }
        if(env_var_0 == 208) { std::min( b[n],n ); }
        if(env_var_0 == 209) { std::min( i,a[i] ); }
        if(env_var_0 == 210) { std::min( i,a[m] ); }
        if(env_var_0 == 211) { std::min( i,a[n] ); }
        if(env_var_0 == 212) { std::min( i,b[i] ); }
        if(env_var_0 == 213) { std::min( i,b[m] ); }
        if(env_var_0 == 214) { std::min( i,b[n] ); }
        if(env_var_0 == 215) { std::min( i,i ); }
        if(env_var_0 == 216) { std::min( i,m ); }
        if(env_var_0 == 217) { std::min( i,n ); }
        if(env_var_0 == 218) { std::min( m,a[i] ); }
        if(env_var_0 == 219) { std::min( m,a[m] ); }
        if(env_var_0 == 220) { std::min( m,a[n] ); }
        if(env_var_0 == 221) { std::min( m,b[i] ); }
        if(env_var_0 == 222) { std::min( m,b[m] ); }
        if(env_var_0 == 223) { std::min( m,b[n] ); }
        if(env_var_0 == 224) { std::min( m,i ); }
        if(env_var_0 == 225) { std::min( m,m ); }
        if(env_var_0 == 226) { std::min( m,n ); }
        if(env_var_0 == 227) { std::min( n,a[i] ); }
        if(env_var_0 == 228) { std::min( n,a[m] ); }
        if(env_var_0 == 229) { std::min( n,a[n] ); }
        if(env_var_0 == 230) { std::min( n,b[i] ); }
        if(env_var_0 == 231) { std::min( n,b[m] ); }
        if(env_var_0 == 232) { std::min( n,b[n] ); }
        if(env_var_0 == 233) { std::min( n,i ); }
        if(env_var_0 == 234) { std::min( n,m ); }
        if(env_var_0 == 235) { std::min( n,n ); }
        if(env_var_0 == 236) { toupper( a[i] ); }
        if(env_var_0 == 237) { toupper( a[m] ); }
        if(env_var_0 == 238) { toupper( a[n] ); }
        if(env_var_0 == 239) { toupper( b[i] ); }
        if(env_var_0 == 240) { toupper( b[m] ); }
        if(env_var_0 == 241) { toupper( b[n] ); }
        if(env_var_0 == 242) { toupper( i ); }
        if(env_var_0 == 243) { toupper( m ); }
        if(env_var_0 == 244) { toupper( n ); }
           ;
    for (int i = 0; i < n; i++)
     if(env_var_1 == 0) { a = 0; }
        if(env_var_1 == 1) { a+i = 0; }
        if(env_var_1 == 2) { a+m = 0; }
        if(env_var_1 == 3) { a+n = 0; }
        if(env_var_1 == 4) { a[i] = 0; }
        if(env_var_1 == 5) { a[m] = 0; }
        if(env_var_1 == 6) { a[n] = 0; }
        if(env_var_1 == 7) { b = 0; }
        if(env_var_1 == 8) { b+i = 0; }
        if(env_var_1 == 9) { b+m = 0; }
        if(env_var_1 == 10) { b+n = 0; }
        if(env_var_1 == 11) { b[i] = 0; }
        if(env_var_1 == 12) { b[m] = 0; }
        if(env_var_1 == 13) { b[n] = 0; }
        if(env_var_1 == 14) { countA = 0; }
        if(env_var_1 == 15) { countA.begin() = 0; }
        if(env_var_1 == 16) { countA.end() = 0; }
        if(env_var_1 == 17) { countB = 0; }
        if(env_var_1 == 18) { countB.begin() = 0; }
        if(env_var_1 == 19) { countB.end() = 0; }
        if(env_var_1 == 20) { i = 0; }
        if(env_var_1 == 21) { m = 0; }
        if(env_var_1 == 22) { n = 0; }
           ;
    int res = 0;
    for (int x : countA) {
        if (countB.count(x) > 0)
            res += min(countA[x], countB[x]);
    }
    return res;
}






int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,7,10,12,12,24,29,38,45,51,53,54,59,68,72,73,85,86,88,92,92,95},{-6,48,-70,14,-86,56,80,-64,64,-88,-14,78,14,-18,52,2,22,88},{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},{10,93,2,16,36,49,36,86,6,99,95,2},{-98,-96,-80,-64,-42,-30,-6,10,62,66,82},{1,1,0,1,1},{7,11,13,15,21,33,36,39,66,99},{-40},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{79,91,31,16,28,45,37,43,73,73,76,28,71,60,64,60,99,36,47,38,65,34,22,94,84,51,72,45,71,2}};
    vector<vector<int>> param1 {{7,9,17,23,25,26,29,32,35,56,56,58,59,59,62,63,72,82,85,86,95,97},{-62,-58,60,-30,42,8,66,-48,-18,64,-76,-90,-48,-90,-24,64,-88,-98},{0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{99,28,7,21,62,89,82,41,43,77,8,14},{-62,-50,-42,24,44,46,52,54,60,72,72},{1,1,1,0,0},{23,36,42,44,62,65,70,78,82,89},{-98},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{58,94,12,27,98,38,75,20,94,43,32,90,23,41,88,2,62,96,53,57,48,79,6,16,11,46,73,57,67,7}};
    vector<int> param2 {15,15,10,6,9,4,9,0,31,18};
    vector<int> param3 {13,9,10,10,6,2,9,0,26,18};
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
