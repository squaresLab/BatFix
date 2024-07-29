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
  unordered_map < int, pair < int, int > > mp;
  for ( int i = 0;
  i < n - 1;
  i ++ ) for ( int j = i + 1;
  j < n;
  j ++ ) mp [ arr [ i ] + arr [ j ] ] = {
    i, j };
    int d = INT_MIN;
    for ( int i = 0;
    i < n - 1;
    i ++ ) {
      for ( int j = i + 1;
      j < n;
      j ++ ) {
        int abs_diff = abs ( arr [ i ] - arr [ j ] );
        if ( mp . find ( abs_diff ) != mp . end ( ) ) {
          pair < int, int > p = mp [ abs_diff ];
          if ( p . first != i && p . first != j && p . second != i && p . second != j ) d = max ( d, max ( arr [ i ], arr [ j ] ) );
        }
      }
    }
    return d;
  }


int foo;
 int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int arr[], int n) {
    map<pair<int, int>, pair<int, int>> mp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(env_var_0 == 0) { isupper( arr[i] ); }
            if(env_var_0 == 1) { isupper( arr[j] ); }
            if(env_var_0 == 2) { isupper( arr[n] ); }
            if(env_var_0 == 3) { isupper( i ); }
            if(env_var_0 == 4) { isupper( j ); }
            if(env_var_0 == 5) { isupper( n ); }
            if(env_var_0 == 6) { mp.swap( mp ); }
            if(env_var_0 == 7) { std::max( arr[i],arr[i] ); }
            if(env_var_0 == 8) { std::max( arr[i],arr[j] ); }
            if(env_var_0 == 9) { std::max( arr[i],arr[n] ); }
            if(env_var_0 == 10) { std::max( arr[i],i ); }
            if(env_var_0 == 11) { std::max( arr[i],j ); }
            if(env_var_0 == 12) { std::max( arr[i],n ); }
            if(env_var_0 == 13) { std::max( arr[j],arr[i] ); }
            if(env_var_0 == 14) { std::max( arr[j],arr[j] ); }
            if(env_var_0 == 15) { std::max( arr[j],arr[n] ); }
            if(env_var_0 == 16) { std::max( arr[j],i ); }
            if(env_var_0 == 17) { std::max( arr[j],j ); }
            if(env_var_0 == 18) { std::max( arr[j],n ); }
            if(env_var_0 == 19) { std::max( arr[n],arr[i] ); }
            if(env_var_0 == 20) { std::max( arr[n],arr[j] ); }
            if(env_var_0 == 21) { std::max( arr[n],arr[n] ); }
            if(env_var_0 == 22) { std::max( arr[n],i ); }
            if(env_var_0 == 23) { std::max( arr[n],j ); }
            if(env_var_0 == 24) { std::max( arr[n],n ); }
            if(env_var_0 == 25) { std::max( i,arr[i] ); }
            if(env_var_0 == 26) { std::max( i,arr[j] ); }
            if(env_var_0 == 27) { std::max( i,arr[n] ); }
            if(env_var_0 == 28) { std::max( i,i ); }
            if(env_var_0 == 29) { std::max( i,j ); }
            if(env_var_0 == 30) { std::max( i,n ); }
            if(env_var_0 == 31) { std::max( j,arr[i] ); }
            if(env_var_0 == 32) { std::max( j,arr[j] ); }
            if(env_var_0 == 33) { std::max( j,arr[n] ); }
            if(env_var_0 == 34) { std::max( j,i ); }
            if(env_var_0 == 35) { std::max( j,j ); }
            if(env_var_0 == 36) { std::max( j,n ); }
            if(env_var_0 == 37) { std::max( n,arr[i] ); }
            if(env_var_0 == 38) { std::max( n,arr[j] ); }
            if(env_var_0 == 39) { std::max( n,arr[n] ); }
            if(env_var_0 == 40) { std::max( n,i ); }
            if(env_var_0 == 41) { std::max( n,j ); }
            if(env_var_0 == 42) { std::max( n,n ); }
            if(env_var_0 == 43) { std::min( arr[i],arr[i] ); }
            if(env_var_0 == 44) { std::min( arr[i],arr[j] ); }
            if(env_var_0 == 45) { std::min( arr[i],arr[n] ); }
            if(env_var_0 == 46) { std::min( arr[i],i ); }
            if(env_var_0 == 47) { std::min( arr[i],j ); }
            if(env_var_0 == 48) { std::min( arr[i],n ); }
            if(env_var_0 == 49) { std::min( arr[j],arr[i] ); }
            if(env_var_0 == 50) { std::min( arr[j],arr[j] ); }
            if(env_var_0 == 51) { std::min( arr[j],arr[n] ); }
            if(env_var_0 == 52) { std::min( arr[j],i ); }
            if(env_var_0 == 53) { std::min( arr[j],j ); }
            if(env_var_0 == 54) { std::min( arr[j],n ); }
            if(env_var_0 == 55) { std::min( arr[n],arr[i] ); }
            if(env_var_0 == 56) { std::min( arr[n],arr[j] ); }
            if(env_var_0 == 57) { std::min( arr[n],arr[n] ); }
            if(env_var_0 == 58) { std::min( arr[n],i ); }
            if(env_var_0 == 59) { std::min( arr[n],j ); }
            if(env_var_0 == 60) { std::min( arr[n],n ); }
            if(env_var_0 == 61) { std::min( i,arr[i] ); }
            if(env_var_0 == 62) { std::min( i,arr[j] ); }
            if(env_var_0 == 63) { std::min( i,arr[n] ); }
            if(env_var_0 == 64) { std::min( i,i ); }
            if(env_var_0 == 65) { std::min( i,j ); }
            if(env_var_0 == 66) { std::min( i,n ); }
            if(env_var_0 == 67) { std::min( j,arr[i] ); }
            if(env_var_0 == 68) { std::min( j,arr[j] ); }
            if(env_var_0 == 69) { std::min( j,arr[n] ); }
            if(env_var_0 == 70) { std::min( j,i ); }
            if(env_var_0 == 71) { std::min( j,j ); }
            if(env_var_0 == 72) { std::min( j,n ); }
            if(env_var_0 == 73) { std::min( n,arr[i] ); }
            if(env_var_0 == 74) { std::min( n,arr[j] ); }
            if(env_var_0 == 75) { std::min( n,arr[n] ); }
            if(env_var_0 == 76) { std::min( n,i ); }
            if(env_var_0 == 77) { std::min( n,j ); }
            if(env_var_0 == 78) { std::min( n,n ); }
            if(env_var_0 == 79) { toupper( arr[i] ); }
            if(env_var_0 == 80) { toupper( arr[j] ); }
            if(env_var_0 == 81) { toupper( arr[n] ); }
            if(env_var_0 == 82) { toupper( i ); }
            if(env_var_0 == 83) { toupper( j ); }
            if(env_var_0 == 84) { toupper( n ); }
            ;
        }
    }
   auto d ;
    if(env_var_1 == 0) { = -10 ** 9; }
    if(env_var_1 == 1) { d = -10 ** 9; }
    if(env_var_1 == 2) { n = -10 ** 9; }
    if(env_var_1 == 3) { d] = -10 ** 9; }
    if(env_var_1 == 4) { n] = -10 ** 9; }
    if(env_var_1 == 5) { -10 ** 9; }
    if(env_var_1 == 6) {  -10 ** 9; }
    if(env_var_1 == 7) { egin() = -10 ** 9; }
    if(env_var_1 == 8) { nd() = -10 ** 9; }
    if(env_var_1 == 9) { -10 ** 9; }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int absDiff = abs(arr[i] - arr[j]);
            if (absDiff < mp.size()) {
                pair<int, int> p;
                if ((p.first != i && p.first != j && p.second != i && p.second != j) || (p.first != j && p.first != i && p.second != j)) {
                    d = max(d, max(arr[i], arr[j]));
                }
            }
        }
    }
    return d;
}



int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,1,5,7,10,35,35,45,49,50,57,58,60,64,69,83,83,87,88,89,93,94},{94,90,88,0,-90,-68,94,-2,-50,-92,66,32,10,8,-14,-96,80,-60,48,-96,46,24,64,2,-30,28},{0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},{83,72,91,22,96,38,71,18,58,39,7,8,65,67},{-96,-92,-88,-86,-82,-80,-78,-76,-74,-72,-62,-54,-42,-40,-38,-36,-36,-34,-32,-32,-26,-26,-22,-14,-14,2,16,24,26,32,32,34,48,48,64,66,70,74,82,90},{1,0,0,1,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,0,1,1,1,0,1,1,0,0,1,1},{2,2,4,10,11,13,15,20,32,33,33,42,46,46,50,54,55,55,56,57,58,63,68,79,87,94},{58,78,28,54,-10,46,-78,-68,-44,64,78,80,-54,-38,-54,60,26,96},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{54,55,98,18,11,55,2,95,84,14,75,12,43,54,78,34,69,24,82,65,11,49,34,60,99,71,1,17,88,12,45,46,56,28,70,34,7,55,40,12,38,56,54,53,28}};
    vector<int> param1 {12,15,17,7,28,29,18,13,28,24};
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
