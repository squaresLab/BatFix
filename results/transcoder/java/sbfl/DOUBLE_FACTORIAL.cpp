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
unsigned int f_gold ( unsigned int n ) {
  if ( n == 0 || n == 1 ) return 1;
  return n * f_gold ( n - 2 );
}


long double f_filled ( long double n ) {
  if ( n == 0 || n == 1 ) return 1 ;
  return n * f_filled ( n - 2 ) ;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<long> param0 {52,93,15,72,61,21,83,87,75,75};
    assert(argc > 1); int i = atol(argv[1]); assert(i < param0.size()); f_gold(param0[i]) == f_filled(param0[i]); return f_filled(param0[i]) == f_gold(param0[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}