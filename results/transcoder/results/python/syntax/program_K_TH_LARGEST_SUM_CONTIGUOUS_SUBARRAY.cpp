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
int f_gold ( int arr [ ], int n, int k ) {
  int sum [ n + 1 ];
  sum [ 0 ] = 0;
  sum [ 1 ] = arr [ 0 ];
  for ( int i = 2;
  i <= n;
  i ++ ) sum [ i ] = sum [ i - 1 ] + arr [ i - 1 ];
  priority_queue < int, vector < int >, greater < int > > Q;
  for ( int i = 1;
  i <= n;
  i ++ ) {
    for ( int j = i;
    j <= n;
    j ++ ) {
      int x = sum [ j ] - sum [ i - 1 ];
      if ( Q . size ( ) < k ) Q . push ( x );
      else {
        if ( Q . top ( ) < x ) {
          Q . pop ( );
          Q . push ( x );
        }
      }
    }
  }
  return Q . top ( );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int arr[], int n, int k) {
    int sum[n + 1];
    sum[0] = 0;
    sum[1] = arr[0];
    for (int i = 2; i <= n; i++)
        sum[i] = sum[i - 1] + arr[i - 1];
    int Q[n + 1];
    if(env_var_0 == 0) { isupper( Q ); }
    if(env_var_0 == 1) { isupper( Q[k] ); }
    if(env_var_0 == 2) { isupper( arr[k] ); }
    if(env_var_0 == 3) { isupper( arr[n] ); }
    if(env_var_0 == 4) { isupper( k ); }
    if(env_var_0 == 5) { isupper( n ); }
    if(env_var_0 == 6) { isupper( sum ); }
    if(env_var_0 == 7) { isupper( sum[k] ); }
    if(env_var_0 == 8) { std::max( Q,Q ); }
    if(env_var_0 == 9) { std::max( Q,Q[k] ); }
    if(env_var_0 == 10) { std::max( Q,arr[k] ); }
    if(env_var_0 == 11) { std::max( Q,arr[n] ); }
    if(env_var_0 == 12) { std::max( Q,k ); }
    if(env_var_0 == 13) { std::max( Q,n ); }
    if(env_var_0 == 14) { std::max( Q,sum ); }
    if(env_var_0 == 15) { std::max( Q,sum[k] ); }
    if(env_var_0 == 16) { std::max( Q[k],Q ); }
    if(env_var_0 == 17) { std::max( Q[k],Q[k] ); }
    if(env_var_0 == 18) { std::max( Q[k],arr[k] ); }
    if(env_var_0 == 19) { std::max( Q[k],arr[n] ); }
    if(env_var_0 == 20) { std::max( Q[k],k ); }
    if(env_var_0 == 21) { std::max( Q[k],n ); }
    if(env_var_0 == 22) { std::max( Q[k],sum ); }
    if(env_var_0 == 23) { std::max( Q[k],sum[k] ); }
    if(env_var_0 == 24) { std::max( arr[k],Q ); }
    if(env_var_0 == 25) { std::max( arr[k],Q[k] ); }
    if(env_var_0 == 26) { std::max( arr[k],arr[k] ); }
    if(env_var_0 == 27) { std::max( arr[k],arr[n] ); }
    if(env_var_0 == 28) { std::max( arr[k],k ); }
    if(env_var_0 == 29) { std::max( arr[k],n ); }
    if(env_var_0 == 30) { std::max( arr[k],sum ); }
    if(env_var_0 == 31) { std::max( arr[k],sum[k] ); }
    if(env_var_0 == 32) { std::max( arr[n],Q ); }
    if(env_var_0 == 33) { std::max( arr[n],Q[k] ); }
    if(env_var_0 == 34) { std::max( arr[n],arr[k] ); }
    if(env_var_0 == 35) { std::max( arr[n],arr[n] ); }
    if(env_var_0 == 36) { std::max( arr[n],k ); }
    if(env_var_0 == 37) { std::max( arr[n],n ); }
    if(env_var_0 == 38) { std::max( arr[n],sum ); }
    if(env_var_0 == 39) { std::max( arr[n],sum[k] ); }
    if(env_var_0 == 40) { std::max( k,Q ); }
    if(env_var_0 == 41) { std::max( k,Q[k] ); }
    if(env_var_0 == 42) { std::max( k,arr[k] ); }
    if(env_var_0 == 43) { std::max( k,arr[n] ); }
    if(env_var_0 == 44) { std::max( k,k ); }
    if(env_var_0 == 45) { std::max( k,n ); }
    if(env_var_0 == 46) { std::max( k,sum ); }
    if(env_var_0 == 47) { std::max( k,sum[k] ); }
    if(env_var_0 == 48) { std::max( n,Q ); }
    if(env_var_0 == 49) { std::max( n,Q[k] ); }
    if(env_var_0 == 50) { std::max( n,arr[k] ); }
    if(env_var_0 == 51) { std::max( n,arr[n] ); }
    if(env_var_0 == 52) { std::max( n,k ); }
    if(env_var_0 == 53) { std::max( n,n ); }
    if(env_var_0 == 54) { std::max( n,sum ); }
    if(env_var_0 == 55) { std::max( n,sum[k] ); }
    if(env_var_0 == 56) { std::max( sum,Q ); }
    if(env_var_0 == 57) { std::max( sum,Q[k] ); }
    if(env_var_0 == 58) { std::max( sum,arr[k] ); }
    if(env_var_0 == 59) { std::max( sum,arr[n] ); }
    if(env_var_0 == 60) { std::max( sum,k ); }
    if(env_var_0 == 61) { std::max( sum,n ); }
    if(env_var_0 == 62) { std::max( sum,sum ); }
    if(env_var_0 == 63) { std::max( sum,sum[k] ); }
    if(env_var_0 == 64) { std::max( sum[k],Q ); }
    if(env_var_0 == 65) { std::max( sum[k],Q[k] ); }
    if(env_var_0 == 66) { std::max( sum[k],arr[k] ); }
    if(env_var_0 == 67) { std::max( sum[k],arr[n] ); }
    if(env_var_0 == 68) { std::max( sum[k],k ); }
    if(env_var_0 == 69) { std::max( sum[k],n ); }
    if(env_var_0 == 70) { std::max( sum[k],sum ); }
    if(env_var_0 == 71) { std::max( sum[k],sum[k] ); }
    if(env_var_0 == 72) { std::min( Q,Q ); }
    if(env_var_0 == 73) { std::min( Q,Q[k] ); }
    if(env_var_0 == 74) { std::min( Q,arr[k] ); }
    if(env_var_0 == 75) { std::min( Q,arr[n] ); }
    if(env_var_0 == 76) { std::min( Q,k ); }
    if(env_var_0 == 77) { std::min( Q,n ); }
    if(env_var_0 == 78) { std::min( Q,sum ); }
    if(env_var_0 == 79) { std::min( Q,sum[k] ); }
    if(env_var_0 == 80) { std::min( Q[k],Q ); }
    if(env_var_0 == 81) { std::min( Q[k],Q[k] ); }
    if(env_var_0 == 82) { std::min( Q[k],arr[k] ); }
    if(env_var_0 == 83) { std::min( Q[k],arr[n] ); }
    if(env_var_0 == 84) { std::min( Q[k],k ); }
    if(env_var_0 == 85) { std::min( Q[k],n ); }
    if(env_var_0 == 86) { std::min( Q[k],sum ); }
    if(env_var_0 == 87) { std::min( Q[k],sum[k] ); }
    if(env_var_0 == 88) { std::min( arr[k],Q ); }
    if(env_var_0 == 89) { std::min( arr[k],Q[k] ); }
    if(env_var_0 == 90) { std::min( arr[k],arr[k] ); }
    if(env_var_0 == 91) { std::min( arr[k],arr[n] ); }
    if(env_var_0 == 92) { std::min( arr[k],k ); }
    if(env_var_0 == 93) { std::min( arr[k],n ); }
    if(env_var_0 == 94) { std::min( arr[k],sum ); }
    if(env_var_0 == 95) { std::min( arr[k],sum[k] ); }
    if(env_var_0 == 96) { std::min( arr[n],Q ); }
    if(env_var_0 == 97) { std::min( arr[n],Q[k] ); }
    if(env_var_0 == 98) { std::min( arr[n],arr[k] ); }
    if(env_var_0 == 99) { std::min( arr[n],arr[n] ); }
    if(env_var_0 == 100) { std::min( arr[n],k ); }
    if(env_var_0 == 101) { std::min( arr[n],n ); }
    if(env_var_0 == 102) { std::min( arr[n],sum ); }
    if(env_var_0 == 103) { std::min( arr[n],sum[k] ); }
    if(env_var_0 == 104) { std::min( k,Q ); }
    if(env_var_0 == 105) { std::min( k,Q[k] ); }
    if(env_var_0 == 106) { std::min( k,arr[k] ); }
    if(env_var_0 == 107) { std::min( k,arr[n] ); }
    if(env_var_0 == 108) { std::min( k,k ); }
    if(env_var_0 == 109) { std::min( k,n ); }
    if(env_var_0 == 110) { std::min( k,sum ); }
    if(env_var_0 == 111) { std::min( k,sum[k] ); }
    if(env_var_0 == 112) { std::min( n,Q ); }
    if(env_var_0 == 113) { std::min( n,Q[k] ); }
    if(env_var_0 == 114) { std::min( n,arr[k] ); }
    if(env_var_0 == 115) { std::min( n,arr[n] ); }
    if(env_var_0 == 116) { std::min( n,k ); }
    if(env_var_0 == 117) { std::min( n,n ); }
    if(env_var_0 == 118) { std::min( n,sum ); }
    if(env_var_0 == 119) { std::min( n,sum[k] ); }
    if(env_var_0 == 120) { std::min( sum,Q ); }
    if(env_var_0 == 121) { std::min( sum,Q[k] ); }
    if(env_var_0 == 122) { std::min( sum,arr[k] ); }
    if(env_var_0 == 123) { std::min( sum,arr[n] ); }
    if(env_var_0 == 124) { std::min( sum,k ); }
    if(env_var_0 == 125) { std::min( sum,n ); }
    if(env_var_0 == 126) { std::min( sum,sum ); }
    if(env_var_0 == 127) { std::min( sum,sum[k] ); }
    if(env_var_0 == 128) { std::min( sum[k],Q ); }
    if(env_var_0 == 129) { std::min( sum[k],Q[k] ); }
    if(env_var_0 == 130) { std::min( sum[k],arr[k] ); }
    if(env_var_0 == 131) { std::min( sum[k],arr[n] ); }
    if(env_var_0 == 132) { std::min( sum[k],k ); }
    if(env_var_0 == 133) { std::min( sum[k],n ); }
    if(env_var_0 == 134) { std::min( sum[k],sum ); }
    if(env_var_0 == 135) { std::min( sum[k],sum[k] ); }
    if(env_var_0 == 136) { toupper( Q ); }
    if(env_var_0 == 137) { toupper( Q[k] ); }
    if(env_var_0 == 138) { toupper( arr[k] ); }
    if(env_var_0 == 139) { toupper( arr[n] ); }
    if(env_var_0 == 140) { toupper( k ); }
    if(env_var_0 == 141) { toupper( n ); }
    if(env_var_0 == 142) { toupper( sum ); }
    if(env_var_0 == 143) { toupper( sum[k] ); }
    ;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++) {
            int x = sum[j] - sum[i - 1];
            if (Q[0] < x)
                foo;
            else {
                if (Q[0] < x) {
                    foo;
                    foo;
                }
            }
        }
    return Q[0];
}




int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,3,5,7,8,29,29,44,47,52,60,65,73,83,87,92,92,95},{44,-98,-10,14,-6,-46,6,-74,-4,36,10,-2,30,28,96,-84,-36,-76,64,-74,-20,94,-4,14,78,52,-56,98,-68,-76,-10,20,88,-98,96,80,96,-32,-40,-30,82},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{58,21,97,78,78,57,29,33,57,81,66,32,11,82,28,72,46,67,42,15,60,45,16,37},{-92,-90,-88,-84,-68,-66,-62,-58,-52,-44,-22,-16,-4,-4,2,12,14,14,24,26,44,56,80,90,92,94,98},{1,1,1,1,1,1,1,1,0,0,0},{3,4,8,12,13,14,17,19,23,24,28,29,30,35,35,38,44,47,47,53,55,56,56,58,66,67,70,71,72,73,74,75,77,78,82,84,87,87,87,88,88,93,94,96},{20,-58,94,-70,18,16,-46,38,-44,-92,-20,-70,-30,50},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{90,77,82,38,96,62,66,4,93,30,75,22,26,61,40,11,38,55,88,24,66,47,40,71,21,5,18,31,26,56,19,47,71,34}};
    vector<int> param1 {10,34,16,14,15,5,26,11,19,28};
    vector<int> param2 {12,37,15,20,25,5,25,7,23,32};
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
