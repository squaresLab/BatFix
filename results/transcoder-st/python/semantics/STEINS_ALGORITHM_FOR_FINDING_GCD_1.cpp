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
  if ( a == b ) return a;
  if ( a == 0 ) return b;
  if ( b == 0 ) return a;
  if ( ~ a & 1 ) {
    if ( b & 1 ) return f_gold ( a >> 1, b );
    else return f_gold ( a >> 1, b >> 1 ) << 1;
  }
  if ( ~ b & 1 ) return f_gold ( a, b >> 1 );
  if ( a > b ) return f_gold ( ( a - b ) >> 1, b );
  return f_gold ( ( b - a ) >> 1, a );
}


int f_filled ( int a , int b ) {
  if ( ( a == b ) || ( a == 0 ) ) return a ;
  if ( ( b == 0 ) || ( b == 0 ) ) return a ;
  if ( ( ( ~ a & 1 ) == 1 ) && ( ( b & 1 ) == 1 ) ) {
    if ( ( ( ~ b & 1 ) == 1 ) && ( ( a & 1 ) == 1 ) ) return f_filled ( a >> 1 , b ) ;
    else return ( f_filled ( a >> 1 , b >> 1 ) << 1 ) ;
  }
  if ( ( ( ~ b & 1 ) == 1 ) && ( ( a & 1 ) == 1 ) ) return f_filled ( a , b >> 1 ) ;
  if ( ( a > b ) || ( a == 0 ) || ( b == 0 ) ) return f_filled ( ( a - b ) >> 1 , b ) ;
  return f_filled ( ( b - a ) >> 1 , a ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {52,36,12,69,45,7,45,62,96,89};
    vector<int> param1 {29,94,6,7,11,51,55,86,63,12};
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