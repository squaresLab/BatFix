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
bool f_gold ( string num ) {
  int length = num . size ( );
  if ( length == 1 && num [ 0 ] == '0' ) return true;
  if ( length % 3 == 1 ) {
    num += "00";
    length += 2;
  }
  else if ( length % 3 == 2 ) {
    num += "0";
    length += 1;
  }
  int sum = 0, p = 1;
  for ( int i = length - 1;
  i >= 0;
  i -- ) {
    int group = 0;
    group += num [ i -- ] - '0';
    group += ( num [ i -- ] - '0' ) * 10;
    group += ( num [ i ] - '0' ) * 100;
    sum = sum + group * p;
    p *= ( - 1 );
  }
  sum = abs ( sum );
  return ( sum % 13 == 0 );
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string num ) {
  int length = num . length ( ) ;
  if ( ( length == 1 && num [ 0 ] == '0' ) || ( length == 2 && num [ 0 ] == '0' ) ) return true ;
  if ( ( length % 3 == 1 ) || ( length % 3 == 2 ) ) {
    if(env_var_0 == 0) { length = isupper( length ) + '00'; }
    if(env_var_0 == 1) { length = isupper( num[length] ) + '00'; }
    if(env_var_0 == 2) { length = length + '00'; }
    if(env_var_0 == 3) { length = num + '00'; }
    if(env_var_0 == 4) { length = num.__append_default_init( length ) + '00'; }
    if(env_var_0 == 5) { length = num.__append_default_init( num[length] ) + '00'; }
    if(env_var_0 == 6) { length = num.__resize_default_init( length ) + '00'; }
    if(env_var_0 == 7) { length = num.__resize_default_init( num[length] ) + '00'; }
    if(env_var_0 == 8) { length = num.__shrink_or_extend( length ) + '00'; }
    if(env_var_0 == 9) { length = num.__shrink_or_extend( num[length] ) + '00'; }
    if(env_var_0 == 10) { length = num.append( num ) + '00'; }
    if(env_var_0 == 11) { length = num.assign( num ) + '00'; }
    if(env_var_0 == 12) { length = num.at( length ) + '00'; }
    if(env_var_0 == 13) { length = num.at( num[length] ) + '00'; }
    if(env_var_0 == 14) { length = num.begin() + '00'; }
    if(env_var_0 == 15) { length = num.compare( num ) + '00'; }
    if(env_var_0 == 16) { length = num.end() + '00'; }
    if(env_var_0 == 17) { length = num.push_back( length ) + '00'; }
    if(env_var_0 == 18) { length = num.push_back( num[length] ) + '00'; }
    if(env_var_0 == 19) { length = num.reserve( length ) + '00'; }
    if(env_var_0 == 20) { length = num.reserve( num[length] ) + '00'; }
    if(env_var_0 == 21) { length = num.resize( length ) + '00'; }
    if(env_var_0 == 22) { length = num.resize( num[length] ) + '00'; }
    if(env_var_0 == 23) { length = num.swap( num ) + '00'; }
    if(env_var_0 == 24) { length = num[length] + '00'; }
    if(env_var_0 == 25) { length = std::max( length,length ) + '00'; }
    if(env_var_0 == 26) { length = std::max( length,num[length] ) + '00'; }
    if(env_var_0 == 27) { length = std::max( num[length],length ) + '00'; }
    if(env_var_0 == 28) { length = std::max( num[length],num[length] ) + '00'; }
    if(env_var_0 == 29) { length = std::min( length,length ) + '00'; }
    if(env_var_0 == 30) { length = std::min( length,num[length] ) + '00'; }
    if(env_var_0 == 31) { length = std::min( num[length],length ) + '00'; }
    if(env_var_0 == 32) { length = std::min( num[length],num[length] ) + '00'; }
    if(env_var_0 == 33) { length = toupper( length ) + '00'; }
    if(env_var_0 == 34) { length = toupper( num[length] ) + '00'; }
    if(env_var_0 == 35) { num = isupper( length ) + '00'; }
    if(env_var_0 == 36) { num = isupper( num[length] ) + '00'; }
    if(env_var_0 == 37) { num = length + '00'; }
    if(env_var_0 == 38) { num = num + '00'; }
    if(env_var_0 == 39) { num = num.__append_default_init( length ) + '00'; }
    if(env_var_0 == 40) { num = num.__append_default_init( num[length] ) + '00'; }
    if(env_var_0 == 41) { num = num.__resize_default_init( length ) + '00'; }
    if(env_var_0 == 42) { num = num.__resize_default_init( num[length] ) + '00'; }
    if(env_var_0 == 43) { num = num.__shrink_or_extend( length ) + '00'; }
    if(env_var_0 == 44) { num = num.__shrink_or_extend( num[length] ) + '00'; }
    if(env_var_0 == 45) { num = num.append( num ) + '00'; }
    if(env_var_0 == 46) { num = num.assign( num ) + '00'; }
    if(env_var_0 == 47) { num = num.at( length ) + '00'; }
    if(env_var_0 == 48) { num = num.at( num[length] ) + '00'; }
    if(env_var_0 == 49) { num = num.begin() + '00'; }
    if(env_var_0 == 50) { num = num.compare( num ) + '00'; }
    if(env_var_0 == 51) { num = num.end() + '00'; }
    if(env_var_0 == 52) { num = num.push_back( length ) + '00'; }
    if(env_var_0 == 53) { num = num.push_back( num[length] ) + '00'; }
    if(env_var_0 == 54) { num = num.reserve( length ) + '00'; }
    if(env_var_0 == 55) { num = num.reserve( num[length] ) + '00'; }
    if(env_var_0 == 56) { num = num.resize( length ) + '00'; }
    if(env_var_0 == 57) { num = num.resize( num[length] ) + '00'; }
    if(env_var_0 == 58) { num = num.swap( num ) + '00'; }
    if(env_var_0 == 59) { num = num[length] + '00'; }
    if(env_var_0 == 60) { num = std::max( length,length ) + '00'; }
    if(env_var_0 == 61) { num = std::max( length,num[length] ) + '00'; }
    if(env_var_0 == 62) { num = std::max( num[length],length ) + '00'; }
    if(env_var_0 == 63) { num = std::max( num[length],num[length] ) + '00'; }
    if(env_var_0 == 64) { num = std::min( length,length ) + '00'; }
    if(env_var_0 == 65) { num = std::min( length,num[length] ) + '00'; }
    if(env_var_0 == 66) { num = std::min( num[length],length ) + '00'; }
    if(env_var_0 == 67) { num = std::min( num[length],num[length] ) + '00'; }
    if(env_var_0 == 68) { num = toupper( length ) + '00'; }
    if(env_var_0 == 69) { num = toupper( num[length] ) + '00'; }
    if(env_var_0 == 70) { num.begin() = isupper( length ) + '00'; }
    if(env_var_0 == 71) { num.begin() = isupper( num[length] ) + '00'; }
    if(env_var_0 == 72) { num.begin() = length + '00'; }
    if(env_var_0 == 73) { num.begin() = num + '00'; }
    if(env_var_0 == 74) { num.begin() = num.__append_default_init( length ) + '00'; }
    if(env_var_0 == 75) { num.begin() = num.__append_default_init( num[length] ) + '00'; }
    if(env_var_0 == 76) { num.begin() = num.__resize_default_init( length ) + '00'; }
    if(env_var_0 == 77) { num.begin() = num.__resize_default_init( num[length] ) + '00'; }
    if(env_var_0 == 78) { num.begin() = num.__shrink_or_extend( length ) + '00'; }
    if(env_var_0 == 79) { num.begin() = num.__shrink_or_extend( num[length] ) + '00'; }
    if(env_var_0 == 80) { num.begin() = num.append( num ) + '00'; }
    if(env_var_0 == 81) { num.begin() = num.assign( num ) + '00'; }
    if(env_var_0 == 82) { num.begin() = num.at( length ) + '00'; }
    if(env_var_0 == 83) { num.begin() = num.at( num[length] ) + '00'; }
    if(env_var_0 == 84) { num.begin() = num.begin() + '00'; }
    if(env_var_0 == 85) { num.begin() = num.compare( num ) + '00'; }
    if(env_var_0 == 86) { num.begin() = num.end() + '00'; }
    if(env_var_0 == 87) { num.begin() = num.push_back( length ) + '00'; }
    if(env_var_0 == 88) { num.begin() = num.push_back( num[length] ) + '00'; }
    if(env_var_0 == 89) { num.begin() = num.reserve( length ) + '00'; }
    if(env_var_0 == 90) { num.begin() = num.reserve( num[length] ) + '00'; }
    if(env_var_0 == 91) { num.begin() = num.resize( length ) + '00'; }
    if(env_var_0 == 92) { num.begin() = num.resize( num[length] ) + '00'; }
    if(env_var_0 == 93) { num.begin() = num.swap( num ) + '00'; }
    if(env_var_0 == 94) { num.begin() = num[length] + '00'; }
    if(env_var_0 == 95) { num.begin() = std::max( length,length ) + '00'; }
    if(env_var_0 == 96) { num.begin() = std::max( length,num[length] ) + '00'; }
    if(env_var_0 == 97) { num.begin() = std::max( num[length],length ) + '00'; }
    if(env_var_0 == 98) { num.begin() = std::max( num[length],num[length] ) + '00'; }
    if(env_var_0 == 99) { num.begin() = std::min( length,length ) + '00'; }
    if(env_var_0 == 100) { num.begin() = std::min( length,num[length] ) + '00'; }
    if(env_var_0 == 101) { num.begin() = std::min( num[length],length ) + '00'; }
    if(env_var_0 == 102) { num.begin() = std::min( num[length],num[length] ) + '00'; }
    if(env_var_0 == 103) { num.begin() = toupper( length ) + '00'; }
    if(env_var_0 == 104) { num.begin() = toupper( num[length] ) + '00'; }
    if(env_var_0 == 105) { num.end() = isupper( length ) + '00'; }
    if(env_var_0 == 106) { num.end() = isupper( num[length] ) + '00'; }
    if(env_var_0 == 107) { num.end() = length + '00'; }
    if(env_var_0 == 108) { num.end() = num + '00'; }
    if(env_var_0 == 109) { num.end() = num.__append_default_init( length ) + '00'; }
    if(env_var_0 == 110) { num.end() = num.__append_default_init( num[length] ) + '00'; }
    if(env_var_0 == 111) { num.end() = num.__resize_default_init( length ) + '00'; }
    if(env_var_0 == 112) { num.end() = num.__resize_default_init( num[length] ) + '00'; }
    if(env_var_0 == 113) { num.end() = num.__shrink_or_extend( length ) + '00'; }
    if(env_var_0 == 114) { num.end() = num.__shrink_or_extend( num[length] ) + '00'; }
    if(env_var_0 == 115) { num.end() = num.append( num ) + '00'; }
    if(env_var_0 == 116) { num.end() = num.assign( num ) + '00'; }
    if(env_var_0 == 117) { num.end() = num.at( length ) + '00'; }
    if(env_var_0 == 118) { num.end() = num.at( num[length] ) + '00'; }
    if(env_var_0 == 119) { num.end() = num.begin() + '00'; }
    if(env_var_0 == 120) { num.end() = num.compare( num ) + '00'; }
    if(env_var_0 == 121) { num.end() = num.end() + '00'; }
    if(env_var_0 == 122) { num.end() = num.push_back( length ) + '00'; }
    if(env_var_0 == 123) { num.end() = num.push_back( num[length] ) + '00'; }
    if(env_var_0 == 124) { num.end() = num.reserve( length ) + '00'; }
    if(env_var_0 == 125) { num.end() = num.reserve( num[length] ) + '00'; }
    if(env_var_0 == 126) { num.end() = num.resize( length ) + '00'; }
    if(env_var_0 == 127) { num.end() = num.resize( num[length] ) + '00'; }
    if(env_var_0 == 128) { num.end() = num.swap( num ) + '00'; }
    if(env_var_0 == 129) { num.end() = num[length] + '00'; }
    if(env_var_0 == 130) { num.end() = std::max( length,length ) + '00'; }
    if(env_var_0 == 131) { num.end() = std::max( length,num[length] ) + '00'; }
    if(env_var_0 == 132) { num.end() = std::max( num[length],length ) + '00'; }
    if(env_var_0 == 133) { num.end() = std::max( num[length],num[length] ) + '00'; }
    if(env_var_0 == 134) { num.end() = std::min( length,length ) + '00'; }
    if(env_var_0 == 135) { num.end() = std::min( length,num[length] ) + '00'; }
    if(env_var_0 == 136) { num.end() = std::min( num[length],length ) + '00'; }
    if(env_var_0 == 137) { num.end() = std::min( num[length],num[length] ) + '00'; }
    if(env_var_0 == 138) { num.end() = toupper( length ) + '00'; }
    if(env_var_0 == 139) { num.end() = toupper( num[length] ) + '00'; }
    if(env_var_0 == 140) { num[length] = isupper( length ) + '00'; }
    if(env_var_0 == 141) { num[length] = isupper( num[length] ) + '00'; }
    if(env_var_0 == 142) { num[length] = length + '00'; }
    if(env_var_0 == 143) { num[length] = num + '00'; }
    if(env_var_0 == 144) { num[length] = num.__append_default_init( length ) + '00'; }
    if(env_var_0 == 145) { num[length] = num.__append_default_init( num[length] ) + '00'; }
    if(env_var_0 == 146) { num[length] = num.__resize_default_init( length ) + '00'; }
    if(env_var_0 == 147) { num[length] = num.__resize_default_init( num[length] ) + '00'; }
    if(env_var_0 == 148) { num[length] = num.__shrink_or_extend( length ) + '00'; }
    if(env_var_0 == 149) { num[length] = num.__shrink_or_extend( num[length] ) + '00'; }
    if(env_var_0 == 150) { num[length] = num.append( num ) + '00'; }
    if(env_var_0 == 151) { num[length] = num.assign( num ) + '00'; }
    if(env_var_0 == 152) { num[length] = num.at( length ) + '00'; }
    if(env_var_0 == 153) { num[length] = num.at( num[length] ) + '00'; }
    if(env_var_0 == 154) { num[length] = num.begin() + '00'; }
    if(env_var_0 == 155) { num[length] = num.compare( num ) + '00'; }
    if(env_var_0 == 156) { num[length] = num.end() + '00'; }
    if(env_var_0 == 157) { num[length] = num.push_back( length ) + '00'; }
    if(env_var_0 == 158) { num[length] = num.push_back( num[length] ) + '00'; }
    if(env_var_0 == 159) { num[length] = num.reserve( length ) + '00'; }
    if(env_var_0 == 160) { num[length] = num.reserve( num[length] ) + '00'; }
    if(env_var_0 == 161) { num[length] = num.resize( length ) + '00'; }
    if(env_var_0 == 162) { num[length] = num.resize( num[length] ) + '00'; }
    if(env_var_0 == 163) { num[length] = num.swap( num ) + '00'; }
    if(env_var_0 == 164) { num[length] = num[length] + '00'; }
    if(env_var_0 == 165) { num[length] = std::max( length,length ) + '00'; }
    if(env_var_0 == 166) { num[length] = std::max( length,num[length] ) + '00'; }
    if(env_var_0 == 167) { num[length] = std::max( num[length],length ) + '00'; }
    if(env_var_0 == 168) { num[length] = std::max( num[length],num[length] ) + '00'; }
    if(env_var_0 == 169) { num[length] = std::min( length,length ) + '00'; }
    if(env_var_0 == 170) { num[length] = std::min( length,num[length] ) + '00'; }
    if(env_var_0 == 171) { num[length] = std::min( num[length],length ) + '00'; }
    if(env_var_0 == 172) { num[length] = std::min( num[length],num[length] ) + '00'; }
    if(env_var_0 == 173) { num[length] = toupper( length ) + '00'; }
    if(env_var_0 == 174) { num[length] = toupper( num[length] ) + '00'; }
         ;
    length += 2 ;
  }
  else if ( ( length % 3 == 2 ) || ( length % 3 == 1 ) ) {
 if(env_var_1 == 0) { length = isupper( length ) + '0'; }
    if(env_var_1 == 1) { length = isupper( num[length] ) + '0'; }
    if(env_var_1 == 2) { length = length + '0'; }
    if(env_var_1 == 3) { length = num + '0'; }
    if(env_var_1 == 4) { length = num.__append_default_init( length ) + '0'; }
    if(env_var_1 == 5) { length = num.__append_default_init( num[length] ) + '0'; }
    if(env_var_1 == 6) { length = num.__resize_default_init( length ) + '0'; }
    if(env_var_1 == 7) { length = num.__resize_default_init( num[length] ) + '0'; }
    if(env_var_1 == 8) { length = num.__shrink_or_extend( length ) + '0'; }
    if(env_var_1 == 9) { length = num.__shrink_or_extend( num[length] ) + '0'; }
    if(env_var_1 == 10) { length = num.append( num ) + '0'; }
    if(env_var_1 == 11) { length = num.assign( num ) + '0'; }
    if(env_var_1 == 12) { length = num.at( length ) + '0'; }
    if(env_var_1 == 13) { length = num.at( num[length] ) + '0'; }
    if(env_var_1 == 14) { length = num.begin() + '0'; }
    if(env_var_1 == 15) { length = num.compare( num ) + '0'; }
    if(env_var_1 == 16) { length = num.end() + '0'; }
    if(env_var_1 == 17) { length = num.push_back( length ) + '0'; }
    if(env_var_1 == 18) { length = num.push_back( num[length] ) + '0'; }
    if(env_var_1 == 19) { length = num.reserve( length ) + '0'; }
    if(env_var_1 == 20) { length = num.reserve( num[length] ) + '0'; }
    if(env_var_1 == 21) { length = num.resize( length ) + '0'; }
    if(env_var_1 == 22) { length = num.resize( num[length] ) + '0'; }
    if(env_var_1 == 23) { length = num.swap( num ) + '0'; }
    if(env_var_1 == 24) { length = num[length] + '0'; }
    if(env_var_1 == 25) { length = std::max( length,length ) + '0'; }
    if(env_var_1 == 26) { length = std::max( length,num[length] ) + '0'; }
    if(env_var_1 == 27) { length = std::max( num[length],length ) + '0'; }
    if(env_var_1 == 28) { length = std::max( num[length],num[length] ) + '0'; }
    if(env_var_1 == 29) { length = std::min( length,length ) + '0'; }
    if(env_var_1 == 30) { length = std::min( length,num[length] ) + '0'; }
    if(env_var_1 == 31) { length = std::min( num[length],length ) + '0'; }
    if(env_var_1 == 32) { length = std::min( num[length],num[length] ) + '0'; }
    if(env_var_1 == 33) { length = toupper( length ) + '0'; }
    if(env_var_1 == 34) { length = toupper( num[length] ) + '0'; }
    if(env_var_1 == 35) { num = isupper( length ) + '0'; }
    if(env_var_1 == 36) { num = isupper( num[length] ) + '0'; }
    if(env_var_1 == 37) { num = length + '0'; }
    if(env_var_1 == 38) { num = num + '0'; }
    if(env_var_1 == 39) { num = num.__append_default_init( length ) + '0'; }
    if(env_var_1 == 40) { num = num.__append_default_init( num[length] ) + '0'; }
    if(env_var_1 == 41) { num = num.__resize_default_init( length ) + '0'; }
    if(env_var_1 == 42) { num = num.__resize_default_init( num[length] ) + '0'; }
    if(env_var_1 == 43) { num = num.__shrink_or_extend( length ) + '0'; }
    if(env_var_1 == 44) { num = num.__shrink_or_extend( num[length] ) + '0'; }
    if(env_var_1 == 45) { num = num.append( num ) + '0'; }
    if(env_var_1 == 46) { num = num.assign( num ) + '0'; }
    if(env_var_1 == 47) { num = num.at( length ) + '0'; }
    if(env_var_1 == 48) { num = num.at( num[length] ) + '0'; }
    if(env_var_1 == 49) { num = num.begin() + '0'; }
    if(env_var_1 == 50) { num = num.compare( num ) + '0'; }
    if(env_var_1 == 51) { num = num.end() + '0'; }
    if(env_var_1 == 52) { num = num.push_back( length ) + '0'; }
    if(env_var_1 == 53) { num = num.push_back( num[length] ) + '0'; }
    if(env_var_1 == 54) { num = num.reserve( length ) + '0'; }
    if(env_var_1 == 55) { num = num.reserve( num[length] ) + '0'; }
    if(env_var_1 == 56) { num = num.resize( length ) + '0'; }
    if(env_var_1 == 57) { num = num.resize( num[length] ) + '0'; }
    if(env_var_1 == 58) { num = num.swap( num ) + '0'; }
    if(env_var_1 == 59) { num = num[length] + '0'; }
    if(env_var_1 == 60) { num = std::max( length,length ) + '0'; }
    if(env_var_1 == 61) { num = std::max( length,num[length] ) + '0'; }
    if(env_var_1 == 62) { num = std::max( num[length],length ) + '0'; }
    if(env_var_1 == 63) { num = std::max( num[length],num[length] ) + '0'; }
    if(env_var_1 == 64) { num = std::min( length,length ) + '0'; }
    if(env_var_1 == 65) { num = std::min( length,num[length] ) + '0'; }
    if(env_var_1 == 66) { num = std::min( num[length],length ) + '0'; }
    if(env_var_1 == 67) { num = std::min( num[length],num[length] ) + '0'; }
    if(env_var_1 == 68) { num = toupper( length ) + '0'; }
    if(env_var_1 == 69) { num = toupper( num[length] ) + '0'; }
    if(env_var_1 == 70) { num.begin() = isupper( length ) + '0'; }
    if(env_var_1 == 71) { num.begin() = isupper( num[length] ) + '0'; }
    if(env_var_1 == 72) { num.begin() = length + '0'; }
    if(env_var_1 == 73) { num.begin() = num + '0'; }
    if(env_var_1 == 74) { num.begin() = num.__append_default_init( length ) + '0'; }
    if(env_var_1 == 75) { num.begin() = num.__append_default_init( num[length] ) + '0'; }
    if(env_var_1 == 76) { num.begin() = num.__resize_default_init( length ) + '0'; }
    if(env_var_1 == 77) { num.begin() = num.__resize_default_init( num[length] ) + '0'; }
    if(env_var_1 == 78) { num.begin() = num.__shrink_or_extend( length ) + '0'; }
    if(env_var_1 == 79) { num.begin() = num.__shrink_or_extend( num[length] ) + '0'; }
    if(env_var_1 == 80) { num.begin() = num.append( num ) + '0'; }
    if(env_var_1 == 81) { num.begin() = num.assign( num ) + '0'; }
    if(env_var_1 == 82) { num.begin() = num.at( length ) + '0'; }
    if(env_var_1 == 83) { num.begin() = num.at( num[length] ) + '0'; }
    if(env_var_1 == 84) { num.begin() = num.begin() + '0'; }
    if(env_var_1 == 85) { num.begin() = num.compare( num ) + '0'; }
    if(env_var_1 == 86) { num.begin() = num.end() + '0'; }
    if(env_var_1 == 87) { num.begin() = num.push_back( length ) + '0'; }
    if(env_var_1 == 88) { num.begin() = num.push_back( num[length] ) + '0'; }
    if(env_var_1 == 89) { num.begin() = num.reserve( length ) + '0'; }
    if(env_var_1 == 90) { num.begin() = num.reserve( num[length] ) + '0'; }
    if(env_var_1 == 91) { num.begin() = num.resize( length ) + '0'; }
    if(env_var_1 == 92) { num.begin() = num.resize( num[length] ) + '0'; }
    if(env_var_1 == 93) { num.begin() = num.swap( num ) + '0'; }
    if(env_var_1 == 94) { num.begin() = num[length] + '0'; }
    if(env_var_1 == 95) { num.begin() = std::max( length,length ) + '0'; }
    if(env_var_1 == 96) { num.begin() = std::max( length,num[length] ) + '0'; }
    if(env_var_1 == 97) { num.begin() = std::max( num[length],length ) + '0'; }
    if(env_var_1 == 98) { num.begin() = std::max( num[length],num[length] ) + '0'; }
    if(env_var_1 == 99) { num.begin() = std::min( length,length ) + '0'; }
    if(env_var_1 == 100) { num.begin() = std::min( length,num[length] ) + '0'; }
    if(env_var_1 == 101) { num.begin() = std::min( num[length],length ) + '0'; }
    if(env_var_1 == 102) { num.begin() = std::min( num[length],num[length] ) + '0'; }
    if(env_var_1 == 103) { num.begin() = toupper( length ) + '0'; }
    if(env_var_1 == 104) { num.begin() = toupper( num[length] ) + '0'; }
    if(env_var_1 == 105) { num.end() = isupper( length ) + '0'; }
    if(env_var_1 == 106) { num.end() = isupper( num[length] ) + '0'; }
    if(env_var_1 == 107) { num.end() = length + '0'; }
    if(env_var_1 == 108) { num.end() = num + '0'; }
    if(env_var_1 == 109) { num.end() = num.__append_default_init( length ) + '0'; }
    if(env_var_1 == 110) { num.end() = num.__append_default_init( num[length] ) + '0'; }
    if(env_var_1 == 111) { num.end() = num.__resize_default_init( length ) + '0'; }
    if(env_var_1 == 112) { num.end() = num.__resize_default_init( num[length] ) + '0'; }
    if(env_var_1 == 113) { num.end() = num.__shrink_or_extend( length ) + '0'; }
    if(env_var_1 == 114) { num.end() = num.__shrink_or_extend( num[length] ) + '0'; }
    if(env_var_1 == 115) { num.end() = num.append( num ) + '0'; }
    if(env_var_1 == 116) { num.end() = num.assign( num ) + '0'; }
    if(env_var_1 == 117) { num.end() = num.at( length ) + '0'; }
    if(env_var_1 == 118) { num.end() = num.at( num[length] ) + '0'; }
    if(env_var_1 == 119) { num.end() = num.begin() + '0'; }
    if(env_var_1 == 120) { num.end() = num.compare( num ) + '0'; }
    if(env_var_1 == 121) { num.end() = num.end() + '0'; }
    if(env_var_1 == 122) { num.end() = num.push_back( length ) + '0'; }
    if(env_var_1 == 123) { num.end() = num.push_back( num[length] ) + '0'; }
    if(env_var_1 == 124) { num.end() = num.reserve( length ) + '0'; }
    if(env_var_1 == 125) { num.end() = num.reserve( num[length] ) + '0'; }
    if(env_var_1 == 126) { num.end() = num.resize( length ) + '0'; }
    if(env_var_1 == 127) { num.end() = num.resize( num[length] ) + '0'; }
    if(env_var_1 == 128) { num.end() = num.swap( num ) + '0'; }
    if(env_var_1 == 129) { num.end() = num[length] + '0'; }
    if(env_var_1 == 130) { num.end() = std::max( length,length ) + '0'; }
    if(env_var_1 == 131) { num.end() = std::max( length,num[length] ) + '0'; }
    if(env_var_1 == 132) { num.end() = std::max( num[length],length ) + '0'; }
    if(env_var_1 == 133) { num.end() = std::max( num[length],num[length] ) + '0'; }
    if(env_var_1 == 134) { num.end() = std::min( length,length ) + '0'; }
    if(env_var_1 == 135) { num.end() = std::min( length,num[length] ) + '0'; }
    if(env_var_1 == 136) { num.end() = std::min( num[length],length ) + '0'; }
    if(env_var_1 == 137) { num.end() = std::min( num[length],num[length] ) + '0'; }
    if(env_var_1 == 138) { num.end() = toupper( length ) + '0'; }
    if(env_var_1 == 139) { num.end() = toupper( num[length] ) + '0'; }
    if(env_var_1 == 140) { num[length] = isupper( length ) + '0'; }
    if(env_var_1 == 141) { num[length] = isupper( num[length] ) + '0'; }
    if(env_var_1 == 142) { num[length] = length + '0'; }
    if(env_var_1 == 143) { num[length] = num + '0'; }
    if(env_var_1 == 144) { num[length] = num.__append_default_init( length ) + '0'; }
    if(env_var_1 == 145) { num[length] = num.__append_default_init( num[length] ) + '0'; }
    if(env_var_1 == 146) { num[length] = num.__resize_default_init( length ) + '0'; }
    if(env_var_1 == 147) { num[length] = num.__resize_default_init( num[length] ) + '0'; }
    if(env_var_1 == 148) { num[length] = num.__shrink_or_extend( length ) + '0'; }
    if(env_var_1 == 149) { num[length] = num.__shrink_or_extend( num[length] ) + '0'; }
    if(env_var_1 == 150) { num[length] = num.append( num ) + '0'; }
    if(env_var_1 == 151) { num[length] = num.assign( num ) + '0'; }
    if(env_var_1 == 152) { num[length] = num.at( length ) + '0'; }
    if(env_var_1 == 153) { num[length] = num.at( num[length] ) + '0'; }
    if(env_var_1 == 154) { num[length] = num.begin() + '0'; }
    if(env_var_1 == 155) { num[length] = num.compare( num ) + '0'; }
    if(env_var_1 == 156) { num[length] = num.end() + '0'; }
    if(env_var_1 == 157) { num[length] = num.push_back( length ) + '0'; }
    if(env_var_1 == 158) { num[length] = num.push_back( num[length] ) + '0'; }
    if(env_var_1 == 159) { num[length] = num.reserve( length ) + '0'; }
    if(env_var_1 == 160) { num[length] = num.reserve( num[length] ) + '0'; }
    if(env_var_1 == 161) { num[length] = num.resize( length ) + '0'; }
    if(env_var_1 == 162) { num[length] = num.resize( num[length] ) + '0'; }
    if(env_var_1 == 163) { num[length] = num.swap( num ) + '0'; }
    if(env_var_1 == 164) { num[length] = num[length] + '0'; }
    if(env_var_1 == 165) { num[length] = std::max( length,length ) + '0'; }
    if(env_var_1 == 166) { num[length] = std::max( length,num[length] ) + '0'; }
    if(env_var_1 == 167) { num[length] = std::max( num[length],length ) + '0'; }
    if(env_var_1 == 168) { num[length] = std::max( num[length],num[length] ) + '0'; }
    if(env_var_1 == 169) { num[length] = std::min( length,length ) + '0'; }
    if(env_var_1 == 170) { num[length] = std::min( length,num[length] ) + '0'; }
    if(env_var_1 == 171) { num[length] = std::min( num[length],length ) + '0'; }
    if(env_var_1 == 172) { num[length] = std::min( num[length],num[length] ) + '0'; }
    if(env_var_1 == 173) { num[length] = toupper( length ) + '0'; }
    if(env_var_1 == 174) { num[length] = toupper( num[length] ) + '0'; }
        ;
    length ++ ;
  }
  int sum = 0 ;
  int p = 1 ;
  for ( int i = length - 1 ;
  i >= 0 ;
  i -- ) {
    int group = 0 ;
    group += num [ i ] - '0' ;
    i -- ;
    group += ( num [ i ] - '0' ) * 10 ;
    i -- ;
    group += ( num [ i ] - '0' ) * 100 ;
    sum = sum + group * p ;
    p *= ( - 1 ) ;
  }
  sum = abs ( sum ) ;
  return ( sum % 13 == 0 ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"vzTUaItpCpLnjY","33855","0011110101011","MMQ","439340517954","000000000","UugAuRRJbjEgl","6406553695441","011001","yjFqEEvgiNjEX"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

