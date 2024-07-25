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
int f_filled(std::string a, std::string b, int n, int m) {
    unordered_map<char, int> countA;
    unordered_map<char, int> countB;
    for (int i = 0; i < n; i++) {
       if(env_var_0 == 0) { b.__append_default_init( a[i] ); }
        if(env_var_0 == 1) { b.__append_default_init( a[m] ); }
        if(env_var_0 == 2) { b.__append_default_init( a[n] ); }
        if(env_var_0 == 3) { b.__append_default_init( b[i] ); }
        if(env_var_0 == 4) { b.__append_default_init( b[m] ); }
        if(env_var_0 == 5) { b.__append_default_init( b[n] ); }
        if(env_var_0 == 6) { b.__append_default_init( i ); }
        if(env_var_0 == 7) { b.__append_default_init( m ); }
        if(env_var_0 == 8) { b.__append_default_init( n ); }
        if(env_var_0 == 9) { b.__resize_default_init( a[i] ); }
        if(env_var_0 == 10) { b.__resize_default_init( a[m] ); }
        if(env_var_0 == 11) { b.__resize_default_init( a[n] ); }
        if(env_var_0 == 12) { b.__resize_default_init( b[i] ); }
        if(env_var_0 == 13) { b.__resize_default_init( b[m] ); }
        if(env_var_0 == 14) { b.__resize_default_init( b[n] ); }
        if(env_var_0 == 15) { b.__resize_default_init( i ); }
        if(env_var_0 == 16) { b.__resize_default_init( m ); }
        if(env_var_0 == 17) { b.__resize_default_init( n ); }
        if(env_var_0 == 18) { b.__shrink_or_extend( a[i] ); }
        if(env_var_0 == 19) { b.__shrink_or_extend( a[m] ); }
        if(env_var_0 == 20) { b.__shrink_or_extend( a[n] ); }
        if(env_var_0 == 21) { b.__shrink_or_extend( b[i] ); }
        if(env_var_0 == 22) { b.__shrink_or_extend( b[m] ); }
        if(env_var_0 == 23) { b.__shrink_or_extend( b[n] ); }
        if(env_var_0 == 24) { b.__shrink_or_extend( i ); }
        if(env_var_0 == 25) { b.__shrink_or_extend( m ); }
        if(env_var_0 == 26) { b.__shrink_or_extend( n ); }
        if(env_var_0 == 27) { b.append( a ); }
        if(env_var_0 == 28) { b.append( b ); }
        if(env_var_0 == 29) { b.assign( a ); }
        if(env_var_0 == 30) { b.assign( b ); }
        if(env_var_0 == 31) { b.at( a[i] ); }
        if(env_var_0 == 32) { b.at( a[m] ); }
        if(env_var_0 == 33) { b.at( a[n] ); }
        if(env_var_0 == 34) { b.at( b[i] ); }
        if(env_var_0 == 35) { b.at( b[m] ); }
        if(env_var_0 == 36) { b.at( b[n] ); }
        if(env_var_0 == 37) { b.at( i ); }
        if(env_var_0 == 38) { b.at( m ); }
        if(env_var_0 == 39) { b.at( n ); }
        if(env_var_0 == 40) { b.compare( a ); }
        if(env_var_0 == 41) { b.compare( b ); }
        if(env_var_0 == 42) { b.push_back( a[i] ); }
        if(env_var_0 == 43) { b.push_back( a[m] ); }
        if(env_var_0 == 44) { b.push_back( a[n] ); }
        if(env_var_0 == 45) { b.push_back( b[i] ); }
        if(env_var_0 == 46) { b.push_back( b[m] ); }
        if(env_var_0 == 47) { b.push_back( b[n] ); }
        if(env_var_0 == 48) { b.push_back( i ); }
        if(env_var_0 == 49) { b.push_back( m ); }
        if(env_var_0 == 50) { b.push_back( n ); }
        if(env_var_0 == 51) { b.reserve( a[i] ); }
        if(env_var_0 == 52) { b.reserve( a[m] ); }
        if(env_var_0 == 53) { b.reserve( a[n] ); }
        if(env_var_0 == 54) { b.reserve( b[i] ); }
        if(env_var_0 == 55) { b.reserve( b[m] ); }
        if(env_var_0 == 56) { b.reserve( b[n] ); }
        if(env_var_0 == 57) { b.reserve( i ); }
        if(env_var_0 == 58) { b.reserve( m ); }
        if(env_var_0 == 59) { b.reserve( n ); }
        if(env_var_0 == 60) { b.resize( a[i] ); }
        if(env_var_0 == 61) { b.resize( a[m] ); }
        if(env_var_0 == 62) { b.resize( a[n] ); }
        if(env_var_0 == 63) { b.resize( b[i] ); }
        if(env_var_0 == 64) { b.resize( b[m] ); }
        if(env_var_0 == 65) { b.resize( b[n] ); }
        if(env_var_0 == 66) { b.resize( i ); }
        if(env_var_0 == 67) { b.resize( m ); }
        if(env_var_0 == 68) { b.resize( n ); }
        if(env_var_0 == 69) { b.swap( a ); }
        if(env_var_0 == 70) { b.swap( b ); }
        if(env_var_0 == 71) { countB.at( a[i] ); }
        if(env_var_0 == 72) { countB.at( a[m] ); }
        if(env_var_0 == 73) { countB.at( a[n] ); }
        if(env_var_0 == 74) { countB.at( b[i] ); }
        if(env_var_0 == 75) { countB.at( b[m] ); }
        if(env_var_0 == 76) { countB.at( b[n] ); }
        if(env_var_0 == 77) { countB.at( i ); }
        if(env_var_0 == 78) { countB.at( m ); }
        if(env_var_0 == 79) { countB.at( n ); }
        if(env_var_0 == 80) { countB.begin( a[i] ); }
        if(env_var_0 == 81) { countB.begin( a[m] ); }
        if(env_var_0 == 82) { countB.begin( a[n] ); }
        if(env_var_0 == 83) { countB.begin( b[i] ); }
        if(env_var_0 == 84) { countB.begin( b[m] ); }
        if(env_var_0 == 85) { countB.begin( b[n] ); }
        if(env_var_0 == 86) { countB.begin( i ); }
        if(env_var_0 == 87) { countB.begin( m ); }
        if(env_var_0 == 88) { countB.begin( n ); }
        if(env_var_0 == 89) { countB.bucket( a[i] ); }
        if(env_var_0 == 90) { countB.bucket( a[m] ); }
        if(env_var_0 == 91) { countB.bucket( a[n] ); }
        if(env_var_0 == 92) { countB.bucket( b[i] ); }
        if(env_var_0 == 93) { countB.bucket( b[m] ); }
        if(env_var_0 == 94) { countB.bucket( b[n] ); }
        if(env_var_0 == 95) { countB.bucket( i ); }
        if(env_var_0 == 96) { countB.bucket( m ); }
        if(env_var_0 == 97) { countB.bucket( n ); }
        if(env_var_0 == 98) { countB.bucket_size( a[i] ); }
        if(env_var_0 == 99) { countB.bucket_size( a[m] ); }
        if(env_var_0 == 100) { countB.bucket_size( a[n] ); }
        if(env_var_0 == 101) { countB.bucket_size( b[i] ); }
        if(env_var_0 == 102) { countB.bucket_size( b[m] ); }
        if(env_var_0 == 103) { countB.bucket_size( b[n] ); }
        if(env_var_0 == 104) { countB.bucket_size( i ); }
        if(env_var_0 == 105) { countB.bucket_size( m ); }
        if(env_var_0 == 106) { countB.bucket_size( n ); }
        if(env_var_0 == 107) { countB.cbegin( a[i] ); }
        if(env_var_0 == 108) { countB.cbegin( a[m] ); }
        if(env_var_0 == 109) { countB.cbegin( a[n] ); }
        if(env_var_0 == 110) { countB.cbegin( b[i] ); }
        if(env_var_0 == 111) { countB.cbegin( b[m] ); }
        if(env_var_0 == 112) { countB.cbegin( b[n] ); }
        if(env_var_0 == 113) { countB.cbegin( i ); }
        if(env_var_0 == 114) { countB.cbegin( m ); }
        if(env_var_0 == 115) { countB.cbegin( n ); }
        if(env_var_0 == 116) { countB.cend( a[i] ); }
        if(env_var_0 == 117) { countB.cend( a[m] ); }
        if(env_var_0 == 118) { countB.cend( a[n] ); }
        if(env_var_0 == 119) { countB.cend( b[i] ); }
        if(env_var_0 == 120) { countB.cend( b[m] ); }
        if(env_var_0 == 121) { countB.cend( b[n] ); }
        if(env_var_0 == 122) { countB.cend( i ); }
        if(env_var_0 == 123) { countB.cend( m ); }
        if(env_var_0 == 124) { countB.cend( n ); }
        if(env_var_0 == 125) { countB.count( a[i] ); }
        if(env_var_0 == 126) { countB.count( a[m] ); }
        if(env_var_0 == 127) { countB.count( a[n] ); }
        if(env_var_0 == 128) { countB.count( b[i] ); }
        if(env_var_0 == 129) { countB.count( b[m] ); }
        if(env_var_0 == 130) { countB.count( b[n] ); }
        if(env_var_0 == 131) { countB.count( i ); }
        if(env_var_0 == 132) { countB.count( m ); }
        if(env_var_0 == 133) { countB.count( n ); }
        if(env_var_0 == 134) { countB.end( a[i] ); }
        if(env_var_0 == 135) { countB.end( a[m] ); }
        if(env_var_0 == 136) { countB.end( a[n] ); }
        if(env_var_0 == 137) { countB.end( b[i] ); }
        if(env_var_0 == 138) { countB.end( b[m] ); }
        if(env_var_0 == 139) { countB.end( b[n] ); }
        if(env_var_0 == 140) { countB.end( i ); }
        if(env_var_0 == 141) { countB.end( m ); }
        if(env_var_0 == 142) { countB.end( n ); }
        if(env_var_0 == 143) { countB.equal_range( a[i] ); }
        if(env_var_0 == 144) { countB.equal_range( a[m] ); }
        if(env_var_0 == 145) { countB.equal_range( a[n] ); }
        if(env_var_0 == 146) { countB.equal_range( b[i] ); }
        if(env_var_0 == 147) { countB.equal_range( b[m] ); }
        if(env_var_0 == 148) { countB.equal_range( b[n] ); }
        if(env_var_0 == 149) { countB.equal_range( i ); }
        if(env_var_0 == 150) { countB.equal_range( m ); }
        if(env_var_0 == 151) { countB.equal_range( n ); }
        if(env_var_0 == 152) { countB.erase( a[i] ); }
        if(env_var_0 == 153) { countB.erase( a[m] ); }
        if(env_var_0 == 154) { countB.erase( a[n] ); }
        if(env_var_0 == 155) { countB.erase( b[i] ); }
        if(env_var_0 == 156) { countB.erase( b[m] ); }
        if(env_var_0 == 157) { countB.erase( b[n] ); }
        if(env_var_0 == 158) { countB.erase( i ); }
        if(env_var_0 == 159) { countB.erase( m ); }
        if(env_var_0 == 160) { countB.erase( n ); }
        if(env_var_0 == 161) { countB.find( a[i] ); }
        if(env_var_0 == 162) { countB.find( a[m] ); }
        if(env_var_0 == 163) { countB.find( a[n] ); }
        if(env_var_0 == 164) { countB.find( b[i] ); }
        if(env_var_0 == 165) { countB.find( b[m] ); }
        if(env_var_0 == 166) { countB.find( b[n] ); }
        if(env_var_0 == 167) { countB.find( i ); }
        if(env_var_0 == 168) { countB.find( m ); }
        if(env_var_0 == 169) { countB.find( n ); }
        if(env_var_0 == 170) { countB.insert(); }
        if(env_var_0 == 171) { countB.max_load_factor( a[i] ); }
        if(env_var_0 == 172) { countB.max_load_factor( a[m] ); }
        if(env_var_0 == 173) { countB.max_load_factor( a[n] ); }
        if(env_var_0 == 174) { countB.max_load_factor( b[i] ); }
        if(env_var_0 == 175) { countB.max_load_factor( b[m] ); }
        if(env_var_0 == 176) { countB.max_load_factor( b[n] ); }
        if(env_var_0 == 177) { countB.max_load_factor( i ); }
        if(env_var_0 == 178) { countB.max_load_factor( m ); }
        if(env_var_0 == 179) { countB.max_load_factor( n ); }
        if(env_var_0 == 180) { countB.rehash( a[i] ); }
        if(env_var_0 == 181) { countB.rehash( a[m] ); }
        if(env_var_0 == 182) { countB.rehash( a[n] ); }
        if(env_var_0 == 183) { countB.rehash( b[i] ); }
        if(env_var_0 == 184) { countB.rehash( b[m] ); }
        if(env_var_0 == 185) { countB.rehash( b[n] ); }
        if(env_var_0 == 186) { countB.rehash( i ); }
        if(env_var_0 == 187) { countB.rehash( m ); }
        if(env_var_0 == 188) { countB.rehash( n ); }
        if(env_var_0 == 189) { countB.reserve( a[i] ); }
        if(env_var_0 == 190) { countB.reserve( a[m] ); }
        if(env_var_0 == 191) { countB.reserve( a[n] ); }
        if(env_var_0 == 192) { countB.reserve( b[i] ); }
        if(env_var_0 == 193) { countB.reserve( b[m] ); }
        if(env_var_0 == 194) { countB.reserve( b[n] ); }
        if(env_var_0 == 195) { countB.reserve( i ); }
        if(env_var_0 == 196) { countB.reserve( m ); }
        if(env_var_0 == 197) { countB.reserve( n ); }
        if(env_var_0 == 198) { countB.swap( countA ); }
        if(env_var_0 == 199) { countB.swap( countB ); }
        if(env_var_0 == 200) { isupper( a[i] ); }
        if(env_var_0 == 201) { isupper( a[m] ); }
        if(env_var_0 == 202) { isupper( a[n] ); }
        if(env_var_0 == 203) { isupper( b[i] ); }
        if(env_var_0 == 204) { isupper( b[m] ); }
        if(env_var_0 == 205) { isupper( b[n] ); }
        if(env_var_0 == 206) { isupper( i ); }
        if(env_var_0 == 207) { isupper( m ); }
        if(env_var_0 == 208) { isupper( n ); }
        if(env_var_0 == 209) { std::max( a[i],a[i] ); }
        if(env_var_0 == 210) { std::max( a[i],a[m] ); }
        if(env_var_0 == 211) { std::max( a[i],a[n] ); }
        if(env_var_0 == 212) { std::max( a[i],b[i] ); }
        if(env_var_0 == 213) { std::max( a[i],b[m] ); }
        if(env_var_0 == 214) { std::max( a[i],b[n] ); }
        if(env_var_0 == 215) { std::max( a[i],i ); }
        if(env_var_0 == 216) { std::max( a[i],m ); }
        if(env_var_0 == 217) { std::max( a[i],n ); }
        if(env_var_0 == 218) { std::max( a[m],a[i] ); }
        if(env_var_0 == 219) { std::max( a[m],a[m] ); }
        if(env_var_0 == 220) { std::max( a[m],a[n] ); }
        if(env_var_0 == 221) { std::max( a[m],b[i] ); }
        if(env_var_0 == 222) { std::max( a[m],b[m] ); }
        if(env_var_0 == 223) { std::max( a[m],b[n] ); }
        if(env_var_0 == 224) { std::max( a[m],i ); }
        if(env_var_0 == 225) { std::max( a[m],m ); }
        if(env_var_0 == 226) { std::max( a[m],n ); }
        if(env_var_0 == 227) { std::max( a[n],a[i] ); }
        if(env_var_0 == 228) { std::max( a[n],a[m] ); }
        if(env_var_0 == 229) { std::max( a[n],a[n] ); }
        if(env_var_0 == 230) { std::max( a[n],b[i] ); }
        if(env_var_0 == 231) { std::max( a[n],b[m] ); }
        if(env_var_0 == 232) { std::max( a[n],b[n] ); }
        if(env_var_0 == 233) { std::max( a[n],i ); }
        if(env_var_0 == 234) { std::max( a[n],m ); }
        if(env_var_0 == 235) { std::max( a[n],n ); }
        if(env_var_0 == 236) { std::max( b[i],a[i] ); }
        if(env_var_0 == 237) { std::max( b[i],a[m] ); }
        if(env_var_0 == 238) { std::max( b[i],a[n] ); }
        if(env_var_0 == 239) { std::max( b[i],b[i] ); }
        if(env_var_0 == 240) { std::max( b[i],b[m] ); }
        if(env_var_0 == 241) { std::max( b[i],b[n] ); }
        if(env_var_0 == 242) { std::max( b[i],i ); }
        if(env_var_0 == 243) { std::max( b[i],m ); }
        if(env_var_0 == 244) { std::max( b[i],n ); }
        if(env_var_0 == 245) { std::max( b[m],a[i] ); }
        if(env_var_0 == 246) { std::max( b[m],a[m] ); }
        if(env_var_0 == 247) { std::max( b[m],a[n] ); }
        if(env_var_0 == 248) { std::max( b[m],b[i] ); }
        if(env_var_0 == 249) { std::max( b[m],b[m] ); }
        if(env_var_0 == 250) { std::max( b[m],b[n] ); }
        if(env_var_0 == 251) { std::max( b[m],i ); }
        if(env_var_0 == 252) { std::max( b[m],m ); }
        if(env_var_0 == 253) { std::max( b[m],n ); }
        if(env_var_0 == 254) { std::max( b[n],a[i] ); }
        if(env_var_0 == 255) { std::max( b[n],a[m] ); }
        if(env_var_0 == 256) { std::max( b[n],a[n] ); }
        if(env_var_0 == 257) { std::max( b[n],b[i] ); }
        if(env_var_0 == 258) { std::max( b[n],b[m] ); }
        if(env_var_0 == 259) { std::max( b[n],b[n] ); }
        if(env_var_0 == 260) { std::max( b[n],i ); }
        if(env_var_0 == 261) { std::max( b[n],m ); }
        if(env_var_0 == 262) { std::max( b[n],n ); }
        if(env_var_0 == 263) { std::max( i,a[i] ); }
        if(env_var_0 == 264) { std::max( i,a[m] ); }
        if(env_var_0 == 265) { std::max( i,a[n] ); }
        if(env_var_0 == 266) { std::max( i,b[i] ); }
        if(env_var_0 == 267) { std::max( i,b[m] ); }
        if(env_var_0 == 268) { std::max( i,b[n] ); }
        if(env_var_0 == 269) { std::max( i,i ); }
        if(env_var_0 == 270) { std::max( i,m ); }
        if(env_var_0 == 271) { std::max( i,n ); }
        if(env_var_0 == 272) { std::max( m,a[i] ); }
        if(env_var_0 == 273) { std::max( m,a[m] ); }
        if(env_var_0 == 274) { std::max( m,a[n] ); }
        if(env_var_0 == 275) { std::max( m,b[i] ); }
        if(env_var_0 == 276) { std::max( m,b[m] ); }
        if(env_var_0 == 277) { std::max( m,b[n] ); }
        if(env_var_0 == 278) { std::max( m,i ); }
        if(env_var_0 == 279) { std::max( m,m ); }
        if(env_var_0 == 280) { std::max( m,n ); }
        if(env_var_0 == 281) { std::max( n,a[i] ); }
        if(env_var_0 == 282) { std::max( n,a[m] ); }
        if(env_var_0 == 283) { std::max( n,a[n] ); }
        if(env_var_0 == 284) { std::max( n,b[i] ); }
        if(env_var_0 == 285) { std::max( n,b[m] ); }
        if(env_var_0 == 286) { std::max( n,b[n] ); }
        if(env_var_0 == 287) { std::max( n,i ); }
        if(env_var_0 == 288) { std::max( n,m ); }
        if(env_var_0 == 289) { std::max( n,n ); }
        if(env_var_0 == 290) { std::min( a[i],a[i] ); }
        if(env_var_0 == 291) { std::min( a[i],a[m] ); }
        if(env_var_0 == 292) { std::min( a[i],a[n] ); }
        if(env_var_0 == 293) { std::min( a[i],b[i] ); }
        if(env_var_0 == 294) { std::min( a[i],b[m] ); }
        if(env_var_0 == 295) { std::min( a[i],b[n] ); }
        if(env_var_0 == 296) { std::min( a[i],i ); }
        if(env_var_0 == 297) { std::min( a[i],m ); }
        if(env_var_0 == 298) { std::min( a[i],n ); }
        if(env_var_0 == 299) { std::min( a[m],a[i] ); }
        if(env_var_0 == 300) { std::min( a[m],a[m] ); }
        if(env_var_0 == 301) { std::min( a[m],a[n] ); }
        if(env_var_0 == 302) { std::min( a[m],b[i] ); }
        if(env_var_0 == 303) { std::min( a[m],b[m] ); }
        if(env_var_0 == 304) { std::min( a[m],b[n] ); }
        if(env_var_0 == 305) { std::min( a[m],i ); }
        if(env_var_0 == 306) { std::min( a[m],m ); }
        if(env_var_0 == 307) { std::min( a[m],n ); }
        if(env_var_0 == 308) { std::min( a[n],a[i] ); }
        if(env_var_0 == 309) { std::min( a[n],a[m] ); }
        if(env_var_0 == 310) { std::min( a[n],a[n] ); }
        if(env_var_0 == 311) { std::min( a[n],b[i] ); }
        if(env_var_0 == 312) { std::min( a[n],b[m] ); }
        if(env_var_0 == 313) { std::min( a[n],b[n] ); }
        if(env_var_0 == 314) { std::min( a[n],i ); }
        if(env_var_0 == 315) { std::min( a[n],m ); }
        if(env_var_0 == 316) { std::min( a[n],n ); }
        if(env_var_0 == 317) { std::min( b[i],a[i] ); }
        if(env_var_0 == 318) { std::min( b[i],a[m] ); }
        if(env_var_0 == 319) { std::min( b[i],a[n] ); }
        if(env_var_0 == 320) { std::min( b[i],b[i] ); }
        if(env_var_0 == 321) { std::min( b[i],b[m] ); }
        if(env_var_0 == 322) { std::min( b[i],b[n] ); }
        if(env_var_0 == 323) { std::min( b[i],i ); }
        if(env_var_0 == 324) { std::min( b[i],m ); }
        if(env_var_0 == 325) { std::min( b[i],n ); }
        if(env_var_0 == 326) { std::min( b[m],a[i] ); }
        if(env_var_0 == 327) { std::min( b[m],a[m] ); }
        if(env_var_0 == 328) { std::min( b[m],a[n] ); }
        if(env_var_0 == 329) { std::min( b[m],b[i] ); }
        if(env_var_0 == 330) { std::min( b[m],b[m] ); }
        if(env_var_0 == 331) { std::min( b[m],b[n] ); }
        if(env_var_0 == 332) { std::min( b[m],i ); }
        if(env_var_0 == 333) { std::min( b[m],m ); }
        if(env_var_0 == 334) { std::min( b[m],n ); }
        if(env_var_0 == 335) { std::min( b[n],a[i] ); }
        if(env_var_0 == 336) { std::min( b[n],a[m] ); }
        if(env_var_0 == 337) { std::min( b[n],a[n] ); }
        if(env_var_0 == 338) { std::min( b[n],b[i] ); }
        if(env_var_0 == 339) { std::min( b[n],b[m] ); }
        if(env_var_0 == 340) { std::min( b[n],b[n] ); }
        if(env_var_0 == 341) { std::min( b[n],i ); }
        if(env_var_0 == 342) { std::min( b[n],m ); }
        if(env_var_0 == 343) { std::min( b[n],n ); }
        if(env_var_0 == 344) { std::min( i,a[i] ); }
        if(env_var_0 == 345) { std::min( i,a[m] ); }
        if(env_var_0 == 346) { std::min( i,a[n] ); }
        if(env_var_0 == 347) { std::min( i,b[i] ); }
        if(env_var_0 == 348) { std::min( i,b[m] ); }
        if(env_var_0 == 349) { std::min( i,b[n] ); }
        if(env_var_0 == 350) { std::min( i,i ); }
        if(env_var_0 == 351) { std::min( i,m ); }
        if(env_var_0 == 352) { std::min( i,n ); }
        if(env_var_0 == 353) { std::min( m,a[i] ); }
        if(env_var_0 == 354) { std::min( m,a[m] ); }
        if(env_var_0 == 355) { std::min( m,a[n] ); }
        if(env_var_0 == 356) { std::min( m,b[i] ); }
        if(env_var_0 == 357) { std::min( m,b[m] ); }
        if(env_var_0 == 358) { std::min( m,b[n] ); }
        if(env_var_0 == 359) { std::min( m,i ); }
        if(env_var_0 == 360) { std::min( m,m ); }
        if(env_var_0 == 361) { std::min( m,n ); }
        if(env_var_0 == 362) { std::min( n,a[i] ); }
        if(env_var_0 == 363) { std::min( n,a[m] ); }
        if(env_var_0 == 364) { std::min( n,a[n] ); }
        if(env_var_0 == 365) { std::min( n,b[i] ); }
        if(env_var_0 == 366) { std::min( n,b[m] ); }
        if(env_var_0 == 367) { std::min( n,b[n] ); }
        if(env_var_0 == 368) { std::min( n,i ); }
        if(env_var_0 == 369) { std::min( n,m ); }
        if(env_var_0 == 370) { std::min( n,n ); }
        if(env_var_0 == 371) { toupper( a[i] ); }
        if(env_var_0 == 372) { toupper( a[m] ); }
        if(env_var_0 == 373) { toupper( a[n] ); }
        if(env_var_0 == 374) { toupper( b[i] ); }
        if(env_var_0 == 375) { toupper( b[m] ); }
        if(env_var_0 == 376) { toupper( b[n] ); }
        if(env_var_0 == 377) { toupper( i ); }
        if(env_var_0 == 378) { toupper( m ); }
        if(env_var_0 == 379) { toupper( n ); }
         ;
    }
    for (int i = 0; i < n; i++) {
       if(env_var_1 == 0) { a = 0; }
        if(env_var_1 == 1) { a.begin() = 0; }
        if(env_var_1 == 2) { a.end() = 0; }
        if(env_var_1 == 3) { a[i] = 0; }
        if(env_var_1 == 4) { a[m] = 0; }
        if(env_var_1 == 5) { a[n] = 0; }
        if(env_var_1 == 6) { b = 0; }
        if(env_var_1 == 7) { b.begin() = 0; }
        if(env_var_1 == 8) { b.end() = 0; }
        if(env_var_1 == 9) { b[i] = 0; }
        if(env_var_1 == 10) { b[m] = 0; }
        if(env_var_1 == 11) { b[n] = 0; }
        if(env_var_1 == 12) { countA = 0; }
        if(env_var_1 == 13) { countA.begin() = 0; }
        if(env_var_1 == 14) { countA.end() = 0; }
        if(env_var_1 == 15) { countB = 0; }
        if(env_var_1 == 16) { countB.begin() = 0; }
        if(env_var_1 == 17) { countB.end() = 0; }
        if(env_var_1 == 18) { i = 0; }
        if(env_var_1 == 19) { m = 0; }
        if(env_var_1 == 20) { n = 0; }
         ;
    }
    int res = 0;
    for (auto x : countA) {
        if (countB.find(x.first) != countB.end()) {
            res += min(countA[x.first], countB[x.first]);
        }
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

