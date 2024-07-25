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
int f_gold ( string s ) {
  int n = s . length ( );
  int auxArr [ n ] = {
    0 };
    if ( s [ 0 ] == '1' ) auxArr [ 0 ] = 1;
    for ( int i = 1;
    i < n;
    i ++ ) {
      if ( s [ i ] == '1' ) auxArr [ i ] = auxArr [ i - 1 ] + 1;
      else auxArr [ i ] = auxArr [ i - 1 ];
    }
    int count = 0;
    for ( int i = n - 1;
    i >= 0;
    i -- ) if ( s [ i ] == '1' ) count += auxArr [ i ];
    return count;
  }
  

int f_filled ( string s ) {
  int n = s . length ( ) ;
  int auxArr [ n ] ;
  auxArr [ 0 ] = 0 ;
  auxArr [ 1 ] = 0 ;
  if ( ( s [ 0 ] == '1' ) || ( s [ 0 ] == '2' ) || ( s [ 0 ] == '3' ) || ( s [ 0 ] == '4' ) || ( s [ 0 ] == '5' ) || ( s [ 0 ] == '6' ) || ( s [ 0 ] == '7' ) || ( s [ 0 ] == '8' ) || ( s [ 0 ] == '9' ) || ( s [ 0 ] == 'A' ) || ( s [ 0 ] == 'B' ) || ( s [ 0 ] == 'C' ) || ( s [ 0 ] == 'D' ) || ( s [ 0 ] == 'E' ) || ( s [ 0 ] == 'F' ) || ( s [ 0 ] == 'G' ) || ( s [ 0 ] == 'H' ) || ( s [ 0 ] == 'I' ) || ( s [ 0 ] == 'J' ) || ( s [ 0 ] == 'K' ) || ( s [ 0 ] == 'L' ) || ( s [ 0 ] == 'M' ) || ( s [ 0 ] == 'N' ) || ( s [ 0 ] == 'O' ) || ( s [ 0 ] == 'P' ) || ( s [ 0 ] == 'Q' ) || ( s [ 0 ] == 'R' ) || ( s [ 0 ] == 'S' ) || ( s [ 0 ] == 'T' ) || ( s [ 0 ] == 'U' ) || ( s [ 0 ] == 'V' ) || ( s [ 0 ] == 'W' ) || ( s [ 0 ] == 'X' ) || ( s [ 0 ] == 'Y' ) || ( s [ 0 ] == 'Z' ) || ( s [ 0 ] == 'W' ) || ( s [ 0 ] == 'X' ) || ( s [ 0 ] == 'Y' ) || ( s [ 0 ] == 'Z' ) || ( s [ 0 ] == '$' ) || ( s [ 0 ] == '*' ) || ( s [ 0 ] == '?' ) || ( s [ 0 ] == '[' )

int main() {
    int n_success = 0;
    vector<string> param0 {"OGiOkJF","517376","11","Ze","8763644247018","00111010001","HGwkBKUOVu","652","101000011110","kvdpG "};
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