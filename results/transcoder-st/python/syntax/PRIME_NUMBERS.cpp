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
bool f_gold ( int n ) {
  if ( n <= 1 ) return false;
  for ( int i = 2;
  i < n;
  i ++ ) if ( n % i == 0 ) return false;
  return true;
}


bool f_filled ( int n ) {
  if ( ( n <= 1 ) || ( n <= 2 ) || ( n <= 3 ) || ( n <= 4 ) || ( n <= 5 ) || ( n <= 6 ) || ( n <= 7 ) || ( n <= 8 ) || ( n <= 9 ) || ( n <= 10 ) || ( n <= 11 ) || ( n <= 12 ) || ( n <= 13 ) || ( n <= 14 ) || ( n <= 15 ) || ( n <= 16 ) || ( n <= 17 ) || ( n <= 18 ) || ( n <= 19 ) || ( n <= 20 ) || ( n <= 21 ) || ( n <= 22 ) || ( n <= 23 ) || ( n <= 24 ) || ( n <= 25 ) || ( n <= 26 ) || ( n <= 27 ) || ( n <= 28

int main() {
    int n_success = 0;
    vector<int> param0 {2,74,46,38,51,48,6,14,31,10};
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