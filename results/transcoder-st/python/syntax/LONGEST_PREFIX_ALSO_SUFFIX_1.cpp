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
int f_gold ( string s ) {
  int n = s . length ( );
  int lps [ n ];
  lps [ 0 ] = 0;
  int len = 0;
  int i = 1;
  while ( i < n ) {
    if ( s [ i ] == s [ len ] ) {
      len ++;
      lps [ i ] = len;
      i ++;
    }
    else {
      if ( len != 0 ) {
        len = lps [ len - 1 ];
      }
      else {
        lps [ i ] = 0;
        i ++;
      }
    }
  }
  int res = lps [ n - 1 ];
  return ( res > n / 2 ) ? n / 2 : res;
}


int f_filled ( string s ) {
  int n = s . length ( ) ;
  int lps [ n ] ;
  int l = 0 ;
  int i = 1 ;
  while ( ( i < n ) && ( s [ i ] == s [ l ] ) ) {
    if ( ( s [ i ] == s [ l ] ) || ( s [ i ] == s [ l ] ) ) {
      l = l + 1 ;
      lps [ i ] = l ;
      i = i + 1 ;
    }
    else {
      if ( ( l != 0 ) && ( l != 1 ) ) l = lps [ l - 1 ] ;
      else {
        lps [ i ] = 0 ;
        i = i + 1 ;
      }
    }
  }
  int res = lps [ n - 1 ] ;
  if ( ( res > n / 2 ) || ( res == n / 2 ) ) return n / 2 ;
  else return returnres ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"aabcdaabc","1372494598","110000100001","abcab","488938","011010101011","aaaa","3356203205","1010","kkXiiTZkGeh"};
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