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
bool f_gold ( long long a, long long b ) {
  if ( a == 0 || b == 0 ) return false;
  long long result = a * b;
  if ( a == result / b ) return false;
  else return true;
}


Boolean f_filled ( unsigned long a, unsigned long b ) {
  if ( a == 0 || b == 0 ) return False;
  unsigned long result = a * b;
  if ( a == result / b ) return False;
  else return True;
}



static // f_filled_inner(long long param0, long long param1)
{
return (//) f_filled((unsigned long) param0,(unsigned long) param1);
}

int main() {
    int n_success = 0;
    vector<long> param0 {37,10000000000,10000000000,999999999,39,92,14,19,14,88};
    vector<long> param1 {80,-10000000000,10000000000,999999999,36,56,21,38,82,41};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i]) == f_gold(param0[i],param1[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}