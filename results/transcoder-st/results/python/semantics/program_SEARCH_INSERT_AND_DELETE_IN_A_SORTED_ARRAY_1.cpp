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
int f_gold ( int arr [ ], int n, int key, int capacity ) {
  if ( n >= capacity ) return n;
  int i;
  for ( i = n - 1;
  ( i >= 0 && arr [ i ] > key );
  i -- ) arr [ i + 1 ] = arr [ i ];
  arr [ i + 1 ] = key;
  return ( n + 1 );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int n , int key , int capacity ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = arr >= arr; }
  if(env_var_0 == 1) { _res_key_if_0 = arr >= arr+capacity; }
  if(env_var_0 == 2) { _res_key_if_0 = arr >= arr+key; }
  if(env_var_0 == 3) { _res_key_if_0 = arr >= arr+n; }
  if(env_var_0 == 4) { _res_key_if_0 = arr >= arr[capacity]; }
  if(env_var_0 == 5) { _res_key_if_0 = arr >= arr[key]; }
  if(env_var_0 == 6) { _res_key_if_0 = arr >= arr[n]; }
  if(env_var_0 == 7) { _res_key_if_0 = arr >= capacity; }
  if(env_var_0 == 8) { _res_key_if_0 = arr >= key; }
  if(env_var_0 == 9) { _res_key_if_0 = arr >= n; }
  if(env_var_0 == 10) { _res_key_if_0 = arr+capacity >= arr; }
  if(env_var_0 == 11) { _res_key_if_0 = arr+capacity >= arr+capacity; }
  if(env_var_0 == 12) { _res_key_if_0 = arr+capacity >= arr+key; }
  if(env_var_0 == 13) { _res_key_if_0 = arr+capacity >= arr+n; }
  if(env_var_0 == 14) { _res_key_if_0 = arr+capacity >= arr[capacity]; }
  if(env_var_0 == 15) { _res_key_if_0 = arr+capacity >= arr[key]; }
  if(env_var_0 == 16) { _res_key_if_0 = arr+capacity >= arr[n]; }
  if(env_var_0 == 17) { _res_key_if_0 = arr+capacity >= capacity; }
  if(env_var_0 == 18) { _res_key_if_0 = arr+capacity >= key; }
  if(env_var_0 == 19) { _res_key_if_0 = arr+capacity >= n; }
  if(env_var_0 == 20) { _res_key_if_0 = arr+key >= arr; }
  if(env_var_0 == 21) { _res_key_if_0 = arr+key >= arr+capacity; }
  if(env_var_0 == 22) { _res_key_if_0 = arr+key >= arr+key; }
  if(env_var_0 == 23) { _res_key_if_0 = arr+key >= arr+n; }
  if(env_var_0 == 24) { _res_key_if_0 = arr+key >= arr[capacity]; }
  if(env_var_0 == 25) { _res_key_if_0 = arr+key >= arr[key]; }
  if(env_var_0 == 26) { _res_key_if_0 = arr+key >= arr[n]; }
  if(env_var_0 == 27) { _res_key_if_0 = arr+key >= capacity; }
  if(env_var_0 == 28) { _res_key_if_0 = arr+key >= key; }
  if(env_var_0 == 29) { _res_key_if_0 = arr+key >= n; }
  if(env_var_0 == 30) { _res_key_if_0 = arr+n >= arr; }
  if(env_var_0 == 31) { _res_key_if_0 = arr+n >= arr+capacity; }
  if(env_var_0 == 32) { _res_key_if_0 = arr+n >= arr+key; }
  if(env_var_0 == 33) { _res_key_if_0 = arr+n >= arr+n; }
  if(env_var_0 == 34) { _res_key_if_0 = arr+n >= arr[capacity]; }
  if(env_var_0 == 35) { _res_key_if_0 = arr+n >= arr[key]; }
  if(env_var_0 == 36) { _res_key_if_0 = arr+n >= arr[n]; }
  if(env_var_0 == 37) { _res_key_if_0 = arr+n >= capacity; }
  if(env_var_0 == 38) { _res_key_if_0 = arr+n >= key; }
  if(env_var_0 == 39) { _res_key_if_0 = arr+n >= n; }
  if(env_var_0 == 40) { _res_key_if_0 = arr[capacity] >= arr; }
  if(env_var_0 == 41) { _res_key_if_0 = arr[capacity] >= arr+capacity; }
  if(env_var_0 == 42) { _res_key_if_0 = arr[capacity] >= arr+key; }
  if(env_var_0 == 43) { _res_key_if_0 = arr[capacity] >= arr+n; }
  if(env_var_0 == 44) { _res_key_if_0 = arr[capacity] >= arr[capacity]; }
  if(env_var_0 == 45) { _res_key_if_0 = arr[capacity] >= arr[key]; }
  if(env_var_0 == 46) { _res_key_if_0 = arr[capacity] >= arr[n]; }
  if(env_var_0 == 47) { _res_key_if_0 = arr[capacity] >= capacity; }
  if(env_var_0 == 48) { _res_key_if_0 = arr[capacity] >= key; }
  if(env_var_0 == 49) { _res_key_if_0 = arr[capacity] >= n; }
  if(env_var_0 == 50) { _res_key_if_0 = arr[key] >= arr; }
  if(env_var_0 == 51) { _res_key_if_0 = arr[key] >= arr+capacity; }
  if(env_var_0 == 52) { _res_key_if_0 = arr[key] >= arr+key; }
  if(env_var_0 == 53) { _res_key_if_0 = arr[key] >= arr+n; }
  if(env_var_0 == 54) { _res_key_if_0 = arr[key] >= arr[capacity]; }
  if(env_var_0 == 55) { _res_key_if_0 = arr[key] >= arr[key]; }
  if(env_var_0 == 56) { _res_key_if_0 = arr[key] >= arr[n]; }
  if(env_var_0 == 57) { _res_key_if_0 = arr[key] >= capacity; }
  if(env_var_0 == 58) { _res_key_if_0 = arr[key] >= key; }
  if(env_var_0 == 59) { _res_key_if_0 = arr[key] >= n; }
  if(env_var_0 == 60) { _res_key_if_0 = arr[n] >= arr; }
  if(env_var_0 == 61) { _res_key_if_0 = arr[n] >= arr+capacity; }
  if(env_var_0 == 62) { _res_key_if_0 = arr[n] >= arr+key; }
  if(env_var_0 == 63) { _res_key_if_0 = arr[n] >= arr+n; }
  if(env_var_0 == 64) { _res_key_if_0 = arr[n] >= arr[capacity]; }
  if(env_var_0 == 65) { _res_key_if_0 = arr[n] >= arr[key]; }
  if(env_var_0 == 66) { _res_key_if_0 = arr[n] >= arr[n]; }
  if(env_var_0 == 67) { _res_key_if_0 = arr[n] >= capacity; }
  if(env_var_0 == 68) { _res_key_if_0 = arr[n] >= key; }
  if(env_var_0 == 69) { _res_key_if_0 = arr[n] >= n; }
  if(env_var_0 == 70) { _res_key_if_0 = capacity >= arr; }
  if(env_var_0 == 71) { _res_key_if_0 = capacity >= arr+capacity; }
  if(env_var_0 == 72) { _res_key_if_0 = capacity >= arr+key; }
  if(env_var_0 == 73) { _res_key_if_0 = capacity >= arr+n; }
  if(env_var_0 == 74) { _res_key_if_0 = capacity >= arr[capacity]; }
  if(env_var_0 == 75) { _res_key_if_0 = capacity >= arr[key]; }
  if(env_var_0 == 76) { _res_key_if_0 = capacity >= arr[n]; }
  if(env_var_0 == 77) { _res_key_if_0 = capacity >= capacity; }
  if(env_var_0 == 78) { _res_key_if_0 = capacity >= key; }
  if(env_var_0 == 79) { _res_key_if_0 = capacity >= n; }
  if(env_var_0 == 80) { _res_key_if_0 = key >= arr; }
  if(env_var_0 == 81) { _res_key_if_0 = key >= arr+capacity; }
  if(env_var_0 == 82) { _res_key_if_0 = key >= arr+key; }
  if(env_var_0 == 83) { _res_key_if_0 = key >= arr+n; }
  if(env_var_0 == 84) { _res_key_if_0 = key >= arr[capacity]; }
  if(env_var_0 == 85) { _res_key_if_0 = key >= arr[key]; }
  if(env_var_0 == 86) { _res_key_if_0 = key >= arr[n]; }
  if(env_var_0 == 87) { _res_key_if_0 = key >= capacity; }
  if(env_var_0 == 88) { _res_key_if_0 = key >= key; }
  if(env_var_0 == 89) { _res_key_if_0 = key >= n; }
  if(env_var_0 == 90) { _res_key_if_0 = n >= arr; }
  if(env_var_0 == 91) { _res_key_if_0 = n >= arr+capacity; }
  if(env_var_0 == 92) { _res_key_if_0 = n >= arr+key; }
  if(env_var_0 == 93) { _res_key_if_0 = n >= arr+n; }
  if(env_var_0 == 94) { _res_key_if_0 = n >= arr[capacity]; }
  if(env_var_0 == 95) { _res_key_if_0 = n >= arr[key]; }
  if(env_var_0 == 96) { _res_key_if_0 = n >= arr[n]; }
  if(env_var_0 == 97) { _res_key_if_0 = n >= capacity; }
  if(env_var_0 == 98) { _res_key_if_0 = n >= key; }
  if(env_var_0 == 99) { _res_key_if_0 = n >= n; }
  if ( _res_key_if_0 ) return n ;
  int i = n - 1 ;
  while ( i >= 0 && arr [ i ] > key ) {
    arr [ i + 1 ] = arr [ i ] ;
    i -- ;
  }
  arr [ i + 1 ] = key ;
  return ( n + 1 ) ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{69},{-34,-38,-72,90,-84,-40,-40,-52,-12,80,-4,-58},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1},{96,34,11,1,36,79,64,75,75,96,32,18,25,79,63,80,90,75,44,71,48,1,62,53,17,98},{-98,-92,-92,-84,-82,-80,-80,-74,-70,-60,-48,-42,-36,-34,-34,-34,-30,-28,-16,-6,-2,-2,2,12,14,20,24,40,46,50,60,66,70,72,78,82,88,92,94,94,96},{1,0,1,1,0,0,1,0,0,0,1,1,0},{10,12,12,19,20,21,24,27,37,47,50,54,55,58,61,63,63,68,73,75,87,90,90,92,92},{-74,62,74,92,-38,-28,-26,4,88,-68,-76,-20,-4,12,72,6,42,36,88,-96,-80,90,80,-26,-36,-72,-62,38,-20,40,-10,-22,-20,38,82,-84,8,-60,86,-26,44,-72,-70,-16,-22,18,-16,76,-50},{1,1,1,1,1},{64,80,47,58,41,3,85,96,51,4,22,89,67,54,88,15,83,31,19,28,40,67,37,13,63,38,27,14,7,68}};
    vector<int> param1 {0,6,13,21,30,12,12,37,3,23};
    vector<int> param2 {0,6,19,20,32,9,13,26,4,24};
    vector<int> param3 {0,9,11,13,28,10,21,42,2,25};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i],param3[i]) == f_gold(&param0[i].front(),param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
