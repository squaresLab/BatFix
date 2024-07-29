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
#include <queue>
using namespace std;
double f_gold ( int side ) {
  double volume = ( pow ( side, 3 ) / ( 6 * sqrt ( 2 ) ) );
  return volume;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
double f_filled ( double side ) {
    double volume = ( side * side * side / ( 6 * sqrt ( 2 ) ) ) ;
 if(env_var_0 == 0) { isupper( side ); }
    if(env_var_0 == 1) { isupper( volume ); }
    if(env_var_0 == 2) { std::max( side,side ); }
    if(env_var_0 == 3) { std::max( side,volume ); }
    if(env_var_0 == 4) { std::max( volume,side ); }
    if(env_var_0 == 5) { std::max( volume,volume ); }
    if(env_var_0 == 6) { std::min( side,side ); }
    if(env_var_0 == 7) { std::min( side,volume ); }
    if(env_var_0 == 8) { std::min( volume,side ); }
    if(env_var_0 == 9) { std::min( volume,volume ); }
    if(env_var_0 == 10) { toupper( side ); }
    if(env_var_0 == 11) { toupper( volume ); }
        ;
    }

int main() {
    int n_success = 0;
    vector<int> param0 {58,56,35,99,13,45,40,92,7,13};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(abs(1 - (0.0000001 + abs(f_gold(param0[i])) )/ (abs(f_filled(param0[i])) + 0.0000001)) < 0.001)
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
