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
int f_gold ( int a, int b ) {
  string s = to_string ( b );
  int i;
  for ( i = 0;
  i < s . length ( );
  i ++ ) {
    if ( s [ i ] != '9' ) break;
  }
  int result;
  if ( i == s . length ( ) ) result = a * s . length ( );
  else result = a * ( s . length ( ) - 1 );
  return result;
}


int f_filled ( int a , int b ) {
  string s = to_string ( b ) ;
  int i = 0 ;
  while ( i < ( s . length ( ) ) ) {
    if ( ( s [ i ] != '9' ) && ( s [ i ] != '.' ) ) break ;
    i ++ ;
  }
  int result ;
  if ( ( i == s . length ( ) ) || ( i == s . length ( ) - 1 ) ) result = a * s . length ( ) ;
  else result = a * ( s . length ( ) - 1 ) ;
  return result ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {31,72,23,42,13,93,33,94,60,11};
    vector<int> param1 {91,85,49,32,7,5,32,76,60,26};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}