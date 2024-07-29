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
  int sum = 0;
  for ( int i = 2;
  i * i <= num;
  i ++ ) {
    while ( num % i == 0 ) {
      sum += i;
      num /= i;
    }
  }
  sum += num;
  return sum;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int num ) {
  int sum = 0 ;
  int i = 2 ;
  while ( true )  {
  if (env_var_0 == 0 && !(i * i <= i)) break;
  if (env_var_0 == 1 && !(i * i <= num)) break;
  if (env_var_0 == 2 && !(i * i <= sum)) break;
  if (env_var_0 == 3 && !(i * num <= i)) break;
  if (env_var_0 == 4 && !(i * num <= num)) break;
  if (env_var_0 == 5 && !(i * num <= sum)) break;
  if (env_var_0 == 6 && !(i * sum <= i)) break;
  if (env_var_0 == 7 && !(i * sum <= num)) break;
  if (env_var_0 == 8 && !(i * sum <= sum)) break;
  if (env_var_0 == 9 && !(num * i <= i)) break;
  if (env_var_0 == 10 && !(num * i <= num)) break;
  if (env_var_0 == 11 && !(num * i <= sum)) break;
  if (env_var_0 == 12 && !(num * num <= i)) break;
  if (env_var_0 == 13 && !(num * num <= num)) break;
  if (env_var_0 == 14 && !(num * num <= sum)) break;
  if (env_var_0 == 15 && !(num * sum <= i)) break;
  if (env_var_0 == 16 && !(num * sum <= num)) break;
  if (env_var_0 == 17 && !(num * sum <= sum)) break;
  if (env_var_0 == 18 && !(sum * i <= i)) break;
  if (env_var_0 == 19 && !(sum * i <= num)) break;
  if (env_var_0 == 20 && !(sum * i <= sum)) break;
  if (env_var_0 == 21 && !(sum * num <= i)) break;
  if (env_var_0 == 22 && !(sum * num <= num)) break;
  if (env_var_0 == 23 && !(sum * num <= sum)) break;
  if (env_var_0 == 24 && !(sum * sum <= i)) break;
  if (env_var_0 == 25 && !(sum * sum <= num)) break;
  if (env_var_0 == 26 && !(sum * sum <= sum)) break;
  {
    while ( ( num % i == 0 ) ) {
      sum += i ;
      num /= i ;
    }
    i ++ ;
  }}
  sum += num ;
  return sum ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {83,88,60,6,26,98,38,90,76,66};
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
