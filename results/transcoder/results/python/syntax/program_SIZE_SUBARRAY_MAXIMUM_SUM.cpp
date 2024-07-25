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
int f_gold ( int a [ ], int size ) {
  int max_so_far = INT_MIN, max_ending_here = 0, start = 0, end = 0, s = 0;
  for ( int i = 0;
  i < size;
  i ++ ) {
    max_ending_here += a [ i ];
    if ( max_so_far < max_ending_here ) {
      max_so_far = max_ending_here;
      start = s;
      end = i;
    }
    if ( max_ending_here < 0 ) {
      max_ending_here = 0;
      s = i + 1;
    }
  }
  return ( end - start + 1 );
}


int foo;
int maxsize;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int a [ ] , int size ) {
 int max_so_far ;
  if(env_var_0 == 0) {  -a - 1; }
  if(env_var_0 == 1) {  -a+max_so_far - 1; }
  if(env_var_0 == 2) {  -a+size - 1; }
  if(env_var_0 == 3) {  -a[max_so_far] - 1; }
  if(env_var_0 == 4) {  -a[size] - 1; }
  if(env_var_0 == 5) {  -max_so_far - 1; }
  if(env_var_0 == 6) {  -size - 1; }
  if(env_var_0 == 7) { ax_so_far = -a - 1; }
  if(env_var_0 == 8) { ax_so_far = -a+max_so_far - 1; }
  if(env_var_0 == 9) { ax_so_far = -a+size - 1; }
  if(env_var_0 == 10) { ax_so_far = -a[max_so_far] - 1; }
  if(env_var_0 == 11) { ax_so_far = -a[size] - 1; }
  if(env_var_0 == 12) { ax_so_far = -max_so_far - 1; }
  if(env_var_0 == 13) { ax_so_far = -size - 1; }
  if(env_var_0 == 14) { ize = -a - 1; }
  if(env_var_0 == 15) { ize = -a+max_so_far - 1; }
  if(env_var_0 == 16) { ize = -a+size - 1; }
  if(env_var_0 == 17) { ize = -a[max_so_far] - 1; }
  if(env_var_0 == 18) { ize = -a[size] - 1; }
  if(env_var_0 == 19) { ize = -max_so_far - 1; }
  if(env_var_0 == 20) { ize = -size - 1; }
  if(env_var_0 == 21) { ax_so_far] = -a - 1; }
  if(env_var_0 == 22) { ax_so_far] = -a+max_so_far - 1; }
  if(env_var_0 == 23) { ax_so_far] = -a+size - 1; }
  if(env_var_0 == 24) { ax_so_far] = -a[max_so_far] - 1; }
  if(env_var_0 == 25) { ax_so_far] = -a[size] - 1; }
  if(env_var_0 == 26) { ax_so_far] = -max_so_far - 1; }
  if(env_var_0 == 27) { ax_so_far] = -size - 1; }
  if(env_var_0 == 28) { ize] = -a - 1; }
  if(env_var_0 == 29) { ize] = -a+max_so_far - 1; }
  if(env_var_0 == 30) { ize] = -a+size - 1; }
  if(env_var_0 == 31) { ize] = -a[max_so_far] - 1; }
  if(env_var_0 == 32) { ize] = -a[size] - 1; }
  if(env_var_0 == 33) { ize] = -max_so_far - 1; }
  if(env_var_0 == 34) { ize] = -size - 1; }
  if(env_var_0 == 35) { _so_far = -a - 1; }
  if(env_var_0 == 36) { _so_far = -a+max_so_far - 1; }
  if(env_var_0 == 37) { _so_far = -a+size - 1; }
  if(env_var_0 == 38) { _so_far = -a[max_so_far] - 1; }
  if(env_var_0 == 39) { _so_far = -a[size] - 1; }
  if(env_var_0 == 40) { _so_far = -max_so_far - 1; }
  if(env_var_0 == 41) { _so_far = -size - 1; }
  if(env_var_0 == 42) { e = -a - 1; }
  if(env_var_0 == 43) { e = -a+max_so_far - 1; }
  if(env_var_0 == 44) { e = -a+size - 1; }
  if(env_var_0 == 45) { e = -a[max_so_far] - 1; }
  if(env_var_0 == 46) { e = -a[size] - 1; }
  if(env_var_0 == 47) { e = -max_so_far - 1; }
  if(env_var_0 == 48) { e = -size - 1; }
   
  int max_ending_here = 0 ;
  int start = 0 ;
  int end = 0 ;
  int s = 0 ;
  for ( int i = 0 ;
  i != size ;
  i ++ ) {
    max_ending_here += a [ i ] ;
    if ( max_so_far < max_ending_here ) {
      max_so_far = max_ending_here ;
      start = s ;
      end = i ;
    }
    if ( max_ending_here < 0 ) {
      max_ending_here = 0 ;
      s = i + 1 ;
    }
  }
  return ( end - start + 1 ) ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{7,7,16,20,21,22,34,34,37,37,49,53,54,55,58,59,60,66,67,68,73,80,80,88,90,98,99,99},{-90,-98,-10,-84,24},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{94,2,83,94,10,94,58,99,60,19,3,71,36,84,71,14,50,15},{-98,-96,-70,-64,-56,-38,-34,-24,-22,-2,26,32,36,50,62,70,70,72,72,74,78,82,84,86},{0,1,0,1,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,1,0,1,0,1,0},{1,2,2,5,13,14,15,18,21,34,42,48,50,63,67,68,69,75,80,80,81,83,84,89,90,90,91,92,95,98},{-88,-10,-88,-90,92,14,68,-90,-86},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{28,39,90,39,12,90,24,89,54,44,3,26,44,36,67,92,3,79,10,45,22,21,39,91,2,5,72,21,55,48,75,47}};
    vector<int> param1 {21,2,19,14,13,35,22,5,24,27};
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

