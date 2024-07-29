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
bool f_gold ( string str ) {
  vector < char > list;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    auto pos = find ( list . begin ( ), list . end ( ), str [ i ] );
    if ( pos != list . end ( ) ) {
      auto posi = find ( list . begin ( ), list . end ( ), str [ i ] );
      list . erase ( posi );
    }
    else list . push_back ( str [ i ] );
  }
  if ( str . length ( ) % 2 == 0 && list . empty ( ) || ( str . length ( ) % 2 == 1 && list . size ( ) == 1 ) ) return true;
  else return false;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( string str ) {
  vector < char > v;
  for ( int i = 0;
  i < str . length ( );
  i ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 1) { _res_key_if_0 = isupper( str[i] ); }
    if(env_var_0 == 2) { _res_key_if_0 = std::max( i,i ); }
    if(env_var_0 == 3) { _res_key_if_0 = std::max( i,str[i] ); }
    if(env_var_0 == 4) { _res_key_if_0 = std::max( str[i],i ); }
    if(env_var_0 == 5) { _res_key_if_0 = std::max( str[i],str[i] ); }
    if(env_var_0 == 6) { _res_key_if_0 = std::min( i,i ); }
    if(env_var_0 == 7) { _res_key_if_0 = std::min( i,str[i] ); }
    if(env_var_0 == 8) { _res_key_if_0 = std::min( str[i],i ); }
    if(env_var_0 == 9) { _res_key_if_0 = std::min( str[i],str[i] ); }
    if(env_var_0 == 10) { _res_key_if_0 = str.__append_default_init( i ); }
    if(env_var_0 == 11) { _res_key_if_0 = str.__append_default_init( str[i] ); }
    if(env_var_0 == 12) { _res_key_if_0 = str.__resize_default_init( i ); }
    if(env_var_0 == 13) { _res_key_if_0 = str.__resize_default_init( str[i] ); }
    if(env_var_0 == 14) { _res_key_if_0 = str.__shrink_or_extend( i ); }
    if(env_var_0 == 15) { _res_key_if_0 = str.__shrink_or_extend( str[i] ); }
    if(env_var_0 == 16) { _res_key_if_0 = str.append( str ); }
    if(env_var_0 == 17) { _res_key_if_0 = str.assign( str ); }
    if(env_var_0 == 18) { _res_key_if_0 = str.at( i ); }
    if(env_var_0 == 19) { _res_key_if_0 = str.at( str[i] ); }
    if(env_var_0 == 20) { _res_key_if_0 = str.compare( str ); }
    if(env_var_0 == 21) { _res_key_if_0 = str.push_back( i ); }
    if(env_var_0 == 22) { _res_key_if_0 = str.push_back( str[i] ); }
    if(env_var_0 == 23) { _res_key_if_0 = str.reserve( i ); }
    if(env_var_0 == 24) { _res_key_if_0 = str.reserve( str[i] ); }
    if(env_var_0 == 25) { _res_key_if_0 = str.resize( i ); }
    if(env_var_0 == 26) { _res_key_if_0 = str.resize( str[i] ); }
    if(env_var_0 == 27) { _res_key_if_0 = str.swap( str ); }
    if(env_var_0 == 28) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 29) { _res_key_if_0 = toupper( str[i] ); }
    if(env_var_0 == 30) { _res_key_if_0 = v.at( i ); }
    if(env_var_0 == 31) { _res_key_if_0 = v.at( str[i] ); }
    if(env_var_0 == 32) { _res_key_if_0 = v.push_back( i ); }
    if(env_var_0 == 33) { _res_key_if_0 = v.push_back( str[i] ); }
    if(env_var_0 == 34) { _res_key_if_0 = v.reserve( i ); }
    if(env_var_0 == 35) { _res_key_if_0 = v.reserve( str[i] ); }
    if(env_var_0 == 36) { _res_key_if_0 = v.resize( i ); }
    if(env_var_0 == 37) { _res_key_if_0 = v.resize( str[i] ); }
    if(env_var_0 == 38) { _res_key_if_0 = v.swap( v ); }
    if ( _res_key_if_0 ) {
     if(env_var_1 == 0) { isupper( i ); }
      if(env_var_1 == 1) { isupper( str[i] ); }
      if(env_var_1 == 2) { std::max( i,i ); }
      if(env_var_1 == 3) { std::max( i,str[i] ); }
      if(env_var_1 == 4) { std::max( str[i],i ); }
      if(env_var_1 == 5) { std::max( str[i],str[i] ); }
      if(env_var_1 == 6) { std::min( i,i ); }
      if(env_var_1 == 7) { std::min( i,str[i] ); }
      if(env_var_1 == 8) { std::min( str[i],i ); }
      if(env_var_1 == 9) { std::min( str[i],str[i] ); }
      if(env_var_1 == 10) { str.__append_default_init( i ); }
      if(env_var_1 == 11) { str.__append_default_init( str[i] ); }
      if(env_var_1 == 12) { str.__resize_default_init( i ); }
      if(env_var_1 == 13) { str.__resize_default_init( str[i] ); }
      if(env_var_1 == 14) { str.__shrink_or_extend( i ); }
      if(env_var_1 == 15) { str.__shrink_or_extend( str[i] ); }
      if(env_var_1 == 16) { str.append( str ); }
      if(env_var_1 == 17) { str.assign( str ); }
      if(env_var_1 == 18) { str.at( i ); }
      if(env_var_1 == 19) { str.at( str[i] ); }
      if(env_var_1 == 20) { str.compare( str ); }
      if(env_var_1 == 21) { str.push_back( i ); }
      if(env_var_1 == 22) { str.push_back( str[i] ); }
      if(env_var_1 == 23) { str.reserve( i ); }
      if(env_var_1 == 24) { str.reserve( str[i] ); }
      if(env_var_1 == 25) { str.resize( i ); }
      if(env_var_1 == 26) { str.resize( str[i] ); }
      if(env_var_1 == 27) { str.swap( str ); }
      if(env_var_1 == 28) { toupper( i ); }
      if(env_var_1 == 29) { toupper( str[i] ); }
      if(env_var_1 == 30) { v.at( i ); }
      if(env_var_1 == 31) { v.at( str[i] ); }
      if(env_var_1 == 32) { v.push_back( i ); }
      if(env_var_1 == 33) { v.push_back( str[i] ); }
      if(env_var_1 == 34) { v.reserve( i ); }
      if(env_var_1 == 35) { v.reserve( str[i] ); }
      if(env_var_1 == 36) { v.resize( i ); }
      if(env_var_1 == 37) { v.resize( str[i] ); }
      if(env_var_1 == 38) { v.swap( v ); }
       ;
    }
    else {
      v . push_back ( str [ i ] );
    }
  }
  if ( str . length ( ) % 2 == 0 && v . empty ( ) || ( str . length ( ) % 2 == 1 && v . size ( ) == 1 ) ) {
    return true;
  }
  else {
    return false;
  }
}


int main() {
    int n_success = 0;
    vector<string> param0 {"abccba","2674377254","11","abcdecba","26382426486138","111010111010","hUInqJXNdbfP","5191","1110101101","NupSrU xz"};
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
