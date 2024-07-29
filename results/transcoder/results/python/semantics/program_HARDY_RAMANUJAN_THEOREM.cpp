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


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  int count = 0 ;
  if ( ( n % 2 == 0 ) && ( n % 3 == 0 ) ) {
    count = count + 1 ;
    while ( ( n % 2 == 0 ) && ( n % 3 == 0 ) ) n = ( int ) ( n / 2 ) ;
  }
  int i = 3 ;
  while ( ( i <= ( int ) sqrt ( n ) ) && ( n % i == 0 ) ) {
    if ( ( n % i == 0 ) && ( n % 3 == 0 ) ) {
      count = count + 1 ;
      while ( true )  {
      if (env_var_0 == 0 && !(count % count == 0)) break;
      if (env_var_0 == 1 && !(count % i == 0)) break;
      if (env_var_0 == 2 && !(count % n == 0)) break;
      if (env_var_0 == 3 && !(i % count == 0)) break;
      if (env_var_0 == 4 && !(i % i == 0)) break;
      if (env_var_0 == 5 && !(i % n == 0)) break;
      if (env_var_0 == 6 && !(n % count == 0)) break;
      if (env_var_0 == 7 && !(n % i == 0)) break;
      if (env_var_0 == 8 && !(n % n == 0)) break;
      n = ( int ) ( n / i }) ;
    }
    i = i + 2 ;
  }
  if ( ( n > 2 ) && ( n % 3 == 0 ) ) count = count + 1 ;
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
