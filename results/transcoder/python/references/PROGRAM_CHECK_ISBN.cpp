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
bool f_gold ( string & isbn ) {
  int n = isbn . length ( );
  if ( n != 10 ) return false;
  int sum = 0;
  for ( int i = 0;
  i < 9;
  i ++ ) {
    int digit = isbn [ i ] - '0';
    if ( 0 > digit || 9 < digit ) return false;
    sum += ( digit * ( 10 - i ) );
  }
  char last = isbn [ 9 ];
  if ( last != 'X' && ( last < '0' || last > '9' ) ) return false;
  sum += ( ( last == 'X' ) ? 10 : ( last - '0' ) );
  return ( sum % 11 == 0 );
}


bool f_filled ( const std :: string & isbn ) {
  if ( isbn . size ( ) != 10 ) return false ;
  int _sum = 0 ;
  for ( int i = 0 ;
  i < 9 ;
  ++ i ) {
    if ( 0 <= isdigit ( isbn [ i ] ) && i <= 9 ) _sum += isdigit ( isbn [ i ] ) * ( 10 - i ) ;
    else return false ;
  }
  if ( ( isbn [ 9 ] != 'X' && 0 <= isdigit ( isbn [ 9 ] ) && 9 <= isdigit ( isbn [ 9 ] ) ) || ( isbn [ 9 ] == 'X' && 0 <= isdigit ( isbn [ 9 ] ) && 9 <= isdigit ( isbn [ 9 ] ) ) ) return false ;
  _sum += 10 == isbn [ 9 ] ? 1 : atoi ( isbn [ 9 ] ) ;
  return ( _sum % 11 == 0 ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"007462542X","0112112425","0545010225","0552527408","424519151311","101011","9780552527408","2290344397","1473226406","DDdguSGiRr"};
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
