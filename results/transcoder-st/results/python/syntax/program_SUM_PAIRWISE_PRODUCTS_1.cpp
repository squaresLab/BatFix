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
long long int f_gold ( int n ) {
  long long int multiTerms = n * ( n + 1 ) / 2;
  long long int sum = multiTerms;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    multiTerms = multiTerms - ( i - 1 );
    sum = sum + multiTerms * i;
  }
  return sum;
}


int foo;
int returnsm;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  int multiTerms = n * ( n + 1 ) / 2 ;
  int sm = multiTerms ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    multiTerms = multiTerms - ( i - 1 ) ;
    sm = sm + multiTerms * i ;
  }
if(env_var_0 == 0) { multiTerms; }
  if(env_var_0 == 1) { n; }
  if(env_var_0 == 2) { sm; }
     ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {41,50,67,18,60,6,27,46,50,20};
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
