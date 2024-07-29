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


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int input , int unlock_code ) {
  int rotation = 0 ;
  ;
  while ( true )  {
  if (env_var_0 == 0 && !(input > 0 or input > 0)) break;
  if (env_var_0 == 1 && !(input > 0 or rotation > 0)) break;
  if (env_var_0 == 2 && !(input > 0 or unlock_code > 0)) break;
  if (env_var_0 == 3 && !(rotation > 0 or input > 0)) break;
  if (env_var_0 == 4 && !(rotation > 0 or rotation > 0)) break;
  if (env_var_0 == 5 && !(rotation > 0 or unlock_code > 0)) break;
  if (env_var_0 == 6 && !(unlock_code > 0 or input > 0)) break;
  if (env_var_0 == 7 && !(unlock_code > 0 or rotation > 0)) break;
  if (env_var_0 == 8 && !(unlock_code > 0 or unlock_code > 0)) break;
  {
    int input_digit = input % 10 ;
    int code_digit = unlock_code % 10 ;
    rotation += min ( abs ( input_digit - code_digit ) , 10 - abs ( input_digit - code_digit ) ) ;
    input = ( int ) ( input / 10 ) ;
    unlock_code = ( int ) ( unlock_code / 10 ) ;
  }}
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
