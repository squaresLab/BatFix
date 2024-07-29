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
using namespace std;
int f_gold ( int arr [ ], int n, int k ) {
  priority_queue < int, vector < int >, greater < int > > pq;
  for ( int i = 0;
  i < n;
  i ++ ) pq . push ( arr [ i ] );
  int count = 0, ans = 1;
  while ( pq . empty ( ) == false && count < k ) {
    ans = ans * pq . top ( );
    pq . pop ( );
    count ++;
  }
  return ans;
}


int foo;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(vector<int> arr, int n, int k) {
    int pq;
    for (int i = 0; i < n; i++) {
        if(env_var_0 == 0) { arr.at( i ); }
        if(env_var_0 == 1) { arr.at( k ); }
        if(env_var_0 == 2) { arr.at( n ); }
        if(env_var_0 == 3) { arr.at( pq ); }
        if(env_var_0 == 4) { arr.push_back( i ); }
        if(env_var_0 == 5) { arr.push_back( k ); }
        if(env_var_0 == 6) { arr.push_back( n ); }
        if(env_var_0 == 7) { arr.push_back( pq ); }
        if(env_var_0 == 8) { arr.reserve( i ); }
        if(env_var_0 == 9) { arr.reserve( k ); }
        if(env_var_0 == 10) { arr.reserve( n ); }
        if(env_var_0 == 11) { arr.reserve( pq ); }
        if(env_var_0 == 12) { arr.resize( i ); }
        if(env_var_0 == 13) { arr.resize( k ); }
        if(env_var_0 == 14) { arr.resize( n ); }
        if(env_var_0 == 15) { arr.resize( pq ); }
        if(env_var_0 == 16) { arr.swap( arr ); }
        if(env_var_0 == 17) { isupper( i ); }
        if(env_var_0 == 18) { isupper( k ); }
        if(env_var_0 == 19) { isupper( n ); }
        if(env_var_0 == 20) { isupper( pq ); }
        if(env_var_0 == 21) { std::max( i,i ); }
        if(env_var_0 == 22) { std::max( i,k ); }
        if(env_var_0 == 23) { std::max( i,n ); }
        if(env_var_0 == 24) { std::max( i,pq ); }
        if(env_var_0 == 25) { std::max( k,i ); }
        if(env_var_0 == 26) { std::max( k,k ); }
        if(env_var_0 == 27) { std::max( k,n ); }
        if(env_var_0 == 28) { std::max( k,pq ); }
        if(env_var_0 == 29) { std::max( n,i ); }
        if(env_var_0 == 30) { std::max( n,k ); }
        if(env_var_0 == 31) { std::max( n,n ); }
        if(env_var_0 == 32) { std::max( n,pq ); }
        if(env_var_0 == 33) { std::max( pq,i ); }
        if(env_var_0 == 34) { std::max( pq,k ); }
        if(env_var_0 == 35) { std::max( pq,n ); }
        if(env_var_0 == 36) { std::max( pq,pq ); }
        if(env_var_0 == 37) { std::min( i,i ); }
        if(env_var_0 == 38) { std::min( i,k ); }
        if(env_var_0 == 39) { std::min( i,n ); }
        if(env_var_0 == 40) { std::min( i,pq ); }
        if(env_var_0 == 41) { std::min( k,i ); }
        if(env_var_0 == 42) { std::min( k,k ); }
        if(env_var_0 == 43) { std::min( k,n ); }
        if(env_var_0 == 44) { std::min( k,pq ); }
        if(env_var_0 == 45) { std::min( n,i ); }
        if(env_var_0 == 46) { std::min( n,k ); }
        if(env_var_0 == 47) { std::min( n,n ); }
        if(env_var_0 == 48) { std::min( n,pq ); }
        if(env_var_0 == 49) { std::min( pq,i ); }
        if(env_var_0 == 50) { std::min( pq,k ); }
        if(env_var_0 == 51) { std::min( pq,n ); }
        if(env_var_0 == 52) { std::min( pq,pq ); }
        if(env_var_0 == 53) { toupper( i ); }
        if(env_var_0 == 54) { toupper( k ); }
        if(env_var_0 == 55) { toupper( n ); }
        if(env_var_0 == 56) { toupper( pq ); }
        ;
    }
    int count = 0, ans = 1;
    return ans;
}




int f_filled_inner(int   param0 [ ], int param1, int param2)
{
vector < int > vect_param0(param0, param0 + param1);
return  f_filled(vect_param0,param1,param2);
}

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{57,66,91},{-44,86,28,-70,-12,96,-10,74,-50,-52,-6,64,-62,92,-24,90,-26,-4,-92,-24,-84,76,-92,62,-62,-86,-86,-14,50,30,62,2,-88,-78,-48},{0,0,1,1},{99,85,37,27,55,20,76,38,33,78,24,80,74,42,15,16,97,51,71,92,18,63,47,10,6,72,40,21,14,68,98,49,48,64,50,66,44,1,26,55,61,43,9,16,8,42,51,98,1},{-58,-12,16,18,24},{0,0,1,0,0,1,0,1,0,0,0,0,0,1,1,1},{5,10,13,14,19,21,22,25,28,36,39,44,46,53,54,55,55,67,73,75,77,78,80,84,91,94,96},{18,-44,46,64,86,-36,8,-10,-50,-98,-6,-38,-34,14,-34,86,58,-30,76,6,38,98,78,56,-56,-66,-58,62,92,-94},{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},{69,74,28,75,84,52,5,19,80,12,76,14,28,63,30,29,16,74,28,48,97,77,62,19,67,26,14,44,52,86,9,31,41,14,66,27,36,98,48,37,2,12,2}};
    vector<int> param1 {2,29,3,36,2,8,23,23,13,27};
    vector<int> param2 {2,21,3,47,3,15,23,20,17,23};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
