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
  int a = ( n / 10 ) * 10;
  int b = a + 10;
  return ( n - a > b - n ) ? b : a;
}


int f_filled ( int n ) {
  int a = ( n / 10 ) * 10 ;
  int b = a + 10 ;
  return ( bifn - a > b - nelsea ) ? bifn - a > b - nelsea : b + a ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {31,78,19,36,77,94,86,16,95,2};
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