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
string f_gold ( int n ) {
  if ( n == 0 ) return "0";
  string bin = "";
  while ( n > 0 ) {
    bin = ( ( n & 1 ) == 0 ? '0' : '1' ) + bin;
    n >>= 1;
  }
  return bin;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
string f_filled ( int n ) {
        if ( n == 0 ) {
            return "0";
        }
        
        string bin = "";
        
        while ( n > 0 ) {
            int _res_key_if_0;
            if(env_var_0 == 0) { _res_key_if_0 = bin & 1 == 0; }
            if(env_var_0 == 1) { _res_key_if_0 = bin.begin() & 1 == 0; }
            if(env_var_0 == 2) { _res_key_if_0 = bin.end() & 1 == 0; }
            if(env_var_0 == 3) { _res_key_if_0 = bin[n] & 1 == 0; }
            if(env_var_0 == 4) { _res_key_if_0 = n & 1 == 0; }
            if ( _res_key_if_0 ) {
                bin = '0' + bin;
            }
            
            else {
                bin = '1' + bin;
            }
            
            n = n >> 1;
        }
        
        return bin;
    }

int main() {
    int n_success = 0;
    vector<int> param0 {35,17,8,99,57,39,99,14,22,7};
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

