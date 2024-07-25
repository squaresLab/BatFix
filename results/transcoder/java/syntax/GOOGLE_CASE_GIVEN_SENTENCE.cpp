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
string f_gold ( string s ) {
  int n = s . length ( );
  s [ 0 ] = tolower ( s [ 0 ] );
  for ( int i = 1;
  i < n;
  i ++ ) {
    if ( s [ i ] == ' ' && i < n ) {
      s [ i + 1 ] = tolower ( s [ i + 1 ] );
      i ++;
    }
    else s [ i ] = toupper ( s [ i ] );
  }
  return s;
}


string f_filled ( string s ) {
  int n = s . size ( );
  string s1;
  s1 . reserve ( n );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( s [ i ] == ' ' && i < n ) {
      s1 . push_back ( " " + string ( s [ i + 1 ] ) );
      i ++;
    }
    else {
      s1 . push_back ( string ( s [ i ] ) );
    }
  }
  return s1;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"TEYndweqZA","01865","11001100","CzwznJmQet","318305446","0000001111110","yzT","38630230","01101","zoizI"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}