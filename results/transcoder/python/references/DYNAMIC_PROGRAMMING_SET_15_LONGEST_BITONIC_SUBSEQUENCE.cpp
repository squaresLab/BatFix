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
  int i, j;
  int * lis = new int [ n ];
  for ( i = 0;
  i < n;
  i ++ ) lis [ i ] = 1;
  for ( i = 1;
  i < n;
  i ++ ) for ( j = 0;
  j < i;
  j ++ ) if ( arr [ i ] > arr [ j ] && lis [ i ] < lis [ j ] + 1 ) lis [ i ] = lis [ j ] + 1;
  int * lds = new int [ n ];
  for ( i = 0;
  i < n;
  i ++ ) lds [ i ] = 1;
  for ( i = n - 2;
  i >= 0;
  i -- ) for ( j = n - 1;
  j > i;
  j -- ) if ( arr [ i ] > arr [ j ] && lds [ i ] < lds [ j ] + 1 ) lds [ i ] = lds [ j ] + 1;
  int max = lis [ 0 ] + lds [ 0 ] - 1;
  for ( i = 1;
  i < n;
  i ++ ) if ( lis [ i ] + lds [ i ] - 1 > max ) max = lis [ i ] + lds [ i ] - 1;
  return max;
}


public : int lbs ( vector < int > arr ) {
  int n = arr . size ( ) ;
  vector < int > lis ( n + 1 , 1 ) ;
  lis [ 0 ] = 1 ;
  lis [ 1 ] = 0 ;
  lis [ 2 ] = 0 ;
  lis [ 3 ] = 0 ;
  lis [ 4 ] = 0 ;
  lis [ 5 ] = 0 ;
  lis [ 6 ] = 0 ;
  lis [ 7 ] = 0 ;
  lis [ 8 ] = 0 ;
  lis [ 9 ] = 0 ;
  lis [ 10 ] = 0 ;
  lis [ 11 ] = 0 ;
  lis [ 12 ] = 0 ;
  lis [ 13 ] = 0 ;
  lis [ 14 ] = 0 ;
  lis [ 15 ] = 0 ;
  lis [ 16 ] = 0 ;
  lis [ 17 ] = 0 ;
  lis [ 18 ] = 0 ;
  lis [ 19 ] = 0 ;
  lis [ 20 ] = 0 ;
  lis [ 21 ] = 0 ;
  lis [ 22 ] = 0 ;
  lis [ 23 ] = 0 ;
  lis [ 24 ] = 0 ;
  lis [ 25 ] = 0 ;
  lis [ 26 ] = 0 ;
  lis [ 27 ] = 0 ;
  lis [ 28 ] = 0 ;
  lis [ 29 ] = 0 ;
  lis [ 30 ] = 0 ;
  lis [ 31 ] = 0 ;
  lis [ 32 ] = 0 ;
  lis [ 33 ] = 0 ;
  lis [ 34 ] = 0 ;
  lis [ 35 ] = 0 ;
  lis [ 36 ] = 0 ;
  lis [ 37 ] = 0 ;
  lis [ 38 ] = 0 ;
  lis [ 39 ] = 0 ;
  lis [ 40 ] = 0 ;
  lis [ 41 ] = 0 ;
  lis [ 42 ] = 0 ;
  lis [ 43 ] = 0 ;
  lis [ 44 ] = 0 ;
  lis [ 45 ] = 0 ;
  lis [ 46 ] = 0 ;
  lis [ 47 ] = 0 ;
  lis [ 48 ] = 0 ;
  lis [ 49 ] = 0 ;
  lis [ 50 ] = 0 ;
  lis [ 51 ] = 0 ;
  lis [ 52 ] = 0 ;
  lis [ 53 ] = 0 ;
  lis [ 54 ] = 0 ;
  lis [ 55 ] = 0 ;
  lis [ 56 ] = 0 ;
  lis [ 57 ] = 0 ;
  lis [ 58 ] = 0 ;
  lis [ 59 ] = 0 ;
  lis [ 60 ] = 0 ;
  lis [ 61 ] = 0 ;
  lis [ 62 ] = 0 ;
  lis [ 63 ] = 0 ;
  lis [ 64 ] = 0 ;
  lis [ 65 ] = 0 ;
  lis [ 66 ] = 0 ;
  lis [ 67 ] = 0

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{11,15,37,64,77,84},{-52},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{49,95,57,17,94,76,47,23,62,20,83,95,79,65,80,57,12,8,56,39,63,54,63,88,36,81,98,98,45},{-68,-60,-40},{0,0,1,0,0,1,1,0,1,1,0,1,0,0,0,1,0,0,1,1,1,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1},{1,4,12,12,13,17,20,24,27,29,31,41,44,58,62,62,64,70,73,78,82,92,97},{-62,30},{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{41,81,35,27,29,74,48,21,3,49,90,17,93,11,69,43,30,50,67,33,21,34,13,3,46,20,92,67,97,20,51,24,22,39,35,29,71}};
    vector<int> param1 {4,0,20,24,2,27,21,1,8,29};
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