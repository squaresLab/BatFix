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
int f_gold ( int arr [ ], int low, int high ) {
  if ( high < low ) return 0;
  if ( high == low ) return low;
  int mid = low + ( high - low ) / 2;
  if ( mid < high && arr [ mid + 1 ] < arr [ mid ] ) return ( mid + 1 );
  if ( mid > low && arr [ mid ] < arr [ mid - 1 ] ) return mid;
  if ( arr [ high ] > arr [ mid ] ) return f_gold ( arr, low, mid - 1 );
  return f_gold ( arr, mid + 1, high );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int low , int high ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = arr < arr; }
  if(env_var_0 == 1) { _res_key_if_0 = arr < arr+high; }
  if(env_var_0 == 2) { _res_key_if_0 = arr < arr+low; }
  if(env_var_0 == 3) { _res_key_if_0 = arr < arr[high]; }
  if(env_var_0 == 4) { _res_key_if_0 = arr < arr[low]; }
  if(env_var_0 == 5) { _res_key_if_0 = arr < high; }
  if(env_var_0 == 6) { _res_key_if_0 = arr < low; }
  if(env_var_0 == 7) { _res_key_if_0 = arr+high < arr; }
  if(env_var_0 == 8) { _res_key_if_0 = arr+high < arr+high; }
  if(env_var_0 == 9) { _res_key_if_0 = arr+high < arr+low; }
  if(env_var_0 == 10) { _res_key_if_0 = arr+high < arr[high]; }
  if(env_var_0 == 11) { _res_key_if_0 = arr+high < arr[low]; }
  if(env_var_0 == 12) { _res_key_if_0 = arr+high < high; }
  if(env_var_0 == 13) { _res_key_if_0 = arr+high < low; }
  if(env_var_0 == 14) { _res_key_if_0 = arr+low < arr; }
  if(env_var_0 == 15) { _res_key_if_0 = arr+low < arr+high; }
  if(env_var_0 == 16) { _res_key_if_0 = arr+low < arr+low; }
  if(env_var_0 == 17) { _res_key_if_0 = arr+low < arr[high]; }
  if(env_var_0 == 18) { _res_key_if_0 = arr+low < arr[low]; }
  if(env_var_0 == 19) { _res_key_if_0 = arr+low < high; }
  if(env_var_0 == 20) { _res_key_if_0 = arr+low < low; }
  if(env_var_0 == 21) { _res_key_if_0 = arr[high] < arr; }
  if(env_var_0 == 22) { _res_key_if_0 = arr[high] < arr+high; }
  if(env_var_0 == 23) { _res_key_if_0 = arr[high] < arr+low; }
  if(env_var_0 == 24) { _res_key_if_0 = arr[high] < arr[high]; }
  if(env_var_0 == 25) { _res_key_if_0 = arr[high] < arr[low]; }
  if(env_var_0 == 26) { _res_key_if_0 = arr[high] < high; }
  if(env_var_0 == 27) { _res_key_if_0 = arr[high] < low; }
  if(env_var_0 == 28) { _res_key_if_0 = arr[low] < arr; }
  if(env_var_0 == 29) { _res_key_if_0 = arr[low] < arr+high; }
  if(env_var_0 == 30) { _res_key_if_0 = arr[low] < arr+low; }
  if(env_var_0 == 31) { _res_key_if_0 = arr[low] < arr[high]; }
  if(env_var_0 == 32) { _res_key_if_0 = arr[low] < arr[low]; }
  if(env_var_0 == 33) { _res_key_if_0 = arr[low] < high; }
  if(env_var_0 == 34) { _res_key_if_0 = arr[low] < low; }
  if(env_var_0 == 35) { _res_key_if_0 = high < arr; }
  if(env_var_0 == 36) { _res_key_if_0 = high < arr+high; }
  if(env_var_0 == 37) { _res_key_if_0 = high < arr+low; }
  if(env_var_0 == 38) { _res_key_if_0 = high < arr[high]; }
  if(env_var_0 == 39) { _res_key_if_0 = high < arr[low]; }
  if(env_var_0 == 40) { _res_key_if_0 = high < high; }
  if(env_var_0 == 41) { _res_key_if_0 = high < low; }
  if(env_var_0 == 42) { _res_key_if_0 = low < arr; }
  if(env_var_0 == 43) { _res_key_if_0 = low < arr+high; }
  if(env_var_0 == 44) { _res_key_if_0 = low < arr+low; }
  if(env_var_0 == 45) { _res_key_if_0 = low < arr[high]; }
  if(env_var_0 == 46) { _res_key_if_0 = low < arr[low]; }
  if(env_var_0 == 47) { _res_key_if_0 = low < high; }
  if(env_var_0 == 48) { _res_key_if_0 = low < low; }
  if ( _res_key_if_0 ) return 0 ;
  if ( ( high == low ) || ( high == high ) ) return low ;
  int mid = low + ( high - low ) / 2 ;
  ;
  mid = ( int ) mid ;
  if ( ( mid < high ) && arr [ mid + 1 ] < arr [ mid ] ) return ( mid + 1 ) ;
  if ( ( mid > low ) && arr [ mid ] < arr [ mid - 1 ] ) return mid ;
  if ( ( arr [ high ] > arr [ mid ] ) ) return f_filled ( arr , low , mid - 1 ) ;
  return f_filled ( arr , mid + 1 , high ) ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,16,38,39,48,74,79},{-46,72,72,-66,96,92,40,8,94,-84,6,-90,38,-6,48,-20,-86,-76,88,-50,-44,-14,54,-6,-2,72,8,-64,-46,44,-88,50,86,38,42,-56},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{48,74,59,57,95,11,25,61,46,54,34,84,7,97,62,57,99,93,76,5,76,93,35,84,37,60,65,16,30,73,42,61,74,77,48,62,84,93,64,57,68,46,28,77},{-72,-68,-66,-66,-62,-62,-52,-48,-42,-42,-42,-38,-30,-22,-20,-20,-16,-16,-14,0,2,2,2,4,12,20,22,26,32,34,46,46,64,64,64,66,68,68,68,74,80,84,84,88,88,90,96,98},{1},{7,11,20,21,22,27,30,30,34,35,36,37,38,60,61,63,63,69,70,75,80,84,88,97},{-2,70,-40},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{71,71,27,10,97,43,55,71,6,6,77,48,77,2,83,51,61,19,2,51,26,70,20,23,54,15,6,92,35,75,8,57,50,49,88,21,36}};
    vector<int> param1 {6,32,16,24,29,0,23,2,30,24};
    vector<int> param2 {6,21,29,26,43,0,22,1,17,22};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

