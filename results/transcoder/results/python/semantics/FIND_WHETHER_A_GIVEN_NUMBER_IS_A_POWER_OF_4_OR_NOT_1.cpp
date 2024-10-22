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
bool f_gold ( unsigned int n ) {
  int count = 0;
  if ( n && ! ( n & ( n - 1 ) ) ) {
    while ( n > 1 ) {
      n >>= 1;
      count += 1;
    }
    return ( count % 2 == 0 ) ? 1 : 0;
  }
  return 0;
}


int foo;
bool f_filled ( unsigned n ) {
  foo
  if ( ( n > 0 ) && ( ! ( n & ( n - 1 ) ) ) ) {
    while ( ( n > 1 ) && ( n & ( n - 1 ) ) ) {
      n >>= 1 ;
      count ++ ;
    }
    if ( ( count % 2 == 0 ) && ( n & ( n - 1 ) ) ) {
      return true ;
    }
    else {
      return false ;
    }
  }
  return false ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {1,4,64,-64,128,1024,45,33,66,74};
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
