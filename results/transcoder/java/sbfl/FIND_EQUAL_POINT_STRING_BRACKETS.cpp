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
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

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
  int len = str . length ( );
  int open [ len + 1 ];
  int close [ len + 1 ];
  int index = - 1;
  open [ 0 ] = 0;
  close [ len ] = 0;
  if ( str [ 0 ] == '(' ) {
    open [ 1 ] = 1;
  }
  if ( str [ len - 1 ] == ')' ) {
    close [ len - 1 ] = 1;
  }
  for ( int i = 1;
  i < len;
  i ++ ) {
    if ( str [ i ] == '(' ) {
      open [ i + 1 ] = open [ i ] + 1;
    }
    else {
      open [ i + 1 ] = open [ i ];
    }
  }
  for ( int i = len - 2;
  i >= 0;
  i -- ) {
    if ( str [ i ] == ')' ) {
      close [ i ] = close [ i + 1 ] + 1;
    }
    else {
      close [ i ] = close [ i + 1 ];
    }
  }
  if ( open [ len ] == 0 ) return len;
  if ( close [ 0 ] == 0 ) return 0;
  for ( int i = 0;
  i <= len;
  i ++ ) if ( open [ i ] == close [ i ] ) index = i;
  return index;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"(())))(","))","((","))(()(()()(",")((()(()","))(()","()))","()","1100110","dhfSnebD"};
    assert(argc > 1); int i = atol(argv[1]); return f_filled(param0[i]) == f_gold(param0[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
