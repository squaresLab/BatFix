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
int f_gold ( int arr1 [ ], int arr2 [ ], int m, int n, int k ) {
  int sorted1 [ m + n ];
  int i = 0, j = 0, d = 0;
  while ( i < m && j < n ) {
    if ( arr1 [ i ] < arr2 [ j ] ) sorted1 [ d ++ ] = arr1 [ i ++ ];
    else sorted1 [ d ++ ] = arr2 [ j ++ ];
  }
  while ( i < m ) sorted1 [ d ++ ] = arr1 [ i ++ ];
  while ( j < n ) sorted1 [ d ++ ] = arr2 [ j ++ ];
  return sorted1 [ k - 1 ];
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr1 [ ] , int arr2 [ ] , int m , int n , int k ) {
  int sorted1 [ m + n ] ;
  memset( sorted1,  0, sizeof( sorted1 ));
  int i = 0 ;
  int j = 0 ;
  int d = 0 ;
  while ( ( i < m && j < n ) || ( i > m && j > n ) ) {
    int _res_key_if_0;
    if(env_var_0 == 0) { _res_key_if_0 = arr1; }
    if(env_var_0 == 1) { _res_key_if_0 = arr1+d; }
    if(env_var_0 == 2) { _res_key_if_0 = arr1+i; }
    if(env_var_0 == 3) { _res_key_if_0 = arr1+j; }
    if(env_var_0 == 4) { _res_key_if_0 = arr1+k; }
    if(env_var_0 == 5) { _res_key_if_0 = arr1+m; }
    if(env_var_0 == 6) { _res_key_if_0 = arr1+n; }
    if(env_var_0 == 7) { _res_key_if_0 = arr1[d]; }
    if(env_var_0 == 8) { _res_key_if_0 = arr1[i]; }
    if(env_var_0 == 9) { _res_key_if_0 = arr1[j]; }
    if(env_var_0 == 10) { _res_key_if_0 = arr1[k]; }
    if(env_var_0 == 11) { _res_key_if_0 = arr1[m]; }
    if(env_var_0 == 12) { _res_key_if_0 = arr1[n]; }
    if(env_var_0 == 13) { _res_key_if_0 = arr2; }
    if(env_var_0 == 14) { _res_key_if_0 = arr2+d; }
    if(env_var_0 == 15) { _res_key_if_0 = arr2+i; }
    if(env_var_0 == 16) { _res_key_if_0 = arr2+j; }
    if(env_var_0 == 17) { _res_key_if_0 = arr2+k; }
    if(env_var_0 == 18) { _res_key_if_0 = arr2+m; }
    if(env_var_0 == 19) { _res_key_if_0 = arr2+n; }
    if(env_var_0 == 20) { _res_key_if_0 = arr2[d]; }
    if(env_var_0 == 21) { _res_key_if_0 = arr2[i]; }
    if(env_var_0 == 22) { _res_key_if_0 = arr2[j]; }
    if(env_var_0 == 23) { _res_key_if_0 = arr2[k]; }
    if(env_var_0 == 24) { _res_key_if_0 = arr2[m]; }
    if(env_var_0 == 25) { _res_key_if_0 = arr2[n]; }
    if(env_var_0 == 26) { _res_key_if_0 = d; }
    if(env_var_0 == 27) { _res_key_if_0 = i; }
    if(env_var_0 == 28) { _res_key_if_0 = isupper( arr1[d] ); }
    if(env_var_0 == 29) { _res_key_if_0 = isupper( arr1[i] ); }
    if(env_var_0 == 30) { _res_key_if_0 = isupper( arr1[j] ); }
    if(env_var_0 == 31) { _res_key_if_0 = isupper( arr1[k] ); }
    if(env_var_0 == 32) { _res_key_if_0 = isupper( arr1[m] ); }
    if(env_var_0 == 33) { _res_key_if_0 = isupper( arr1[n] ); }
    if(env_var_0 == 34) { _res_key_if_0 = isupper( arr2[d] ); }
    if(env_var_0 == 35) { _res_key_if_0 = isupper( arr2[i] ); }
    if(env_var_0 == 36) { _res_key_if_0 = isupper( arr2[j] ); }
    if(env_var_0 == 37) { _res_key_if_0 = isupper( arr2[k] ); }
    if(env_var_0 == 38) { _res_key_if_0 = isupper( arr2[m] ); }
    if(env_var_0 == 39) { _res_key_if_0 = isupper( arr2[n] ); }
    if(env_var_0 == 40) { _res_key_if_0 = isupper( d ); }
    if(env_var_0 == 41) { _res_key_if_0 = isupper( i ); }
    if(env_var_0 == 42) { _res_key_if_0 = isupper( j ); }
    if(env_var_0 == 43) { _res_key_if_0 = isupper( k ); }
    if(env_var_0 == 44) { _res_key_if_0 = isupper( m ); }
    if(env_var_0 == 45) { _res_key_if_0 = isupper( n ); }
    if(env_var_0 == 46) { _res_key_if_0 = isupper( sorted1 ); }
    if(env_var_0 == 47) { _res_key_if_0 = isupper( sorted1[d] ); }
    if(env_var_0 == 48) { _res_key_if_0 = j; }
    if(env_var_0 == 49) { _res_key_if_0 = k; }
    if(env_var_0 == 50) { _res_key_if_0 = m; }
    if(env_var_0 == 51) { _res_key_if_0 = n; }
    if(env_var_0 == 52) { _res_key_if_0 = sorted1; }
    if(env_var_0 == 53) { _res_key_if_0 = sorted1[d]; }
    if(env_var_0 == 54) { _res_key_if_0 = toupper( arr1[d] ); }
    if(env_var_0 == 55) { _res_key_if_0 = toupper( arr1[i] ); }
    if(env_var_0 == 56) { _res_key_if_0 = toupper( arr1[j] ); }
    if(env_var_0 == 57) { _res_key_if_0 = toupper( arr1[k] ); }
    if(env_var_0 == 58) { _res_key_if_0 = toupper( arr1[m] ); }
    if(env_var_0 == 59) { _res_key_if_0 = toupper( arr1[n] ); }
    if(env_var_0 == 60) { _res_key_if_0 = toupper( arr2[d] ); }
    if(env_var_0 == 61) { _res_key_if_0 = toupper( arr2[i] ); }
    if(env_var_0 == 62) { _res_key_if_0 = toupper( arr2[j] ); }
    if(env_var_0 == 63) { _res_key_if_0 = toupper( arr2[k] ); }
    if(env_var_0 == 64) { _res_key_if_0 = toupper( arr2[m] ); }
    if(env_var_0 == 65) { _res_key_if_0 = toupper( arr2[n] ); }
    if(env_var_0 == 66) { _res_key_if_0 = toupper( d ); }
    if(env_var_0 == 67) { _res_key_if_0 = toupper( i ); }
    if(env_var_0 == 68) { _res_key_if_0 = toupper( j ); }
    if(env_var_0 == 69) { _res_key_if_0 = toupper( k ); }
    if(env_var_0 == 70) { _res_key_if_0 = toupper( m ); }
    if(env_var_0 == 71) { _res_key_if_0 = toupper( n ); }
    if(env_var_0 == 72) { _res_key_if_0 = toupper( sorted1 ); }
    if(env_var_0 == 73) { _res_key_if_0 = toupper( sorted1[d] ); }
    if ( _res_key_if_0 ) {
      sorted1 [ d ] = arr1 [ i ] ;
      i ++ ;
    }
    else {
      sorted1 [ d ] = arr2 [ j ] ;
      j ++ ;
    }
    d ++ ;
  }
  while ( ( i < m ) || ( i < n ) ) {
    sorted1 [ d ] = arr1 [ i ] ;
    d ++ ;
    i ++ ;
  }
  while ( ( j < n ) || ( j < m ) ) {
    sorted1 [ d ] = arr2 [ j ] ;
    d ++ ;
    j ++ ;
  }
  return sorted1 [ k - 1 ] ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{2,2,4,4,9,10,14,16,16,19,20,21,25,26,29,36,36,37,38,44,44,49,53,54,56,61,62,64,72,72,73,77,80,84,84,87,93,94},{2,4,-90,62,22,-94,-74,-22,44,-94,20,-40,20,0,32,24,78,8,4,98,-74,-60},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{85,44,62,2,71,88,60,78,32,46,17,47,65,78,65,94},{-94,-84,-82,-70,-70,-60,-54,-54,-52,-52,-46,-40,-40,-36,-34,-32,-30,-22,-18,-16,-10,-4,8,12,18,22,32,38,38,44,50,56,64,82,84,86,88},{0,0,0,1,1,0,0,0,0,1,1,1,0,0,1,1,1,0,1,1,1,1,0,1,1,1},{53,96,99},{98,86,36,-68,86,22,52,-20,-2,74,-72,86,80,-78,14,62,10,94,-66,78,28,92,-8,46,-24,66},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{6,21,86,58,48,27,18,73,16,79,51,33,63,26,37,88,48,58,44,32,58,23,31}};
    vector<vector<int>> param1 {{6,8,10,10,12,14,24,31,33,33,35,35,35,41,46,47,49,51,52,56,57,59,62,65,72,72,73,73,79,80,82,83,83,84,87,87,93,99},{58,74,-46,38,-58,-78,-32,-84,84,-54,84,-34,-26,88,74,48,26,-92,68,-86,74,88},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{18,3,15,9,61,73,3,62,87,1,54,97,61,37,23,65},{-92,-68,-64,-62,-54,-52,-52,-34,-24,-22,-20,-12,-12,-10,6,10,14,22,22,24,24,30,30,36,36,48,50,56,58,64,68,80,84,88,88,92,94},{1,0,0,0,1,0,0,0,1,1,0,1,0,1,1,1,0,1,0,1,1,0,0,0,1,0},{30,55,56},{72,-72,-90,24,-22,60,78,-68,98,26,-30,-20,44,-96,8,90,0,98,-24,-68,-32,-62,0,-60,26,-98},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{87,77,44,15,70,89,36,79,82,3,18,76,37,79,85,97,19,53,17,74,87,58,49}};
    vector<int> param2 {27,18,30,11,19,24,1,22,42,14};
    vector<int> param3 {21,11,31,11,26,17,1,19,40,22};
    vector<int> param4 {23,12,42,13,28,23,1,24,42,19};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),&param1[i].front(),param2[i],param3[i],param4[i]) == f_gold(&param0[i].front(),&param1[i].front(),param2[i],param3[i],param4[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

