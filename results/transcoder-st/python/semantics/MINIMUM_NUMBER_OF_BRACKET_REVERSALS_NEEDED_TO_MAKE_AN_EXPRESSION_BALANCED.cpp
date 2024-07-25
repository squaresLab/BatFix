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
int f_gold ( string expr ) {
  int len = expr . length ( );
  if ( len % 2 ) return - 1;
  stack < char > s;
  for ( int i = 0;
  i < len;
  i ++ ) {
    if ( expr [ i ] == '}' && ! s . empty ( ) ) {
      if ( s . top ( ) == '{' ) s . pop ( );
      else s . push ( expr [ i ] );
    }
    else s . push ( expr [ i ] );
  }
  int red_len = s . size ( );
  int n = 0;
  while ( ! s . empty ( ) && s . top ( ) == '{' ) {
    s . pop ( );
    n ++;
  }
  return ( red_len / 2 + n % 2 );
}


int f_filled ( string expr ) {
  int lenn = expr . length ( ) ;
  if ( ( lenn % 2 ) != 0 ) return - 1 ;
  string :: size_type pos = 0 ;
  for ( int i = 0 ;
  i < lenn ;
  i ++ ) {
    if ( ( expr [ i ] == '\0' ) && ( pos < expr . length ( ) ) ) {
      if ( ( expr [ pos ] == '\0' ) ) pos -- ;
      else pos ++ ;
    }
    else pos ++ ;
  }
  int redLen = pos ;
  int n = 0 ;
  while ( ( pos < expr . length ( ) ) && ( pos < lenn ) ) {
    pos ++ ;
    n ++ ;
  }
  return ( redLen / 2 + n % 2 ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"}{","{{{","{{{{","{{{{}}","}{{}}{{{","{}","","8","01111000","XPkERzHcpId"};
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