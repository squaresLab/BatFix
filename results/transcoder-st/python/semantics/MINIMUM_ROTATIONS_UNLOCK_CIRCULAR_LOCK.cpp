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
int f_gold ( int input, int unlock_code ) {
  int rotation = 0;
  int input_digit, code_digit;
  while ( input || unlock_code ) {
    input_digit = input % 10;
    code_digit = unlock_code % 10;
    rotation += min ( abs ( input_digit - code_digit ), 10 - abs ( input_digit - code_digit ) );
    input /= 10;
    unlock_code /= 10;
  }
  return rotation;
}


int f_filled ( int input , int unlockCode ) {
  int rotation = 0 ;
  ;
  while ( ( input > 0 || unlockCode > 0 ) && ( input < 0 || unlockCode < 0 ) ) {
    int inputDigit = input % 10 ;
    int codeDigit = unlockCode % 10 ;
    rotation += min ( abs ( inputDigit - codeDigit ) , 10 - abs ( inputDigit - codeDigit ) ) ;
    input = ( int ) ( input / 10 ) ;
    unlockCode = ( int ) ( unlockCode / 10 ) ;
  }
  ;
  return rotation ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {71,90,28,41,32,39,33,89,50,92};
    vector<int> param1 {46,65,84,23,58,82,58,32,51,77};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}