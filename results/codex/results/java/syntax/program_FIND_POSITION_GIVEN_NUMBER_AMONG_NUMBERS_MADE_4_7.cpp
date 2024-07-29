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
int f_gold ( string n ) {
  int i = 0, pos = 0;
  while ( n [ i ] != '\0' ) {
    switch ( n [ i ] ) {
      case '4' : pos = pos * 2 + 1;
      break;
      case '7' : pos = pos * 2 + 2;
      break;
    }
    i ++;
  }
  return pos;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( string n ) {
  int k = 0, pos = 0, i = 0;
  while ( k != n . length ( ) ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 1) { _res_key_if_0 = isupper( k ); }
    if(env_var_0 == 2) { _res_key_if_0 = isupper( n[i] ); }
    if(env_var_0 == 3) { _res_key_if_0 = isupper( n[k] ); }
    if(env_var_0 == 4) { _res_key_if_0 = isupper( n[pos] ); }
    if(env_var_0 == 5) { _res_key_if_0 = isupper( pos ); }
    if(env_var_0 == 6) { _res_key_if_0 = n.__append_default_init( i ); }
    if(env_var_0 == 7) { _res_key_if_0 = n.__append_default_init( k ); }
    if(env_var_0 == 8) { _res_key_if_0 = n.__append_default_init( n[i] ); }
    if(env_var_0 == 9) { _res_key_if_0 = n.__append_default_init( n[k] ); }
    if(env_var_0 == 10) { _res_key_if_0 = n.__append_default_init( n[pos] ); }
    if(env_var_0 == 11) { _res_key_if_0 = n.__append_default_init( pos ); }
    if(env_var_0 == 12) { _res_key_if_0 = n.__resize_default_init( i ); }
    if(env_var_0 == 13) { _res_key_if_0 = n.__resize_default_init( k ); }
    if(env_var_0 == 14) { _res_key_if_0 = n.__resize_default_init( n[i] ); }
    if(env_var_0 == 15) { _res_key_if_0 = n.__resize_default_init( n[k] ); }
    if(env_var_0 == 16) { _res_key_if_0 = n.__resize_default_init( n[pos] ); }
    if(env_var_0 == 17) { _res_key_if_0 = n.__resize_default_init( pos ); }
    if(env_var_0 == 18) { _res_key_if_0 = n.__shrink_or_extend( i ); }
    if(env_var_0 == 19) { _res_key_if_0 = n.__shrink_or_extend( k ); }
    if(env_var_0 == 20) { _res_key_if_0 = n.__shrink_or_extend( n[i] ); }
    if(env_var_0 == 21) { _res_key_if_0 = n.__shrink_or_extend( n[k] ); }
    if(env_var_0 == 22) { _res_key_if_0 = n.__shrink_or_extend( n[pos] ); }
    if(env_var_0 == 23) { _res_key_if_0 = n.__shrink_or_extend( pos ); }
    if(env_var_0 == 24) { _res_key_if_0 = n.append( n ); }
    if(env_var_0 == 25) { _res_key_if_0 = n.assign( n ); }
    if(env_var_0 == 26) { _res_key_if_0 = n.at( i ); }
    if(env_var_0 == 27) { _res_key_if_0 = n.at( k ); }
    if(env_var_0 == 28) { _res_key_if_0 = n.at( n[i] ); }
    if(env_var_0 == 29) { _res_key_if_0 = n.at( n[k] ); }
    if(env_var_0 == 30) { _res_key_if_0 = n.at( n[pos] ); }
    if(env_var_0 == 31) { _res_key_if_0 = n.at( pos ); }
    if(env_var_0 == 32) { _res_key_if_0 = n.compare( n ); }
    if(env_var_0 == 33) { _res_key_if_0 = n.push_back( i ); }
    if(env_var_0 == 34) { _res_key_if_0 = n.push_back( k ); }
    if(env_var_0 == 35) { _res_key_if_0 = n.push_back( n[i] ); }
    if(env_var_0 == 36) { _res_key_if_0 = n.push_back( n[k] ); }
    if(env_var_0 == 37) { _res_key_if_0 = n.push_back( n[pos] ); }
    if(env_var_0 == 38) { _res_key_if_0 = n.push_back( pos ); }
    if(env_var_0 == 39) { _res_key_if_0 = n.reserve( i ); }
    if(env_var_0 == 40) { _res_key_if_0 = n.reserve( k ); }
    if(env_var_0 == 41) { _res_key_if_0 = n.reserve( n[i] ); }
    if(env_var_0 == 42) { _res_key_if_0 = n.reserve( n[k] ); }
    if(env_var_0 == 43) { _res_key_if_0 = n.reserve( n[pos] ); }
    if(env_var_0 == 44) { _res_key_if_0 = n.reserve( pos ); }
    if(env_var_0 == 45) { _res_key_if_0 = n.resize( i ); }
    if(env_var_0 == 46) { _res_key_if_0 = n.resize( k ); }
    if(env_var_0 == 47) { _res_key_if_0 = n.resize( n[i] ); }
    if(env_var_0 == 48) { _res_key_if_0 = n.resize( n[k] ); }
    if(env_var_0 == 49) { _res_key_if_0 = n.resize( n[pos] ); }
    if(env_var_0 == 50) { _res_key_if_0 = n.resize( pos ); }
    if(env_var_0 == 51) { _res_key_if_0 = n.swap( n ); }
    if(env_var_0 == 52) { _res_key_if_0 = std::max( i,i ); }
    if(env_var_0 == 53) { _res_key_if_0 = std::max( i,k ); }
    if(env_var_0 == 54) { _res_key_if_0 = std::max( i,n[i] ); }
    if(env_var_0 == 55) { _res_key_if_0 = std::max( i,n[k] ); }
    if(env_var_0 == 56) { _res_key_if_0 = std::max( i,n[pos] ); }
    if(env_var_0 == 57) { _res_key_if_0 = std::max( i,pos ); }
    if(env_var_0 == 58) { _res_key_if_0 = std::max( k,i ); }
    if(env_var_0 == 59) { _res_key_if_0 = std::max( k,k ); }
    if(env_var_0 == 60) { _res_key_if_0 = std::max( k,n[i] ); }
    if(env_var_0 == 61) { _res_key_if_0 = std::max( k,n[k] ); }
    if(env_var_0 == 62) { _res_key_if_0 = std::max( k,n[pos] ); }
    if(env_var_0 == 63) { _res_key_if_0 = std::max( k,pos ); }
    if(env_var_0 == 64) { _res_key_if_0 = std::max( n[i],i ); }
    if(env_var_0 == 65) { _res_key_if_0 = std::max( n[i],k ); }
    if(env_var_0 == 66) { _res_key_if_0 = std::max( n[i],n[i] ); }
    if(env_var_0 == 67) { _res_key_if_0 = std::max( n[i],n[k] ); }
    if(env_var_0 == 68) { _res_key_if_0 = std::max( n[i],n[pos] ); }
    if(env_var_0 == 69) { _res_key_if_0 = std::max( n[i],pos ); }
    if(env_var_0 == 70) { _res_key_if_0 = std::max( n[k],i ); }
    if(env_var_0 == 71) { _res_key_if_0 = std::max( n[k],k ); }
    if(env_var_0 == 72) { _res_key_if_0 = std::max( n[k],n[i] ); }
    if(env_var_0 == 73) { _res_key_if_0 = std::max( n[k],n[k] ); }
    if(env_var_0 == 74) { _res_key_if_0 = std::max( n[k],n[pos] ); }
    if(env_var_0 == 75) { _res_key_if_0 = std::max( n[k],pos ); }
    if(env_var_0 == 76) { _res_key_if_0 = std::max( n[pos],i ); }
    if(env_var_0 == 77) { _res_key_if_0 = std::max( n[pos],k ); }
    if(env_var_0 == 78) { _res_key_if_0 = std::max( n[pos],n[i] ); }
    if(env_var_0 == 79) { _res_key_if_0 = std::max( n[pos],n[k] ); }
    if(env_var_0 == 80) { _res_key_if_0 = std::max( n[pos],n[pos] ); }
    if(env_var_0 == 81) { _res_key_if_0 = std::max( n[pos],pos ); }
    if(env_var_0 == 82) { _res_key_if_0 = std::max( pos,i ); }
    if(env_var_0 == 83) { _res_key_if_0 = std::max( pos,k ); }
    if(env_var_0 == 84) { _res_key_if_0 = std::max( pos,n[i] ); }
    if(env_var_0 == 85) { _res_key_if_0 = std::max( pos,n[k] ); }
    if(env_var_0 == 86) { _res_key_if_0 = std::max( pos,n[pos] ); }
    if(env_var_0 == 87) { _res_key_if_0 = std::max( pos,pos ); }
    if(env_var_0 == 88) { _res_key_if_0 = std::min( i,i ); }
    if(env_var_0 == 89) { _res_key_if_0 = std::min( i,k ); }
    if(env_var_0 == 90) { _res_key_if_0 = std::min( i,n[i] ); }
    if(env_var_0 == 91) { _res_key_if_0 = std::min( i,n[k] ); }
    if(env_var_0 == 92) { _res_key_if_0 = std::min( i,n[pos] ); }
    if(env_var_0 == 93) { _res_key_if_0 = std::min( i,pos ); }
    if(env_var_0 == 94) { _res_key_if_0 = std::min( k,i ); }
    if(env_var_0 == 95) { _res_key_if_0 = std::min( k,k ); }
    if(env_var_0 == 96) { _res_key_if_0 = std::min( k,n[i] ); }
    if(env_var_0 == 97) { _res_key_if_0 = std::min( k,n[k] ); }
    if(env_var_0 == 98) { _res_key_if_0 = std::min( k,n[pos] ); }
    if(env_var_0 == 99) { _res_key_if_0 = std::min( k,pos ); }
    if(env_var_0 == 100) { _res_key_if_0 = std::min( n[i],i ); }
    if(env_var_0 == 101) { _res_key_if_0 = std::min( n[i],k ); }
    if(env_var_0 == 102) { _res_key_if_0 = std::min( n[i],n[i] ); }
    if(env_var_0 == 103) { _res_key_if_0 = std::min( n[i],n[k] ); }
    if(env_var_0 == 104) { _res_key_if_0 = std::min( n[i],n[pos] ); }
    if(env_var_0 == 105) { _res_key_if_0 = std::min( n[i],pos ); }
    if(env_var_0 == 106) { _res_key_if_0 = std::min( n[k],i ); }
    if(env_var_0 == 107) { _res_key_if_0 = std::min( n[k],k ); }
    if(env_var_0 == 108) { _res_key_if_0 = std::min( n[k],n[i] ); }
    if(env_var_0 == 109) { _res_key_if_0 = std::min( n[k],n[k] ); }
    if(env_var_0 == 110) { _res_key_if_0 = std::min( n[k],n[pos] ); }
    if(env_var_0 == 111) { _res_key_if_0 = std::min( n[k],pos ); }
    if(env_var_0 == 112) { _res_key_if_0 = std::min( n[pos],i ); }
    if(env_var_0 == 113) { _res_key_if_0 = std::min( n[pos],k ); }
    if(env_var_0 == 114) { _res_key_if_0 = std::min( n[pos],n[i] ); }
    if(env_var_0 == 115) { _res_key_if_0 = std::min( n[pos],n[k] ); }
    if(env_var_0 == 116) { _res_key_if_0 = std::min( n[pos],n[pos] ); }
    if(env_var_0 == 117) { _res_key_if_0 = std::min( n[pos],pos ); }
    if(env_var_0 == 118) { _res_key_if_0 = std::min( pos,i ); }
    if(env_var_0 == 119) { _res_key_if_0 = std::min( pos,k ); }
    if(env_var_0 == 120) { _res_key_if_0 = std::min( pos,n[i] ); }
    if(env_var_0 == 121) { _res_key_if_0 = std::min( pos,n[k] ); }
    if(env_var_0 == 122) { _res_key_if_0 = std::min( pos,n[pos] ); }
    if(env_var_0 == 123) { _res_key_if_0 = std::min( pos,pos ); }
    if(env_var_0 == 124) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 125) { _res_key_if_0 = toupper( k ); }
    if(env_var_0 == 126) { _res_key_if_0 = toupper( n[i] ); }
    if(env_var_0 == 127) { _res_key_if_0 = toupper( n[k] ); }
    if(env_var_0 == 128) { _res_key_if_0 = toupper( n[pos] ); }
    if(env_var_0 == 129) { _res_key_if_0 = toupper( pos ); }
    switch ( _res_key_if_0 ) {
      case '4' : pos = pos * 2 + 1;
      break;
      case '7' : pos = pos * 2 + 2;
      break;
    }
    i ++;
    k ++;
  }
  return pos;
}

int main() {
    int n_success = 0;
    vector<string> param0 {"7","305745689","444","4","2074","27","447","255","10000111111011","fAKcSDRTNz"};
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
