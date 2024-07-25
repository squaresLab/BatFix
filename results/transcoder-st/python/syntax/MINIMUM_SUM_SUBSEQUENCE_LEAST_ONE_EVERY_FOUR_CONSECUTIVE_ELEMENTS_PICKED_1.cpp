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
int f_gold ( int ar [ ], int n ) {
  if ( n <= 4 ) return * min_element ( ar, ar + n );
  int sum [ n ];
  sum [ 0 ] = ar [ 0 ];
  sum [ 1 ] = ar [ 1 ];
  sum [ 2 ] = ar [ 2 ];
  sum [ 3 ] = ar [ 3 ];
  for ( int i = 4;
  i < n;
  i ++ ) sum [ i ] = ar [ i ] + ( * min_element ( sum + i - 4, sum + i ) );
  return * min_element ( sum + n - 4, sum + n );
}


int f_filled ( int ar [ ] , int n ) {
  if ( ( n <= 4 ) || ( n <= 6 ) || ( n <= 8 ) || ( n <= 10 ) || ( n <= 12 ) || ( n <= 14 ) || ( n <= 16 ) || ( n <= 32 ) || ( n <= 64 ) || ( n <= 128 ) || ( n <= 256 ) || ( n <= 512 ) || ( n <= 1024 ) || ( n <= 2048 ) || ( n <= 2048 ) || ( n <= 5121 ) || ( n <= 5122 ) || ( n <= 5123 ) || ( n <= 5124 ) || ( n <= 5125 ) || ( n <= 5126 ) || ( n <= 5127 ) || ( n <= 5128 ) || ( n <= 5129 ) || ( n <= 51210 ) || ( n <= 51211 ) || ( n <= 51212 ) || ( n <= 51213 ) || ( n <= 51214 ) || ( n <= 51215 ) || ( n <= 51216 ) || ( n <= 51217 ) || ( n <= 51218 ) || ( n <= 51219 ) || ( n <= 51220 ) || ( n <= 51221 ) || ( n <= 51222 ) || ( n <= 51223 ) || ( n <= 51224 ) || ( n <= 51225 ) || ( n <= 51226 ) || ( n <= 51227 ) || ( n <= 51228 ) || ( n <= 51229 ) || ( n <= 51230 ) || ( n <= 51231 ) || ( n <= 51232 ) || ( n <= 51233 ) || ( n <= 51234 ) || ( n <= 51235 ) || ( n <= 51236 ) || ( n <= 51237 ) || ( n <= 51238 ) || ( n <= 51239 ) || ( n <= 51240 ) || ( n <= 51241 ) || ( n <= 51242 ) || ( n

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,4,9,26,31,31,33,35,40,45,48,52,57,60,69,75,82,89,90,92,95,97},{60,-68,30,-62,-8,48,-20,30,16,-60,-20},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{15,70,50,28,67,11,27,42,1,61,37,8,66,54,50,91,86,57,4},{-98,-92,-84,-80,-70,-58,-58,-48,-42,-14,-8,24,30,32,42,62,68,70,72,88},{1,1,1,1,0,1,0,1,1,1,0,1,1,1,0},{4,5,5,10,12,13,16,19,19,21,22,25,26,29,30,33,34,44,46,52,55,55,56,78,86,88,88,90,92},{40,-50,-96,78,82,-16,26,8,38,38,54,-24,88,96,-42,-84,-28,-32,-64,74,74,-10,-8,66,14,-78,56,-22,-90,66,-68},{0,0,0,0,0,1,1,1,1,1,1,1},{29,38,20,25,16,97,16,90,30,99}};
    vector<int> param1 {19,5,43,15,16,7,16,26,7,9};
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