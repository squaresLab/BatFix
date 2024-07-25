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
  if ( n <= 1 ) return n;
  int a = 0, b = 1, c = 1;
  int res = 1;
  while ( c < n ) {
    c = a + b;
    res ++;
    a = b;
    b = c;
  }
  return res;
}


int f_filled ( int n ) {
  if ( ( n <= 1 ) || ( n == 2 ) ) return n ;
  int a = 0 ;
  int b = 1 ;
  int c = 1 ;
  int res = 1 ;
  while ( ( c < n ) && ( res == 1 ) ) {
    c = a + b ;
    res = res + 1 ;
    a = b ;
    b = c ;
  }
  return res ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {5,19,7,94,58,65,69,96,80,14};
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