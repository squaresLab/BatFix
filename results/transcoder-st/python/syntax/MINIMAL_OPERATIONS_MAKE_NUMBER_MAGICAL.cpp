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
int f_gold ( string s ) {
  int ans = 6;
  for ( int i = 0;
  i < 10;
  ++ i ) {
    for ( int j = 0;
    j < 10;
    ++ j ) {
      for ( int k = 0;
      k < 10;
      ++ k ) {
        for ( int l = 0;
        l < 10;
        ++ l ) {
          for ( int m = 0;
          m < 10;
          ++ m ) {
            for ( int n = 0;
            n < 10;
            ++ n ) {
              if ( i + j + k == l + m + n ) {
                int c = 0;
                if ( i != s [ 0 ] - '0' ) c ++;
                if ( j != s [ 1 ] - '0' ) c ++;
                if ( k != s [ 2 ] - '0' ) c ++;
                if ( l != s [ 3 ] - '0' ) c ++;
                if ( m != s [ 4 ] - '0' ) c ++;
                if ( n != s [ 5 ] - '0' ) c ++;
                if ( c < ans ) ans = c;
              }
            }
          }
        }
      }
    }
  }
  return ans;
}


int f_filled ( string s ) {
  int ans = 6 ;
  for ( int i = 0 ;
  i < 10 ;
  i ++ ) {
    for ( int j = 0 ;
    j < 10 ;
    j ++ ) {
      for ( int k = 0 ;
      k < 10 ;
      k ++ ) {
        for ( int l = 0 ;
        l < 10 ;
        l ++ ) {
          for ( int m = 0 ;
          m < 10 ;
          m ++ ) {
            for ( int n = 0 ;
            n < 10 ;
            n ++ ) {
              if ( ( i + j + k ) == l + m + n ) {
                int c = 0 ;
                if ( ( i != ( s [ 0 ] - '0' ) ) && ( i != ( s [ 1 ] - '0' ) ) && ( i != ( s [ 2 ] - '0' ) ) && ( i != ( s [ 3 ] - '0' ) ) && ( i != ( s [ 4 ] - '0' ) ) && ( i != ( s [ 5 ] - '0' ) ) && ( i != ( s [ 6 ] - '0' ) ) && ( i != ( s [ 7 ] - '0' ) ) && ( i != ( s [ 8 ] - '0' ) ) && ( i != ( s [ 9 ] - '0' ) ) && ( i != ( s [ 10 ] - '0' ) ) && ( i != ( s [ 11 ] - '0' ) ) && ( i != ( s [ 12 ] - '0' ) ) && ( i != ( s [ 13 ] - '0' ) ) && ( i != ( s [ 14 ] - '0' ) ) && ( i != ( s [ 15 ] - '0' ) ) && ( i != ( s [ 16 ] - '0' ) ) && ( i != ( s [ 17 ] - '0' ) ) && ( i != ( s [ 18 ] - '0' ) ) && ( i != ( s [ 19 ] - '0' ) ) && ( i != ( s [ 20 ] - '0' ) ) && ( i != ( s [ 21 ] - '0' ) ) && ( i != ( s [ 22 ] - '0' ) ) && ( i != ( s [ 23 ] - '0' ) ) && ( i != ( s [ 24 ] - '0' ) ) && ( i != ( s [ 25 ] - '0' ) ) && ( i != ( s [ 26 ] - '0' ) ) && ( i != ( s [ 27 ] - '0' ) ) && ( i != ( s [ 28 ] - '0' ) ) && ( i != ( s [ 29

int main() {
    int n_success = 0;
    vector<string> param0 {"RHn","123635172","10","WqWeJgrVkLU","453745797","0011010110","OGhkmFYf ","96","101001","kN"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}