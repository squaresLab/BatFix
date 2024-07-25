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
int f_gold ( int n ) {
  if ( n < 4 ) return - 1;
  int rem = n % 4;
  if ( rem == 0 ) return n / 4;
  if ( rem == 1 ) {
    if ( n < 9 ) return - 1;
    return ( n - 9 ) / 4 + 1;
  }
  if ( rem == 2 ) return ( n - 6 ) / 4 + 1;
  if ( rem == 3 ) {
    if ( n < 15 ) return - 1;
    return ( n - 15 ) / 4 + 2;
  }
}


int f_filled ( int n ) {
  if ( ( n < 4 ) || ( n > 9 ) ) return - 1 ;
  int rem = n % 4 ;
  if ( ( rem == 0 ) || ( rem == 1 ) || ( rem == 2 ) || ( rem == 3 ) || ( rem == 4 ) || ( rem == 5 ) || ( rem == 6 ) || ( rem == 7 ) || ( rem == 8 ) || ( rem == 9 ) || ( rem == 10 ) || ( rem == 11 ) || ( rem == 12 ) || ( rem == 13 ) || ( rem == 14 ) || ( rem == 15 ) || ( rem == 16 ) || ( rem == 17 ) || ( rem == 18 ) || ( rem == 19 ) || ( rem == 20 ) || ( rem == 21 ) || ( rem == 22 ) || ( rem == 23 ) || ( rem == 24 ) || ( rem == 25 ) || ( rem == 26 ) || ( rem == 27 ) || ( rem == 28 ) || ( rem == 29 ) || ( rem == 30 ) || ( rem == 31 ) || ( rem == 32 ) || ( rem == 33 ) || ( rem == 34 ) || ( rem == 35 ) || ( rem == 36 ) || ( rem == 37 ) || ( rem == 38 ) || ( rem == 39 ) || ( rem == 40 ) || ( rem == 41 ) || ( rem == 42 ) || ( rem == 43 ) || ( rem == 44 ) || ( rem == 45 ) || ( rem == 46 ) || ( rem == 47 ) || ( rem == 48 ) || ( rem == 49 ) || ( rem == 50 ) || ( rem == 51 ) || ( rem == 52 ) || ( rem == 53 ) || ( rem == 54 ) || ( rem == 55 ) || ( rem == 56 ) || ( rem == 57 ) || ( rem == 58 ) || ( rem == 59 ) || ( rem == 60 ) || ( rem == 61 ) || ( rem == 62 ) || ( rem == 63 ) || (

int main() {
    int n_success = 0;
    vector<int> param0 {55,35,24,75,5,7,50,28,67,59};
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