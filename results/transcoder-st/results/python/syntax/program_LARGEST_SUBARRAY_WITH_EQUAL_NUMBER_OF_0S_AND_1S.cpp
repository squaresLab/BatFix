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
int f_gold ( int arr [ ], int n ) {
  int sum = 0;
  int maxsize = - 1, startindex;
  for ( int i = 0;
  i < n - 1;
  i ++ ) {
    sum = ( arr [ i ] == 0 ) ? - 1 : 1;
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      ( arr [ j ] == 0 ) ? ( sum += - 1 ) : ( sum += 1 );
      if ( sum == 0 && maxsize < j - i + 1 ) {
        maxsize = j - i + 1;
        startindex = i;
      }
    }
  }
  if ( maxsize == - 1 ) cout << "No such subarray";
  else cout << startindex << " to " << startindex + maxsize - 1;
  return maxsize;
}


int foo;
int startindex;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  int sum = 0 ;
  int maxsize = - 1 ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    sum = ( arr [ i ] == 0 ) ? - 1 : 1 ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      sum = sum + ( arr [ j ] == 0 ) ? - 1 : sum + 1 ;
      if ( ( sum == 0 ) && ( maxsize < j - i + 1 ) ) {
        maxsize = j - i + 1 ;
        startindex = i ;
      }
    }
  }
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = arr == -1; }
  if(env_var_0 == 1) { _res_key_if_0 = arr+maxsize == -1; }
  if(env_var_0 == 2) { _res_key_if_0 = arr+n == -1; }
  if(env_var_0 == 3) { _res_key_if_0 = arr+sum == -1; }
  if(env_var_0 == 4) { _res_key_if_0 = arr[maxsize] == -1; }
  if(env_var_0 == 5) { _res_key_if_0 = arr[n] == -1; }
  if(env_var_0 == 6) { _res_key_if_0 = arr[sum] == -1; }
  if(env_var_0 == 7) { _res_key_if_0 = maxsize == -1; }
  if(env_var_0 == 8) { _res_key_if_0 = n == -1; }
  if(env_var_0 == 9) { _res_key_if_0 = sum == -1; }
  if ( _res_key_if_0 ) {
    cout << "No such subarray" << endl ;
  }
  else {
if(env_var_1 == 0) { arr; }
    if(env_var_1 == 1) { arr+maxsize; }
    if(env_var_1 == 2) { arr+n; }
    if(env_var_1 == 3) { arr+sum; }
    if(env_var_1 == 4) { arr[maxsize]; }
    if(env_var_1 == 5) { arr[n]; }
    if(env_var_1 == 6) { arr[sum]; }
    if(env_var_1 == 7) { maxsize; }
    if(env_var_1 == 8) { n; }
    if(env_var_1 == 9) { std::max( arr[maxsize],arr[maxsize] ); }
    if(env_var_1 == 10) { std::max( arr[maxsize],arr[n] ); }
    if(env_var_1 == 11) { std::max( arr[maxsize],arr[sum] ); }
    if(env_var_1 == 12) { std::max( arr[maxsize],maxsize ); }
    if(env_var_1 == 13) { std::max( arr[maxsize],n ); }
    if(env_var_1 == 14) { std::max( arr[maxsize],sum ); }
    if(env_var_1 == 15) { std::max( arr[n],arr[maxsize] ); }
    if(env_var_1 == 16) { std::max( arr[n],arr[n] ); }
    if(env_var_1 == 17) { std::max( arr[n],arr[sum] ); }
    if(env_var_1 == 18) { std::max( arr[n],maxsize ); }
    if(env_var_1 == 19) { std::max( arr[n],n ); }
    if(env_var_1 == 20) { std::max( arr[n],sum ); }
    if(env_var_1 == 21) { std::max( arr[sum],arr[maxsize] ); }
    if(env_var_1 == 22) { std::max( arr[sum],arr[n] ); }
    if(env_var_1 == 23) { std::max( arr[sum],arr[sum] ); }
    if(env_var_1 == 24) { std::max( arr[sum],maxsize ); }
    if(env_var_1 == 25) { std::max( arr[sum],n ); }
    if(env_var_1 == 26) { std::max( arr[sum],sum ); }
    if(env_var_1 == 27) { std::max( maxsize,arr[maxsize] ); }
    if(env_var_1 == 28) { std::max( maxsize,arr[n] ); }
    if(env_var_1 == 29) { std::max( maxsize,arr[sum] ); }
    if(env_var_1 == 30) { std::max( maxsize,maxsize ); }
    if(env_var_1 == 31) { std::max( maxsize,n ); }
    if(env_var_1 == 32) { std::max( maxsize,sum ); }
    if(env_var_1 == 33) { std::max( n,arr[maxsize] ); }
    if(env_var_1 == 34) { std::max( n,arr[n] ); }
    if(env_var_1 == 35) { std::max( n,arr[sum] ); }
    if(env_var_1 == 36) { std::max( n,maxsize ); }
    if(env_var_1 == 37) { std::max( n,n ); }
    if(env_var_1 == 38) { std::max( n,sum ); }
    if(env_var_1 == 39) { std::max( sum,arr[maxsize] ); }
    if(env_var_1 == 40) { std::max( sum,arr[n] ); }
    if(env_var_1 == 41) { std::max( sum,arr[sum] ); }
    if(env_var_1 == 42) { std::max( sum,maxsize ); }
    if(env_var_1 == 43) { std::max( sum,n ); }
    if(env_var_1 == 44) { std::max( sum,sum ); }
    if(env_var_1 == 45) { std::min( arr[maxsize],arr[maxsize] ); }
    if(env_var_1 == 46) { std::min( arr[maxsize],arr[n] ); }
    if(env_var_1 == 47) { std::min( arr[maxsize],arr[sum] ); }
    if(env_var_1 == 48) { std::min( arr[maxsize],maxsize ); }
    if(env_var_1 == 49) { std::min( arr[maxsize],n ); }
    if(env_var_1 == 50) { std::min( arr[maxsize],sum ); }
    if(env_var_1 == 51) { std::min( arr[n],arr[maxsize] ); }
    if(env_var_1 == 52) { std::min( arr[n],arr[n] ); }
    if(env_var_1 == 53) { std::min( arr[n],arr[sum] ); }
    if(env_var_1 == 54) { std::min( arr[n],maxsize ); }
    if(env_var_1 == 55) { std::min( arr[n],n ); }
    if(env_var_1 == 56) { std::min( arr[n],sum ); }
    if(env_var_1 == 57) { std::min( arr[sum],arr[maxsize] ); }
    if(env_var_1 == 58) { std::min( arr[sum],arr[n] ); }
    if(env_var_1 == 59) { std::min( arr[sum],arr[sum] ); }
    if(env_var_1 == 60) { std::min( arr[sum],maxsize ); }
    if(env_var_1 == 61) { std::min( arr[sum],n ); }
    if(env_var_1 == 62) { std::min( arr[sum],sum ); }
    if(env_var_1 == 63) { std::min( maxsize,arr[maxsize] ); }
    if(env_var_1 == 64) { std::min( maxsize,arr[n] ); }
    if(env_var_1 == 65) { std::min( maxsize,arr[sum] ); }
    if(env_var_1 == 66) { std::min( maxsize,maxsize ); }
    if(env_var_1 == 67) { std::min( maxsize,n ); }
    if(env_var_1 == 68) { std::min( maxsize,sum ); }
    if(env_var_1 == 69) { std::min( n,arr[maxsize] ); }
    if(env_var_1 == 70) { std::min( n,arr[n] ); }
    if(env_var_1 == 71) { std::min( n,arr[sum] ); }
    if(env_var_1 == 72) { std::min( n,maxsize ); }
    if(env_var_1 == 73) { std::min( n,n ); }
    if(env_var_1 == 74) { std::min( n,sum ); }
    if(env_var_1 == 75) { std::min( sum,arr[maxsize] ); }
    if(env_var_1 == 76) { std::min( sum,arr[n] ); }
    if(env_var_1 == 77) { std::min( sum,arr[sum] ); }
    if(env_var_1 == 78) { std::min( sum,maxsize ); }
    if(env_var_1 == 79) { std::min( sum,n ); }
    if(env_var_1 == 80) { std::min( sum,sum ); }
    if(env_var_1 == 81) { std::min(); }
    if(env_var_1 == 82) { sum; }
         ;
  }
  return maxsize ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{56,8,67,35,19,82,81,66,10,24,82,2,42,48,18,63,48,74,60,64,64,95,95,20,95,55,63,96,54},{78,67,1,78,48,83,17,19,21,44,99,68,16,54,9},{3,69,97,21,12,67,45,53,77,70,26,43},{21,80,29,22,77,64,42,4,71,75,62,27,30,36,66,37,49,97},{18,66,9,90,21,95,74,48,44,9,43,17},{42,41,87,3,64,25,96,55,99,57,32,64,10,75,69,95,11,36,15,2,78,70,14,54,11,28,55,47,27,85,47,62,97,68,44,70,12,27,36,85,76,91,17,75,83,34,32,89,55},{44},{1,43,28,17,30,46,89,51,15,70,96,79,65,55,8},{25,91,68,4,35,49,33},{14,86,22,42,94,54,28,41,48,8,82,84,99,92,33,75,38,31,59,86,21,6,77,89,79,83,57,26,89,45,60,55,60,76,76,6,40,57,38,44,7,98,64,65,88,73,88,99}};
    vector<int> param1 {26,8,9,10,10,41,0,9,4,26};
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

