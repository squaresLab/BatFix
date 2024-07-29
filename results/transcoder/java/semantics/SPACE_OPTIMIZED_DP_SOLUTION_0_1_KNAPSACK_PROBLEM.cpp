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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;
int f_gold ( int val [ ], int wt [ ], int n, int W ) {
  int mat [ 2 ] [ W + 1 ];
  memset ( mat, 0, sizeof ( mat ) );
  int i = 0;
  while ( i < n ) {
    int j = 0;
    if ( i % 2 != 0 ) {
      while ( ++ j <= W ) {
        if ( wt [ i ] <= j ) mat [ 1 ] [ j ] = max ( val [ i ] + mat [ 0 ] [ j - wt [ i ] ], mat [ 0 ] [ j ] );
        else mat [ 1 ] [ j ] = mat [ 0 ] [ j ];
      }
    }
    else {
      while ( ++ j <= W ) {
        if ( wt [ i ] <= j ) mat [ 0 ] [ j ] = max ( val [ i ] + mat [ 1 ] [ j - wt [ i ] ], mat [ 1 ] [ j ] );
        else mat [ 0 ] [ j ] = mat [ 1 ] [ j ];
      }
    }
    i ++;
  }
  return ( n % 2 != 0 ) ? mat [ 0 ] [ W ] : mat [ 1 ] [ W ];
}


int f_filled ( int val [ ], int wt [ ], int n, int W ) {
  int mat [ 2 ] [ W + 1 ];
  int i = 0;
  while ( i < n ) {
    int j = 0;
    if ( i % 2 != 0 ) {
      while ( ++ j <= W ) {
        if ( wt [ i ] <= j ) mat [ 1 ] [ j ] = max ( val [ i ] + mat [ 0 ] [ j - wt [ i ] ], mat [ 0 ] [ j ] );
        else mat [ 1 ] [ j ] = mat [ 0 ] [ j ];
      }
    }
    else {
      while ( ++ j <= W ) {
        if ( wt [ i ] <= j ) mat [ 0 ] [ j ] = max ( val [ i ] + mat [ 1 ] [ j - wt [ i ] ], mat [ 1 ] [ j ] );
        else mat [ 0 ] [ j ] = mat [ 1 ] [ j ];
      }
    }
    i ++;
  }
  return ( n % 2 != 0 ) ? mat [ 0 ] [ W ] : mat [ 1 ] [ W ];
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,1,3,4,5,6,6,11,13,14,16,18,21,22,22,27,28,32,34,34,37,42,42,48,49,50,53,58,59,60,60,61,65,66,70,74,80,81,81,81,86,90,92,93,93,94,97,99},{82,-18,-62,-4,6,10,22,-36,-8,84,-28,-64,48,92,-64,-76,44,94,-8,10,-24,56,-96,-82,-90,96,-62,42,-22,-16,-66,26,80,-8,82},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{3,65,15,84,86,34,50,33,73,3,2,4,16,54,33,9,57,40,52,82,16,8,87,60,36,3,15,97,82,23,3,30,45,17,58,58,96,57,7,39,78,58,56,15,44,12,8},{-56,-14,20,60,92},{0,0,0,0,0,1,1,0,1,1,0,0,1,0,1,0,1,0,1,1,1,1,0,1,0,1,0,1,0,1,1,0,1,1,1,1,0,1,0,0,0,0,1,1,0,1,1,0,0},{11,12,13,18,25,27,35,35,36,55,57,58,58,61,63,67,72,76,81,87,89,97},{-68,90,86,40,86,92,46,-26,6,74,-68,-64,-62,-12,-96,16,-80,52,-8,64,-62,-24,-26,82,56,-10,-32,-96,-12,94,66,-46,-4,88,-86,-46,70},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},{3,47,85,1,45,54,50,79}};
    vector<vector<int>> param1 {{2,2,2,3,5,7,8,9,17,20,20,26,27,32,35,42,42,48,49,49,51,60,61,62,63,66,68,71,76,76,76,78,81,83,83,85,85,86,87,88,88,89,89,89,89,92,96,98},{84,-60,40,-84,92,-62,-36,-62,-52,-52,12,62,-64,-76,-18,74,-4,64,28,-68,60,-54,72,-22,-34,-52,22,10,22,68,94,90,-20,16,44},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{80,41,34,46,88,29,16,5,5,30,50,5,13,99,49,89,50,14,46,90,82,84,34,71,47,60,74,79,81,11,98,91,85,95,50,4,41,59,60,81,62,84,25,87,79,33,19},{-74,-48,-36,-24,62},{0,1,0,0,1,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,1,0,0,1,0,0,1,1,0,1,0,0,0,1,1,0,0,0,1,0,1,0,0,0,0,1,1,1,1},{6,11,18,20,22,25,39,42,45,48,55,67,70,74,74,77,78,81,89,91,93,94},{42,78,-64,-34,-34,92,-50,-72,-24,-24,-92,24,64,-80,-30,98,-54,78,30,64,58,-50,92,6,68,-66,14,50,54,78,-60,-50,-16,-10,-38,30,4},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{7,63,15,89,67,30,78,68}};
    vector<int> param2 {34,26,13,37,2,39,14,33,18,7};
    vector<int> param3 {33,17,14,31,2,28,20,33,24,6};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i],param3[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
