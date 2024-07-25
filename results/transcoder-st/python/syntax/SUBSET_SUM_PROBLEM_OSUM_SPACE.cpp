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
bool f_gold ( int arr [ ], int n, int sum ) {
  bool subset [ 2 ] [ sum + 1 ];
  for ( int i = 0;
  i <= n;
  i ++ ) {
    for ( int j = 0;
    j <= sum;
    j ++ ) {
      if ( j == 0 ) subset [ i % 2 ] [ j ] = true;
      else if ( i == 0 ) subset [ i % 2 ] [ j ] = false;
      else if ( arr [ i - 1 ] <= j ) subset [ i % 2 ] [ j ] = subset [ ( i + 1 ) % 2 ] [ j - arr [ i - 1 ] ] || subset [ ( i + 1 ) % 2 ] [ j ];
      else subset [ i % 2 ] [ j ] = subset [ ( i + 1 ) % 2 ] [ j ];
    }
  }
  return subset [ n % 2 ] [ sum ];
}


bool f_filled ( int arr [ ] , int n , int sum ) {
  bool subset [ 3 ] [ 3 ] ;
  for ( int i = 0 ;
  i < 3 ;
  i ++ ) {
    for ( int j = 0 ;
    j < 3 ;
    j ++ ) {
      if ( ( j == 0 ) || ( j == 1 ) || ( j == 2 ) || ( j == 3 ) || ( j == 4 ) || ( j == 5 ) || ( j == 6 ) || ( j == 7 ) || ( j == 8 ) || ( j == 9 ) || ( j == 10 ) || ( j == 11 ) || ( j == 12 ) || ( j == 13 ) || ( j == 14 ) || ( j == 15 ) || ( j == 16 ) || ( j == 17 ) || ( j == 18 ) || ( j == 19 ) || ( j == 20 ) || ( j == 21 ) || ( j == 22 ) || ( j == 23 ) || ( j == 24 ) || ( j == 25 ) || ( j == 26 ) || ( j == 27 ) || ( j == 28 ) || ( j == 29 ) || ( j == 30 ) || ( j == 31 ) || ( j == 32 ) || ( j == 33 ) || ( j == 34 ) || ( j == 35 ) || ( j == 36 ) || ( j == 37 ) || ( j == 38 ) || ( j == 39 ) || ( j == 40 ) || ( j == 41 ) || ( j == 42 ) || ( j == 43 ) || ( j == 44 ) || ( j == 45 ) || ( j == 46 ) || ( j == 47 ) || ( j == 48 ) || ( j == 49 ) || ( j == 50 ) || ( j == 51 ) || ( j == 52 ) || ( j == 53 ) || ( j == 54 ) || ( j == 55 ) || ( j == 56 ) || ( j == 57 ) || ( j == 58 ) || ( j == 59 ) || ( j == 60 ) || ( j == 61 ) || ( j == 62 ) || ( j == 63 ) || ( j == 64 ) || ( j == 65 ) || ( j == 66 ) || ( j == 67 ) || ( j == 68 ) || ( j == 69 ) || ( j == 70 ) || ( j == 71 ) || ( j == 72 ) || ( j == 73 ) || ( j == 74 ) ;
    }
  }
  

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{4,6,7,9,11,23,25,33,55,81,82,90,93,98},{-44,-96,48,90,-26,66,-82,16,80,96,64,64,-78,-8,20,-74,-32,62,88,-62,28,-46,-40,-62,18,-46,50,-32,-26,-68,66,20,6,34,-20,-96,-26,-76,-64,46,-38},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{78,36,15,81,56,57,73,78,88,11,93,89,68,96,32,67,6,19,17,48,64,5,74,91,36,96,57,85,96,43,98,79,73,2},{-84,-60,-56,-32,70,82},{0,1,0,0,1,1,1,0,1},{42,57,77,85,87,89,90},{-82,68,70,-18,44,-48,-24,82,8,74,90,-72,-66,24,44,24,26,-80,-70,16,90,-54,-32,-54,70,48,-56,-16,-42},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},{3,30,94,96,95,21,84,76,35,52,18,87,60,28,78,72,80,58,65,5}};
    vector<int> param1 {10,36,29,23,4,8,3,14,23,16};
    vector<int> param2 {7,40,39,29,4,5,6,14,24,14};
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