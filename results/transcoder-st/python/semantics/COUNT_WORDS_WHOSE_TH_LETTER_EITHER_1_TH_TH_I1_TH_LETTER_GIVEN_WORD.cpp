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
int f_gold ( char str [ ], int len ) {
  int count = 1;
  if ( len == 1 ) return count;
  if ( str [ 0 ] == str [ 1 ] ) count *= 1;
  else count *= 2;
  for ( int j = 1;
  j < len - 1;
  j ++ ) {
    if ( str [ j ] == str [ j - 1 ] && str [ j ] == str [ j + 1 ] ) count *= 1;
    else if ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) count *= 2;
    else count *= 3;
  }
  if ( str [ len - 1 ] == str [ len - 2 ] ) count *= 1;
  else count *= 2;
  return count;
}


int f_filled ( string str , int l ) {
  int count = 1 ;
  ;
  if ( ( l == 1 ) || ( l == 2 ) ) return count ;
  if ( ( str [ 0 ] == str [ 1 ] ) || ( str [ 0 ] == str [ 1 ] ) ) count *= 1 ;
  else count *= 2 ;
  for ( int j = 1 ;
  j <= l - 1 ;
  j ++ ) {
    if ( ( str [ j ] == str [ j - 1 ] && str [ j ] == str [ j + 1 ] ) || ( str [ j ] == str [ j - 1 ] || str [ j ] == str [ j + 1 ] || str [ j - 1 ] == str [ j + 1 ] ) ) count *= 1 ;
    else count *= 2 ;
  }
  if ( ( str [ l - 1 ] == str [ l - 2 ] ) || ( str [ l - 2 ] == str [ l - 3 ] ) ) count *= 1 ;
  else count *= 2 ;
  return count ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"KbctqjpX","36506583562151","01010","Dr","09","110","K","04402109","010","aVHYrYmHjvnj "};
    vector<int> param1 {42,67,6,88,73,4,61,7,92,60};
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