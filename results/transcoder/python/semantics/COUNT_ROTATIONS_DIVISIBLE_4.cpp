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
int f_gold ( string n ) {
  int len = n . length ( );
  if ( len == 1 ) {
    int oneDigit = n . at ( 0 ) - '0';
    if ( oneDigit % 4 == 0 ) return 1;
    return 0;
  }
  int twoDigit, count = 0;
  for ( int i = 0;
  i < ( len - 1 );
  i ++ ) {
    twoDigit = ( n . at ( i ) - '0' ) * 10 + ( n . at ( i + 1 ) - '0' );
    if ( twoDigit % 4 == 0 ) count ++;
  }
  twoDigit = ( n . at ( len - 1 ) - '0' ) * 10 + ( n . at ( 0 ) - '0' );
  if ( twoDigit % 4 == 0 ) count ++;
  return count;
}


int f_filled ( string n ) {
  int l = n . length ( ) ;
  if ( ( l == 1 ) || ( l == 2 ) ) {
    int oneDigit = ( int ) n [ 0 ] ;
    if ( ( oneDigit % 4 == 0 ) || ( oneDigit % 4 == 1 ) ) return 1 ;
    return 0 ;
  }
  int count = 0 ;
  for ( int i = 0 ;
  i <= l - 1 ;
  i ++ ) {
    int twoDigit = ( int ) n [ i ] * 10 + ( int ) n [ i + 1 ] ;
    if ( ( twoDigit % 4 == 0 ) || ( twoDigit % 4 == 1 ) ) count = count + 1 ;
  }
  int twoDigit = ( int ) n [ l - 1 ] * 10 + ( int ) n [ 0 ] ;
  if ( ( twoDigit % 4 == 0 ) || ( twoDigit % 4 == 1 ) ) count = count + 1 ;
  return count ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"MRRuQJvxe","87395768","10111100110111","aVDUEfzG","55794792","111010","cndMLMJVmzuH","487717559382","11110","dRMDPyr"};
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
