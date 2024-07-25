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
  sort ( arr, arr + n, greater < int > ( ) );
  int dimension [ 2 ] = {
    0, 0 };
    for ( int i = 0, j = 0;
    i < n - 1 && j < 2;
    i ++ ) if ( arr [ i ] == arr [ i + 1 ] ) dimension [ j ++ ] = arr [ i ++ ];
    return ( dimension [ 0 ] * dimension [ 1 ] );
  }
  

int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  int dimension [ 2 ] = {
    0 , 0 }
    ;
    int i = 0 ;
    int j = 0 ;
    while ( ( i < n - 1 && j < 2 ) || ( i == 0 && j == 0 ) ) {
      int _res_key_if_0;
      if(env_var_0 == 0) { _res_key_if_0 = arr; }
      if(env_var_0 == 1) { _res_key_if_0 = arr+i; }
      if(env_var_0 == 2) { _res_key_if_0 = arr+j; }
      if(env_var_0 == 3) { _res_key_if_0 = arr+n; }
      if(env_var_0 == 4) { _res_key_if_0 = arr[i]; }
      if(env_var_0 == 5) { _res_key_if_0 = arr[j]; }
      if(env_var_0 == 6) { _res_key_if_0 = arr[n]; }
      if(env_var_0 == 7) { _res_key_if_0 = dimension; }
      if(env_var_0 == 8) { _res_key_if_0 = dimension[i]; }
      if(env_var_0 == 9) { _res_key_if_0 = i; }
      if(env_var_0 == 10) { _res_key_if_0 = isupper( arr[i] ); }
      if(env_var_0 == 11) { _res_key_if_0 = isupper( arr[j] ); }
      if(env_var_0 == 12) { _res_key_if_0 = isupper( arr[n] ); }
      if(env_var_0 == 13) { _res_key_if_0 = isupper( dimension ); }
      if(env_var_0 == 14) { _res_key_if_0 = isupper( dimension[i] ); }
      if(env_var_0 == 15) { _res_key_if_0 = isupper( i ); }
      if(env_var_0 == 16) { _res_key_if_0 = isupper( j ); }
      if(env_var_0 == 17) { _res_key_if_0 = isupper( n ); }
      if(env_var_0 == 18) { _res_key_if_0 = j; }
      if(env_var_0 == 19) { _res_key_if_0 = n; }
      if(env_var_0 == 20) { _res_key_if_0 = toupper( arr[i] ); }
      if(env_var_0 == 21) { _res_key_if_0 = toupper( arr[j] ); }
      if(env_var_0 == 22) { _res_key_if_0 = toupper( arr[n] ); }
      if(env_var_0 == 23) { _res_key_if_0 = toupper( dimension ); }
      if(env_var_0 == 24) { _res_key_if_0 = toupper( dimension[i] ); }
      if(env_var_0 == 25) { _res_key_if_0 = toupper( i ); }
      if(env_var_0 == 26) { _res_key_if_0 = toupper( j ); }
      if(env_var_0 == 27) { _res_key_if_0 = toupper( n ); }
      if ( _res_key_if_0 ) {
        dimension [ j ] = arr [ i ] ;
        j ++ ;
        i ++ ;
      }
      i ++ ;
    }
    return ( dimension [ 0 ] * dimension [ 1 ] ) ;
  }
  

int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,5,6,8,9,11,12,14,16,17,24,25,36,40,44,47,49,51,51,52,67,68,72,74,81,82,83,84,92,95,95,96,99},{-54,-82,-92,-32},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},{16,62,17,15,26,45,2,17,65,94,96,30,68,44,96,60,99},{-88,-82,-78,-52,-50,-42,-34,-28,16,46,54,56,66,66,74,82,82,94,98},{0,1,0,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,1,1,1,0},{1,6,8,8,8,10,13,14,14,23,24,25,27,28,29,30,33,38,43,44,49,52,56,58,62,63,64,65,65,68,75,85,85,87,93,96,97},{-90,-56,16,32,78,-20,76,-90,-68,-70,54,50,60,-64,78,-6,-92,6,16,70},{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{55,51,90,10,14,5,57,22,75,29,7,18,31,43,84,35,71,94,4,51,94,30,94,53,82}};
    vector<int> param1 {27,2,15,8,15,18,20,19,30,22};
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

