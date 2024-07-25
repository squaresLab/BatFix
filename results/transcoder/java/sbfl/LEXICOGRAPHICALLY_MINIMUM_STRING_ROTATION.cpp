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
string f_gold ( string str ) {
  int n = str . length ( );
  string arr [ n ];
  string concat = str + str;
  for ( int i = 0;
  i < n;
  i ++ ) arr [ i ] = concat . substr ( i, n );
  sort ( arr, arr + n );
  return arr [ 0 ];
}


string f_filled ( string str ) {
  int n = str . length ( );
  string arr [ n ];
  string concat = str + str;
  for ( int i = 0;
  i < n;
  i ++ )
    arr [ i ] = concat . substr ( i, n - i );
  sort ( arr, arr + n );
  return arr [ 0 ];
}


int main(int argc, char** argv) {
    int n_success = 0;
    vector<string> param0 {"onWEchl","2","100","GHbCZA","50568798206105","001011110001","lljpYhznnyu","54499921759984","11101","qvypgCYEjsyjwZ"};
    assert(argc > 1); int i = atol(argv[1]); return f_filled(param0[i]) == f_gold(param0[i]);
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}