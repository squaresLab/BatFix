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
  int num = n;
  int dec_value = 0;
  int base = 1;
  int temp = num;
  while ( temp ) {
    int last_digit = temp % 10;
    temp = temp / 10;
    dec_value += last_digit * base;
    base = base * 8;
  }
  return dec_value;
}


int f_filled ( int n ) {
  int num = n ;
  int decValue = 0 ;
  int base = 1 ;
  int temp = num ;
  while ( ( temp ) ) {
    int lastDigit = temp % 10 ;
    temp = ( int ) ( temp / 10 ) ;
    decValue += lastDigit * base ;
    base = base * 8 ;
  }
  return decValue ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {37,25,63,66,32,5,41,82,54,5};
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