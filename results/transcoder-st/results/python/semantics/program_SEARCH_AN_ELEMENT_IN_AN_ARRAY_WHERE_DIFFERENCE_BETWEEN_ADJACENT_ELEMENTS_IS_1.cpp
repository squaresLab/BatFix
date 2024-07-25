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
int f_gold ( int arr [ ], int n, int x ) {
  int i = 0;
  while ( i < n ) {
    if ( arr [ i ] == x ) return i;
    i = i + abs ( arr [ i ] - x );
  }
  cout << "number is not present!";
  return - 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n , int x ) {
  int i = 0 ;
  while ( true )  {
  if (env_var_0 == 0 && !(arr < arr)) break;
  if (env_var_0 == 1 && !(arr < arr+i)) break;
  if (env_var_0 == 2 && !(arr < arr+n)) break;
  if (env_var_0 == 3 && !(arr < arr+x)) break;
  if (env_var_0 == 4 && !(arr < arr[i])) break;
  if (env_var_0 == 5 && !(arr < arr[n])) break;
  if (env_var_0 == 6 && !(arr < arr[x])) break;
  if (env_var_0 == 7 && !(arr < i)) break;
  if (env_var_0 == 8 && !(arr < n)) break;
  if (env_var_0 == 9 && !(arr < x)) break;
  if (env_var_0 == 10 && !(arr+i < arr)) break;
  if (env_var_0 == 11 && !(arr+i < arr+i)) break;
  if (env_var_0 == 12 && !(arr+i < arr+n)) break;
  if (env_var_0 == 13 && !(arr+i < arr+x)) break;
  if (env_var_0 == 14 && !(arr+i < arr[i])) break;
  if (env_var_0 == 15 && !(arr+i < arr[n])) break;
  if (env_var_0 == 16 && !(arr+i < arr[x])) break;
  if (env_var_0 == 17 && !(arr+i < i)) break;
  if (env_var_0 == 18 && !(arr+i < n)) break;
  if (env_var_0 == 19 && !(arr+i < x)) break;
  if (env_var_0 == 20 && !(arr+n < arr)) break;
  if (env_var_0 == 21 && !(arr+n < arr+i)) break;
  if (env_var_0 == 22 && !(arr+n < arr+n)) break;
  if (env_var_0 == 23 && !(arr+n < arr+x)) break;
  if (env_var_0 == 24 && !(arr+n < arr[i])) break;
  if (env_var_0 == 25 && !(arr+n < arr[n])) break;
  if (env_var_0 == 26 && !(arr+n < arr[x])) break;
  if (env_var_0 == 27 && !(arr+n < i)) break;
  if (env_var_0 == 28 && !(arr+n < n)) break;
  if (env_var_0 == 29 && !(arr+n < x)) break;
  if (env_var_0 == 30 && !(arr+x < arr)) break;
  if (env_var_0 == 31 && !(arr+x < arr+i)) break;
  if (env_var_0 == 32 && !(arr+x < arr+n)) break;
  if (env_var_0 == 33 && !(arr+x < arr+x)) break;
  if (env_var_0 == 34 && !(arr+x < arr[i])) break;
  if (env_var_0 == 35 && !(arr+x < arr[n])) break;
  if (env_var_0 == 36 && !(arr+x < arr[x])) break;
  if (env_var_0 == 37 && !(arr+x < i)) break;
  if (env_var_0 == 38 && !(arr+x < n)) break;
  if (env_var_0 == 39 && !(arr+x < x)) break;
  if (env_var_0 == 40 && !(arr[i] < arr)) break;
  if (env_var_0 == 41 && !(arr[i] < arr+i)) break;
  if (env_var_0 == 42 && !(arr[i] < arr+n)) break;
  if (env_var_0 == 43 && !(arr[i] < arr+x)) break;
  if (env_var_0 == 44 && !(arr[i] < arr[i])) break;
  if (env_var_0 == 45 && !(arr[i] < arr[n])) break;
  if (env_var_0 == 46 && !(arr[i] < arr[x])) break;
  if (env_var_0 == 47 && !(arr[i] < i)) break;
  if (env_var_0 == 48 && !(arr[i] < n)) break;
  if (env_var_0 == 49 && !(arr[i] < x)) break;
  if (env_var_0 == 50 && !(arr[n] < arr)) break;
  if (env_var_0 == 51 && !(arr[n] < arr+i)) break;
  if (env_var_0 == 52 && !(arr[n] < arr+n)) break;
  if (env_var_0 == 53 && !(arr[n] < arr+x)) break;
  if (env_var_0 == 54 && !(arr[n] < arr[i])) break;
  if (env_var_0 == 55 && !(arr[n] < arr[n])) break;
  if (env_var_0 == 56 && !(arr[n] < arr[x])) break;
  if (env_var_0 == 57 && !(arr[n] < i)) break;
  if (env_var_0 == 58 && !(arr[n] < n)) break;
  if (env_var_0 == 59 && !(arr[n] < x)) break;
  if (env_var_0 == 60 && !(arr[x] < arr)) break;
  if (env_var_0 == 61 && !(arr[x] < arr+i)) break;
  if (env_var_0 == 62 && !(arr[x] < arr+n)) break;
  if (env_var_0 == 63 && !(arr[x] < arr+x)) break;
  if (env_var_0 == 64 && !(arr[x] < arr[i])) break;
  if (env_var_0 == 65 && !(arr[x] < arr[n])) break;
  if (env_var_0 == 66 && !(arr[x] < arr[x])) break;
  if (env_var_0 == 67 && !(arr[x] < i)) break;
  if (env_var_0 == 68 && !(arr[x] < n)) break;
  if (env_var_0 == 69 && !(arr[x] < x)) break;
  if (env_var_0 == 70 && !(i < arr)) break;
  if (env_var_0 == 71 && !(i < arr+i)) break;
  if (env_var_0 == 72 && !(i < arr+n)) break;
  if (env_var_0 == 73 && !(i < arr+x)) break;
  if (env_var_0 == 74 && !(i < arr[i])) break;
  if (env_var_0 == 75 && !(i < arr[n])) break;
  if (env_var_0 == 76 && !(i < arr[x])) break;
  if (env_var_0 == 77 && !(i < i)) break;
  if (env_var_0 == 78 && !(i < n)) break;
  if (env_var_0 == 79 && !(i < x)) break;
  if (env_var_0 == 80 && !(n < arr)) break;
  if (env_var_0 == 81 && !(n < arr+i)) break;
  if (env_var_0 == 82 && !(n < arr+n)) break;
  if (env_var_0 == 83 && !(n < arr+x)) break;
  if (env_var_0 == 84 && !(n < arr[i])) break;
  if (env_var_0 == 85 && !(n < arr[n])) break;
  if (env_var_0 == 86 && !(n < arr[x])) break;
  if (env_var_0 == 87 && !(n < i)) break;
  if (env_var_0 == 88 && !(n < n)) break;
  if (env_var_0 == 89 && !(n < x)) break;
  if (env_var_0 == 90 && !(x < arr)) break;
  if (env_var_0 == 91 && !(x < arr+i)) break;
  if (env_var_0 == 92 && !(x < arr+n)) break;
  if (env_var_0 == 93 && !(x < arr+x)) break;
  if (env_var_0 == 94 && !(x < arr[i])) break;
  if (env_var_0 == 95 && !(x < arr[n])) break;
  if (env_var_0 == 96 && !(x < arr[x])) break;
  if (env_var_0 == 97 && !(x < i)) break;
  if (env_var_0 == 98 && !(x < n)) break;
  if (env_var_0 == 99 && !(x < x)) break;
  {
    if ( ( arr [ i ] == x ) || ( arr [ i ] == 0 ) ) return i ;
    i = i + abs ( arr [ i ] - x ) ;
  }}
  cout << "number is not present!" << endl ;
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{8, 7, 6, 7, 6, 5, 4, 3, 2, 3, 4, 3} ,{6,90},{1, 2, 3, 4, 5, 4},{97,35,60,96,3,67,72,95,55,9,69,28,15,91,31,59},{-84,-78,-74,-70,-68,-60,-56,-54,-48,-46,-28,-16,-6,0,0,8,8,8,12,16,26,30,32,34,36,40,46,48,70,70,72,76,78,78,80,84,84,86},{1,0,1,1,1,1,0,1,1,1,1},{55,64,76,79,93,96},{66,-90,98,-50,0,46,42,64,-96,-80,-96,20,-10,-84},{0,0,0,0,0,0,1},{94,4,34,87,32,3,92,68,57,76,24,33,3,4,30,70,49,30,72,82,16,53,6,24,92,96,89,28,21,8,36,9,40,85,51,1,63,68,74,26,40,3,9,32,67,4,6,73}};
    vector<int> param1 {12,1,6,15,22,5,4,8,6,25};
    vector<int> param2 {3,1,5,9,31,7,4,13,5,25};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i]) == f_gold(&param0[i].front(),param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}

