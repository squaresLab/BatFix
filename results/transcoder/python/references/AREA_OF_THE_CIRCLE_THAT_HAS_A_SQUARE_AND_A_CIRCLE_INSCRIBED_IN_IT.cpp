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
float f_gold ( int a ) {
  float area = ( M_PI * a * a ) / 4.0;
  return area;
}


double f_filled ( double a ) {
  double area = ( M_PI * a * a ) / 4 ;
  return area ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {77,18,83,39,68,28,71,14,21,73};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(abs(1 - (0.0000001 + abs(f_gold(param0[i])) )/ (abs(f_filled(param0[i])) + 0.0000001)) < 0.001F)
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}