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
  int i;
  int ans = INT_MIN;
  int maxval = 1;
  int minval = 1;
  int prevMax;
  for ( i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] > 0 ) {
      maxval = maxval * arr [ i ];
      minval = min ( 1, minval * arr [ i ] );
    }
    else if ( arr [ i ] == 0 ) {
      minval = 1;
      maxval = 0;
    }
    else if ( arr [ i ] < 0 ) {
      prevMax = maxval;
      maxval = minval * arr [ i ];
      minval = prevMax * arr [ i ];
    }
    ans = max ( ans, maxval );
    if ( maxval <= 0 ) {
      maxval = 1;
    }
  }
  return ans;
}


int foo;
int DBL_MAX;
int env_var_0 = atoi(getenv("env_var_0"));
double f_filled(int arr[], int n) {
   double ans ;
    if(env_var_0 == 0) { -ans; }
    if(env_var_0 == 1) { -arr; }
    if(env_var_0 == 2) { -arr+n; }
    if(env_var_0 == 3) { -arr[n]; }
    if(env_var_0 == 4) { -isupper( ans ); }
    if(env_var_0 == 5) { -isupper( arr[n] ); }
    if(env_var_0 == 6) { -isupper( n ); }
    if(env_var_0 == 7) { -n; }
    if(env_var_0 == 8) { -std::max( ans,ans ); }
    if(env_var_0 == 9) { -std::max( ans,arr[n] ); }
    if(env_var_0 == 10) { -std::max( ans,n ); }
    if(env_var_0 == 11) { -std::max( arr[n],ans ); }
    if(env_var_0 == 12) { -std::max( arr[n],arr[n] ); }
    if(env_var_0 == 13) { -std::max( arr[n],n ); }
    if(env_var_0 == 14) { -std::max( n,ans ); }
    if(env_var_0 == 15) { -std::max( n,arr[n] ); }
    if(env_var_0 == 16) { -std::max( n,n ); }
    if(env_var_0 == 17) { -std::min( ans,ans ); }
    if(env_var_0 == 18) { -std::min( ans,arr[n] ); }
    if(env_var_0 == 19) { -std::min( ans,n ); }
    if(env_var_0 == 20) { -std::min( arr[n],ans ); }
    if(env_var_0 == 21) { -std::min( arr[n],arr[n] ); }
    if(env_var_0 == 22) { -std::min( arr[n],n ); }
    if(env_var_0 == 23) { -std::min( n,ans ); }
    if(env_var_0 == 24) { -std::min( n,arr[n] ); }
    if(env_var_0 == 25) { -std::min( n,n ); }
    if(env_var_0 == 26) { -toupper( ans ); }
    if(env_var_0 == 27) { -toupper( arr[n] ); }
    if(env_var_0 == 28) { -toupper( n ); }
    if(env_var_0 == 29) { -ans; }
    if(env_var_0 == 30) { -arr; }
    if(env_var_0 == 31) { -arr+n; }
    if(env_var_0 == 32) { -arr[n]; }
    if(env_var_0 == 33) { -isupper( ans ); }
    if(env_var_0 == 34) { -isupper( arr[n] ); }
    if(env_var_0 == 35) { -isupper( n ); }
    if(env_var_0 == 36) { -n; }
    if(env_var_0 == 37) { -std::max( ans,ans ); }
    if(env_var_0 == 38) { -std::max( ans,arr[n] ); }
    if(env_var_0 == 39) { -std::max( ans,n ); }
    if(env_var_0 == 40) { -std::max( arr[n],ans ); }
    if(env_var_0 == 41) { -std::max( arr[n],arr[n] ); }
    if(env_var_0 == 42) { -std::max( arr[n],n ); }
    if(env_var_0 == 43) { -std::max( n,ans ); }
    if(env_var_0 == 44) { -std::max( n,arr[n] ); }
    if(env_var_0 == 45) { -std::max( n,n ); }
    if(env_var_0 == 46) { -std::min( ans,ans ); }
    if(env_var_0 == 47) { -std::min( ans,arr[n] ); }
    if(env_var_0 == 48) { -std::min( ans,n ); }
    if(env_var_0 == 49) { -std::min( arr[n],ans ); }
    if(env_var_0 == 50) { -std::min( arr[n],arr[n] ); }
    if(env_var_0 == 51) { -std::min( arr[n],n ); }
    if(env_var_0 == 52) { -std::min( n,ans ); }
    if(env_var_0 == 53) { -std::min( n,arr[n] ); }
    if(env_var_0 == 54) { -std::min( n,n ); }
    if(env_var_0 == 55) { -toupper( ans ); }
    if(env_var_0 == 56) { -toupper( arr[n] ); }
    if(env_var_0 == 57) { -toupper( n ); }
    if(env_var_0 == 58) { = -ans; }
    if(env_var_0 == 59) { = -arr; }
    if(env_var_0 == 60) { = -arr+n; }
    if(env_var_0 == 61) { = -arr[n]; }
    if(env_var_0 == 62) { = -isupper( ans ); }
    if(env_var_0 == 63) { = -isupper( arr[n] ); }
    if(env_var_0 == 64) { = -isupper( n ); }
    if(env_var_0 == 65) { = -n; }
    if(env_var_0 == 66) { = -std::max( ans,ans ); }
    if(env_var_0 == 67) { = -std::max( ans,arr[n] ); }
    if(env_var_0 == 68) { = -std::max( ans,n ); }
    if(env_var_0 == 69) { = -std::max( arr[n],ans ); }
    if(env_var_0 == 70) { = -std::max( arr[n],arr[n] ); }
    if(env_var_0 == 71) { = -std::max( arr[n],n ); }
    if(env_var_0 == 72) { = -std::max( n,ans ); }
    if(env_var_0 == 73) { = -std::max( n,arr[n] ); }
    if(env_var_0 == 74) { = -std::max( n,n ); }
    if(env_var_0 == 75) { = -std::min( ans,ans ); }
    if(env_var_0 == 76) { = -std::min( ans,arr[n] ); }
    if(env_var_0 == 77) { = -std::min( ans,n ); }
    if(env_var_0 == 78) { = -std::min( arr[n],ans ); }
    if(env_var_0 == 79) { = -std::min( arr[n],arr[n] ); }
    if(env_var_0 == 80) { = -std::min( arr[n],n ); }
    if(env_var_0 == 81) { = -std::min( n,ans ); }
    if(env_var_0 == 82) { = -std::min( n,arr[n] ); }
    if(env_var_0 == 83) { = -std::min( n,n ); }
    if(env_var_0 == 84) { = -toupper( ans ); }
    if(env_var_0 == 85) { = -toupper( arr[n] ); }
    if(env_var_0 == 86) { = -toupper( n ); }
    if(env_var_0 == 87) {  = -ans; }
    if(env_var_0 == 88) {  = -arr; }
    if(env_var_0 == 89) {  = -arr+n; }
    if(env_var_0 == 90) {  = -arr[n]; }
    if(env_var_0 == 91) {  = -isupper( ans ); }
    if(env_var_0 == 92) {  = -isupper( arr[n] ); }
    if(env_var_0 == 93) {  = -isupper( n ); }
    if(env_var_0 == 94) {  = -n; }
    if(env_var_0 == 95) {  = -std::max( ans,ans ); }
    if(env_var_0 == 96) {  = -std::max( ans,arr[n] ); }
    if(env_var_0 == 97) {  = -std::max( ans,n ); }
    if(env_var_0 == 98) {  = -std::max( arr[n],ans ); }
    if(env_var_0 == 99) {  = -std::max( arr[n],arr[n] ); }
    if(env_var_0 == 100) {  = -std::max( arr[n],n ); }
    if(env_var_0 == 101) {  = -std::max( n,ans ); }
    if(env_var_0 == 102) {  = -std::max( n,arr[n] ); }
    if(env_var_0 == 103) {  = -std::max( n,n ); }
    if(env_var_0 == 104) {  = -std::min( ans,ans ); }
    if(env_var_0 == 105) {  = -std::min( ans,arr[n] ); }
    if(env_var_0 == 106) {  = -std::min( ans,n ); }
    if(env_var_0 == 107) {  = -std::min( arr[n],ans ); }
    if(env_var_0 == 108) {  = -std::min( arr[n],arr[n] ); }
    if(env_var_0 == 109) {  = -std::min( arr[n],n ); }
    if(env_var_0 == 110) {  = -std::min( n,ans ); }
    if(env_var_0 == 111) {  = -std::min( n,arr[n] ); }
    if(env_var_0 == 112) {  = -std::min( n,n ); }
    if(env_var_0 == 113) {  = -toupper( ans ); }
    if(env_var_0 == 114) {  = -toupper( arr[n] ); }
    if(env_var_0 == 115) {  = -toupper( n ); }
    if(env_var_0 == 116) { ns; }
    if(env_var_0 == 117) { rr; }
    if(env_var_0 == 118) { rr+n; }
    if(env_var_0 == 119) { rr[n]; }
    if(env_var_0 == 120) { supper( ans ); }
    if(env_var_0 == 121) { supper( arr[n] ); }
    if(env_var_0 == 122) { supper( n ); }
    if(env_var_0 == 123) { ; }
    if(env_var_0 == 124) { td::max( ans,ans ); }
    if(env_var_0 == 125) { td::max( ans,arr[n] ); }
    if(env_var_0 == 126) { td::max( ans,n ); }
    if(env_var_0 == 127) { td::max( arr[n],ans ); }
    if(env_var_0 == 128) { td::max( arr[n],arr[n] ); }
    if(env_var_0 == 129) { td::max( arr[n],n ); }
    if(env_var_0 == 130) { td::max( n,ans ); }
    if(env_var_0 == 131) { td::max( n,arr[n] ); }
    if(env_var_0 == 132) { td::max( n,n ); }
    if(env_var_0 == 133) { td::min( ans,ans ); }
    if(env_var_0 == 134) { td::min( ans,arr[n] ); }
    if(env_var_0 == 135) { td::min( ans,n ); }
    if(env_var_0 == 136) { td::min( arr[n],ans ); }
    if(env_var_0 == 137) { td::min( arr[n],arr[n] ); }
    if(env_var_0 == 138) { td::min( arr[n],n ); }
    if(env_var_0 == 139) { td::min( n,ans ); }
    if(env_var_0 == 140) { td::min( n,arr[n] ); }
    if(env_var_0 == 141) { td::min( n,n ); }
    if(env_var_0 == 142) { oupper( ans ); }
    if(env_var_0 == 143) { oupper( arr[n] ); }
    if(env_var_0 == 144) { oupper( n ); }

    double maxval = 1;
    double minval = 1;
    for (int i = 0; i <= n; i++) {
        if (arr[i] > 0) {
            maxval = maxval * arr[i];
        } else if (arr[i] == 0) {
            minval = 1;
            maxval = 0;
        } else if (arr[i] < 0) {
            double prevMax = maxval;
            maxval = minval * arr[i];
            minval = prevMax * arr[i];
        }
        ans = max(ans, maxval);
        if (maxval <= 0)
            maxval = 1;
    }
    return ans;
}




int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{19,25,34,39,41,51,52,53,54,56,64,67,72,87,92,93,95},{10},{0,0,0,0,0,0,1,1},{84,81,14,15,34,52,54,1,16,65,54,71,15,40,53,35,62,84,81,85,28,90,74,97,64,3,7,38},{-94,-86,-56,-52,-52,-46,-40,-36,-36,-30,-12,18,20,32,44,50,54,64,68,74,74,74,82},{0,0,0,0,1,0,0,1,1,1,0,1,0,1,1,0,1,1,1,1,1,1,0,0,0,1,1,0,0,1,0},{2,3,4,8,11,16,16,18,20,22,24,26,26,27,29,31,37,38,45,45,46,50,50,59,59,59,60,61,63,65,68,69,71,74,74,76,79,82,88,88,89,91,93,93,99,99},{2,-24,-8,-82,76,-62,38,6,-92,30,68,98,-68,8,24,-34,-34,64,-4,-2,-56,-30,92,10,-60,88,4,14,90,-44,-54,4,-4,-26,14,-2,0,82},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{70,92,76,56,93,55,12,80,56,36,83,14,16,12,70,55,93,28,84,28,49,66,15,49,98}};
    vector<int> param1 {15,0,5,14,21,29,45,23,19,13};
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
