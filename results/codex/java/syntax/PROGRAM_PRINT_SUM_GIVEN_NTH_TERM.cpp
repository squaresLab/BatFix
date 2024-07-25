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
int f_gold ( long n ) {
  int S = 0;
  for ( int i = 1;
  i <= n;
  i ++ ) S += i * i - ( i - 1 ) * ( i - 1 );
  return S;
}


int f_filled ( long n ) {
  int S = 0;
  for ( i = 1;
  i <= n;
  i ++ ) S += i * i - ( i - 1 ) * ( i - 1 );
  return S;
}

int main() {
    int n_success = 0;
    vector<long> param0 {39,20,10,39,70,21,21,80,89,99};
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