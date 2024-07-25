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
long long f_gold ( int n ) {
  int dp [ n + 1 ] [ 10 ];
  if ( n == 1 ) return 10;
  for ( int j = 0;
  j <= 9;
  j ++ ) dp [ 1 ] [ j ] = 1;
  for ( int i = 2;
  i <= n;
  i ++ ) {
    for ( int j = 0;
    j <= 9;
    j ++ ) {
      if ( j == 0 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ];
      else if ( j == 9 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ];
      else dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ];
    }
  }
  long long sum = 0;
  for ( int j = 1;
  j <= 9;
  j ++ ) sum += dp [ n ] [ j ];
  return sum;
}


public : int f_filled ( int n ) {
  vector < vector < int >> dp ( 10 , vector < int > ( 10 , 0 ) ) ;
  for ( int y = 0 ;
  y < n + 1 ;
  y ++ ) {
    dp [ y ] . push_back ( 0 ) ;
  }
  ;
  if ( ( n == 1 ) && ( n == 10 ) ) return 10 ;
  ;
  for ( int j = 0 ;
  j < 10 ;
  j ++ ) dp [ 1 ] [ j ] = 1 ;
  ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j < 10 ;
    j ++ ) {
      if ( ( j == 0 ) || ( j == 9 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ] ;
      else if ( ( j == 9 ) || ( j == 10 ) ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = ( dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ] ) ;
      ;
    }
    ;
  }
  ;
  int sum = 0 ;
  ;
  for ( int j = 1 ;
  j <= 10 ;
  j ++ ) sum = sum + dp [ n ] [ j ] ;
  ;
  return sum ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {18,66,73,70,26,41,20,25,52,13};
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