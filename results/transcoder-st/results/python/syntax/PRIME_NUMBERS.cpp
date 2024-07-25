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
bool f_gold ( int n ) {
  if ( n <= 1 ) return false;
  for ( int i = 2;
  i < n;
  i ++ ) if ( n % i == 0 ) return false;
  return true;
}


int foo;
bool f_filled(int n) {
}


