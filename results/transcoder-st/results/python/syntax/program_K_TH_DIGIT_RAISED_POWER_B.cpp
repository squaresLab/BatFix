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
int f_gold ( int a, int b, int k ) {
  int p = pow ( a, b );
  int count = 0;
  while ( p > 0 && count < k ) {
    int rem = p % 10;
    count ++;
    if ( count == k ) return rem;
    p = p / 10;
  }
  return 0;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a , int b , int k ) {
 auto p ;
  if(env_var_0 == 0) { a ** a; }
  if(env_var_0 == 1) { a ** b; }
  if(env_var_0 == 2) { a ** k; }
  if(env_var_0 == 3) { a ** p; }
  if(env_var_0 == 4) { b ** a; }
  if(env_var_0 == 5) { b ** b; }
  if(env_var_0 == 6) { b ** k; }
  if(env_var_0 == 7) { b ** p; }
  if(env_var_0 == 8) { k ** a; }
  if(env_var_0 == 9) { k ** b; }
  if(env_var_0 == 10) { k ** k; }
  if(env_var_0 == 11) { k ** p; }
  if(env_var_0 == 12) { p ** a; }
  if(env_var_0 == 13) { p ** b; }
  if(env_var_0 == 14) { p ** k; }
  if(env_var_0 == 15) { p ** p; }
  if(env_var_0 == 16) { a ** a; }
  if(env_var_0 == 17) { a ** b; }
  if(env_var_0 == 18) { a ** k; }
  if(env_var_0 == 19) { a ** p; }
  if(env_var_0 == 20) { b ** a; }
  if(env_var_0 == 21) { b ** b; }
  if(env_var_0 == 22) { b ** k; }
  if(env_var_0 == 23) { b ** p; }
  if(env_var_0 == 24) { k ** a; }
  if(env_var_0 == 25) { k ** b; }
  if(env_var_0 == 26) { k ** k; }
  if(env_var_0 == 27) { k ** p; }
  if(env_var_0 == 28) { p ** a; }
  if(env_var_0 == 29) { p ** b; }
  if(env_var_0 == 30) { p ** k; }
  if(env_var_0 == 31) { p ** p; }
  if(env_var_0 == 32) { a ** a; }
  if(env_var_0 == 33) { a ** b; }
  if(env_var_0 == 34) { a ** k; }
  if(env_var_0 == 35) { a ** p; }
  if(env_var_0 == 36) { b ** a; }
  if(env_var_0 == 37) { b ** b; }
  if(env_var_0 == 38) { b ** k; }
  if(env_var_0 == 39) { b ** p; }
  if(env_var_0 == 40) { k ** a; }
  if(env_var_0 == 41) { k ** b; }
  if(env_var_0 == 42) { k ** k; }
  if(env_var_0 == 43) { k ** p; }
  if(env_var_0 == 44) { p ** a; }
  if(env_var_0 == 45) { p ** b; }
  if(env_var_0 == 46) { p ** k; }
  if(env_var_0 == 47) { p ** p; }
  if(env_var_0 == 48) { a ** a; }
  if(env_var_0 == 49) { a ** b; }
  if(env_var_0 == 50) { a ** k; }
  if(env_var_0 == 51) { a ** p; }
  if(env_var_0 == 52) { b ** a; }
  if(env_var_0 == 53) { b ** b; }
  if(env_var_0 == 54) { b ** k; }
  if(env_var_0 == 55) { b ** p; }
  if(env_var_0 == 56) { k ** a; }
  if(env_var_0 == 57) { k ** b; }
  if(env_var_0 == 58) { k ** k; }
  if(env_var_0 == 59) { k ** p; }
  if(env_var_0 == 60) { p ** a; }
  if(env_var_0 == 61) { p ** b; }
  if(env_var_0 == 62) { p ** k; }
  if(env_var_0 == 63) { p ** p; }

  int count = 0 ;
  while ( ( p > 0 ) && ( count < k ) ) {
    int rem = p % 10 ;
    count = count + 1 ;
    if ( ( count == k ) && ( rem == k ) ) return rem ;
    p = p / 10 ;
    ;
  }
  return 0 ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {11,41,5,1,24,5,66,7,77,60};
    vector<int> param1 {2,3,4,2,1,2,5,10,30,50};
    vector<int> param2 {1,0,3,4,5,3,8,3,10,1};

    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
