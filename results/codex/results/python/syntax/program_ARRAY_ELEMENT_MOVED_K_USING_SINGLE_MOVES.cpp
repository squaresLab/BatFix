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
int f_gold ( int a [ ], int n, int k ) {
  if ( k >= n - 1 ) return n;
  int best = 0, times = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( a [ i ] > best ) {
      best = a [ i ];
      if ( i ) times = 1;
    }
    else times += 1;
    if ( times >= k ) return best;
  }
  return best;
}


int foo;
int True;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a [ ] , int n , int k ) {
    if ( k >= n - 1 ) {
        return n ;
    }
    int best = 0 ;
    int times = 0 ;
    for ( int i = 0 ; i < n ; i ++ ) {
        if ( a [ i ] > best ) {
            best = a [ i ] ;
            int _res_key_if_0;
            if(env_var_0 == 0) { _res_key_if_0 = a == true; }
            if(env_var_0 == 1) { _res_key_if_0 = a+best == true; }
            if(env_var_0 == 2) { _res_key_if_0 = a+i == true; }
            if(env_var_0 == 3) { _res_key_if_0 = a+k == true; }
            if(env_var_0 == 4) { _res_key_if_0 = a+n == true; }
            if(env_var_0 == 5) { _res_key_if_0 = a+times == true; }
            if(env_var_0 == 6) { _res_key_if_0 = a[best] == true; }
            if(env_var_0 == 7) { _res_key_if_0 = a[i] == true; }
            if(env_var_0 == 8) { _res_key_if_0 = a[k] == true; }
            if(env_var_0 == 9) { _res_key_if_0 = a[n] == true; }
            if(env_var_0 == 10) { _res_key_if_0 = a[times] == true; }
            if(env_var_0 == 11) { _res_key_if_0 = best == true; }
            if(env_var_0 == 12) { _res_key_if_0 = i == true; }
            if(env_var_0 == 13) { _res_key_if_0 = k == true; }
            if(env_var_0 == 14) { _res_key_if_0 = n == true; }
            if(env_var_0 == 15) { _res_key_if_0 = times == true; }
            if ( _res_key_if_0 ) {
                times = 1 ;
            }
        } else {
            times += 1 ;
        }
        if ( times >= k ) {
            return best ;
        }
    }
    return best ;
}

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,5,5,9,10,10,11,14,23,27,31,32,33,33,33,37,39,41,41,42,42,43,47,60,61,68,73,73,73,78,80,80,82,83,86,87,89,92,94,98},{80,-58,64,48,-16,60,-50,-52,62,-86,-96,52,26,-30,14},{0,0,0,0,0,0,0,0,0,1,1},{90,23,43,42,7,71,79},{-96,-96,-90,-84,-68,-64,-56,-56,-50,-50,-48,-46,-28,-18,0,0,6,32,32,34,42,42,46,50,50,52,64,64,70,76,84,88},{1,1,1},{2,9,15,19,26,29,42,45,46,47,55,60,60,61,62,64,68,69,74,79,96},{-32,12,80,42,80,8,58,-76,-42,-98,22,-90,-16,-4,-62,-32,28,12,78,-52,-84,78,88,-76,-52,68,-34,-16,-4,2,-78,-94,-22,34,6,-62,72},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{52,19}};
    vector<int> param1 {33,14,7,4,28,1,14,26,26,1};
    vector<int> param2 {37,13,6,4,21,2,17,31,14,1};
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
