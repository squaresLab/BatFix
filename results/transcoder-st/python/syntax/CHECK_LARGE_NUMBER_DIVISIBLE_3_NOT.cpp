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
  int n = str . length ( );
  int digitSum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) digitSum += ( str [ i ] - '0' );
  return ( digitSum % 3 == 0 );
}


bool f_filled ( int num ) {
  int digitSum = 0 ;
  while ( num > 0 ) {
    int rem = num % 10 ;
    digitSum = digitSum + rem ;
    num = num / 10 ;
  }
  return ( digitSum % 3 == 0 ) ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"Xy","4827182","110011","GdOXZk","8970294","000110","xMRGdAgsGlH","34643260819239","00","DcCK"};
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