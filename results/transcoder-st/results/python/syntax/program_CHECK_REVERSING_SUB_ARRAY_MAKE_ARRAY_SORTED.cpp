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
bool f_gold ( int arr [ ], int n ) {
  int temp [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) temp [ i ] = arr [ i ];
  sort ( temp, temp + n );
  int front;
  for ( front = 0;
  front < n;
  front ++ ) if ( temp [ front ] != arr [ front ] ) break;
  int back;
  for ( back = n - 1;
  back >= 0;
  back -- ) if ( temp [ back ] != arr [ back ] ) break;
  if ( front >= back ) return true;
  do {
    front ++;
    if ( arr [ front - 1 ] < arr [ front ] ) return false;
  }
  while ( front != back );
  return true;
}


int foo;
bool front;
bool back;
int env_var_3 = atoi(getenv("env_var_3"));
int env_var_2 = atoi(getenv("env_var_2"));
int env_var_1 = atoi(getenv("env_var_1"));
int env_var_0 = atoi(getenv("env_var_0"));
bool f_filled ( int arr [ ] , int n ) {
  int temp [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) temp [ i ] = arr [ i ] ;
  sort ( temp , temp + n ) ;
  for ( int front = 0 ;
  front < n ;
  front ++ ) if ( temp [ front ] != arr [ front ] ) break ;
  for ( int back = n - 1 ;
  back >= 0 ;
  back -- ) if ( temp [ back ] != arr [ back ] ) break ;
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = arr >= arr; }
  if(env_var_0 == 1) { _res_key_if_0 = arr >= arr+n; }
  if(env_var_0 == 2) { _res_key_if_0 = arr >= arr[n]; }
  if(env_var_0 == 3) { _res_key_if_0 = arr >= n; }
  if(env_var_0 == 4) { _res_key_if_0 = arr >= temp; }
  if(env_var_0 == 5) { _res_key_if_0 = arr >= temp[n]; }
  if(env_var_0 == 6) { _res_key_if_0 = arr+n >= arr; }
  if(env_var_0 == 7) { _res_key_if_0 = arr+n >= arr+n; }
  if(env_var_0 == 8) { _res_key_if_0 = arr+n >= arr[n]; }
  if(env_var_0 == 9) { _res_key_if_0 = arr+n >= n; }
  if(env_var_0 == 10) { _res_key_if_0 = arr+n >= temp; }
  if(env_var_0 == 11) { _res_key_if_0 = arr+n >= temp[n]; }
  if(env_var_0 == 12) { _res_key_if_0 = arr[n] >= arr; }
  if(env_var_0 == 13) { _res_key_if_0 = arr[n] >= arr+n; }
  if(env_var_0 == 14) { _res_key_if_0 = arr[n] >= arr[n]; }
  if(env_var_0 == 15) { _res_key_if_0 = arr[n] >= n; }
  if(env_var_0 == 16) { _res_key_if_0 = arr[n] >= temp; }
  if(env_var_0 == 17) { _res_key_if_0 = arr[n] >= temp[n]; }
  if(env_var_0 == 18) { _res_key_if_0 = n >= arr; }
  if(env_var_0 == 19) { _res_key_if_0 = n >= arr+n; }
  if(env_var_0 == 20) { _res_key_if_0 = n >= arr[n]; }
  if(env_var_0 == 21) { _res_key_if_0 = n >= n; }
  if(env_var_0 == 22) { _res_key_if_0 = n >= temp; }
  if(env_var_0 == 23) { _res_key_if_0 = n >= temp[n]; }
  if(env_var_0 == 24) { _res_key_if_0 = temp >= arr; }
  if(env_var_0 == 25) { _res_key_if_0 = temp >= arr+n; }
  if(env_var_0 == 26) { _res_key_if_0 = temp >= arr[n]; }
  if(env_var_0 == 27) { _res_key_if_0 = temp >= n; }
  if(env_var_0 == 28) { _res_key_if_0 = temp >= temp; }
  if(env_var_0 == 29) { _res_key_if_0 = temp >= temp[n]; }
  if(env_var_0 == 30) { _res_key_if_0 = temp[n] >= arr; }
  if(env_var_0 == 31) { _res_key_if_0 = temp[n] >= arr+n; }
  if(env_var_0 == 32) { _res_key_if_0 = temp[n] >= arr[n]; }
  if(env_var_0 == 33) { _res_key_if_0 = temp[n] >= n; }
  if(env_var_0 == 34) { _res_key_if_0 = temp[n] >= temp; }
  if(env_var_0 == 35) { _res_key_if_0 = temp[n] >= temp[n]; }
  if ( _res_key_if_0 ) return true ;
  while ( true )  {
  if (env_var_1 == 0 && !(arr != arr)) break;
  if (env_var_1 == 1 && !(arr != arr+n)) break;
  if (env_var_1 == 2 && !(arr != arr[n])) break;
  if (env_var_1 == 3 && !(arr != n)) break;
  if (env_var_1 == 4 && !(arr != temp)) break;
  if (env_var_1 == 5 && !(arr != temp[n])) break;
  if (env_var_1 == 6 && !(arr+n != arr)) break;
  if (env_var_1 == 7 && !(arr+n != arr+n)) break;
  if (env_var_1 == 8 && !(arr+n != arr[n])) break;
  if (env_var_1 == 9 && !(arr+n != n)) break;
  if (env_var_1 == 10 && !(arr+n != temp)) break;
  if (env_var_1 == 11 && !(arr+n != temp[n])) break;
  if (env_var_1 == 12 && !(arr[n] != arr)) break;
  if (env_var_1 == 13 && !(arr[n] != arr+n)) break;
  if (env_var_1 == 14 && !(arr[n] != arr[n])) break;
  if (env_var_1 == 15 && !(arr[n] != n)) break;
  if (env_var_1 == 16 && !(arr[n] != temp)) break;
  if (env_var_1 == 17 && !(arr[n] != temp[n])) break;
  if (env_var_1 == 18 && !(n != arr)) break;
  if (env_var_1 == 19 && !(n != arr+n)) break;
  if (env_var_1 == 20 && !(n != arr[n])) break;
  if (env_var_1 == 21 && !(n != n)) break;
  if (env_var_1 == 22 && !(n != temp)) break;
  if (env_var_1 == 23 && !(n != temp[n])) break;
  if (env_var_1 == 24 && !(temp != arr)) break;
  if (env_var_1 == 25 && !(temp != arr+n)) break;
  if (env_var_1 == 26 && !(temp != arr[n])) break;
  if (env_var_1 == 27 && !(temp != n)) break;
  if (env_var_1 == 28 && !(temp != temp)) break;
  if (env_var_1 == 29 && !(temp != temp[n])) break;
  if (env_var_1 == 30 && !(temp[n] != arr)) break;
  if (env_var_1 == 31 && !(temp[n] != arr+n)) break;
  if (env_var_1 == 32 && !(temp[n] != arr[n])) break;
  if (env_var_1 == 33 && !(temp[n] != n)) break;
  if (env_var_1 == 34 && !(temp[n] != temp)) break;
  if (env_var_1 == 35 && !(temp[n] != temp[n])) break;
  {
  if(env_var_2 == 0) { arr += 1; }
    if(env_var_2 == 1) { arr+n += 1; }
    if(env_var_2 == 2) { arr[n] += 1; }
    if(env_var_2 == 3) { n += 1; }
    if(env_var_2 == 4) { temp += 1; }
    if(env_var_2 == 5) { temp[n] += 1; }
       ;
    int _res_key_if_1;
    if(env_var_3 == 0) { _res_key_if_1 = arr; }
    if(env_var_3 == 1) { _res_key_if_1 = arr+n; }
    if(env_var_3 == 2) { _res_key_if_1 = arr[n]; }
    if(env_var_3 == 3) { _res_key_if_1 = isupper( arr[n] ); }
    if(env_var_3 == 4) { _res_key_if_1 = isupper( n ); }
    if(env_var_3 == 5) { _res_key_if_1 = isupper( temp ); }
    if(env_var_3 == 6) { _res_key_if_1 = isupper( temp[n] ); }
    if(env_var_3 == 7) { _res_key_if_1 = n; }
    if(env_var_3 == 8) { _res_key_if_1 = temp; }
    if(env_var_3 == 9) { _res_key_if_1 = temp[n]; }
    if(env_var_3 == 10) { _res_key_if_1 = toupper( arr[n] ); }
    if(env_var_3 == 11) { _res_key_if_1 = toupper( n ); }
    if(env_var_3 == 12) { _res_key_if_1 = toupper( temp ); }
    if(env_var_3 == 13) { _res_key_if_1 = toupper( temp[n] ); }
    if ( _res_key_if_1 ) return false ;
  }}
  return true ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{5,9,9,16,17,22,32,40,45,53,57,58,66,69,76,80,91,93,94},{52,-76,-18,86,56},{0,0,1},{66,44,98,44},{-96,-62,-56,-46,-44,-38,-38,-26,-22,-22,-16,-12,-6,12,22,34,36,44,44,68,70,74,94},{1,1,0,0,1,1,1,1,0,1,1,1,0,0,1,1,1,0,0,1,0,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0,1,1},{5,9,11,12,13,16,19,23,23,23,25,27,27,28,31,36,40,44,48,59,60,63,66,66,67,67,69,69,70,71,73,76,76,79,86,86,92,92,93,93},{6,82,-88,-46,-60,70,-54,-96,-94,46,-52,48,-26,-50,-92,-92,6,-6,42,0,-66,-96,66,6,-68,-30,-54,76,60,30,72,-66,-12,-74},{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},{62,54,36,35,36,91,45,87,74,49,15,15,73,77,63,70,74,65,11,18}};
    vector<int> param1 {10,3,1,2,14,27,34,28,13,16};
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
