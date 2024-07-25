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
  if ( n <= 1 ) return n;
  int a = 0, b = 1, c = 1;
  int res = 1;
  while ( c < n ) {
    c = a + b;
    res ++;
    a = b;
    b = c;
  }
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  if ( ( n <= 1 ) || ( n > n ) ) return n ;
  int a = 0 ;
  int b = 1 ;
  int c = 1 ;
  int res = 1 ;
  while ( true )  {
  if (env_var_0 == 0 && !(a < a)) break;
  if (env_var_0 == 1 && !(a < b)) break;
  if (env_var_0 == 2 && !(a < c)) break;
  if (env_var_0 == 3 && !(a < n)) break;
  if (env_var_0 == 4 && !(a < res)) break;
  if (env_var_0 == 5 && !(b < a)) break;
  if (env_var_0 == 6 && !(b < b)) break;
  if (env_var_0 == 7 && !(b < c)) break;
  if (env_var_0 == 8 && !(b < n)) break;
  if (env_var_0 == 9 && !(b < res)) break;
  if (env_var_0 == 10 && !(c < a)) break;
  if (env_var_0 == 11 && !(c < b)) break;
  if (env_var_0 == 12 && !(c < c)) break;
  if (env_var_0 == 13 && !(c < n)) break;
  if (env_var_0 == 14 && !(c < res)) break;
  if (env_var_0 == 15 && !(n < a)) break;
  if (env_var_0 == 16 && !(n < b)) break;
  if (env_var_0 == 17 && !(n < c)) break;
  if (env_var_0 == 18 && !(n < n)) break;
  if (env_var_0 == 19 && !(n < res)) break;
  if (env_var_0 == 20 && !(res < a)) break;
  if (env_var_0 == 21 && !(res < b)) break;
  if (env_var_0 == 22 && !(res < c)) break;
  if (env_var_0 == 23 && !(res < n)) break;
  if (env_var_0 == 24 && !(res < res)) break;
  {
    c = a + b ;
    res = res + 1 ;
    a = b ;
    b = c ;
  }}
  return res ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {5,19,7,94,58,65,69,96,80,14};
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

