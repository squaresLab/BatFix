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
int f_gold ( int arr [ ], int n ) {
  unordered_map < int, int > hash;
  for ( int i = 0;
  i < n;
  i ++ ) hash [ arr [ i ] ] ++;
  int max_count = 0;
  for ( auto i : hash ) if ( max_count < i . second ) max_count = i . second;
  return ( n - max_count );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
      int _res_key_if_0;
      if (env_var_0 == 0) { _res_key_if_0 = hash.at(arr[i]); }
      if (env_var_0 == 1) { _res_key_if_0 = hash.at(arr[n]); }
      if (env_var_0 == 2) { _res_key_if_0 = hash.at(i); }
      if (env_var_0 == 3) { _res_key_if_0 = hash.at(n); }
      if (env_var_0 == 4) { _res_key_if_0 = hash.begin(arr[i]); }
      if (env_var_0 == 5) { _res_key_if_0 = hash.begin(arr[n]); }
      if (env_var_0 == 6) { _res_key_if_0 = hash.begin(i); }
      if (env_var_0 == 7) { _res_key_if_0 = hash.begin(n); }
      if (env_var_0 == 8) { _res_key_if_0 = hash.bucket(arr[i]); }
      if (env_var_0 == 9) { _res_key_if_0 = hash.bucket(arr[n]); }
      if (env_var_0 == 10) { _res_key_if_0 = hash.bucket(i); }
      if (env_var_0 == 11) { _res_key_if_0 = hash.bucket(n); }
      if (env_var_0 == 12) { _res_key_if_0 = hash.bucket_size(arr[i]); }
      if (env_var_0 == 13) { _res_key_if_0 = hash.bucket_size(arr[n]); }
      if (env_var_0 == 14) { _res_key_if_0 = hash.bucket_size(i); }
      if (env_var_0 == 15) { _res_key_if_0 = hash.bucket_size(n); }
      if (env_var_0 == 16) { _res_key_if_0 = hash.cbegin(arr[i]); }
      if (env_var_0 == 17) { _res_key_if_0 = hash.cbegin(arr[n]); }
      if (env_var_0 == 18) { _res_key_if_0 = hash.cbegin(i); }
      if (env_var_0 == 19) { _res_key_if_0 = hash.cbegin(n); }
      if (env_var_0 == 20) { _res_key_if_0 = hash.cend(arr[i]); }
      if (env_var_0 == 21) { _res_key_if_0 = hash.cend(arr[n]); }
      if (env_var_0 == 22) { _res_key_if_0 = hash.cend(i); }
      if (env_var_0 == 23) { _res_key_if_0 = hash.cend(n); }
      if (env_var_0 == 24) { _res_key_if_0 = hash.count(arr[i]); }
      if (env_var_0 == 25) { _res_key_if_0 = hash.count(arr[n]); }
      if (env_var_0 == 26) { _res_key_if_0 = hash.count(i); }
      if (env_var_0 == 27) { _res_key_if_0 = hash.count(n); }
      if (env_var_0 == 28) { _res_key_if_0 = hash.end(arr[i]); }
      if (env_var_0 == 29) { _res_key_if_0 = hash.end(arr[n]); }
      if (env_var_0 == 30) { _res_key_if_0 = hash.end(i); }
      if (env_var_0 == 31) { _res_key_if_0 = hash.end(n); }
      if (env_var_0 == 32) { _res_key_if_0 = hash.equal_range(arr[i]); }
      if (env_var_0 == 33) { _res_key_if_0 = hash.equal_range(arr[n]); }
      if (env_var_0 == 34) { _res_key_if_0 = hash.equal_range(i); }
      if (env_var_0 == 35) { _res_key_if_0 = hash.equal_range(n); }
      if (env_var_0 == 36) { _res_key_if_0 = hash.erase(arr[i]); }
      if (env_var_0 == 37) { _res_key_if_0 = hash.erase(arr[n]); }
      if (env_var_0 == 38) { _res_key_if_0 = hash.erase(i); }
      if (env_var_0 == 39) { _res_key_if_0 = hash.erase(n); }
      if (env_var_0 == 40) { _res_key_if_0 = hash.find(arr[i]); }
      if (env_var_0 == 41) { _res_key_if_0 = hash.find(arr[n]); }
      if (env_var_0 == 42) { _res_key_if_0 = hash.find(i); }
      if (env_var_0 == 43) { _res_key_if_0 = hash.find(n); }
      if (env_var_0 == 44) { _res_key_if_0 = hash.max_load_factor(arr[i]); }
      if (env_var_0 == 45) { _res_key_if_0 = hash.max_load_factor(arr[n]); }
      if (env_var_0 == 46) { _res_key_if_0 = hash.max_load_factor(i); }
      if (env_var_0 == 47) { _res_key_if_0 = hash.max_load_factor(n); }
      if (env_var_0 == 48) { _res_key_if_0 = hash.rehash(arr[i]); }
      if (env_var_0 == 49) { _res_key_if_0 = hash.rehash(arr[n]); }
      if (env_var_0 == 50) { _res_key_if_0 = hash.rehash(i); }
      if (env_var_0 == 51) { _res_key_if_0 = hash.rehash(n); }
      if (env_var_0 == 52) { _res_key_if_0 = hash.reserve(arr[i]); }
      if (env_var_0 == 53) { _res_key_if_0 = hash.reserve(arr[n]); }
      if (env_var_0 == 54) { _res_key_if_0 = hash.reserve(i); }
      if (env_var_0 == 55) { _res_key_if_0 = hash.reserve(n); }
      if (env_var_0 == 56) { _res_key_if_0 = hash.swap(hash); }
      if (env_var_0 == 57) { _res_key_if_0 = isupper(arr[i]); }
      if (env_var_0 == 58) { _res_key_if_0 = isupper(arr[n]); }
      if (env_var_0 == 59) { _res_key_if_0 = isupper(i); }
      if (env_var_0 == 60) { _res_key_if_0 = isupper(n); }
      if (env_var_0 == 61) { _res_key_if_0 = std::max(arr[i], arr[i]); }
      if (env_var_0 == 62) { _res_key_if_0 = std::max(arr[i], arr[n]); }
      if (env_var_0 == 63) { _res_key_if_0 = std::max(arr[i], i); }
      if (env_var_0 == 64) { _res_key_if_0 = std::max(arr[i], n); }
      if (env_var_0 == 65) { _res_key_if_0 = std::max(arr[n], arr[i]); }
      if (env_var_0 == 66) { _res_key_if_0 = std::max(arr[n], arr[n]); }
      if (env_var_0 == 67) { _res_key_if_0 = std::max(arr[n], i); }
      if (env_var_0 == 68) { _res_key_if_0 = std::max(arr[n], n); }
      if (env_var_0 == 69) { _res_key_if_0 = std::max(i, arr[i]); }
      if (env_var_0 == 70) { _res_key_if_0 = std::max(i, arr[n]); }
      if (env_var_0 == 71) { _res_key_if_0 = std::max(i, i); }
      if (env_var_0 == 72) { _res_key_if_0 = std::max(i, n); }
      if (env_var_0 == 73) { _res_key_if_0 = std::max(n, arr[i]); }
      if (env_var_0 == 74) { _res_key_if_0 = std::max(n, arr[n]); }
      if (env_var_0 == 75) { _res_key_if_0 = std::max(n, i); }
      if (env_var_0 == 76) { _res_key_if_0 = std::max(n, n); }
      if (env_var_0 == 77) { _res_key_if_0 = std::min(arr[i], arr[i]); }
      if (env_var_0 == 78) { _res_key_if_0 = std::min(arr[i], arr[n]); }
      if (env_var_0 == 79) { _res_key_if_0 = std::min(arr[i], i); }
      if (env_var_0 == 80) { _res_key_if_0 = std::min(arr[i], n); }
      if (env_var_0 == 81) { _res_key_if_0 = std::min(arr[n], arr[i]); }
      if (env_var_0 == 82) { _res_key_if_0 = std::min(arr[n], arr[n]); }
      if (env_var_0 == 83) { _res_key_if_0 = std::min(arr[n], i); }
      if (env_var_0 == 84) { _res_key_if_0 = std::min(arr[n], n); }
      if (env_var_0 == 85) { _res_key_if_0 = std::min(i, arr[i]); }
      if (env_var_0 == 86) { _res_key_if_0 = std::min(i, arr[n]); }
      if (env_var_0 == 87) { _res_key_if_0 = std::min(i, i); }
      if (env_var_0 == 88) { _res_key_if_0 = std::min(i, n); }
      if (env_var_0 == 89) { _res_key_if_0 = std::min(n, arr[i]); }
      if (env_var_0 == 90) { _res_key_if_0 = std::min(n, arr[n]); }
      if (env_var_0 == 91) { _res_key_if_0 = std::min(n, i); }
      if (env_var_0 == 92) { _res_key_if_0 = std::min(n, n); }
      if (env_var_0 == 93) { _res_key_if_0 = toupper(arr[i]); }
      if (env_var_0 == 94) { _res_key_if_0 = toupper(arr[n]); }
      if (env_var_0 == 95) { _res_key_if_0 = toupper(i); }
      if (env_var_0 == 96) { _res_key_if_0 = toupper(n); }
      if (_res_key_if_0)
          hash[arr[i]] = hash[arr[i]] + 1;
      else
          hash [ arr [ i ] ] = 1;
  }
  int max_count = 0 ;
  auto s = hash . begin ( ) ;
  for ( auto i = hash . begin ( ) ;
  i != hash . end ( ) ;
  i ++ )
      if ( max_count < i -> second )
    max_count = i -> second ;
  return ( n - max_count ) ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,4,6,8,17,25,29,33,33,33,38,42,43,49,55,60,62,63,68,69,70,75,77,79,79,85,87,87,90,90,90,90,94,98},{-66,-44,72,-82,46,66,-78,-62,32,86,62,56,22,-58,46,-6,94},{0,1,1},{68,78,2,48,1,10,18,67,97,31,72,12,25,39,51,12,29,46,93,66,28,29,5,86,97,59,7,94,64,13,42,48,25,33,10,1,5,32,14,27},{-98,-96,-78,-72,-64,-62,-56,-40,-36,-14,-8,4,18,22,28,32,52,56,58,60,78,88,94},{0,0,1,1,1,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0},{3,3,7,9,14,15,15,25,25,26,28,31,37,37,47,51,53,58,58,60,63,65,68,70,70,71,77,79,81,88,89,97},{40,-64,-62,74,-10,48,-56,70,-60,54,-6,74,-8,-54,-20,-50,40,-22,-54,-76,-92,-76,36,16,-42,58,-74,-90,-54,-32,-38,-50,74,26,52,38,24,-32,78,68,82,36,64,56,86,-28,-44,48,88},{0,0,1,1,1,1,1},{87,77,76,1,59,15,98,45,62,10,87,59,13,50,58,10}};
    vector<int> param1 {33,11,1,36,18,21,23,36,4,9};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param0[i].size()) == f_gold(&param0[i].front(),param0[i].size()))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}


