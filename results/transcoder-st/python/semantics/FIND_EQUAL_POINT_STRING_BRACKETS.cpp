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
int f_gold ( string str ) {
  int len = str . length ( );
  int open [ len + 1 ], close [ len + 1 ];
  int index = - 1;
  memset ( open, 0, sizeof ( open ) );
  memset ( close, 0, sizeof ( close ) );
  open [ 0 ] = 0;
  close [ len ] = 0;
  if ( str [ 0 ] == '(' ) open [ 1 ] = 1;
  if ( str [ len - 1 ] == ')' ) close [ len - 1 ] = 1;
  for ( int i = 1;
  i < len;
  i ++ ) {
    if ( str [ i ] == '(' ) open [ i + 1 ] = open [ i ] + 1;
    else open [ i + 1 ] = open [ i ];
  }
  for ( int i = len - 2;
  i >= 0;
  i -- ) {
    if ( str [ i ] == ')' ) close [ i ] = close [ i + 1 ] + 1;
    else close [ i ] = close [ i + 1 ];
  }
  if ( open [ len ] == 0 ) return len;
  if ( close [ 0 ] == 0 ) return 0;
  for ( int i = 0;
  i <= len;
  i ++ ) if ( open [ i ] == close [ i ] ) index = i;
  return index;
}


int f_filled ( string str ) {
  int l = str . length ( ) ;
  int * open = new int [ l + 1 ] ;
  int * close = new int [ l + 1 ] ;
  int index = - 1 ;
  open [ 0 ] = 0 ;
  close [ l ] = 0 ;
  if ( ( str [ 0 ] == '(' ) && ( str [ 1 ] == ')' ) ) open [ 1 ] = 1 ;
  if ( ( str [ l - 1 ] == ')' ) && ( str [ l - 1 ] == '(' ) ) close [ l - 1 ] = 1 ;
  for ( int i = 1 ;
  i < l ;
  i ++ ) {
    if ( ( str [ i ] == '(' ) && ( str [ i + 1 ] == ')' ) ) open [ i + 1 ] = open [ i ] + 1 ;
    else open [ i + 1 ] = open [ i ] ;
  }
  for ( int i = l - 2 ;
  i >= 0 ;
  i -- ) {
    if ( ( str [ i ] == ')' ) && ( str [ i ] == '(' ) ) close [ i ] = close [ i + 1 ] + 1 ;
    else close [ i ] = close [ i + 1 ] ;
  }
  if ( ( open [ l ] == 0 ) && ( close [ 0 ] == 0 ) ) return strlen ( str . c_str ( ) ) ;
  if ( ( close [ l ] == 0 ) && ( open [ l ] == close [ l ] ) ) return 0 ;
  for ( int i = 0 ;
  i < l + 1 ;
  i ++ ) {
    if ( ( open [ i ] == close [ i ] ) && ( open [ i ] == 0 ) ) index = i ;
  }
  delete [ ] open ;
  delete [ ] close ;
  return index ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"(())))(","))","((","))(()(()()(",")((()(()","))(()","()))","()","1100110","dhfSnebD"};
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