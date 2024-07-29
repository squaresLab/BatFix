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
bool f_gold ( int arr [ ], int n ) {
  if ( n == 0 || n == 1 ) return true;
  for ( int i = 1;
  i < n;
  i ++ ) if ( arr [ i - 1 ] > arr [ i ] ) return false;
  return true;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int arr [ ] , int n ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = arr == 0 or arr == 1; }
  if(env_var_0 == 1) { _res_key_if_0 = arr == 0 or arr+n == 1; }
  if(env_var_0 == 2) { _res_key_if_0 = arr == 0 or arr[n] == 1; }
  if(env_var_0 == 3) { _res_key_if_0 = arr == 0 or n == 1; }
  if(env_var_0 == 4) { _res_key_if_0 = arr+n == 0 or arr == 1; }
  if(env_var_0 == 5) { _res_key_if_0 = arr+n == 0 or arr+n == 1; }
  if(env_var_0 == 6) { _res_key_if_0 = arr+n == 0 or arr[n] == 1; }
  if(env_var_0 == 7) { _res_key_if_0 = arr+n == 0 or n == 1; }
  if(env_var_0 == 8) { _res_key_if_0 = arr[n] == 0 or arr == 1; }
  if(env_var_0 == 9) { _res_key_if_0 = arr[n] == 0 or arr+n == 1; }
  if(env_var_0 == 10) { _res_key_if_0 = arr[n] == 0 or arr[n] == 1; }
  if(env_var_0 == 11) { _res_key_if_0 = arr[n] == 0 or n == 1; }
  if(env_var_0 == 12) { _res_key_if_0 = n == 0 or arr == 1; }
  if(env_var_0 == 13) { _res_key_if_0 = n == 0 or arr+n == 1; }
  if(env_var_0 == 14) { _res_key_if_0 = n == 0 or arr[n] == 1; }
  if(env_var_0 == 15) { _res_key_if_0 = n == 0 or n == 1; }
  if ( _res_key_if_0 ) return true ;
  for ( int i = 1 ;
  i < n ;
  i += 1 ) if ( ( arr [ i - 1 ] > arr [ i ] ) && ( arr [ i ] > arr [ i + 1 ] ) ) return false ;
  return true ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,3,4,10,11,13,17,19,23,26,28,29,30,34,35,37,38,38,43,49,49,50,52,53,55,55,57,58,58,59,64,66,67,70,72,72,75,77,77,87,89,89,90,91,98,99,99,99},{56,-94,-26,-52,58,-66,-52,-66,-94,44,38,-66,70,-70,-80,-78,-72,-60,-76,68,-50,32,-16,84,74,-42,98,-8,72,26,24,6,24,86,86,78,-92,80,32,-74,26,50,92,4,2,-34,-2,-18,-10},{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{38,79,76,92,92},{-42,-28,2,32,50,56,86,96,98},{1,0,0,1,1,1,0,1,0,0,0,1,1,1,1,1,1,1},{1,9,12,21,21,24,34,55,60,63,67,68,88,89,91,94,98,99},{-96,96,-98,-42,-74,40,42,50,-46,-52,8,-46,48,88,-78,-72,-10,-20,98,-40,-18,36,4,46,52,28,-88,-28,-28,-86},{0,0,0,0,1,1},{66,12,48,82,33,77,99,98,14,92}};
    vector<int> param1 {46,30,13,2,7,11,9,29,3,7};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i]) == f_gold(&param0[i].front(),param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
