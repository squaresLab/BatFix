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
int f_gold ( string n ) {
  int i = 0, pos = 0;
  while ( n [ i ] != '\0' ) {
    switch ( n [ i ] ) {
      case '4' : pos = pos * 2 + 1;
      break;
      case '7' : pos = pos * 2 + 2;
      break;
    }
    i ++;
  }
  return pos;
}


int f_filled ( string n ) {
  int i = 0 ;
  int j = n . length ( ) ;
  int pos = 0 ;
  while ( ( i < j ) && ( i < n . length ( ) ) ) {
    if ( ( n [ i ] == '4' ) || ( n [ i ] == '7' ) ) pos = pos * 2 + 1 ;
    if ( ( n [ i ] == '2' ) || ( n [ i ] == '3' ) ) pos = pos * 2 + 2 ;
    i = i + 1 ;
  }
  return pos ;
}


int main() {
    int n_success = 0;
    vector<string> param0 {"7","305745689","444","4","2074","27","447","255","10000111111011","fAKcSDRTNz"};
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