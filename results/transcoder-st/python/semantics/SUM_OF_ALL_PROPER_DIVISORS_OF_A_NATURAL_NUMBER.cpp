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
int f_gold ( int num ) {
  int result = 0;
  for ( int i = 2;
  i <= sqrt ( num );
  i ++ ) {
    if ( num % i == 0 ) {
      if ( i == ( num / i ) ) result += i;
      else result += ( i + num / i );
    }
  }
  return ( result + 1 );
}


int f_filled ( int num ) {
  int result = 0 ;
  int i = 2 ;
  while ( i <= ( sqrt ( num ) ) ) {
    if ( ( num % i == 0 ) && ( i == ( num / i ) ) ) {
      if ( ( i == ( num / i ) ) || ( i == ( num / i ) ) ) result = result + i ;
      else result = result + ( i + num / i ) ;
    }
    i = i + 1 ;
  }
  return ( result + 1 ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {2,57,28,43,38,29,45,47,44,3};
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