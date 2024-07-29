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
int f_gold ( int arr [ ], int l, int r, int x ) {
  if ( r >= l ) {
    int mid = l + ( r - l ) / 2;
    if ( arr [ mid ] == x ) return mid;
    if ( arr [ mid ] > x ) return f_gold ( arr, l, mid - 1, x );
    return f_gold ( arr, mid + 1, r, x );
  }
  return - 1;
}


int foo;
bool ifarr;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int *arr, int l, int r, int x) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = arr >= arr; }
    if(env_var_0 == 1) { _res_key_if_0 = arr >= arr+l; }
    if(env_var_0 == 2) { _res_key_if_0 = arr >= arr+r; }
    if(env_var_0 == 3) { _res_key_if_0 = arr >= arr+x; }
    if(env_var_0 == 4) { _res_key_if_0 = arr >= arr[l]; }
    if(env_var_0 == 5) { _res_key_if_0 = arr >= arr[r]; }
    if(env_var_0 == 6) { _res_key_if_0 = arr >= arr[x]; }
    if(env_var_0 == 7) { _res_key_if_0 = arr >= l; }
    if(env_var_0 == 8) { _res_key_if_0 = arr >= r; }
    if(env_var_0 == 9) { _res_key_if_0 = arr >= x; }
    if(env_var_0 == 10) { _res_key_if_0 = arr+l >= arr; }
    if(env_var_0 == 11) { _res_key_if_0 = arr+l >= arr+l; }
    if(env_var_0 == 12) { _res_key_if_0 = arr+l >= arr+r; }
    if(env_var_0 == 13) { _res_key_if_0 = arr+l >= arr+x; }
    if(env_var_0 == 14) { _res_key_if_0 = arr+l >= arr[l]; }
    if(env_var_0 == 15) { _res_key_if_0 = arr+l >= arr[r]; }
    if(env_var_0 == 16) { _res_key_if_0 = arr+l >= arr[x]; }
    if(env_var_0 == 17) { _res_key_if_0 = arr+l >= l; }
    if(env_var_0 == 18) { _res_key_if_0 = arr+l >= r; }
    if(env_var_0 == 19) { _res_key_if_0 = arr+l >= x; }
    if(env_var_0 == 20) { _res_key_if_0 = arr+r >= arr; }
    if(env_var_0 == 21) { _res_key_if_0 = arr+r >= arr+l; }
    if(env_var_0 == 22) { _res_key_if_0 = arr+r >= arr+r; }
    if(env_var_0 == 23) { _res_key_if_0 = arr+r >= arr+x; }
    if(env_var_0 == 24) { _res_key_if_0 = arr+r >= arr[l]; }
    if(env_var_0 == 25) { _res_key_if_0 = arr+r >= arr[r]; }
    if(env_var_0 == 26) { _res_key_if_0 = arr+r >= arr[x]; }
    if(env_var_0 == 27) { _res_key_if_0 = arr+r >= l; }
    if(env_var_0 == 28) { _res_key_if_0 = arr+r >= r; }
    if(env_var_0 == 29) { _res_key_if_0 = arr+r >= x; }
    if(env_var_0 == 30) { _res_key_if_0 = arr+x >= arr; }
    if(env_var_0 == 31) { _res_key_if_0 = arr+x >= arr+l; }
    if(env_var_0 == 32) { _res_key_if_0 = arr+x >= arr+r; }
    if(env_var_0 == 33) { _res_key_if_0 = arr+x >= arr+x; }
    if(env_var_0 == 34) { _res_key_if_0 = arr+x >= arr[l]; }
    if(env_var_0 == 35) { _res_key_if_0 = arr+x >= arr[r]; }
    if(env_var_0 == 36) { _res_key_if_0 = arr+x >= arr[x]; }
    if(env_var_0 == 37) { _res_key_if_0 = arr+x >= l; }
    if(env_var_0 == 38) { _res_key_if_0 = arr+x >= r; }
    if(env_var_0 == 39) { _res_key_if_0 = arr+x >= x; }
    if(env_var_0 == 40) { _res_key_if_0 = arr[l] >= arr; }
    if(env_var_0 == 41) { _res_key_if_0 = arr[l] >= arr+l; }
    if(env_var_0 == 42) { _res_key_if_0 = arr[l] >= arr+r; }
    if(env_var_0 == 43) { _res_key_if_0 = arr[l] >= arr+x; }
    if(env_var_0 == 44) { _res_key_if_0 = arr[l] >= arr[l]; }
    if(env_var_0 == 45) { _res_key_if_0 = arr[l] >= arr[r]; }
    if(env_var_0 == 46) { _res_key_if_0 = arr[l] >= arr[x]; }
    if(env_var_0 == 47) { _res_key_if_0 = arr[l] >= l; }
    if(env_var_0 == 48) { _res_key_if_0 = arr[l] >= r; }
    if(env_var_0 == 49) { _res_key_if_0 = arr[l] >= x; }
    if(env_var_0 == 50) { _res_key_if_0 = arr[r] >= arr; }
    if(env_var_0 == 51) { _res_key_if_0 = arr[r] >= arr+l; }
    if(env_var_0 == 52) { _res_key_if_0 = arr[r] >= arr+r; }
    if(env_var_0 == 53) { _res_key_if_0 = arr[r] >= arr+x; }
    if(env_var_0 == 54) { _res_key_if_0 = arr[r] >= arr[l]; }
    if(env_var_0 == 55) { _res_key_if_0 = arr[r] >= arr[r]; }
    if(env_var_0 == 56) { _res_key_if_0 = arr[r] >= arr[x]; }
    if(env_var_0 == 57) { _res_key_if_0 = arr[r] >= l; }
    if(env_var_0 == 58) { _res_key_if_0 = arr[r] >= r; }
    if(env_var_0 == 59) { _res_key_if_0 = arr[r] >= x; }
    if(env_var_0 == 60) { _res_key_if_0 = arr[x] >= arr; }
    if(env_var_0 == 61) { _res_key_if_0 = arr[x] >= arr+l; }
    if(env_var_0 == 62) { _res_key_if_0 = arr[x] >= arr+r; }
    if(env_var_0 == 63) { _res_key_if_0 = arr[x] >= arr+x; }
    if(env_var_0 == 64) { _res_key_if_0 = arr[x] >= arr[l]; }
    if(env_var_0 == 65) { _res_key_if_0 = arr[x] >= arr[r]; }
    if(env_var_0 == 66) { _res_key_if_0 = arr[x] >= arr[x]; }
    if(env_var_0 == 67) { _res_key_if_0 = arr[x] >= l; }
    if(env_var_0 == 68) { _res_key_if_0 = arr[x] >= r; }
    if(env_var_0 == 69) { _res_key_if_0 = arr[x] >= x; }
    if(env_var_0 == 70) { _res_key_if_0 = l >= arr; }
    if(env_var_0 == 71) { _res_key_if_0 = l >= arr+l; }
    if(env_var_0 == 72) { _res_key_if_0 = l >= arr+r; }
    if(env_var_0 == 73) { _res_key_if_0 = l >= arr+x; }
    if(env_var_0 == 74) { _res_key_if_0 = l >= arr[l]; }
    if(env_var_0 == 75) { _res_key_if_0 = l >= arr[r]; }
    if(env_var_0 == 76) { _res_key_if_0 = l >= arr[x]; }
    if(env_var_0 == 77) { _res_key_if_0 = l >= l; }
    if(env_var_0 == 78) { _res_key_if_0 = l >= r; }
    if(env_var_0 == 79) { _res_key_if_0 = l >= x; }
    if(env_var_0 == 80) { _res_key_if_0 = r >= arr; }
    if(env_var_0 == 81) { _res_key_if_0 = r >= arr+l; }
    if(env_var_0 == 82) { _res_key_if_0 = r >= arr+r; }
    if(env_var_0 == 83) { _res_key_if_0 = r >= arr+x; }
    if(env_var_0 == 84) { _res_key_if_0 = r >= arr[l]; }
    if(env_var_0 == 85) { _res_key_if_0 = r >= arr[r]; }
    if(env_var_0 == 86) { _res_key_if_0 = r >= arr[x]; }
    if(env_var_0 == 87) { _res_key_if_0 = r >= l; }
    if(env_var_0 == 88) { _res_key_if_0 = r >= r; }
    if(env_var_0 == 89) { _res_key_if_0 = r >= x; }
    if(env_var_0 == 90) { _res_key_if_0 = x >= arr; }
    if(env_var_0 == 91) { _res_key_if_0 = x >= arr+l; }
    if(env_var_0 == 92) { _res_key_if_0 = x >= arr+r; }
    if(env_var_0 == 93) { _res_key_if_0 = x >= arr+x; }
    if(env_var_0 == 94) { _res_key_if_0 = x >= arr[l]; }
    if(env_var_0 == 95) { _res_key_if_0 = x >= arr[r]; }
    if(env_var_0 == 96) { _res_key_if_0 = x >= arr[x]; }
    if(env_var_0 == 97) { _res_key_if_0 = x >= l; }
    if(env_var_0 == 98) { _res_key_if_0 = x >= r; }
    if(env_var_0 == 99) { _res_key_if_0 = x >= x; }
    if (_res_key_if_0) {
        int mid = l + (r - l) / 2;
    } else
        return -1;
}




int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{3,4,4,8,9,13,13,15,18,27,30,32,42,48,50,52,56,66,69,69,77,84,84,93},{52,-58,-22,-80,44,-52,-34,94,-34,-74,42,60,-62,70,98,32,10,94,26,56,-48,-50,42,2,46,28,-68,-16,-96,-12,66,-46,74,-60,-52,28,-92,-78,32,28,16,34,30,-60,-14},{0,1},{28,84,40,81},{-66,-62,-60,-56,-56,-2,40,44,50,74,82,94},{1,0,0,0,0,1,0,1,0,1,1},{15,26,31,36,36,61,68,72,75,79,82,98},{0,-82,-94,48,48,-96,14,66,76,-30,86,28,-28,-66,-64,92,-94,-66,86,26,8,94,-82,-80,4,-26,76,-46,72,88,-6,8,-30,40,-88,2,-40,-98,-22,-20,4,-12,54,-20,-36,12},{0,0,0,0,0,0,0,1,1,1,1,1,1},{81,47}};
    vector<int> param1 {19,40,1,2,8,7,6,38,12,1};
    vector<int> param2 {12,35,1,2,6,7,7,33,10,1};
    vector<int> param3 {22,44,1,2,8,10,8,39,6,1};
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
