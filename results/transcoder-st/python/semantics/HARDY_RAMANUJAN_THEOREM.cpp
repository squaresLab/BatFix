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
  int count = 0;
  if ( n % 2 == 0 ) {
    count ++;
    while ( n % 2 == 0 ) n = n / 2;
  }
  for ( int i = 3;
  i <= sqrt ( n );
  i = i + 2 ) {
    if ( n % i == 0 ) {
      count ++;
      while ( n % i == 0 ) n = n / i;
    }
  }
  if ( n > 2 ) count ++;
  return count;
}


int f_filled ( int n ) {
  int count = 0 ;
  if ( ( n % 2 == 0 ) && ( n % 2 == 0 ) ) {
    count = count + 1 ;
    while ( ( n % 2 == 0 ) && ( n % 2 == 0 ) ) n = ( int ) ( n / 2 ) ;
  }
  int i = 3 ;
  while ( ( i <= ( int ) sqrt ( n ) ) && ( n % i == 0 ) ) {
    if ( ( n % i == 0 ) && ( n % i == 0 ) ) {
      count = count + 1 ;
      while ( ( n % i == 0 ) && ( n % i == 0 ) ) n = ( int ) ( n / i ) ;
    }
    i = i + 2 ;
  }
  if ( ( n > 2 ) && ( n % 2 == 0 ) ) count = count + 1 ;
  return count ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {99,33,50,17,18,69,23,18,94,16};
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