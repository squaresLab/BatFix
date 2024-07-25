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
using namespace std;
unsigned int f_gold ( unsigned int n ) {
  if ( n == 0 || n == 1 ) return 1;
  return n * f_gold ( n - 2 );
}


long double f_filled ( long double n ) {
  if ( n == 0 || n == 1 ) return 1;
  return n * f_filled ( n - 2 );
}



static // f_filled_inner(unsigned int param0)
{
return (//) f_filled((long double) param0);
}

int main() {
    int n_success = 0;
    vector<long> param0 {52,93,15,72,61,21,83,87,75,75};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}