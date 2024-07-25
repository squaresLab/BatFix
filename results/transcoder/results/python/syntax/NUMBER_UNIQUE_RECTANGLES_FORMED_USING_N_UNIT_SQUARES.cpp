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
  int ans = 0;
  for ( int length = 1;
  length <= sqrt ( n );
  ++ length ) for ( int height = length;
  height * length <= n;
  ++ height ) ans ++;
  return ans;
}


int foo;
 int f_filled ( int n ) {
  int ans = 0 ;
  for ( foo
  length <= ( int ) sqrt ( n ) ;
  length ++ ) {
    int height = length ;
    while ( ( height * length <= n ) && ( height * length <= n ) ) {
      ans ++ ;
      height ++ ;
    }
  }
  return ans ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {34,49,41,17,67,38,59,64,61,58};
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

