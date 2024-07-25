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
int f_gold ( int p ) {
  int first = 1, second = 1, number = 2, next = 1;
  while ( next ) {
    next = ( first + second ) % p;
    first = second;
    second = next;
    number ++;
  }
  return number;
}


int f_filled ( int p ) {
  int first = 1 ;
  int second = 1 ;
  int number = 2 ;
  int next = 1 ;
  while ( ( next = ( first + second ) % p ) != 0 ) {
    next = ( first + second ) % p ;
    first = second ;
    second = next ;
    number = number + 1 ;
  }
  return number ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {51,40,68,7,8,32,93,75,71,15};
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