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


int f_filled ( int n ) {
  int dp [ 10 ] [ 10 ] ;
  for ( int y = 0 ;
  y < n + 1 ;
  y ++ ) {
    dp [ y ] [ 0 ] = 0 ;
    dp [ y ] [ 1 ] = 0 ;
    dp [ y ] [ 2 ] = 0 ;
    dp [ y ] [ 3 ] = 0 ;
    dp [ y ] [ 4 ] = 0 ;
    dp [ y ] [ 5 ] = 0 ;
    dp [ y ] [ 6 ] = 0 ;
    dp [ y ] [ 7 ] = 0 ;
    dp [ y ] [ 8 ] = 0 ;
    dp [ y ] [ 9 ] = 0 ;
    dp [ y ] [ 10 ] = 0 ;
    dp [ y ] [ 11 ] = 0 ;
    dp [ y ] [ 12 ] = 0 ;
    dp [ y ] [ 13 ] = 0 ;
    dp [ y ] [ 14 ] = 0 ;
    dp [ y ] [ 15 ] = 0 ;
    dp [ y ] [ 16 ] = 0 ;
    dp [ y ] [ 17 ] = 0 ;
    dp [ y ] [ 18 ] = 0 ;
    dp [ y ] [ 19 ] = 0 ;
    dp [ y ] [ 20 ] = 0 ;
    dp [ y ] [ 21 ] = 0 ;
    dp [ y ] [ 22 ] = 0 ;
    dp [ y ] [ 23 ] = 0 ;
    dp [ y ] [ 24 ] = 0 ;
    dp [ y ] [ 25 ] = 0 ;
    dp [ y ] [ 26 ] = 0 ;
    dp [ y ] [ 27 ] = 0 ;
    dp [ y ] [ 28 ] = 0 ;
    dp [ y ] [ 29 ] = 0 ;
    dp [ y ] [ 30 ] = 0 ;
    dp [ y ] [ 31 ] = 0 ;
    dp [ y ] [ 32 ] = 0 ;
    dp [ y ] [ 33 ] = 0 ;
    dp [ y ] [ 34 ] = 0 ;
    dp [ y ] [ 35 ] = 0 ;
    dp [ y ] [ 36 ] = 0 ;
    dp [ y ] [ 37 ] = 0 ;
    dp [ y ] [ 38 ] = 0 ;
    dp [ y ] [ 39 ] = 0 ;
    dp [ y ] [ 40 ] = 0 ;
    dp [ y ] [ 41 ] = 0 ;
    dp [ y ] [ 42 ] = 0 ;
    dp [ y ] [ 43 ] = 0 ;
    dp [ y ] [ 44 ] = 0 ;
    dp [ y ] [ 45 ] = 0 ;
    dp [ y ] [ 46 ] = 0 ;
  }
  return dp [ n ] [

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