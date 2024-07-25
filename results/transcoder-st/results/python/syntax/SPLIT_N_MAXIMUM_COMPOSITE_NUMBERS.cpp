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
int f_gold ( int n ) {
  if ( n < 4 ) return - 1;
  int rem = n % 4;
  if ( rem == 0 ) return n / 4;
  if ( rem == 1 ) {
    if ( n < 9 ) return - 1;
    return ( n - 9 ) / 4 + 1;
  }
  if ( rem == 2 ) return ( n - 6 ) / 4 + 1;
  if ( rem == 3 ) {
    if ( n < 15 ) return - 1;
    return ( n - 15 ) / 4 + 2;
  }
}


int foo;
int f_filled(int n) {
    if ((n < 4) || (n > 9))
        return -1;
    int rem = n % 4;
}


