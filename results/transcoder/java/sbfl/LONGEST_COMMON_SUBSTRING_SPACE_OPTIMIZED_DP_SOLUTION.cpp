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
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;
int f_gold ( string X, string Y ) {
  int m = X . length ( );
  int n = Y . length ( );
  int result = 0;
  int len [ 2 ] [ n ];
  int currRow = 0;
  for ( int i = 0;
  i <= m;
  i ++ ) {
    for ( int j = 0;
    j <= n;
    j ++ ) {
      if ( i == 0 || j == 0 ) {
        len [ currRow ] [ j ] = 0;
      }
      else if ( X [ i - 1 ] == Y [ j - 1 ] ) {
        len [ currRow ] [ j ] = len [ 1 - currRow ] [ j - 1 ] + 1;
        result = max ( result, len [ currRow ] [ j ] );
      }
      else {
        len [ currRow ] [ j ] = 0;
      }
    }
    currRow = 1 - currRow;
  }
  return result;
}


int f_filled ( string X, string Y ) {
  int m = X . size ( );
  int n = Y . size ( );
  int result = 0;
  int * * len = new int * [ 2 ];
  int currRow = 0;
  for ( int i = 0;
  i < m;
  i ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( i == 0 || j == 0 ) len [ currRow ] [ j ] = 0;
      else if ( X [ i - 1 ] == Y [ j - 1 ] ) {
        len [ currRow ] [ j ] = len [ ( 1 - currRow ) ] [ ( j - 1 ) ] + 1;
        result = max ( result, len [ currRow ] [ j ] );
      }
      else len [ currRow ] [ j ] = 0;
    }
    currRow = 1 - currRow;
  }
  return result;
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"GeeksforGeeks","333940","1000","Facebook","2684247","111","abcdxyz","625330958530","01011000001111","KXm"};
    vector<string> param1 {"GeeksQuiz","390","0","nice book","1","10","xyzabcd","412511","1001010001","gF"};
    assert(argc > 1); int i = atol(argv[1]); return f_filled(param0[i],param1[i]) == f_gold(param0[i],param1[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
