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
  if ( ( l == 1 ) || ( l == 2 ) || ( l == 3 ) || ( l == 4 ) || ( l == 5 ) || ( l == 6 ) || ( l == 7 ) || ( l == 8 ) || ( l == 9 ) || ( l == 10 ) || ( l == 11 ) || ( l == 12 ) || ( l == 13 ) || ( l == 14 ) || ( l == 15 ) || ( l == 16 ) || ( l == 17 ) || ( l == 18 ) || ( l == 19 ) || ( l == 20 ) || ( l == 21 ) || ( l == 22 ) || ( l == 23 ) || ( l == 24 ) || ( l == 25 ) || ( l == 26 ) || ( l == 27 ) || ( l == 28 ) || ( l == 29 ) || ( l == 30 ) || ( l == 31 ) || ( l == 32 ) || ( l == 33 ) || ( l == 34 ) || ( l == 35 ) || ( l == 36 ) || ( l == 37 ) || ( l == 38 ) || ( l == 39 ) || ( l == 40 ) || ( l == 41 ) || ( l == 42 ) || ( l == 43 ) || ( l == 44 ) || ( l == 45 ) || ( l == 46 ) || ( l == 47 ) || ( l == 48 ) || ( l == 49 ) || ( l == 50 ) || ( l == 51 ) || ( l == 52 ) || ( l == 53 ) || ( l == 54 ) || ( l == 55 ) || ( l == 56 ) || ( l == 57 ) || ( l == 58 ) || ( l == 59 ) || ( l == 60 ) || ( l == 61 ) || ( l == 62 ) || ( l == 63 ) || ( l == 64 ) || ( l == 65 ) || ( l == 66 ) || ( l == 67 ) || ( l == 68 ) || ( l == 69 ) || ( l == 70 ) || ( l == 71 ) || ( l == 72 ) || ( l == 73 ) || ( l == 74 ) || ( l == 75 ) || ( l == 76 ) || ( l == 77 ) || ( l == 78 ) || ( l == 79 ) || ( l == 80 ) || ( l == 81 ) ;
  return l ;
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