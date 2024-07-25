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
int f_gold ( int A [ ], int B [ ], int n ) {
  sort ( A, A + n );
  sort ( B, B + n );
  int result = 0;
  for ( int i = 0;
  i < n;
  i ++ ) result += ( A [ i ] * B [ n - i - 1 ] );
  return result;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * A , int * B , int n ) {
  if(env_var_0 == 0) { isupper( A[n] ); }
  if(env_var_0 == 1) { isupper( B[n] ); }
  if(env_var_0 == 2) { isupper( n ); }
  if(env_var_0 == 3) { std::max( A[n],A[n] ); }
  if(env_var_0 == 4) { std::max( A[n],B[n] ); }
  if(env_var_0 == 5) { std::max( A[n],n ); }
  if(env_var_0 == 6) { std::max( B[n],A[n] ); }
  if(env_var_0 == 7) { std::max( B[n],B[n] ); }
  if(env_var_0 == 8) { std::max( B[n],n ); }
  if(env_var_0 == 9) { std::max( n,A[n] ); }
  if(env_var_0 == 10) { std::max( n,B[n] ); }
  if(env_var_0 == 11) { std::max( n,n ); }
  if(env_var_0 == 12) { std::min( A[n],A[n] ); }
  if(env_var_0 == 13) { std::min( A[n],B[n] ); }
  if(env_var_0 == 14) { std::min( A[n],n ); }
  if(env_var_0 == 15) { std::min( B[n],A[n] ); }
  if(env_var_0 == 16) { std::min( B[n],B[n] ); }
  if(env_var_0 == 17) { std::min( B[n],n ); }
  if(env_var_0 == 18) { std::min( n,A[n] ); }
  if(env_var_0 == 19) { std::min( n,B[n] ); }
  if(env_var_0 == 20) { std::min( n,n ); }
  if(env_var_0 == 21) { toupper( A[n] ); }
  if(env_var_0 == 22) { toupper( B[n] ); }
  if(env_var_0 == 23) { toupper( n ); }
   ;
  if(env_var_1 == 0) { isupper( A[n] ); }
  if(env_var_1 == 1) { isupper( B[n] ); }
  if(env_var_1 == 2) { isupper( n ); }
  if(env_var_1 == 3) { std::max( A[n],A[n] ); }
  if(env_var_1 == 4) { std::max( A[n],B[n] ); }
  if(env_var_1 == 5) { std::max( A[n],n ); }
  if(env_var_1 == 6) { std::max( B[n],A[n] ); }
  if(env_var_1 == 7) { std::max( B[n],B[n] ); }
  if(env_var_1 == 8) { std::max( B[n],n ); }
  if(env_var_1 == 9) { std::max( n,A[n] ); }
  if(env_var_1 == 10) { std::max( n,B[n] ); }
  if(env_var_1 == 11) { std::max( n,n ); }
  if(env_var_1 == 12) { std::min( A[n],A[n] ); }
  if(env_var_1 == 13) { std::min( A[n],B[n] ); }
  if(env_var_1 == 14) { std::min( A[n],n ); }
  if(env_var_1 == 15) { std::min( B[n],A[n] ); }
  if(env_var_1 == 16) { std::min( B[n],B[n] ); }
  if(env_var_1 == 17) { std::min( B[n],n ); }
  if(env_var_1 == 18) { std::min( n,A[n] ); }
  if(env_var_1 == 19) { std::min( n,B[n] ); }
  if(env_var_1 == 20) { std::min( n,n ); }
  if(env_var_1 == 21) { toupper( A[n] ); }
  if(env_var_1 == 22) { toupper( B[n] ); }
  if(env_var_1 == 23) { toupper( n ); }
   ;
  int result = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) result += ( A [ i ] * B [ n - i - 1 ] ) ;
  return result ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{31,85},{22,-6,84,70,84,6,28,-74,-14,68,22,90,-10},{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1},{12,33,93,2,83,9,61,84,9,69,2},{-92,-88,-84,-78,-78,-76,-66,-54,-52,-48,-46,-44,-40,-34,-32,-24,-20,-14,-6,-4,2,6,10,10,22,26,32,36,36,40,46,48,56,58,64,76,80,80,80,84,84,84,92},{1,0,1,1,0,1,1,0,1,0,0,1,1,1,0,0,0,0,0,0,1,0,1,1,0,1,0,1,1,0,0,0,1,0},{4,6,6,20,22,23,26,39,40,47,50,68,68,70,73,77,80,82,85},{78,60,-8,46,-12},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{60,66,84,99,85,89,28,97,85,71,53,93,23,9,45,26,49,95,64,33,70,34,10,1,68,39,53,12}};
    vector<vector<int>> param1 {{18,33},{2,-48,-36,-4,-22,-98,-74,-92,-72,-4,48,-32,94},{0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{85,92,92,1,54,31,69,4,39,81,52},{-98,-90,-82,-80,-76,-66,-62,-62,-62,-50,-50,-50,-32,-30,-14,-12,4,6,12,14,16,30,30,30,32,34,40,42,50,52,56,58,60,62,62,64,66,68,78,82,86,90,94},{0,1,1,1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,1,0,1,1,0,0,1,1,0,0,0,0,1,1,1},{2,3,15,21,22,26,35,37,37,38,57,59,62,63,64,76,81,85,91},{-72,-80,-30,16,-38},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{37,33,33,77,78,34,28,1,63,15,51,50,90,22,71,23,68,55,2,22,31,54,76,36,2,27,96,89}};
    vector<int> param2 {1,6,14,7,26,32,17,2,17,15};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

