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
int f_gold ( int n ) {
  int prevPrev = 1, prev = 2, curr = 3;
  while ( n > 0 ) {
    prevPrev = prev;
    prev = curr;
    curr = prevPrev + prev;
    n = n - ( curr - prev - 1 );
  }
  n = n + ( curr - prev - 1 );
  return prev + n;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  int prevPrev = 1, prev = 2, curr = 3;
  while ( true )  {
  if (env_var_0 == 0 && !(curr > 0)) break;
  if (env_var_0 == 1 && !(n > 0)) break;
  if (env_var_0 == 2 && !(prev > 0)) break;
  if (env_var_0 == 3 && !(prevPrev > 0)) break;
  {
    prevPrev = prev;
    prev = curr;
    curr = prevPrev + prev;
    n = n - ( curr - prev - 1 );
  }}
  n = n + ( curr - prev - 1 );
  return prev + n;
}


int main() {
    int n_success = 0;
    vector<int> param0 {76,91,62,65,83,57,76,6,2,86};
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
