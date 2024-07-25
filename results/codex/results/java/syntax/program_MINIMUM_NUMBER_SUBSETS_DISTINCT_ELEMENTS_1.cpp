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
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) mp [ arr [ i ] ] ++;
  int res = 0;
  for ( auto x : mp ) res = max ( res, x . second );
  return res;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ], int n ) {
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ )
      mp [ arr [ i ] ] = mp [ arr [ i ] ] == 0 ? 1 : mp [ arr [ i ] ] + 1;
  int res = 0;
  for ( auto it = mp . begin ( );
  it != mp . end ( );
  it ++ ) {
  if(env_var_0 == 0) { res = arr; }
  if(env_var_0 == 1) { res = arr+it.operator->()->second; }
  if(env_var_0 == 2) { res = arr+n; }
  if(env_var_0 == 3) { res = arr+res; }
  if(env_var_0 == 4) { res = arr[it.operator->()->second]; }
  if(env_var_0 == 5) { res = arr[n]; }
  if(env_var_0 == 6) { res = arr[res]; }
  if(env_var_0 == 7) { res = isupper( arr[it.operator->()->second] ); }
  if(env_var_0 == 8) { res = isupper( arr[n] ); }
  if(env_var_0 == 9) { res = isupper( arr[res] ); }
  if(env_var_0 == 10) { res = isupper( it.operator->()->first ); }
  if(env_var_0 == 11) { res = isupper( it.operator->()->second ); }
  if(env_var_0 == 12) { res = isupper( n ); }
  if(env_var_0 == 13) { res = isupper( res ); }
  if(env_var_0 == 14) { res = it; }
  if(env_var_0 == 15) { res = it.operator->()->first; }
  if(env_var_0 == 16) { res = it.operator->()->second; }
  if(env_var_0 == 17) { res = mp; }
  if(env_var_0 == 18) { res = mp.begin(); }
  if(env_var_0 == 19) { res = mp.end(); }
  if(env_var_0 == 20) { res = n; }
  if(env_var_0 == 21) { res = res; }
  if(env_var_0 == 22) { res = std::max( arr[it.operator->()->second],arr[it.operator->()->second] ); }
  if(env_var_0 == 23) { res = std::max( arr[it.operator->()->second],arr[n] ); }
  if(env_var_0 == 24) { res = std::max( arr[it.operator->()->second],arr[res] ); }
  if(env_var_0 == 25) { res = std::max( arr[it.operator->()->second],it.operator->()->first ); }
  if(env_var_0 == 26) { res = std::max( arr[it.operator->()->second],it.operator->()->second ); }
  if(env_var_0 == 27) { res = std::max( arr[it.operator->()->second],n ); }
  if(env_var_0 == 28) { res = std::max( arr[it.operator->()->second],res ); }
  if(env_var_0 == 29) { res = std::max( arr[n],arr[it.operator->()->second] ); }
  if(env_var_0 == 30) { res = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 31) { res = std::max( arr[n],arr[res] ); }
  if(env_var_0 == 32) { res = std::max( arr[n],it.operator->()->first ); }
  if(env_var_0 == 33) { res = std::max( arr[n],it.operator->()->second ); }
  if(env_var_0 == 34) { res = std::max( arr[n],n ); }
  if(env_var_0 == 35) { res = std::max( arr[n],res ); }
  if(env_var_0 == 36) { res = std::max( arr[res],arr[it.operator->()->second] ); }
  if(env_var_0 == 37) { res = std::max( arr[res],arr[n] ); }
  if(env_var_0 == 38) { res = std::max( arr[res],arr[res] ); }
  if(env_var_0 == 39) { res = std::max( arr[res],it.operator->()->first ); }
  if(env_var_0 == 40) { res = std::max( arr[res],it.operator->()->second ); }
  if(env_var_0 == 41) { res = std::max( arr[res],n ); }
  if(env_var_0 == 42) { res = std::max( arr[res],res ); }
  if(env_var_0 == 43) { res = std::max( it.operator->()->first,arr[it.operator->()->second] ); }
  if(env_var_0 == 44) { res = std::max( it.operator->()->first,arr[n] ); }
  if(env_var_0 == 45) { res = std::max( it.operator->()->first,arr[res] ); }
  if(env_var_0 == 46) { res = std::max( it.operator->()->first,it.operator->()->first ); }
  if(env_var_0 == 47) { res = std::max( it.operator->()->first,it.operator->()->second ); }
  if(env_var_0 == 48) { res = std::max( it.operator->()->first,n ); }
  if(env_var_0 == 49) { res = std::max( it.operator->()->first,res ); }
  if(env_var_0 == 50) { res = std::max( it.operator->()->second,arr[it.operator->()->second] ); }
  if(env_var_0 == 51) { res = std::max( it.operator->()->second,arr[n] ); }
  if(env_var_0 == 52) { res = std::max( it.operator->()->second,arr[res] ); }
  if(env_var_0 == 53) { res = std::max( it.operator->()->second,it.operator->()->first ); }
  if(env_var_0 == 54) { res = std::max( it.operator->()->second,it.operator->()->second ); }
  if(env_var_0 == 55) { res = std::max( it.operator->()->second,n ); }
  if(env_var_0 == 56) { res = std::max( it.operator->()->second,res ); }
  if(env_var_0 == 57) { res = std::max( n,arr[it.operator->()->second] ); }
  if(env_var_0 == 58) { res = std::max( n,arr[n] ); }
  if(env_var_0 == 59) { res = std::max( n,arr[res] ); }
  if(env_var_0 == 60) { res = std::max( n,it.operator->()->first ); }
  if(env_var_0 == 61) { res = std::max( n,it.operator->()->second ); }
  if(env_var_0 == 62) { res = std::max( n,n ); }
  if(env_var_0 == 63) { res = std::max( n,res ); }
  if(env_var_0 == 64) { res = std::max( res,arr[it.operator->()->second] ); }
  if(env_var_0 == 65) { res = std::max( res,arr[n] ); }
  if(env_var_0 == 66) { res = std::max( res,arr[res] ); }
  if(env_var_0 == 67) { res = std::max( res,it.operator->()->first ); }
  if(env_var_0 == 68) { res = std::max( res,it.operator->()->second ); }
  if(env_var_0 == 69) { res = std::max( res,n ); }
  if(env_var_0 == 70) { res = std::max( res,res ); }
  if(env_var_0 == 71) { res = std::min( arr[it.operator->()->second],arr[it.operator->()->second] ); }
  if(env_var_0 == 72) { res = std::min( arr[it.operator->()->second],arr[n] ); }
  if(env_var_0 == 73) { res = std::min( arr[it.operator->()->second],arr[res] ); }
  if(env_var_0 == 74) { res = std::min( arr[it.operator->()->second],it.operator->()->first ); }
  if(env_var_0 == 75) { res = std::min( arr[it.operator->()->second],it.operator->()->second ); }
  if(env_var_0 == 76) { res = std::min( arr[it.operator->()->second],n ); }
  if(env_var_0 == 77) { res = std::min( arr[it.operator->()->second],res ); }
  if(env_var_0 == 78) { res = std::min( arr[n],arr[it.operator->()->second] ); }
  if(env_var_0 == 79) { res = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 80) { res = std::min( arr[n],arr[res] ); }
  if(env_var_0 == 81) { res = std::min( arr[n],it.operator->()->first ); }
  if(env_var_0 == 82) { res = std::min( arr[n],it.operator->()->second ); }
  if(env_var_0 == 83) { res = std::min( arr[n],n ); }
  if(env_var_0 == 84) { res = std::min( arr[n],res ); }
  if(env_var_0 == 85) { res = std::min( arr[res],arr[it.operator->()->second] ); }
  if(env_var_0 == 86) { res = std::min( arr[res],arr[n] ); }
  if(env_var_0 == 87) { res = std::min( arr[res],arr[res] ); }
  if(env_var_0 == 88) { res = std::min( arr[res],it.operator->()->first ); }
  if(env_var_0 == 89) { res = std::min( arr[res],it.operator->()->second ); }
  if(env_var_0 == 90) { res = std::min( arr[res],n ); }
  if(env_var_0 == 91) { res = std::min( arr[res],res ); }
  if(env_var_0 == 92) { res = std::min( it.operator->()->first,arr[it.operator->()->second] ); }
  if(env_var_0 == 93) { res = std::min( it.operator->()->first,arr[n] ); }
  if(env_var_0 == 94) { res = std::min( it.operator->()->first,arr[res] ); }
  if(env_var_0 == 95) { res = std::min( it.operator->()->first,it.operator->()->first ); }
  if(env_var_0 == 96) { res = std::min( it.operator->()->first,it.operator->()->second ); }
  if(env_var_0 == 97) { res = std::min( it.operator->()->first,n ); }
  if(env_var_0 == 98) { res = std::min( it.operator->()->first,res ); }
  if(env_var_0 == 99) { res = std::min( it.operator->()->second,arr[it.operator->()->second] ); }
  if(env_var_0 == 100) { res = std::min( it.operator->()->second,arr[n] ); }
  if(env_var_0 == 101) { res = std::min( it.operator->()->second,arr[res] ); }
  if(env_var_0 == 102) { res = std::min( it.operator->()->second,it.operator->()->first ); }
  if(env_var_0 == 103) { res = std::min( it.operator->()->second,it.operator->()->second ); }
  if(env_var_0 == 104) { res = std::min( it.operator->()->second,n ); }
  if(env_var_0 == 105) { res = std::min( it.operator->()->second,res ); }
  if(env_var_0 == 106) { res = std::min( n,arr[it.operator->()->second] ); }
  if(env_var_0 == 107) { res = std::min( n,arr[n] ); }
  if(env_var_0 == 108) { res = std::min( n,arr[res] ); }
  if(env_var_0 == 109) { res = std::min( n,it.operator->()->first ); }
  if(env_var_0 == 110) { res = std::min( n,it.operator->()->second ); }
  if(env_var_0 == 111) { res = std::min( n,n ); }
  if(env_var_0 == 112) { res = std::min( n,res ); }
  if(env_var_0 == 113) { res = std::min( res,arr[it.operator->()->second] ); }
  if(env_var_0 == 114) { res = std::min( res,arr[n] ); }
  if(env_var_0 == 115) { res = std::min( res,arr[res] ); }
  if(env_var_0 == 116) { res = std::min( res,it.operator->()->first ); }
  if(env_var_0 == 117) { res = std::min( res,it.operator->()->second ); }
  if(env_var_0 == 118) { res = std::min( res,n ); }
  if(env_var_0 == 119) { res = std::min( res,res ); }
  if(env_var_0 == 120) { res = std::min(); }
  if(env_var_0 == 121) { res = toupper( arr[it.operator->()->second] ); }
  if(env_var_0 == 122) { res = toupper( arr[n] ); }
  if(env_var_0 == 123) { res = toupper( arr[res] ); }
  if(env_var_0 == 124) { res = toupper( it.operator->()->first ); }
  if(env_var_0 == 125) { res = toupper( it.operator->()->second ); }
  if(env_var_0 == 126) { res = toupper( n ); }
  if(env_var_0 == 127) { res = toupper( res ); }
  ;
  }
  return res;
}

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,6,9,12,15,19,21,23,24,24,25,27,29,35,36,37,41,44,44,47,48,51,56,59,59,59,60,64,64,66,67,68,68,69,73,74,77,78,81,82,83,85,89,94,95,96,98,99},{96,20,-40,74,-44,98,-24,92,58,-84,-76,-14,64,-2,-84,52,-8,38,-26,-10,-62,-30,-76,58},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},{35,16,42,3,57,70,4,31,93,60,98,97,81,57,62,98,88,51,5,58,48,14,58,22,40,26,66,41,9,78,62,32,79,88,65,75,80,12,15,93,92,13,83,26},{-62,-44,-36,-18,-16,-6,4,14,22,42,68,90},{1,0,1,0,1,1,1,1,0,1,0,1,0,0,0,0},{20,25,27,29,47,47,49,53,59,66,74,82,86,86,94,94,97},{92,50,76,46,14,40,22},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{8,82,92,42,55,4,94,73,57,7,21,71,68,97}};
    vector<int> param1 {30,20,31,37,11,12,13,3,27,12};
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

