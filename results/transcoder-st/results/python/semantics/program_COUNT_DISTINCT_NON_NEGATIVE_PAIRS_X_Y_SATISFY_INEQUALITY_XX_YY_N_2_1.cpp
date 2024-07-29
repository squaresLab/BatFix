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
  int x = 0, yCount, res = 0;
  for ( yCount = 0;
  yCount * yCount < n;
  yCount ++ );
  while ( yCount != 0 ) {
    res += yCount;
    x ++;
    while ( yCount != 0 && ( x * x + ( yCount - 1 ) * ( yCount - 1 ) >= n ) ) yCount --;
  }
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  int x = 0 ;
  int res = 0 ;
  int yCount = 0 ;
  while ( true )  {
  if (env_var_0 == 0 && !(n * n < n)) break;
  if (env_var_0 == 1 && !(n * n < res)) break;
  if (env_var_0 == 2 && !(n * n < x)) break;
  if (env_var_0 == 3 && !(n * n < yCount)) break;
  if (env_var_0 == 4 && !(n * res < n)) break;
  if (env_var_0 == 5 && !(n * res < res)) break;
  if (env_var_0 == 6 && !(n * res < x)) break;
  if (env_var_0 == 7 && !(n * res < yCount)) break;
  if (env_var_0 == 8 && !(n * x < n)) break;
  if (env_var_0 == 9 && !(n * x < res)) break;
  if (env_var_0 == 10 && !(n * x < x)) break;
  if (env_var_0 == 11 && !(n * x < yCount)) break;
  if (env_var_0 == 12 && !(n * yCount < n)) break;
  if (env_var_0 == 13 && !(n * yCount < res)) break;
  if (env_var_0 == 14 && !(n * yCount < x)) break;
  if (env_var_0 == 15 && !(n * yCount < yCount)) break;
  if (env_var_0 == 16 && !(res * n < n)) break;
  if (env_var_0 == 17 && !(res * n < res)) break;
  if (env_var_0 == 18 && !(res * n < x)) break;
  if (env_var_0 == 19 && !(res * n < yCount)) break;
  if (env_var_0 == 20 && !(res * res < n)) break;
  if (env_var_0 == 21 && !(res * res < res)) break;
  if (env_var_0 == 22 && !(res * res < x)) break;
  if (env_var_0 == 23 && !(res * res < yCount)) break;
  if (env_var_0 == 24 && !(res * x < n)) break;
  if (env_var_0 == 25 && !(res * x < res)) break;
  if (env_var_0 == 26 && !(res * x < x)) break;
  if (env_var_0 == 27 && !(res * x < yCount)) break;
  if (env_var_0 == 28 && !(res * yCount < n)) break;
  if (env_var_0 == 29 && !(res * yCount < res)) break;
  if (env_var_0 == 30 && !(res * yCount < x)) break;
  if (env_var_0 == 31 && !(res * yCount < yCount)) break;
  if (env_var_0 == 32 && !(x * n < n)) break;
  if (env_var_0 == 33 && !(x * n < res)) break;
  if (env_var_0 == 34 && !(x * n < x)) break;
  if (env_var_0 == 35 && !(x * n < yCount)) break;
  if (env_var_0 == 36 && !(x * res < n)) break;
  if (env_var_0 == 37 && !(x * res < res)) break;
  if (env_var_0 == 38 && !(x * res < x)) break;
  if (env_var_0 == 39 && !(x * res < yCount)) break;
  if (env_var_0 == 40 && !(x * x < n)) break;
  if (env_var_0 == 41 && !(x * x < res)) break;
  if (env_var_0 == 42 && !(x * x < x)) break;
  if (env_var_0 == 43 && !(x * x < yCount)) break;
  if (env_var_0 == 44 && !(x * yCount < n)) break;
  if (env_var_0 == 45 && !(x * yCount < res)) break;
  if (env_var_0 == 46 && !(x * yCount < x)) break;
  if (env_var_0 == 47 && !(x * yCount < yCount)) break;
  if (env_var_0 == 48 && !(yCount * n < n)) break;
  if (env_var_0 == 49 && !(yCount * n < res)) break;
  if (env_var_0 == 50 && !(yCount * n < x)) break;
  if (env_var_0 == 51 && !(yCount * n < yCount)) break;
  if (env_var_0 == 52 && !(yCount * res < n)) break;
  if (env_var_0 == 53 && !(yCount * res < res)) break;
  if (env_var_0 == 54 && !(yCount * res < x)) break;
  if (env_var_0 == 55 && !(yCount * res < yCount)) break;
  if (env_var_0 == 56 && !(yCount * x < n)) break;
  if (env_var_0 == 57 && !(yCount * x < res)) break;
  if (env_var_0 == 58 && !(yCount * x < x)) break;
  if (env_var_0 == 59 && !(yCount * x < yCount)) break;
  if (env_var_0 == 60 && !(yCount * yCount < n)) break;
  if (env_var_0 == 61 && !(yCount * yCount < res)) break;
  if (env_var_0 == 62 && !(yCount * yCount < x)) break;
  if (env_var_0 == 63 && !(yCount * yCount < yCount)) break;
  yCount = yCount + }1 ;
  while ( ( yCount != 0 ) && ( yCount != 0 ) ) {
    res = res + yCount ;
    x = x + 1 ;
    while ( ( yCount != 0 ) && ( x * x + ( yCount - 1 ) * ( yCount - 1 ) >= n ) ) yCount = yCount - 1 ;
  }
  return res ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {72,75,92,30,45,40,81,17,81,99};
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
