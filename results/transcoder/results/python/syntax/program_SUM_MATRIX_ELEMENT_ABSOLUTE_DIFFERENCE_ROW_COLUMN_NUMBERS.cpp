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
  int arr [ n ] [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < n;
  j ++ ) arr [ i ] [ j ] = abs ( i - j );
  int sum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) for ( int j = 0;
  j < n;
  j ++ ) sum += arr [ i ] [ j ];
  return sum;
}


int foo;
 int j;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  int arr [ n ] [ n ] ;
  for ( int y = 0 ;
  y < n ;
  y ++ ) {
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
     if(env_var_0 == 0) { isupper( arr[i] ); }
      if(env_var_0 == 1) { isupper( i ); }
      if(env_var_0 == 2) { isupper( n ); }
      if(env_var_0 == 3) { isupper( y ); }
      if(env_var_0 == 4) { std::max( arr[i],arr[i] ); }
      if(env_var_0 == 5) { std::max( arr[i],i ); }
      if(env_var_0 == 6) { std::max( arr[i],n ); }
      if(env_var_0 == 7) { std::max( arr[i],y ); }
      if(env_var_0 == 8) { std::max( i,arr[i] ); }
      if(env_var_0 == 9) { std::max( i,i ); }
      if(env_var_0 == 10) { std::max( i,n ); }
      if(env_var_0 == 11) { std::max( i,y ); }
      if(env_var_0 == 12) { std::max( n,arr[i] ); }
      if(env_var_0 == 13) { std::max( n,i ); }
      if(env_var_0 == 14) { std::max( n,n ); }
      if(env_var_0 == 15) { std::max( n,y ); }
      if(env_var_0 == 16) { std::max( y,arr[i] ); }
      if(env_var_0 == 17) { std::max( y,i ); }
      if(env_var_0 == 18) { std::max( y,n ); }
      if(env_var_0 == 19) { std::max( y,y ); }
      if(env_var_0 == 20) { std::min( arr[i],arr[i] ); }
      if(env_var_0 == 21) { std::min( arr[i],i ); }
      if(env_var_0 == 22) { std::min( arr[i],n ); }
      if(env_var_0 == 23) { std::min( arr[i],y ); }
      if(env_var_0 == 24) { std::min( i,arr[i] ); }
      if(env_var_0 == 25) { std::min( i,i ); }
      if(env_var_0 == 26) { std::min( i,n ); }
      if(env_var_0 == 27) { std::min( i,y ); }
      if(env_var_0 == 28) { std::min( n,arr[i] ); }
      if(env_var_0 == 29) { std::min( n,i ); }
      if(env_var_0 == 30) { std::min( n,n ); }
      if(env_var_0 == 31) { std::min( n,y ); }
      if(env_var_0 == 32) { std::min( y,arr[i] ); }
      if(env_var_0 == 33) { std::min( y,i ); }
      if(env_var_0 == 34) { std::min( y,n ); }
      if(env_var_0 == 35) { std::min( y,y ); }
      if(env_var_0 == 36) { toupper( arr[i] ); }
      if(env_var_0 == 37) { toupper( i ); }
      if(env_var_0 == 38) { toupper( n ); }
      if(env_var_0 == 39) { toupper( y ); }
        ;
    }
  }
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      sum += arr [ i ] [ j ] ;
    }
  }
  return sum ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {60,44,72,90,99,45,27,11,65,52};
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

