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
  int auxArr [ n ] = {
    0 };
    if ( s [ 0 ] == '1' ) auxArr [ 0 ] = 1;
    for ( int i = 1;
    i < n;
    i ++ ) {
      if ( s [ i ] == '1' ) auxArr [ i ] = auxArr [ i - 1 ] + 1;
      else auxArr [ i ] = auxArr [ i - 1 ];
    }
    int count = 0;
    for ( int i = n - 1;
    i >= 0;
    i -- ) if ( s [ i ] == '1' ) count += auxArr [ i ];
    return count;
  }
  

int foo;
int f_filled(std::string s) {
    int n = s.length();
    int auxArr[n];
    auxArr[0] = 0;
    auxArr[1] = 0;
}







