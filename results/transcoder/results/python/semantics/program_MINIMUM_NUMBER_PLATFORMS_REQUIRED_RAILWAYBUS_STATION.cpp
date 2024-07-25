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
int f_gold ( int arr [ ], int dep [ ], int n ) {
  sort ( arr, arr + n );
  sort ( dep, dep + n );
  int plat_needed = 1, result = 1;
  int i = 1, j = 0;
  while ( i < n && j < n ) {
    if ( arr [ i ] <= dep [ j ] ) {
      plat_needed ++;
      i ++;
      if ( plat_needed > result ) result = plat_needed;
    }
    else {
      plat_needed --;
      j ++;
    }
  }
  return result;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int * dep , int n ) {
  sort ( arr , arr + n ) ;
  sort ( dep , dep + n ) ;
  int platNeeded = 1 ;
  int result = 1 ;
  int i = 1 ;
  int j = 0 ;
  while ( ( i < n && j < n ) || ( i > n && j > n ) ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = arr; }
    if(env_var_0 == 1) { _res_key_if_0 = arr+i; }
    if(env_var_0 == 2) { _res_key_if_0 = arr+j; }
    if(env_var_0 == 3) { _res_key_if_0 = arr+n; }
    if(env_var_0 == 4) { _res_key_if_0 = arr+platNeeded; }
    if(env_var_0 == 5) { _res_key_if_0 = arr+result; }
    if(env_var_0 == 6) { _res_key_if_0 = arr[i]; }
    if(env_var_0 == 7) { _res_key_if_0 = arr[j]; }
    if(env_var_0 == 8) { _res_key_if_0 = arr[n]; }
    if(env_var_0 == 9) { _res_key_if_0 = arr[platNeeded]; }
    if(env_var_0 == 10) { _res_key_if_0 = arr[result]; }
    if(env_var_0 == 11) { _res_key_if_0 = dep; }
    if(env_var_0 == 12) { _res_key_if_0 = dep+i; }
    if(env_var_0 == 13) { _res_key_if_0 = dep+j; }
    if(env_var_0 == 14) { _res_key_if_0 = dep+n; }
    if(env_var_0 == 15) { _res_key_if_0 = dep+platNeeded; }
    if(env_var_0 == 16) { _res_key_if_0 = dep+result; }
    if(env_var_0 == 17) { _res_key_if_0 = dep[i]; }
    if(env_var_0 == 18) { _res_key_if_0 = dep[j]; }
    if(env_var_0 == 19) { _res_key_if_0 = dep[n]; }
    if(env_var_0 == 20) { _res_key_if_0 = dep[platNeeded]; }
    if(env_var_0 == 21) { _res_key_if_0 = dep[result]; }
    if(env_var_0 == 22) { _res_key_if_0 = i; }
    if(env_var_0 == 23) { _res_key_if_0 = isupper( arr[i] ); }
    if(env_var_0 == 24) { _res_key_if_0 = isupper( arr[j] ); }
    if(env_var_0 == 25) { _res_key_if_0 = isupper( arr[n] ); }
    if(env_var_0 == 26) { _res_key_if_0 = isupper( arr[platNeeded] ); }
    if(env_var_0 == 27) { _res_key_if_0 = isupper( arr[result] ); }
    if(env_var_0 == 28) { _res_key_if_0 = isupper( dep[i] ); }
    if(env_var_0 == 29) { _res_key_if_0 = isupper( dep[j] ); }
    if(env_var_0 == 30) { _res_key_if_0 = isupper( dep[n] ); }
    if(env_var_0 == 31) { _res_key_if_0 = isupper( dep[platNeeded] ); }
    if(env_var_0 == 32) { _res_key_if_0 = isupper( dep[result] ); }
    if(env_var_0 == 33) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 34) { _res_key_if_0 = isupper( j ); }
    if(env_var_0 == 35) { _res_key_if_0 = isupper( n ); }
    if(env_var_0 == 36) { _res_key_if_0 = isupper( platNeeded ); }
    if(env_var_0 == 37) { _res_key_if_0 = isupper( result ); }
    if(env_var_0 == 38) { _res_key_if_0 = j; }
    if(env_var_0 == 39) { _res_key_if_0 = n; }
    if(env_var_0 == 40) { _res_key_if_0 = platNeeded; }
    if(env_var_0 == 41) { _res_key_if_0 = result; }
    if(env_var_0 == 42) { _res_key_if_0 = toupper( arr[i] ); }
    if(env_var_0 == 43) { _res_key_if_0 = toupper( arr[j] ); }
    if(env_var_0 == 44) { _res_key_if_0 = toupper( arr[n] ); }
    if(env_var_0 == 45) { _res_key_if_0 = toupper( arr[platNeeded] ); }
    if(env_var_0 == 46) { _res_key_if_0 = toupper( arr[result] ); }
    if(env_var_0 == 47) { _res_key_if_0 = toupper( dep[i] ); }
    if(env_var_0 == 48) { _res_key_if_0 = toupper( dep[j] ); }
    if(env_var_0 == 49) { _res_key_if_0 = toupper( dep[n] ); }
    if(env_var_0 == 50) { _res_key_if_0 = toupper( dep[platNeeded] ); }
    if(env_var_0 == 51) { _res_key_if_0 = toupper( dep[result] ); }
    if(env_var_0 == 52) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 53) { _res_key_if_0 = toupper( j ); }
    if(env_var_0 == 54) { _res_key_if_0 = toupper( n ); }
    if(env_var_0 == 55) { _res_key_if_0 = toupper( platNeeded ); }
    if(env_var_0 == 56) { _res_key_if_0 = toupper( result ); }
    if ( _res_key_if_0 ) {
      platNeeded ++ ;
      i ++ ;
      if ( ( platNeeded > result ) && ( platNeeded < result ) ) {
        result = platNeeded ;
      }
    }
    else {
      platNeeded -- ;
      j ++ ;
    }
  }
  return result ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{8,24,28,64,75,86,93,95},{2,-30,-8,-78,58,-42,-94,84,-58,14,78,34,30,6,-18,-92,0,94,-54,58,0,-86,66,86,8,-26,50,16,-30,-68,98,-28,-4,-6},{0,0,0,0,0,0,1},{51,5,48,61,71,2,4,35,50,76,59,64,81,5,21,95},{-64,-52,44,52,90},{0,0,1,0,1,0,1,1,0,1,1,1,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,1,1},{2,15,25,55,72,96,98},{-60,30,-58,52,40,74,74,76,-72,-48,8,-56,-24,-40,-98,-76,-56,-20,30,-30,-34,4,-34},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{37,84,20,34,56,1,87,72}};
    vector<vector<int>> param1 {{19,30,41,51,62,68,85,96},{40,22,-24,80,-76,-4,-8,-34,96,-98,16,28,14,52,10,-10,-62,64,-48,10,-64,-90,-52,46,34,50,50,-84,68,-12,-44,28,-22,78},{0,0,0,0,0,1,1},{67,84,86,43,50,90,49,8,40,67,5,51,40,28,31,47},{-62,-16,22,26,58},{0,0,1,1,1,0,1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0},{3,6,11,19,26,37,39},{-96,-40,-76,52,-20,-28,-64,-72,36,56,52,34,14,8,-50,6,-82,-98,-8,18,-76,-66,-22},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{68,62,84,54,15,29,70,96}};
    vector<int> param2 {6,18,6,8,3,17,6,20,22,6};
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

