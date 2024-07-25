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
int f_gold ( int n, int x, int y ) {
  vector < bool > arr ( n + 1, false );
  if ( x <= n ) arr [ x ] = true;
  if ( y <= n ) arr [ y ] = true;
  int result = 0;
  for ( int i = min ( x, y );
  i <= n;
  i ++ ) {
    if ( arr [ i ] ) {
      if ( i + x <= n ) arr [ i + x ] = true;
      if ( i + y <= n ) arr [ i + y ] = true;
      result ++;
    }
  }
  return result;
}


int f_filled ( int n , int x , int y ) {
  bool arr [ n + 2 ] ;
  for ( int i = 0 ;
  i < n + 2 ;
  i ++ ) {
    if ( ( x <= n ) && ( x < n ) ) arr [ x ] = true ;
    if ( ( y <= n ) && ( y < n ) ) arr [ y ] = true ;
  }
  int result = 0 ;
  for ( int i = min ( x , y ) ;
  i <= n ;
  i ++ ) {
    if ( ( arr [ i ] ) ) {
      if ( ( i + x <= n ) && ( i + x <= n ) ) arr [ i + x ] = true ;
      if ( ( i + y <= n ) && ( i + y <= n ) ) arr [ i + y ] = true ;
      result = result + 1 ;
    }
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {23,56,30,51,21,69,12,44,99,46};
    vector<int> param1 {16,95,63,89,99,63,69,52,65,58};
    vector<int> param2 {16,6,1,46,38,50,73,9,10,37};
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