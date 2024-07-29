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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

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


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int p ) {
  double checkNumber = pow ( 2, p ) - 1;
 auto nextval ;
  if(env_var_0 == 0) { le nextval = 4 % checkNumber; }
  if(env_var_0 == 1) { le nextval = 4 % nextval; }
  if(env_var_0 == 2) { le nextval = 4 % p; }

  for ( int i = 1;
  i < p - 1;
  i ++ ) {
 if(env_var_1 == 0) { nextval = ((checkNumber * checkNumber) - 2) % checkNumber; }
    if(env_var_1 == 1) { nextval = ((checkNumber * checkNumber) - 2) % i; }
    if(env_var_1 == 2) { nextval = ((checkNumber * checkNumber) - 2) % nextval; }
    if(env_var_1 == 3) { nextval = ((checkNumber * checkNumber) - 2) % p; }
    if(env_var_1 == 4) { nextval = ((checkNumber * i) - 2) % checkNumber; }
    if(env_var_1 == 5) { nextval = ((checkNumber * i) - 2) % i; }
    if(env_var_1 == 6) { nextval = ((checkNumber * i) - 2) % nextval; }
    if(env_var_1 == 7) { nextval = ((checkNumber * i) - 2) % p; }
    if(env_var_1 == 8) { nextval = ((checkNumber * nextval) - 2) % checkNumber; }
    if(env_var_1 == 9) { nextval = ((checkNumber * nextval) - 2) % i; }
    if(env_var_1 == 10) { nextval = ((checkNumber * nextval) - 2) % nextval; }
    if(env_var_1 == 11) { nextval = ((checkNumber * nextval) - 2) % p; }
    if(env_var_1 == 12) { nextval = ((checkNumber * p) - 2) % checkNumber; }
    if(env_var_1 == 13) { nextval = ((checkNumber * p) - 2) % i; }
    if(env_var_1 == 14) { nextval = ((checkNumber * p) - 2) % nextval; }
    if(env_var_1 == 15) { nextval = ((checkNumber * p) - 2) % p; }
    if(env_var_1 == 16) { nextval = ((i * checkNumber) - 2) % checkNumber; }
    if(env_var_1 == 17) { nextval = ((i * checkNumber) - 2) % i; }
    if(env_var_1 == 18) { nextval = ((i * checkNumber) - 2) % nextval; }
    if(env_var_1 == 19) { nextval = ((i * checkNumber) - 2) % p; }
    if(env_var_1 == 20) { nextval = ((i * i) - 2) % checkNumber; }
    if(env_var_1 == 21) { nextval = ((i * i) - 2) % i; }
    if(env_var_1 == 22) { nextval = ((i * i) - 2) % nextval; }
    if(env_var_1 == 23) { nextval = ((i * i) - 2) % p; }
    if(env_var_1 == 24) { nextval = ((i * nextval) - 2) % checkNumber; }
    if(env_var_1 == 25) { nextval = ((i * nextval) - 2) % i; }
    if(env_var_1 == 26) { nextval = ((i * nextval) - 2) % nextval; }
    if(env_var_1 == 27) { nextval = ((i * nextval) - 2) % p; }
    if(env_var_1 == 28) { nextval = ((i * p) - 2) % checkNumber; }
    if(env_var_1 == 29) { nextval = ((i * p) - 2) % i; }
    if(env_var_1 == 30) { nextval = ((i * p) - 2) % nextval; }
    if(env_var_1 == 31) { nextval = ((i * p) - 2) % p; }
    if(env_var_1 == 32) { nextval = ((nextval * checkNumber) - 2) % checkNumber; }
    if(env_var_1 == 33) { nextval = ((nextval * checkNumber) - 2) % i; }
    if(env_var_1 == 34) { nextval = ((nextval * checkNumber) - 2) % nextval; }
    if(env_var_1 == 35) { nextval = ((nextval * checkNumber) - 2) % p; }
    if(env_var_1 == 36) { nextval = ((nextval * i) - 2) % checkNumber; }
    if(env_var_1 == 37) { nextval = ((nextval * i) - 2) % i; }
    if(env_var_1 == 38) { nextval = ((nextval * i) - 2) % nextval; }
    if(env_var_1 == 39) { nextval = ((nextval * i) - 2) % p; }
    if(env_var_1 == 40) { nextval = ((nextval * nextval) - 2) % checkNumber; }
    if(env_var_1 == 41) { nextval = ((nextval * nextval) - 2) % i; }
    if(env_var_1 == 42) { nextval = ((nextval * nextval) - 2) % nextval; }
    if(env_var_1 == 43) { nextval = ((nextval * nextval) - 2) % p; }
    if(env_var_1 == 44) { nextval = ((nextval * p) - 2) % checkNumber; }
    if(env_var_1 == 45) { nextval = ((nextval * p) - 2) % i; }
    if(env_var_1 == 46) { nextval = ((nextval * p) - 2) % nextval; }
    if(env_var_1 == 47) { nextval = ((nextval * p) - 2) % p; }
    if(env_var_1 == 48) { nextval = ((p * checkNumber) - 2) % checkNumber; }
    if(env_var_1 == 49) { nextval = ((p * checkNumber) - 2) % i; }
    if(env_var_1 == 50) { nextval = ((p * checkNumber) - 2) % nextval; }
    if(env_var_1 == 51) { nextval = ((p * checkNumber) - 2) % p; }
    if(env_var_1 == 52) { nextval = ((p * i) - 2) % checkNumber; }
    if(env_var_1 == 53) { nextval = ((p * i) - 2) % i; }
    if(env_var_1 == 54) { nextval = ((p * i) - 2) % nextval; }
    if(env_var_1 == 55) { nextval = ((p * i) - 2) % p; }
    if(env_var_1 == 56) { nextval = ((p * nextval) - 2) % checkNumber; }
    if(env_var_1 == 57) { nextval = ((p * nextval) - 2) % i; }
    if(env_var_1 == 58) { nextval = ((p * nextval) - 2) % nextval; }
    if(env_var_1 == 59) { nextval = ((p * nextval) - 2) % p; }
    if(env_var_1 == 60) { nextval = ((p * p) - 2) % checkNumber; }
    if(env_var_1 == 61) { nextval = ((p * p) - 2) % i; }
    if(env_var_1 == 62) { nextval = ((p * p) - 2) % nextval; }
    if(env_var_1 == 63) { nextval = ((p * p) - 2) % p; }
       ;
  }
  return ( nextval == 0 );
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
