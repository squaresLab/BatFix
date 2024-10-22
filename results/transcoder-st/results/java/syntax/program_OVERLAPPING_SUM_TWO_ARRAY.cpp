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
#include <queue>
#include <set>
using namespace std;
int f_gold ( int A [ ], int B [ ], int n ) {
  unordered_map < int, int > hash;
  for ( int i = 0;
  i < n;
  i ++ ) {
    hash [ A [ i ] ] ++;
    hash [ B [ i ] ] ++;
  }
  int sum = 0;
  for ( auto x : hash ) if ( x . second == 1 ) sum += x . first;
  return sum;
}


int foo;
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * A , int * B , int n ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( hash . count ( A [ i ] ) == 1 ) {
      hash [ A [ i ] ] = 1 + hash [ A [ i ] ] ;
    }
    else {
      hash [ A [ i ] ] = 1 ;
    }
    if ( hash . count ( B [ i ] ) == 1 ) {
      hash [ B [ i ] ] = 1 + hash [ B [ i ] ] ;
    }
    else {
      hash [ B [ i ] ] = 1 ;
    }
  }
  int sum = 0 ;
  for ( unordered_map < int , int > :: iterator it = hash . begin ( ) ;
  it != hash . end ( ) ;
  it ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = hash.bucket_count(); }
    if(env_var_0 == 1) { _res_key_if_0 = hash.cend(); }
    if(env_var_0 == 2) { _res_key_if_0 = hash.empty(); }
    if(env_var_0 == 3) { _res_key_if_0 = hash.end(); }
    if(env_var_0 == 4) { _res_key_if_0 = hash.hash_function(); }
    if(env_var_0 == 5) { _res_key_if_0 = hash.load_factor(); }
    if(env_var_0 == 6) { _res_key_if_0 = hash.max_size(); }
    if(env_var_0 == 7) { _res_key_if_0 = isupper(); }
    if(env_var_0 == 8) { _res_key_if_0 = toupper( A[it.operator->()->second] ); }
    if(env_var_0 == 9) { _res_key_if_0 = toupper( A[n] ); }
    if(env_var_0 == 10) { _res_key_if_0 = toupper( A[sum] ); }
    if(env_var_0 == 11) { _res_key_if_0 = toupper( B[it.operator->()->second] ); }
    if(env_var_0 == 12) { _res_key_if_0 = toupper( B[n] ); }
    if(env_var_0 == 13) { _res_key_if_0 = toupper( B[sum] ); }
    if(env_var_0 == 14) { _res_key_if_0 = toupper( it.operator->()->first ); }
    if(env_var_0 == 15) { _res_key_if_0 = toupper( it.operator->()->second ); }
    if(env_var_0 == 16) { _res_key_if_0 = toupper( n ); }
    if(env_var_0 == 17) { _res_key_if_0 = toupper( sum ); }
    if ( _res_key_if_0 ) {
   if(env_var_1 == 0) { hash.bucket_count(); }
      if(env_var_1 == 1) { hash.cend(); }
      if(env_var_1 == 2) { hash.empty(); }
      if(env_var_1 == 3) { hash.end(); }
      if(env_var_1 == 4) { hash.hash_function(); }
      if(env_var_1 == 5) { hash.load_factor(); }
      if(env_var_1 == 6) { hash.max_size(); }
      if(env_var_1 == 7) { isupper(); }
      if(env_var_1 == 8) { toupper( A[it.operator->()->second] ); }
      if(env_var_1 == 9) { toupper( A[n] ); }
      if(env_var_1 == 10) { toupper( A[sum] ); }
      if(env_var_1 == 11) { toupper( B[it.operator->()->second] ); }
      if(env_var_1 == 12) { toupper( B[n] ); }
      if(env_var_1 == 13) { toupper( B[sum] ); }
      if(env_var_1 == 14) { toupper( it.operator->()->first ); }
      if(env_var_1 == 15) { toupper( it.operator->()->second ); }
      if(env_var_1 == 16) { toupper( n ); }
      if(env_var_1 == 17) { toupper( sum ); }
          ;
    }
  }
  return sum ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{13,31,63,75,90,92,94,98},{-20},{0,0,0,1,1,1},{47,71,9,64,66,99,7,44,75,84,88,49,95,56,3,90,73,2},{-76,-72,-70,-60,-44,-38,-38,-26,-16,-10,-4,-2,4,18,30,38,54,56,64,66,68,70,72,82,84},{0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,1,0,1,0,0,1,0,0,1,1,1},{3,4,4,6,11,13,14,18,30,30,34,39,40,45,46,50,51,56,60,61,66,68,72,79,79,82,83,87,89,91,91,92,92,93,94},{-14,12,98,34,58,-70,6,52,-50,96,-6},{0,0,0,1,1,1,1,1},{34,85,60,55,38,69,21,43,39,83,10,71,73,15,94,59,83,39,29,31,61,9,11,27,71,90,18,11,4,3,97,43,58,50,35,42,70,33,98,61,32,32,12,29}};
    vector<vector<int>> param1 {{14,16,20,28,32,55,56,56},{60},{0,0,1,1,1,1},{8,27,21,40,99,8,52,37,72,50,61,82,88,71,27,84,38,35},{-80,-64,-50,-44,-34,-26,-24,-22,-6,-2,2,2,12,24,34,44,48,50,52,70,76,82,86,94,96},{0,0,0,1,1,0,1,0,0,1,1,1,0,0,1,0,0,1,1,0,0,0,1,1,0,0},{3,7,15,15,21,23,30,32,35,38,38,41,41,41,44,45,49,52,60,60,63,66,66,70,72,74,74,75,79,81,87,88,89,93,96},{50,-22,-82,40,-80,30,-58,-64,60,6,-28},{0,0,1,1,1,1,1,1},{74,10,95,67,59,17,32,87,87,12,22,45,50,35,25,51,10,86,75,4,74,43,92,63,60,28,32,72,66,61,43,48,20,89,55,59,22,85,73,43,7,65,53,98}};
    vector<int> param2 {6,0,5,16,16,17,22,9,5,34};
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
