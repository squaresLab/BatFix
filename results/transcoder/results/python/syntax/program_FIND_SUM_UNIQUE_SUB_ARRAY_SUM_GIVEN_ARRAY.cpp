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
long long int f_gold ( int arr [ ], int n ) {
  int res = 0;
  unordered_map < int, int > m;
  for ( int i = 0;
  i < n;
  i ++ ) {
    int sum = 0;
    for ( int j = i;
    j < n;
    j ++ ) {
      sum += arr [ j ];
      m [ sum ] ++;
    }
  }
  for ( auto x : m ) if ( x . second == 1 ) res += x . first;
  return res;
}


int foo;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  int res = 0 ;
  map < int , int > m ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int Sum = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      Sum += arr [ j ] ;
      m [ Sum ] = m . find ( Sum ) -> second + 1 ;
    }
  }
  for ( auto x : m ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = arr == 1; }
    if(env_var_0 == 1) { _res_key_if_0 = arr+n == 1; }
    if(env_var_0 == 2) { _res_key_if_0 = arr+res == 1; }
    if(env_var_0 == 3) { _res_key_if_0 = arr+x.second == 1; }
    if(env_var_0 == 4) { _res_key_if_0 = arr[n] == 1; }
    if(env_var_0 == 5) { _res_key_if_0 = arr[res] == 1; }
    if(env_var_0 == 6) { _res_key_if_0 = arr[x.second] == 1; }
    if(env_var_0 == 7) { _res_key_if_0 = isupper( arr[n] ) == 1; }
    if(env_var_0 == 8) { _res_key_if_0 = isupper( arr[res] ) == 1; }
    if(env_var_0 == 9) { _res_key_if_0 = isupper( arr[x.second] ) == 1; }
    if(env_var_0 == 10) { _res_key_if_0 = isupper( n ) == 1; }
    if(env_var_0 == 11) { _res_key_if_0 = isupper( res ) == 1; }
    if(env_var_0 == 12) { _res_key_if_0 = isupper( x.first ) == 1; }
    if(env_var_0 == 13) { _res_key_if_0 = isupper( x.second ) == 1; }
    if(env_var_0 == 14) { _res_key_if_0 = m == 1; }
    if(env_var_0 == 15) { _res_key_if_0 = m.begin() == 1; }
    if(env_var_0 == 16) { _res_key_if_0 = m.cend() == 1; }
    if(env_var_0 == 17) { _res_key_if_0 = m.crend() == 1; }
    if(env_var_0 == 18) { _res_key_if_0 = m.end() == 1; }
    if(env_var_0 == 19) { _res_key_if_0 = m.get_allocator() == 1; }
    if(env_var_0 == 20) { _res_key_if_0 = m.rbegin() == 1; }
    if(env_var_0 == 21) { _res_key_if_0 = m.rend() == 1; }
    if(env_var_0 == 22) { _res_key_if_0 = m.size() == 1; }
    if(env_var_0 == 23) { _res_key_if_0 = m.value_comp() == 1; }
    if(env_var_0 == 24) { _res_key_if_0 = n == 1; }
    if(env_var_0 == 25) { _res_key_if_0 = res == 1; }
    if(env_var_0 == 26) { _res_key_if_0 = toupper( arr[n] ) == 1; }
    if(env_var_0 == 27) { _res_key_if_0 = toupper( arr[res] ) == 1; }
    if(env_var_0 == 28) { _res_key_if_0 = toupper( arr[x.second] ) == 1; }
    if(env_var_0 == 29) { _res_key_if_0 = toupper( n ) == 1; }
    if(env_var_0 == 30) { _res_key_if_0 = toupper( res ) == 1; }
    if(env_var_0 == 31) { _res_key_if_0 = toupper( x.first ) == 1; }
    if(env_var_0 == 32) { _res_key_if_0 = toupper( x.second ) == 1; }
    if(env_var_0 == 33) { _res_key_if_0 = toupper() == 1; }
    if(env_var_0 == 34) { _res_key_if_0 = x == 1; }
    if(env_var_0 == 35) { _res_key_if_0 = x.first == 1; }
    if(env_var_0 == 36) { _res_key_if_0 = x.second == 1; }
    if (_res_key_if_0) ;
  }
  return res ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{7,24,34,35,36,40,49,51,53,74,78},{-34,60,32},{0},{80,64,10,82,14,75,51,91,1,25,98,22,36,27,21,31,93,6,52,91,80,8,62,95,10,71,40,80,35,86,85,26,74,72,64,88,4,71,4,16},{-94,-46,-36,-24,-22,0,10,14,34,34,90,92,98},{1,0,1,0,1,1,1,1,1,1,1,0,1,0,0,0,1,0,0,0,0,0,1,1,0,1,1,1,1,1,1,0,0,0,1,0,1,0,1},{19,20,20,24,25,33,43,47,57,61,61,64,65,71,72,73,75,82,90,93,95},{-6,56,58,-36,70,-92,30,58,-40,98,80,-96,-4,-88,34,76,40,-32,-94,-26,8,72,-56,-96,-88,-24,36,14,-88,-32,90,4,-88,28,18},{0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{91,51,15,78,55,3,10,24,42,84,66,78,10,41,21,53,69,57,20,22,50,72,8,80,12,91,29,95,38,74,95,26,10,57,51,25,49,74,15,42,99,21,27}};
    vector<int> param1 {9,2,0,31,9,21,15,24,11,36};
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

