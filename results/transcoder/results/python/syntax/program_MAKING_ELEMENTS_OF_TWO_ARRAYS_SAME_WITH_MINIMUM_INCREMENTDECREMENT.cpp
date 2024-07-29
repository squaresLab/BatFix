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
int f_gold ( int a [ ], int b [ ], int n ) {
  sort ( a, a + n );
  sort ( b, b + n );
  int result = 0;
  for ( int i = 0;
  i < n;
  ++ i ) {
    result = result + abs ( a [ i ] - b [ i ] );
  }
  return result;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a [ ] , int b [ ] , int n ) {
  if(env_var_0 == 0) { a; }
  if(env_var_0 == 1) { a+n; }
  if(env_var_0 == 2) { a[n]; }
  if(env_var_0 == 3) { b; }
  if(env_var_0 == 4) { b+n; }
  if(env_var_0 == 5) { b[n]; }
  if(env_var_0 == 6) { isupper( a[n] ); }
  if(env_var_0 == 7) { isupper( b[n] ); }
  if(env_var_0 == 8) { isupper( n ); }
  if(env_var_0 == 9) { n; }
  if(env_var_0 == 10) { std::max( a[n],a[n] ); }
  if(env_var_0 == 11) { std::max( a[n],b[n] ); }
  if(env_var_0 == 12) { std::max( a[n],n ); }
  if(env_var_0 == 13) { std::max( b[n],a[n] ); }
  if(env_var_0 == 14) { std::max( b[n],b[n] ); }
  if(env_var_0 == 15) { std::max( b[n],n ); }
  if(env_var_0 == 16) { std::max( n,a[n] ); }
  if(env_var_0 == 17) { std::max( n,b[n] ); }
  if(env_var_0 == 18) { std::max( n,n ); }
  if(env_var_0 == 19) { std::min( a[n],a[n] ); }
  if(env_var_0 == 20) { std::min( a[n],b[n] ); }
  if(env_var_0 == 21) { std::min( a[n],n ); }
  if(env_var_0 == 22) { std::min( b[n],a[n] ); }
  if(env_var_0 == 23) { std::min( b[n],b[n] ); }
  if(env_var_0 == 24) { std::min( b[n],n ); }
  if(env_var_0 == 25) { std::min( n,a[n] ); }
  if(env_var_0 == 26) { std::min( n,b[n] ); }
  if(env_var_0 == 27) { std::min( n,n ); }
  if(env_var_0 == 28) { toupper( a[n] ); }
  if(env_var_0 == 29) { toupper( b[n] ); }
  if(env_var_0 == 30) { toupper( n ); }
   ;
  if(env_var_1 == 0) { a; }
  if(env_var_1 == 1) { a+n; }
  if(env_var_1 == 2) { a[n]; }
  if(env_var_1 == 3) { b; }
  if(env_var_1 == 4) { b+n; }
  if(env_var_1 == 5) { b[n]; }
  if(env_var_1 == 6) { isupper( a[n] ); }
  if(env_var_1 == 7) { isupper( b[n] ); }
  if(env_var_1 == 8) { isupper( n ); }
  if(env_var_1 == 9) { n; }
  if(env_var_1 == 10) { std::max( a[n],a[n] ); }
  if(env_var_1 == 11) { std::max( a[n],b[n] ); }
  if(env_var_1 == 12) { std::max( a[n],n ); }
  if(env_var_1 == 13) { std::max( b[n],a[n] ); }
  if(env_var_1 == 14) { std::max( b[n],b[n] ); }
  if(env_var_1 == 15) { std::max( b[n],n ); }
  if(env_var_1 == 16) { std::max( n,a[n] ); }
  if(env_var_1 == 17) { std::max( n,b[n] ); }
  if(env_var_1 == 18) { std::max( n,n ); }
  if(env_var_1 == 19) { std::min( a[n],a[n] ); }
  if(env_var_1 == 20) { std::min( a[n],b[n] ); }
  if(env_var_1 == 21) { std::min( a[n],n ); }
  if(env_var_1 == 22) { std::min( b[n],a[n] ); }
  if(env_var_1 == 23) { std::min( b[n],b[n] ); }
  if(env_var_1 == 24) { std::min( b[n],n ); }
  if(env_var_1 == 25) { std::min( n,a[n] ); }
  if(env_var_1 == 26) { std::min( n,b[n] ); }
  if(env_var_1 == 27) { std::min( n,n ); }
  if(env_var_1 == 28) { toupper( a[n] ); }
  if(env_var_1 == 29) { toupper( b[n] ); }
  if(env_var_1 == 30) { toupper( n ); }
   ;
  int result = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i += 1 ) {
    if ( ( a [ i ] > b [ i ] ) && ( a [ i ] < b [ i ] ) ) result = result + abs ( a [ i ] - b [ i ] ) ;
    else if ( ( a [ i ] < b [ i ] ) && ( a [ i ] > b [ i ] ) ) result = result + abs ( a [ i ] - b [ i ] ) ;
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,6,6,7,10,11,13,18,19,19,19,31,34,37,37,40,41,41,47,47,53,54,55,55,56,56,60,60,62,62,66,73,75,76,78,81,81,85,88,90,91,92,93,95,97,98},{-12,-6,78,62,86,-32},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},{76,74},{-92,-90,-88,-84,-76,-54,-44,-42,-38,-30,34,42},{1,1,0,0,1,1,1,0,1,1,0,0,1,0,0,1,1,1},{4,5,6,13,16,24,36,40,40,44,47,52,58,58,59,63,66,67,69,70,74,77,81,88,89,90,94,96},{-16,66,-2,54,-8,10,44,-36,-54,50,92,84,-36,40,-12,98,36,22,-10},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{42,24,43,64,55,94,26,30,76,3,37,43,81,7,15,64,63,88,34,8,55,32,19,55}};
    vector<vector<int>> param1 {{2,2,4,7,8,8,8,8,8,9,9,12,15,16,21,25,26,27,29,34,34,35,38,40,40,44,44,47,48,54,58,61,63,64,66,69,69,70,73,74,75,76,79,80,80,93},{-86,20,32,52,50,-60},{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},{16,98},{-80,-54,-34,12,14,16,16,46,50,64,84,92},{0,1,1,0,1,1,1,1,0,0,0,0,0,1,1,1,1,1},{1,7,10,17,21,22,22,27,36,37,39,46,52,53,56,59,65,67,70,75,78,78,79,89,89,94,96,97},{-76,-74,62,22,50,84,78,26,-62,-10,86,-10,-92,-10,86,-6,-58,-26,-18},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{96,11,63,90,28,80,44,63,17,81,80,69,66,22,81,4,86,74,91,17,3,81,65,98}};
    vector<int> param2 {23,4,14,1,8,14,24,16,36,22};
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
