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
int f_gold ( string str ) {
  int checker = 0;
  for ( int i = 0;
  i < str . length ( );
  ++ i ) {
    int val = ( str [ i ] - 'a' );
    if ( ( checker & ( 1 << val ) ) > 0 ) return i;
    checker |= ( 1 << val );
  }
  return - 1;
}


int f_filled ( string string ) {
  int checker = 0 ;
  int pos = 0 ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    int val = string [ i ] - 'a' ;
    ;
    if ( ( ( checker & ( 1 << val ) ) > 0 ) return pos ;
    checker |= ( 1 << val ) ;
    pos ++ ;
  }
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"XFGfXTDgpIuerN","5621946166","11010110","xL","2575","0100010","SZmmQ","9735892999350","1001101101101","oEXDbOU"};
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