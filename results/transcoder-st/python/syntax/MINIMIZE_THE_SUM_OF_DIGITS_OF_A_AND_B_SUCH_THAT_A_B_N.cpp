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
  int sum = 0;
  while ( n > 0 ) {
    sum += ( n % 10 );
    n /= 10;
  }
  if ( sum == 1 ) return 10;
  return sum;
}


int f_filled ( int n ) {
  int sum = 0 ;
  ;
  while ( ( n > 0 ) && ( n % 10 == 0 ) ) {
    sum += ( n % 10 ) ;
    n /= 10 ;
  }
  if ( ( sum == 1 ) || ( sum == 2 ) ) return10 ;
  else returnsum ++ ;
  return sum ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {2,39,31,45,35,94,67,50,4,63};
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