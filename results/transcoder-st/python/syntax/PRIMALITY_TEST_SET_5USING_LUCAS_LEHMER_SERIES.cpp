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
bool f_gold ( int p ) {
  long long checkNumber = pow ( 2, p ) - 1;
  long long nextval = 4 % checkNumber;
  for ( int i = 1;
  i < p - 1;
  i ++ ) nextval = ( nextval * nextval - 2 ) % checkNumber;
  return ( nextval == 0 );
}


bool f_filled ( int p ) {
  int checkNumber = 2 * * p - 1 ;
  int nextval = 4 % checkNumber ;
  for ( int i = 1 ;
  i <= p - 1 ;
  i ++ ) nextval = ( nextval * nextval - 2 ) % checkNumber ;
  if ( ( nextval == 0 ) || ( nextval == 1 ) ) return true ;
  else return false ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {11,27,31,47,3,14,41,72,39,22};
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