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
long int f_gold ( int n ) {
  if ( n == 1 ) return 1;
  long int z;
  float e = 2.71;
  z = sqrt ( 2 * 3.14 * n ) * pow ( ( n / e ), n );
  return z;
}


int f_filled ( double n ) {
  if ( n == 1 ) return 1;
  double z;
  double e = 2.71;
  z = sqrt ( 2 * 3.14 * n ) * pow ( ( n / e ), n );
  return int ( z );
}



static // f_filled_inner(int param0)
{
return (//) f_filled((double) param0);
}

int main() {
    int n_success = 0;
    vector<double> param0 {1.0,5.0,10.0,20.0,40.0,2.0,3.0,-1.0,4663.43115050185,-3722.039522409859};
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