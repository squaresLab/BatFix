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
int f_gold ( int arr [ ], int n, int x, int k ) {
  int i = 0;
  while ( i < n ) {
    if ( arr [ i ] == x ) return i;
    i = i + max ( 1, abs ( arr [ i ] - x ) / k );
  }
  cout << "number is not present!";
  return - 1;
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int arr [ ] , int n , int x , int k ) {
  int i = 0 ;
  while ( true )  {
  if (env_var_0 == 0 && !(arr < arr)) break;
  if (env_var_0 == 1 && !(arr < arr+i)) break;
  if (env_var_0 == 2 && !(arr < arr+k)) break;
  if (env_var_0 == 3 && !(arr < arr+n)) break;
  if (env_var_0 == 4 && !(arr < arr+x)) break;
  if (env_var_0 == 5 && !(arr < arr[i])) break;
  if (env_var_0 == 6 && !(arr < arr[k])) break;
  if (env_var_0 == 7 && !(arr < arr[n])) break;
  if (env_var_0 == 8 && !(arr < arr[x])) break;
  if (env_var_0 == 9 && !(arr < i)) break;
  if (env_var_0 == 10 && !(arr < k)) break;
  if (env_var_0 == 11 && !(arr < n)) break;
  if (env_var_0 == 12 && !(arr < x)) break;
  if (env_var_0 == 13 && !(arr+i < arr)) break;
  if (env_var_0 == 14 && !(arr+i < arr+i)) break;
  if (env_var_0 == 15 && !(arr+i < arr+k)) break;
  if (env_var_0 == 16 && !(arr+i < arr+n)) break;
  if (env_var_0 == 17 && !(arr+i < arr+x)) break;
  if (env_var_0 == 18 && !(arr+i < arr[i])) break;
  if (env_var_0 == 19 && !(arr+i < arr[k])) break;
  if (env_var_0 == 20 && !(arr+i < arr[n])) break;
  if (env_var_0 == 21 && !(arr+i < arr[x])) break;
  if (env_var_0 == 22 && !(arr+i < i)) break;
  if (env_var_0 == 23 && !(arr+i < k)) break;
  if (env_var_0 == 24 && !(arr+i < n)) break;
  if (env_var_0 == 25 && !(arr+i < x)) break;
  if (env_var_0 == 26 && !(arr+k < arr)) break;
  if (env_var_0 == 27 && !(arr+k < arr+i)) break;
  if (env_var_0 == 28 && !(arr+k < arr+k)) break;
  if (env_var_0 == 29 && !(arr+k < arr+n)) break;
  if (env_var_0 == 30 && !(arr+k < arr+x)) break;
  if (env_var_0 == 31 && !(arr+k < arr[i])) break;
  if (env_var_0 == 32 && !(arr+k < arr[k])) break;
  if (env_var_0 == 33 && !(arr+k < arr[n])) break;
  if (env_var_0 == 34 && !(arr+k < arr[x])) break;
  if (env_var_0 == 35 && !(arr+k < i)) break;
  if (env_var_0 == 36 && !(arr+k < k)) break;
  if (env_var_0 == 37 && !(arr+k < n)) break;
  if (env_var_0 == 38 && !(arr+k < x)) break;
  if (env_var_0 == 39 && !(arr+n < arr)) break;
  if (env_var_0 == 40 && !(arr+n < arr+i)) break;
  if (env_var_0 == 41 && !(arr+n < arr+k)) break;
  if (env_var_0 == 42 && !(arr+n < arr+n)) break;
  if (env_var_0 == 43 && !(arr+n < arr+x)) break;
  if (env_var_0 == 44 && !(arr+n < arr[i])) break;
  if (env_var_0 == 45 && !(arr+n < arr[k])) break;
  if (env_var_0 == 46 && !(arr+n < arr[n])) break;
  if (env_var_0 == 47 && !(arr+n < arr[x])) break;
  if (env_var_0 == 48 && !(arr+n < i)) break;
  if (env_var_0 == 49 && !(arr+n < k)) break;
  if (env_var_0 == 50 && !(arr+n < n)) break;
  if (env_var_0 == 51 && !(arr+n < x)) break;
  if (env_var_0 == 52 && !(arr+x < arr)) break;
  if (env_var_0 == 53 && !(arr+x < arr+i)) break;
  if (env_var_0 == 54 && !(arr+x < arr+k)) break;
  if (env_var_0 == 55 && !(arr+x < arr+n)) break;
  if (env_var_0 == 56 && !(arr+x < arr+x)) break;
  if (env_var_0 == 57 && !(arr+x < arr[i])) break;
  if (env_var_0 == 58 && !(arr+x < arr[k])) break;
  if (env_var_0 == 59 && !(arr+x < arr[n])) break;
  if (env_var_0 == 60 && !(arr+x < arr[x])) break;
  if (env_var_0 == 61 && !(arr+x < i)) break;
  if (env_var_0 == 62 && !(arr+x < k)) break;
  if (env_var_0 == 63 && !(arr+x < n)) break;
  if (env_var_0 == 64 && !(arr+x < x)) break;
  if (env_var_0 == 65 && !(arr[i] < arr)) break;
  if (env_var_0 == 66 && !(arr[i] < arr+i)) break;
  if (env_var_0 == 67 && !(arr[i] < arr+k)) break;
  if (env_var_0 == 68 && !(arr[i] < arr+n)) break;
  if (env_var_0 == 69 && !(arr[i] < arr+x)) break;
  if (env_var_0 == 70 && !(arr[i] < arr[i])) break;
  if (env_var_0 == 71 && !(arr[i] < arr[k])) break;
  if (env_var_0 == 72 && !(arr[i] < arr[n])) break;
  if (env_var_0 == 73 && !(arr[i] < arr[x])) break;
  if (env_var_0 == 74 && !(arr[i] < i)) break;
  if (env_var_0 == 75 && !(arr[i] < k)) break;
  if (env_var_0 == 76 && !(arr[i] < n)) break;
  if (env_var_0 == 77 && !(arr[i] < x)) break;
  if (env_var_0 == 78 && !(arr[k] < arr)) break;
  if (env_var_0 == 79 && !(arr[k] < arr+i)) break;
  if (env_var_0 == 80 && !(arr[k] < arr+k)) break;
  if (env_var_0 == 81 && !(arr[k] < arr+n)) break;
  if (env_var_0 == 82 && !(arr[k] < arr+x)) break;
  if (env_var_0 == 83 && !(arr[k] < arr[i])) break;
  if (env_var_0 == 84 && !(arr[k] < arr[k])) break;
  if (env_var_0 == 85 && !(arr[k] < arr[n])) break;
  if (env_var_0 == 86 && !(arr[k] < arr[x])) break;
  if (env_var_0 == 87 && !(arr[k] < i)) break;
  if (env_var_0 == 88 && !(arr[k] < k)) break;
  if (env_var_0 == 89 && !(arr[k] < n)) break;
  if (env_var_0 == 90 && !(arr[k] < x)) break;
  if (env_var_0 == 91 && !(arr[n] < arr)) break;
  if (env_var_0 == 92 && !(arr[n] < arr+i)) break;
  if (env_var_0 == 93 && !(arr[n] < arr+k)) break;
  if (env_var_0 == 94 && !(arr[n] < arr+n)) break;
  if (env_var_0 == 95 && !(arr[n] < arr+x)) break;
  if (env_var_0 == 96 && !(arr[n] < arr[i])) break;
  if (env_var_0 == 97 && !(arr[n] < arr[k])) break;
  if (env_var_0 == 98 && !(arr[n] < arr[n])) break;
  if (env_var_0 == 99 && !(arr[n] < arr[x])) break;
  if (env_var_0 == 100 && !(arr[n] < i)) break;
  if (env_var_0 == 101 && !(arr[n] < k)) break;
  if (env_var_0 == 102 && !(arr[n] < n)) break;
  if (env_var_0 == 103 && !(arr[n] < x)) break;
  if (env_var_0 == 104 && !(arr[x] < arr)) break;
  if (env_var_0 == 105 && !(arr[x] < arr+i)) break;
  if (env_var_0 == 106 && !(arr[x] < arr+k)) break;
  if (env_var_0 == 107 && !(arr[x] < arr+n)) break;
  if (env_var_0 == 108 && !(arr[x] < arr+x)) break;
  if (env_var_0 == 109 && !(arr[x] < arr[i])) break;
  if (env_var_0 == 110 && !(arr[x] < arr[k])) break;
  if (env_var_0 == 111 && !(arr[x] < arr[n])) break;
  if (env_var_0 == 112 && !(arr[x] < arr[x])) break;
  if (env_var_0 == 113 && !(arr[x] < i)) break;
  if (env_var_0 == 114 && !(arr[x] < k)) break;
  if (env_var_0 == 115 && !(arr[x] < n)) break;
  if (env_var_0 == 116 && !(arr[x] < x)) break;
  if (env_var_0 == 117 && !(i < arr)) break;
  if (env_var_0 == 118 && !(i < arr+i)) break;
  if (env_var_0 == 119 && !(i < arr+k)) break;
  if (env_var_0 == 120 && !(i < arr+n)) break;
  if (env_var_0 == 121 && !(i < arr+x)) break;
  if (env_var_0 == 122 && !(i < arr[i])) break;
  if (env_var_0 == 123 && !(i < arr[k])) break;
  if (env_var_0 == 124 && !(i < arr[n])) break;
  if (env_var_0 == 125 && !(i < arr[x])) break;
  if (env_var_0 == 126 && !(i < i)) break;
  if (env_var_0 == 127 && !(i < k)) break;
  if (env_var_0 == 128 && !(i < n)) break;
  if (env_var_0 == 129 && !(i < x)) break;
  if (env_var_0 == 130 && !(k < arr)) break;
  if (env_var_0 == 131 && !(k < arr+i)) break;
  if (env_var_0 == 132 && !(k < arr+k)) break;
  if (env_var_0 == 133 && !(k < arr+n)) break;
  if (env_var_0 == 134 && !(k < arr+x)) break;
  if (env_var_0 == 135 && !(k < arr[i])) break;
  if (env_var_0 == 136 && !(k < arr[k])) break;
  if (env_var_0 == 137 && !(k < arr[n])) break;
  if (env_var_0 == 138 && !(k < arr[x])) break;
  if (env_var_0 == 139 && !(k < i)) break;
  if (env_var_0 == 140 && !(k < k)) break;
  if (env_var_0 == 141 && !(k < n)) break;
  if (env_var_0 == 142 && !(k < x)) break;
  if (env_var_0 == 143 && !(n < arr)) break;
  if (env_var_0 == 144 && !(n < arr+i)) break;
  if (env_var_0 == 145 && !(n < arr+k)) break;
  if (env_var_0 == 146 && !(n < arr+n)) break;
  if (env_var_0 == 147 && !(n < arr+x)) break;
  if (env_var_0 == 148 && !(n < arr[i])) break;
  if (env_var_0 == 149 && !(n < arr[k])) break;
  if (env_var_0 == 150 && !(n < arr[n])) break;
  if (env_var_0 == 151 && !(n < arr[x])) break;
  if (env_var_0 == 152 && !(n < i)) break;
  if (env_var_0 == 153 && !(n < k)) break;
  if (env_var_0 == 154 && !(n < n)) break;
  if (env_var_0 == 155 && !(n < x)) break;
  if (env_var_0 == 156 && !(x < arr)) break;
  if (env_var_0 == 157 && !(x < arr+i)) break;
  if (env_var_0 == 158 && !(x < arr+k)) break;
  if (env_var_0 == 159 && !(x < arr+n)) break;
  if (env_var_0 == 160 && !(x < arr+x)) break;
  if (env_var_0 == 161 && !(x < arr[i])) break;
  if (env_var_0 == 162 && !(x < arr[k])) break;
  if (env_var_0 == 163 && !(x < arr[n])) break;
  if (env_var_0 == 164 && !(x < arr[x])) break;
  if (env_var_0 == 165 && !(x < i)) break;
  if (env_var_0 == 166 && !(x < k)) break;
  if (env_var_0 == 167 && !(x < n)) break;
  if (env_var_0 == 168 && !(x < x)) break;
  {
    if ( ( arr [ i ] == x ) || ( arr [ i ] == 0 ) ) return i ;
    i = i + max ( 1 , ( int ) ( abs ( arr [ i ] - x ) / k ) ) ;
  }}
  cout << "number is not present!" << endl ;
  return - 1 ;
}


int main() {
    int n_success = 0;
    vector<vector<int>> param0 {{1,5,9,11,14,18,19,21,26,32,38,38,43,47,49,52,55,61,65,67,69,73,74,79,84,90,91,91,92,93,94,99},{12,-86,-66,-50,-48,78,-92,-56,-2,66,64},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{10,87,39,87,45,33,5,37,70,69,88,78,90,3},{-78,-70,-68,-60,-52,-34,-24,-4,12,18,58,58,64,76,84,94},{0,1,0,1,1,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,1,0,0,1,1,1,0,1,0,1,0,0,1,1,0,0,1,0,1,0,1,0},{5,5,7,11,11,15,22,23,28,38,41,53,54,57,59,68,71,89},{-4,0,60,-14,-48,54,-96,-68,-40,64,-50,-74,-20,-22,48,-48,42,62,66,84,54,-52,-52,6,46,-90,-18,90},{0,0,0,0,0,0,0,1,1,1,1,1},{30,91,34,44,3,76,43,75,49,33,74,72,68,79,26,62,23,5,32,75,82,25,7,19,32,87,87,94,34,62,3,32,59}};
    vector<int> param1 {22,5,35,9,14,26,16,18,9,32};
    vector<int> param2 {19,10,37,8,9,36,17,14,8,30};
    vector<int> param3 {26,5,43,10,13,32,16,23,9,24};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(&param0[i].front(),param1[i],param2[i],param3[i]) == f_gold(&param0[i].front(),param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
