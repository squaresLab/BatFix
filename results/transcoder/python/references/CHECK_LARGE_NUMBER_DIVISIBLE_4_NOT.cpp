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
bool f_gold ( string str ) {
  int n = str . length ( );
  if ( n == 0 ) return false;
  if ( n == 1 ) return ( ( str [ 0 ] - '0' ) % 4 == 0 );
  int last = str [ n - 1 ] - '0';
  int second_last = str [ n - 2 ] - '0';
  return ( ( second_last * 10 + last ) % 4 == 0 );
}


bool f_filled ( string st ) {
  int n = st . length ( ) ;
  if ( ( n == 0 ) || ( n == 1 ) ) return false ;
  if ( ( n == 2 ) || ( n == 3 ) ) return ( ( st [ 0 ] - '0' ) % 4 == 0 ) ;
  int last = ( int ) ( st [ n - 1 ] ) ;
  int secondLast = ( int ) ( st [ n - 2 ] ) ;
  return ( ( secondLast * 10 + last ) % 4 == 0 ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"PjAFZXQgN","12325195609714","00101111101","xOtbXZiA","980","000000100","zFacc W","8","110011","afiutekeSfYrX"};
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