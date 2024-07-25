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
int f_gold ( int limit ) {
  if ( limit < 2 ) return 0;
  long long int ef1 = 0, ef2 = 2;
  long long int sum = ef1 + ef2;
  while ( ef2 <= limit ) {
    long long int ef3 = 4 * ef2 + ef1;
    if ( ef3 > limit ) break;
    ef1 = ef2;
    ef2 = ef3;
    sum += ef2;
  }
  return sum;
}


int f_filled ( int limit ) {
  if ( ( limit < 2 ) || ( limit > 4 ) ) return 0 ;
  int ef1 = 0 ;
  int ef2 = 2 ;
  int sm = ef1 + ef2 ;
  while ( ( ef2 <= limit ) && ( ef1 < ef2 ) ) {
    int ef3 = 4 * ef2 + ef1 ;
    if ( ( ef3 > limit ) && ( ef2 < ef3 ) ) break ;
    ef1 = ef2 ;
    ef2 = ef3 ;
    sm = sm + ef2 ;
  }
  return sm ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {67,89,12,94,96,25,49,8,33,59};
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