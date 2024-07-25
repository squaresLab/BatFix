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
bool f_gold ( int n, int i = 2 ) {
  if ( n <= 2 ) return ( n == 2 ) ? true : false;
  if ( n % i == 0 ) return false;
  if ( i * i > n ) return true;
  return f_gold ( n, i + 1 );
}


bool f_filled ( int n , int i ) {
  if ( ( n <= 2 ) || ( n == 2 ) ) return ( n % i == 0 ) ;
  if ( ( n % i == 0 ) || ( n * i > n ) ) return true ;
  return f_filled ( n , i + 1 ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {3,7,89,97,41,73,95,69,20,30};
    vector<int> param1 {2,2,2,2,2,2,2,2,2,2};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
