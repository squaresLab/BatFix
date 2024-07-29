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
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) mp [ arr [ i ] ] ++;
  int ans = 0;
  for ( auto it = mp . begin ( );
  it != mp . end ( );
  it ++ ) {
    int count = it -> second;
    ans += ( count * ( count - 1 ) ) / 2;
  }
  return ans;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n ) {
  unordered_map < int , int > hm ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = hm.at( arr[i] ); }
    if(env_var_0 == 1) { _res_key_if_0 = hm.at( arr[n] ); }
    if(env_var_0 == 2) { _res_key_if_0 = hm.at( i ); }
    if(env_var_0 == 3) { _res_key_if_0 = hm.at( n ); }
    if(env_var_0 == 4) { _res_key_if_0 = hm.begin( arr[i] ); }
    if(env_var_0 == 5) { _res_key_if_0 = hm.begin( arr[n] ); }
    if(env_var_0 == 6) { _res_key_if_0 = hm.begin( i ); }
    if(env_var_0 == 7) { _res_key_if_0 = hm.begin( n ); }
    if(env_var_0 == 8) { _res_key_if_0 = hm.bucket( arr[i] ); }
    if(env_var_0 == 9) { _res_key_if_0 = hm.bucket( arr[n] ); }
    if(env_var_0 == 10) { _res_key_if_0 = hm.bucket( i ); }
    if(env_var_0 == 11) { _res_key_if_0 = hm.bucket( n ); }
    if(env_var_0 == 12) { _res_key_if_0 = hm.bucket_size( arr[i] ); }
    if(env_var_0 == 13) { _res_key_if_0 = hm.bucket_size( arr[n] ); }
    if(env_var_0 == 14) { _res_key_if_0 = hm.bucket_size( i ); }
    if(env_var_0 == 15) { _res_key_if_0 = hm.bucket_size( n ); }
    if(env_var_0 == 16) { _res_key_if_0 = hm.cbegin( arr[i] ); }
    if(env_var_0 == 17) { _res_key_if_0 = hm.cbegin( arr[n] ); }
    if(env_var_0 == 18) { _res_key_if_0 = hm.cbegin( i ); }
    if(env_var_0 == 19) { _res_key_if_0 = hm.cbegin( n ); }
    if(env_var_0 == 20) { _res_key_if_0 = hm.cend( arr[i] ); }
    if(env_var_0 == 21) { _res_key_if_0 = hm.cend( arr[n] ); }
    if(env_var_0 == 22) { _res_key_if_0 = hm.cend( i ); }
    if(env_var_0 == 23) { _res_key_if_0 = hm.cend( n ); }
    if(env_var_0 == 24) { _res_key_if_0 = hm.count( arr[i] ); }
    if(env_var_0 == 25) { _res_key_if_0 = hm.count( arr[n] ); }
    if(env_var_0 == 26) { _res_key_if_0 = hm.count( i ); }
    if(env_var_0 == 27) { _res_key_if_0 = hm.count( n ); }
    if(env_var_0 == 28) { _res_key_if_0 = hm.end( arr[i] ); }
    if(env_var_0 == 29) { _res_key_if_0 = hm.end( arr[n] ); }
    if(env_var_0 == 30) { _res_key_if_0 = hm.end( i ); }
    if(env_var_0 == 31) { _res_key_if_0 = hm.end( n ); }
    if(env_var_0 == 32) { _res_key_if_0 = hm.equal_range( arr[i] ); }
    if(env_var_0 == 33) { _res_key_if_0 = hm.equal_range( arr[n] ); }
    if(env_var_0 == 34) { _res_key_if_0 = hm.equal_range( i ); }
    if(env_var_0 == 35) { _res_key_if_0 = hm.equal_range( n ); }
    if(env_var_0 == 36) { _res_key_if_0 = hm.erase( arr[i] ); }
    if(env_var_0 == 37) { _res_key_if_0 = hm.erase( arr[n] ); }
    if(env_var_0 == 38) { _res_key_if_0 = hm.erase( i ); }
    if(env_var_0 == 39) { _res_key_if_0 = hm.erase( n ); }
    if(env_var_0 == 40) { _res_key_if_0 = hm.find( arr[i] ); }
    if(env_var_0 == 41) { _res_key_if_0 = hm.find( arr[n] ); }
    if(env_var_0 == 42) { _res_key_if_0 = hm.find( i ); }
    if(env_var_0 == 43) { _res_key_if_0 = hm.find( n ); }
    if(env_var_0 == 44) { _res_key_if_0 = hm.max_load_factor( arr[i] ); }
    if(env_var_0 == 45) { _res_key_if_0 = hm.max_load_factor( arr[n] ); }
    if(env_var_0 == 46) { _res_key_if_0 = hm.max_load_factor( i ); }
    if(env_var_0 == 47) { _res_key_if_0 = hm.max_load_factor( n ); }
    if(env_var_0 == 48) { _res_key_if_0 = hm.rehash( arr[i] ); }
    if(env_var_0 == 49) { _res_key_if_0 = hm.rehash( arr[n] ); }
    if(env_var_0 == 50) { _res_key_if_0 = hm.rehash( i ); }
    if(env_var_0 == 51) { _res_key_if_0 = hm.rehash( n ); }
    if(env_var_0 == 52) { _res_key_if_0 = hm.reserve( arr[i] ); }
    if(env_var_0 == 53) { _res_key_if_0 = hm.reserve( arr[n] ); }
    if(env_var_0 == 54) { _res_key_if_0 = hm.reserve( i ); }
    if(env_var_0 == 55) { _res_key_if_0 = hm.reserve( n ); }
    if(env_var_0 == 56) { _res_key_if_0 = hm.swap( hm ); }
    if(env_var_0 == 57) { _res_key_if_0 = isupper( arr[i] ); }
    if(env_var_0 == 58) { _res_key_if_0 = isupper( arr[n] ); }
    if(env_var_0 == 59) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 60) { _res_key_if_0 = isupper( n ); }
    if(env_var_0 == 61) { _res_key_if_0 = std::max( arr[i],arr[i] ); }
    if(env_var_0 == 62) { _res_key_if_0 = std::max( arr[i],arr[n] ); }
    if(env_var_0 == 63) { _res_key_if_0 = std::max( arr[i],i ); }
    if(env_var_0 == 64) { _res_key_if_0 = std::max( arr[i],n ); }
    if(env_var_0 == 65) { _res_key_if_0 = std::max( arr[n],arr[i] ); }
    if(env_var_0 == 66) { _res_key_if_0 = std::max( arr[n],arr[n] ); }
    if(env_var_0 == 67) { _res_key_if_0 = std::max( arr[n],i ); }
    if(env_var_0 == 68) { _res_key_if_0 = std::max( arr[n],n ); }
    if(env_var_0 == 69) { _res_key_if_0 = std::max( i,arr[i] ); }
    if(env_var_0 == 70) { _res_key_if_0 = std::max( i,arr[n] ); }
    if(env_var_0 == 71) { _res_key_if_0 = std::max( i,i ); }
    if(env_var_0 == 72) { _res_key_if_0 = std::max( i,n ); }
    if(env_var_0 == 73) { _res_key_if_0 = std::max( n,arr[i] ); }
    if(env_var_0 == 74) { _res_key_if_0 = std::max( n,arr[n] ); }
    if(env_var_0 == 75) { _res_key_if_0 = std::max( n,i ); }
    if(env_var_0 == 76) { _res_key_if_0 = std::max( n,n ); }
    if(env_var_0 == 77) { _res_key_if_0 = std::min( arr[i],arr[i] ); }
    if(env_var_0 == 78) { _res_key_if_0 = std::min( arr[i],arr[n] ); }
    if(env_var_0 == 79) { _res_key_if_0 = std::min( arr[i],i ); }
    if(env_var_0 == 80) { _res_key_if_0 = std::min( arr[i],n ); }
    if(env_var_0 == 81) { _res_key_if_0 = std::min( arr[n],arr[i] ); }
    if(env_var_0 == 82) { _res_key_if_0 = std::min( arr[n],arr[n] ); }
    if(env_var_0 == 83) { _res_key_if_0 = std::min( arr[n],i ); }
    if(env_var_0 == 84) { _res_key_if_0 = std::min( arr[n],n ); }
    if(env_var_0 == 85) { _res_key_if_0 = std::min( i,arr[i] ); }
    if(env_var_0 == 86) { _res_key_if_0 = std::min( i,arr[n] ); }
    if(env_var_0 == 87) { _res_key_if_0 = std::min( i,i ); }
    if(env_var_0 == 88) { _res_key_if_0 = std::min( i,n ); }
    if(env_var_0 == 89) { _res_key_if_0 = std::min( n,arr[i] ); }
    if(env_var_0 == 90) { _res_key_if_0 = std::min( n,arr[n] ); }
    if(env_var_0 == 91) { _res_key_if_0 = std::min( n,i ); }
    if(env_var_0 == 92) { _res_key_if_0 = std::min( n,n ); }
    if(env_var_0 == 93) { _res_key_if_0 = toupper( arr[i] ); }
    if(env_var_0 == 94) { _res_key_if_0 = toupper( arr[n] ); }
    if(env_var_0 == 95) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 96) { _res_key_if_0 = toupper( n ); }
    if ( _res_key_if_0 ) {
      hm [ arr [ i ] ] = hm [ arr [ i ] ] + 1 ;
    }
    else {
      hm [ arr [ i ] ] = 1 ;
    }
  }
  int ans = 0 ;
  for ( unordered_map < int , int > :: iterator it = hm . begin ( ) ;
  it != hm . end ( ) ;
  it ++ ) {
    int count = it -> second ;
    ans += ( count * ( count - 1 ) ) / 2 ;
  }
  return ans ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{5,11,18,22,40,46,50,51,53,55,64,67,73,78,86},{14,-98,98,58,-82,90,-80,-56,-30,-36,-56,-30,-58,68,72,-76,38,-90,-72,4,-32,32,-28,2,12,-72,54,2,0,-74,8,12,46,72,-84,-66,70,18,26,72,-26,44,-8,20,-32,-56,28},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{93,23,62,64,31,78,99},{-94,-94,-92,-86,-84,-76,-76,-68,-66,-56,-56,-54,-50,-46,-38,-34,-34,-30,-26,-18,-16,2,8,42,52,54,56,64,68,82,82,82,94,96,98},{0},{3,18,18,20,21,23,24,27,35,36,38,40,46,50,50,51,52,53,59,61,63,63,65,66,68,68,70,71,74,75,96,98},{-68,40,16,50,36,42,-20,-46,-92,4,-18,-12,48,0,-46,64,-74,-50,42,44,-56,28,-10,78,62,70,-60,12,-44,-78},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{31,5}};
    vector<int> param1 {15,24,13,4,19,0,19,23,30,1};
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
