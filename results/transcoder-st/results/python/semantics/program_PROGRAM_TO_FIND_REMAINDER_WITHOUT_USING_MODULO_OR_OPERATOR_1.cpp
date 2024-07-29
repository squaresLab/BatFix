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
int f_gold ( int num, int divisor ) {
  if ( divisor == 0 ) {
    cout << "Error: divisor can't be zero \n";
    return - 1;
  }
  if ( divisor < 0 ) divisor = - divisor;
  if ( num < 0 ) num = - num;
  int i = 1;
  int product = 0;
  while ( product <= num ) {
    product = divisor * i;
    i ++;
  }
  return num - ( product - divisor );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int num , int divisor ) {
  if ( ( divisor == 0 ) || ( divisor < 0 ) ) return false ;
  if ( ( divisor < 0 ) ) divisor = - divisor ;
  if ( ( num < 0 ) ) num = - num ;
  int i = 1 ;
  int product = 0 ;
  while ( true )  {
  if (env_var_0 == 0 && !(divisor <= divisor)) break;
  if (env_var_0 == 1 && !(divisor <= i)) break;
  if (env_var_0 == 2 && !(divisor <= num)) break;
  if (env_var_0 == 3 && !(divisor <= product)) break;
  if (env_var_0 == 4 && !(i <= divisor)) break;
  if (env_var_0 == 5 && !(i <= i)) break;
  if (env_var_0 == 6 && !(i <= num)) break;
  if (env_var_0 == 7 && !(i <= product)) break;
  if (env_var_0 == 8 && !(num <= divisor)) break;
  if (env_var_0 == 9 && !(num <= i)) break;
  if (env_var_0 == 10 && !(num <= num)) break;
  if (env_var_0 == 11 && !(num <= product)) break;
  if (env_var_0 == 12 && !(product <= divisor)) break;
  if (env_var_0 == 13 && !(product <= i)) break;
  if (env_var_0 == 14 && !(product <= num)) break;
  if (env_var_0 == 15 && !(product <= product)) break;
  {
    product = divisor * i ;
    i ++ ;
  }}
  return num - ( product - divisor ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {34,63,15,56,63,28,54,2,94,82};
    vector<int> param1 {55,22,26,58,94,45,97,58,91,40};
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
