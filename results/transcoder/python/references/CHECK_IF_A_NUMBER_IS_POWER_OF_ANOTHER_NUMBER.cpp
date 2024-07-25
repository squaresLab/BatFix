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
bool f_gold ( int x, long int y ) {
  if ( x == 1 ) return ( y == 1 );
  long int pow = 1;
  while ( pow < y ) pow *= x;
  return ( pow == y );
}


bool f_filled ( int x , int y ) {
  if ( ( x == 1 ) || ( y == 1 ) ) return ( y == 1 ) ;
  int pow = 1 ;
  while ( ( pow < y ) && ( pow != 0 ) ) pow = pow * x ;
  return ( pow == y ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {57,3,10,10,6,2,1,20,96,25};
    vector<int> param1 {1,9,101,10000,46656,2048,40,79,98,5};
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