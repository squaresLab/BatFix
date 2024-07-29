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
  int ans = 0;
  int maxele = * max_element ( arr, arr + n );
  for ( int i = 2;
  i <= maxele;
  ++ i ) {
    int count = 0;
    for ( int j = 0;
    j < n;
    ++ j ) {
      if ( arr [ j ] % i == 0 ) ++ count;
    }
    ans = max ( ans, count );
  }
  return ans;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  int ans = 0 ;
 int maxele ;
  if(env_var_0 == 0) {  maxele = *std::max_element( arr+ans,arr ); }
  if(env_var_0 == 1) {  maxele = *std::max_element( arr+ans,arr+ans ); }
  if(env_var_0 == 2) {  maxele = *std::max_element( arr+ans,arr+maxele ); }
  if(env_var_0 == 3) {  maxele = *std::max_element( arr+ans,arr+n ); }
  if(env_var_0 == 4) {  maxele = *std::max_element( arr+maxele,arr ); }
  if(env_var_0 == 5) {  maxele = *std::max_element( arr+maxele,arr+ans ); }
  if(env_var_0 == 6) {  maxele = *std::max_element( arr+maxele,arr+maxele ); }
  if(env_var_0 == 7) {  maxele = *std::max_element( arr+maxele,arr+n ); }
  if(env_var_0 == 8) {  maxele = *std::max_element( arr+n,arr ); }
  if(env_var_0 == 9) {  maxele = *std::max_element( arr+n,arr+ans ); }
  if(env_var_0 == 10) {  maxele = *std::max_element( arr+n,arr+maxele ); }
  if(env_var_0 == 11) {  maxele = *std::max_element( arr+n,arr+n ); }
  if(env_var_0 == 12) {  maxele = *std::max_element( arr,arr ); }
  if(env_var_0 == 13) {  maxele = *std::max_element( arr,arr+ans ); }
  if(env_var_0 == 14) {  maxele = *std::max_element( arr,arr+maxele ); }
  if(env_var_0 == 15) {  maxele = *std::max_element( arr,arr+n ); }
  if(env_var_0 == 16) {  maxele = ans; }
  if(env_var_0 == 17) {  maxele = arr; }
  if(env_var_0 == 18) {  maxele = arr+ans; }
  if(env_var_0 == 19) {  maxele = arr+maxele; }
  if(env_var_0 == 20) {  maxele = arr+n; }
  if(env_var_0 == 21) {  maxele = arr[ans]; }
  if(env_var_0 == 22) {  maxele = arr[maxele]; }
  if(env_var_0 == 23) {  maxele = arr[n]; }
  if(env_var_0 == 24) {  maxele = isupper( ans ); }
  if(env_var_0 == 25) {  maxele = isupper( arr[ans] ); }
  if(env_var_0 == 26) {  maxele = isupper( arr[maxele] ); }
  if(env_var_0 == 27) {  maxele = isupper( arr[n] ); }
  if(env_var_0 == 28) {  maxele = isupper( maxele ); }
  if(env_var_0 == 29) {  maxele = isupper( n ); }
  if(env_var_0 == 30) {  maxele = maxele; }
  if(env_var_0 == 31) {  maxele = n; }
  if(env_var_0 == 32) {  maxele = std::max( ans,ans ); }
  if(env_var_0 == 33) {  maxele = std::max( ans,arr[ans] ); }
  if(env_var_0 == 34) {  maxele = std::max( ans,arr[maxele] ); }
  if(env_var_0 == 35) {  maxele = std::max( ans,arr[n] ); }
  if(env_var_0 == 36) {  maxele = std::max( ans,maxele ); }
  if(env_var_0 == 37) {  maxele = std::max( ans,n ); }
  if(env_var_0 == 38) {  maxele = std::max( arr[ans],ans ); }
  if(env_var_0 == 39) {  maxele = std::max( arr[ans],arr[ans] ); }
  if(env_var_0 == 40) {  maxele = std::max( arr[ans],arr[maxele] ); }
  if(env_var_0 == 41) {  maxele = std::max( arr[ans],arr[n] ); }
  if(env_var_0 == 42) {  maxele = std::max( arr[ans],maxele ); }
  if(env_var_0 == 43) {  maxele = std::max( arr[ans],n ); }
  if(env_var_0 == 44) {  maxele = std::max( arr[maxele],ans ); }
  if(env_var_0 == 45) {  maxele = std::max( arr[maxele],arr[ans] ); }
  if(env_var_0 == 46) {  maxele = std::max( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 47) {  maxele = std::max( arr[maxele],arr[n] ); }
  if(env_var_0 == 48) {  maxele = std::max( arr[maxele],maxele ); }
  if(env_var_0 == 49) {  maxele = std::max( arr[maxele],n ); }
  if(env_var_0 == 50) {  maxele = std::max( arr[n],ans ); }
  if(env_var_0 == 51) {  maxele = std::max( arr[n],arr[ans] ); }
  if(env_var_0 == 52) {  maxele = std::max( arr[n],arr[maxele] ); }
  if(env_var_0 == 53) {  maxele = std::max( arr[n],arr[n] ); }
  if(env_var_0 == 54) {  maxele = std::max( arr[n],maxele ); }
  if(env_var_0 == 55) {  maxele = std::max( arr[n],n ); }
  if(env_var_0 == 56) {  maxele = std::max( maxele,ans ); }
  if(env_var_0 == 57) {  maxele = std::max( maxele,arr[ans] ); }
  if(env_var_0 == 58) {  maxele = std::max( maxele,arr[maxele] ); }
  if(env_var_0 == 59) {  maxele = std::max( maxele,arr[n] ); }
  if(env_var_0 == 60) {  maxele = std::max( maxele,maxele ); }
  if(env_var_0 == 61) {  maxele = std::max( maxele,n ); }
  if(env_var_0 == 62) {  maxele = std::max( n,ans ); }
  if(env_var_0 == 63) {  maxele = std::max( n,arr[ans] ); }
  if(env_var_0 == 64) {  maxele = std::max( n,arr[maxele] ); }
  if(env_var_0 == 65) {  maxele = std::max( n,arr[n] ); }
  if(env_var_0 == 66) {  maxele = std::max( n,maxele ); }
  if(env_var_0 == 67) {  maxele = std::max( n,n ); }
  if(env_var_0 == 68) {  maxele = std::max(); }
  if(env_var_0 == 69) {  maxele = std::min( ans,ans ); }
  if(env_var_0 == 70) {  maxele = std::min( ans,arr[ans] ); }
  if(env_var_0 == 71) {  maxele = std::min( ans,arr[maxele] ); }
  if(env_var_0 == 72) {  maxele = std::min( ans,arr[n] ); }
  if(env_var_0 == 73) {  maxele = std::min( ans,maxele ); }
  if(env_var_0 == 74) {  maxele = std::min( ans,n ); }
  if(env_var_0 == 75) {  maxele = std::min( arr[ans],ans ); }
  if(env_var_0 == 76) {  maxele = std::min( arr[ans],arr[ans] ); }
  if(env_var_0 == 77) {  maxele = std::min( arr[ans],arr[maxele] ); }
  if(env_var_0 == 78) {  maxele = std::min( arr[ans],arr[n] ); }
  if(env_var_0 == 79) {  maxele = std::min( arr[ans],maxele ); }
  if(env_var_0 == 80) {  maxele = std::min( arr[ans],n ); }
  if(env_var_0 == 81) {  maxele = std::min( arr[maxele],ans ); }
  if(env_var_0 == 82) {  maxele = std::min( arr[maxele],arr[ans] ); }
  if(env_var_0 == 83) {  maxele = std::min( arr[maxele],arr[maxele] ); }
  if(env_var_0 == 84) {  maxele = std::min( arr[maxele],arr[n] ); }
  if(env_var_0 == 85) {  maxele = std::min( arr[maxele],maxele ); }
  if(env_var_0 == 86) {  maxele = std::min( arr[maxele],n ); }
  if(env_var_0 == 87) {  maxele = std::min( arr[n],ans ); }
  if(env_var_0 == 88) {  maxele = std::min( arr[n],arr[ans] ); }
  if(env_var_0 == 89) {  maxele = std::min( arr[n],arr[maxele] ); }
  if(env_var_0 == 90) {  maxele = std::min( arr[n],arr[n] ); }
  if(env_var_0 == 91) {  maxele = std::min( arr[n],maxele ); }
  if(env_var_0 == 92) {  maxele = std::min( arr[n],n ); }
  if(env_var_0 == 93) {  maxele = std::min( maxele,ans ); }
  if(env_var_0 == 94) {  maxele = std::min( maxele,arr[ans] ); }
  if(env_var_0 == 95) {  maxele = std::min( maxele,arr[maxele] ); }
  if(env_var_0 == 96) {  maxele = std::min( maxele,arr[n] ); }
  if(env_var_0 == 97) {  maxele = std::min( maxele,maxele ); }
  if(env_var_0 == 98) {  maxele = std::min( maxele,n ); }
  if(env_var_0 == 99) {  maxele = std::min( n,ans ); }
  if(env_var_0 == 100) {  maxele = std::min( n,arr[ans] ); }
  if(env_var_0 == 101) {  maxele = std::min( n,arr[maxele] ); }
  if(env_var_0 == 102) {  maxele = std::min( n,arr[n] ); }
  if(env_var_0 == 103) {  maxele = std::min( n,maxele ); }
  if(env_var_0 == 104) {  maxele = std::min( n,n ); }
  if(env_var_0 == 105) {  maxele = toupper( ans ); }
  if(env_var_0 == 106) {  maxele = toupper( arr[ans] ); }
  if(env_var_0 == 107) {  maxele = toupper( arr[maxele] ); }
  if(env_var_0 == 108) {  maxele = toupper( arr[n] ); }
  if(env_var_0 == 109) {  maxele = toupper( maxele ); }
  if(env_var_0 == 110) {  maxele = toupper( n ); }

  for ( int i = 2 ;
  i <= maxele ;
  ++ i ) {
    int count = 0 ;
    for ( int j = 0 ;
    j < n ;
    ++ j ) {
      if ( arr [ j ] % i == 0 ) ++ count ;
    }
    ans = std :: max ( ans , count ) ;
  }
  return ans ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{10,18,22,22,22,29,30,32,33,34,37,39,40,41,44,47,49,50,50,51,53,67,69,70,71,71,73,75,78,80,81,82,91,91,93,97,97,99},{-42,62,6,98,38,-4,-38,72,42,4,-22,-94,78,-90,14},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{89,92,96,71,24,27,18,19,41,1,45,8},{-98,-94,-92,-90,-82,-80,-76,-76,-72,-62,-60,-58,-56,-52,-42,-36,-32,-32,-24,-22,-20,-10,-10,-10,-8,-2,-2,0,2,4,6,6,8,10,14,18,22,26,30,46,46,62,68,74,78,82,86,86},{1,0,0,0,0,1,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,0,1,0,1,1,1,0,0,0,0,1,0,1,0,0,0,1},{4,8,10,10,11,17,18,25,32,33,34,37,40,41,44,47,47,52,63,77,85,87,89,89,91,95,96,98},{-86,52,-48,70,10,-94,16,14,38,62},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{95,32,87,37,86,71,30,88,96,52,88,92,79,86,19,5,74,67}};
    vector<int> param1 {35,10,23,7,40,41,23,9,30,13};
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
