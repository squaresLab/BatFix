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
bool f_gold ( int arr [ ], int n, int m ) {
  if ( n > m ) return true;
  bool DP [ m ];
  memset ( DP, false, m );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( DP [ 0 ] ) return true;
    bool temp [ m ];
    memset ( temp, false, m );
    for ( int j = 0;
    j < m;
    j ++ ) {
      if ( DP [ j ] == true ) {
        if ( DP [ ( j + arr [ i ] ) % m ] == false ) temp [ ( j + arr [ i ] ) % m ] = true;
      }
    }
    for ( int j = 0;
    j < m;
    j ++ ) if ( temp [ j ] ) DP [ j ] = true;
    DP [ arr [ i ] % m ] = true;
  }
  return DP [ 0 ];
}


bool f_filled ( int arr [ ] , int n , int m ) {
  if ( ( n > m ) || ( n == 0 ) ) return true ;
  bool DP [ m ] ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    if ( ( DP [ 0 ] == true ) || ( DP [ 1 ] == false ) || ( DP [ 2 ] == false ) || ( DP [ 3 ] == false ) || ( DP [ 4 ] == false ) || ( DP [ 5 ] == false ) || ( DP [ 6 ] == false ) || ( DP [ 7 ] == false ) || ( DP [ 8 ] == false ) || ( DP [ 9 ] == false ) || ( DP [ 10 ] == false ) || ( DP [ 11 ] == false ) || ( DP [ 12 ] == false ) || ( DP [ 13 ] == false ) || ( DP [ 14 ] == false ) || ( DP [ 15 ] == false ) || ( DP [ 16 ] == false ) || ( DP [ 17 ] == false ) || ( DP [ 18 ] == false ) || ( DP [ 19 ] == false ) || ( DP [ 20 ] == false ) || ( DP [ 21 ] == false ) || ( DP [ 22 ] == false ) || ( DP [ 23 ] == false ) || ( DP [ 24 ] == false ) || ( DP [ 25 ] == false ) || ( DP [ 26 ] == false ) || ( DP [ 27 ] == false ) || ( DP [ 28 ] == false ) || ( DP [ 29 ] == false ) || ( DP [ 30 ] == false ) || ( DP [ 31 ] == false ) || ( DP [ 32 ] == false ) || ( DP [ 33 ] == false ) || ( DP [ 34 ] == false ) || ( DP [ 35 ] == false ) || ( DP [ 36 ] == false ) || ( DP [ 37 ] == false ) || ( DP [ 38 ] == false ) || ( DP [ 39 ] == false ) || ( DP [ 40 ] == false ) || ( DP [ 41 ] == false ) || ( DP [ 42 ] == false ) || ( DP [ 43 ] == false ) || ( DP [ 44 ] == false ) || ( DP [ 45 ] == false ) || ( DP [ 46 ] == false ) || ( DP [ 47 ] == false ) || ( DP [ 48 ] == false ) || ( DP [ 49 ] == false ) || ( DP [

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,5,7,12,13,13,15,18,20,21,22,26,27,41,41,50,53,57,58,58,61,62,62,64,70,75,78,79,81,81,81,83,86,91,93,95,97,99,99},{1, 6},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{50,20,79,42,85,24,20,76,36,88,40,5,24,85,7,19,43,51,94,13,53,93,92,43,97,38,80,48,52,47,77,56,41,80,32,34,77,14,70,3},{-96,-94,-72,-58,-48,-36,-28,-26,-10,-10,-8,-8,-6,2,14,30,30,54,58,60,64,68,78,84,96,98},{1,0,1,1,0,0,1,1,1,0,0},{2,7,8,15,18,23,24,25,27,35,40,42,43,46,48,50,53,64,66,69,70,71,72,77,78,80,81,81,81,82,82,82,84,87,97,98},{46,54,24,-10},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{39,21,38,6,38,44,96,1,16,1,28,4,55,8}};
    vector<int> param1 {36,2,32,29,16,7,23,3,21,12};
    vector<int> param2 {3540,5,101,27,18,8,33,37,34,228};
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