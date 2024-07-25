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
int f_gold ( int start, int end, int arr [ ] ) {
  unordered_map < int, int > frequency;
  for ( int i = start;
  i <= end;
  i ++ ) frequency [ arr [ i ] ] ++;
  int count = 0;
  for ( auto x : frequency ) if ( x . first == x . second ) count ++;
  return count;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int start, int end, int arr[]) {
    map<int, int> frequency;
    for (int i = start; i <= end; i++) {
        int _res_key_if_0;
        if(env_var_0 == 0) { _res_key_if_0 = frequency.begin(); }
        if(env_var_0 == 1) { _res_key_if_0 = frequency.cend(); }
        if(env_var_0 == 2) { _res_key_if_0 = frequency.clear(); }
        if(env_var_0 == 3) { _res_key_if_0 = frequency.crend(); }
        if(env_var_0 == 4) { _res_key_if_0 = frequency.end(); }
        if(env_var_0 == 5) { _res_key_if_0 = frequency.get_allocator(); }
        if(env_var_0 == 6) { _res_key_if_0 = frequency.rbegin(); }
        if(env_var_0 == 7) { _res_key_if_0 = frequency.rend(); }
        if(env_var_0 == 8) { _res_key_if_0 = frequency.size(); }
        if(env_var_0 == 9) { _res_key_if_0 = frequency.value_comp(); }
        if(env_var_0 == 10) { _res_key_if_0 = isupper( arr[end] ); }
        if(env_var_0 == 11) { _res_key_if_0 = isupper( arr[i] ); }
        if(env_var_0 == 12) { _res_key_if_0 = isupper( arr[start] ); }
        if(env_var_0 == 13) { _res_key_if_0 = isupper( end ); }
        if(env_var_0 == 14) { _res_key_if_0 = isupper( i ); }
        if(env_var_0 == 15) { _res_key_if_0 = isupper( start ); }
        if(env_var_0 == 16) { _res_key_if_0 = toupper( arr[end] ); }
        if(env_var_0 == 17) { _res_key_if_0 = toupper( arr[i] ); }
        if(env_var_0 == 18) { _res_key_if_0 = toupper( arr[start] ); }
        if(env_var_0 == 19) { _res_key_if_0 = toupper( end ); }
        if(env_var_0 == 20) { _res_key_if_0 = toupper( i ); }
        if(env_var_0 == 21) { _res_key_if_0 = toupper( start ); }
        if (_res_key_if_0)
            frequency[arr[i]]++;
        else
            frequency[arr[i]] = 1;
    }
    int count = 0;
    for (int x : frequency) {
        if (x == frequency[x])
            count++;
    }
    return count;
}







int main() {
    int n_success = 0;
    vector<int> param0 {0,1,3,10,2,0,14,29,31,21};
    vector<int> param1 {31,25,4,15,3,6,18,33,19,32};
    vector<vector<int>> param2 {
    {1,2,2,3,3,3,12,13,18,18,26,28,29,36,37,39,40,49,55,57,63,69,69,73,85,86,87,87,89,89,90,91,92,93,93,93,95,99},
    {24,-62,2,1,94,56,-22,-70,-22,-34,-92,-18,56,2,60,38,-88,16,-28,30,-30,58,-80,94,6,56},
    {0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {84,13,81,40,87,82,50,30,90,80,81,70,14,54,72,93,78,27,61},
    {-20,20,34,60,90},
    {1,0,0,0,0,0,0,0,0,0},
    {11,18,18,19,25,30,42,42,56,58,63,66,67,68,69,75,78,83,83},
    {-24,-82,24,-84,94,2,-30,86,58,-56,-96,60,-38,76,94,74,-98,-84,-38,46,4,-84,-90,-28,-50,46,16,28,-14,-82,-64,42,64,-2,-40,96,60,2,-86,32,38,-66},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {2,91,42,85,97,92,24,39,63,89,31,59,51,89,72,62,26,92,75,4,6,13,20,95,22,30,52,60,37,27,49,15,67,26}};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],&param2[i].front()) == f_gold(param0[i],param1[i],&param2[i].front()))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

