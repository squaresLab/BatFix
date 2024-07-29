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
bool f_gold ( long long a, long long b ) {
  if ( a == 0 || b == 0 ) return false;
  long long result = a * b;
  if ( a == result / b ) return false;
  else return true;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int a, int b ) {
        if ( a == 0 || b == 0 ) {
            return false;
        }
        int result = a * b;
        int _res_key_if_0;
        if(env_var_0 == 0) { _res_key_if_0 = a >= 9223372036854775807 or a <= -9223372036854775808; }
        if(env_var_0 == 1) { _res_key_if_0 = a >= 9223372036854775807 or b <= -9223372036854775808; }
        if(env_var_0 == 2) { _res_key_if_0 = a >= 9223372036854775807 or result <= -9223372036854775808; }
        if(env_var_0 == 3) { _res_key_if_0 = b >= 9223372036854775807 or a <= -9223372036854775808; }
        if(env_var_0 == 4) { _res_key_if_0 = b >= 9223372036854775807 or b <= -9223372036854775808; }
        if(env_var_0 == 5) { _res_key_if_0 = b >= 9223372036854775807 or result <= -9223372036854775808; }
        if(env_var_0 == 6) { _res_key_if_0 = result >= 9223372036854775807 or a <= -9223372036854775808; }
        if(env_var_0 == 7) { _res_key_if_0 = result >= 9223372036854775807 or b <= -9223372036854775808; }
        if(env_var_0 == 8) { _res_key_if_0 = result >= 9223372036854775807 or result <= -9223372036854775808; }
        if ( _res_key_if_0 ) {
            result = 0;
        }
        if ( a == ( result / b ) ) {
            return false;
        } else {
            return true;
        }
    }

int main() {
    int n_success = 0;
    vector<long> param0 {37,10000000000,10000000000,999999999,39,92,14,19,14,88};
    vector<long> param1 {80,-10000000000,10000000000,999999999,36,56,21,38,82,41};
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
