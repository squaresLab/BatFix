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
bool f_gold ( long long int n ) {
  while ( n / 100 ) {
    int last_digit = n % 10;
    n /= 10;
    n += last_digit * 3;
  }
  return ( n % 29 == 0 );
}


bool f_filled ( int n ) {
  while ( ( int ) ( n / 100 ) < n ) {
    int lastDigit = ( int ) ( n % 10 ) ;
    n = ( int ) ( n / 10 ) ;
    n += lastDigit * 3 ;
  }
  return ( n % 29 == 0 ) ;
}


int main() {
    int n_success = 0;
    vector<long> param0 {50,11,65,32,8,54,7,44,34,63};
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
