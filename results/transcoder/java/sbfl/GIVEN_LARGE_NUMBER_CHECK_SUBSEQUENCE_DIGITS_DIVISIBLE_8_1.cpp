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
bool f_gold ( string str ) {
  int n = str . length ( );
  int dp [ n + 1 ] [ 10 ];
  memset ( dp, 0, sizeof ( dp ) );
  int arr [ n + 1 ];
  for ( int i = 1;
  i <= n;
  i ++ ) arr [ i ] = str [ i - 1 ] - '0';
  for ( int i = 1;
  i <= n;
  i ++ ) {
    dp [ i ] [ arr [ i ] % 8 ] = 1;
    for ( int j = 0;
    j < 8;
    j ++ ) {
      if ( dp [ i - 1 ] [ j ] > dp [ i ] [ ( j * 10 + arr [ i ] ) % 8 ] ) dp [ i ] [ ( j * 10 + arr [ i ] ) % 8 ] = dp [ i - 1 ] [ j ];
      if ( dp [ i - 1 ] [ j ] > dp [ i ] [ j ] ) dp [ i ] [ j ] = dp [ i - 1 ] [ j ];
    }
  }
  for ( int i = 1;
  i <= n;
  i ++ ) {
    if ( dp [ i ] [ 0 ] == 1 ) return true;
  }
  return false;
}


bool f_filled ( string str ) {
  int n = str . length ( );
  int dp [ n + 1 ] [ 10 ];
  int arr [ n + 1 ];
  for ( int i = 1;
  i <= n;
  i ++ ) {
    arr [ i ] = ( int ) ( str [ i - 1 ] - '0' );
  }
  for ( int i = 1;
  i <= n;
  i ++ ) {
    dp [ i ] [ arr [ i ] % 8 ] = 1;
    for ( int j = 0;
    j < 8;
    j ++ ) {
      if ( dp [ i - 1 ] [ j ] > dp [ i ] [ ( j * 10 + arr [ i ] ) % 8 ] ) {
        dp [ i ] [ ( j * 10 + arr [ i ] ) % 8 ] = dp [ i - 1 ] [ j ];
      }
      if ( dp [ i - 1 ] [ j ] > dp [ i ] [ j ] ) {
        dp [ i ] [ j ] = dp [ i - 1 ] [ j ];
      }
    }
  }
  for ( int i = 1;
  i <= n;
  i ++ ) {
    if ( dp [ i ] [ 0 ] == 1 ) return true;
  }
  return false;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"70507","0000111","4730248784","27","1000"};
    assert(argc > 1); int i = atol(argv[1]); return f_filled(param0[i]) == f_gold(param0[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
