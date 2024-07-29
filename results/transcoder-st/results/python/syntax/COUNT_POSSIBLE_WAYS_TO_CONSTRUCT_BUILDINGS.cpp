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
int f_gold ( int N ) {
  if ( N == 1 ) return 4;
  int countB = 1, countS = 1, prev_countB, prev_countS;
  for ( int i = 2;
  i <= N;
  i ++ ) {
    prev_countB = countB;
    prev_countS = countS;
    countS = prev_countB + prev_countS;
    countB = prev_countS;
  }
  int result = countS + countB;
  return ( result * result );
}


int foo;
int f_filled(int N) {
}
