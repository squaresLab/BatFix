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
int f_gold ( int N ) {
  if ( N == 1 ) return 4;
  int countB = 1, countS = 1, prev_countB, prev_countS;
  for ( int i = 2;
  i <= N;
  i ++ ) {
    prev_countB = countB;
    prev_countS = countS;
    countS = prev_countB + prev_countS;
    countB = prev_countS;
  }
  int result = countS + countB;
  return ( result * result );
}


int f_filled ( int N ) {
  if ( ( N == 1 ) || ( N == 2 ) || ( N == 3 ) || ( N == 4 ) || ( N == 5 ) || ( N == 6 ) || ( N == 7 ) || ( N == 8 ) || ( N == 9 ) || ( N == 10 ) || ( N == 11 ) || ( N == 12 ) || ( N == 13 ) || ( N == 14 ) || ( N == 15 ) || ( N == 16 ) || ( N == 17 ) || ( N == 18 ) || ( N == 19 ) || ( N == 20 ) || ( N == 21 ) || ( N == 22 ) || ( N == 23 ) || ( N == 24 ) || ( N == 25 ) || ( N == 26 ) || ( N == 27 ) || ( N == 28 ) || ( N == 29 ) || ( N == 30 ) || ( N == 31 ) || ( N == 32 ) || ( N == 33 ) || ( N == 34 ) || ( N == 35 ) || ( N == 36 ) || ( N == 37 ) || ( N == 38 ) || ( N == 39 ) || ( N == 40 ) || ( N == 41 ) || ( N == 42 ) || ( N == 43 ) || ( N == 44 ) || ( N == 45 ) || ( N == 46 ) || ( N == 47 ) || ( N == 48 ) || ( N ==

int main() {
    int n_success = 0;
    vector<int> param0 {17,66,53,97,34,54,9,99,59,87};
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