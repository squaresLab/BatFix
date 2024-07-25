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
  for ( int i = 5;
  n / i >= 1;
  i *= 5 ) count += n / i;
  return count;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( double n ) {
  double count = 0 ;
  int i = 5 ;
  while ( true )  {
  if (env_var_0 == 0 && !(count / count >= 1)) break;
  if (env_var_0 == 1 && !(count / i >= 1)) break;
  if (env_var_0 == 2 && !(count / n >= 1)) break;
  if (env_var_0 == 3 && !(i / count >= 1)) break;
  if (env_var_0 == 4 && !(i / i >= 1)) break;
  if (env_var_0 == 5 && !(i / n >= 1)) break;
  if (env_var_0 == 6 && !(n / count >= 1)) break;
  if (env_var_0 == 7 && !(n / i >= 1)) break;
  if (env_var_0 == 8 && !(n / n >= 1)) break;
  {
    count += ( int ) ( n / i ) ;
    i *= 5 ;
  }}
  return ( int ) count ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {9,43,50,32,37,51,33,49,1,75};
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

