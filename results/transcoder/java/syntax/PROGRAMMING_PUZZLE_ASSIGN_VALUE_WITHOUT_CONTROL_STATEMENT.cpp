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
int f_gold ( int a, int b, bool x ) {
  int arr [2] = { a, b };
    return ( arr [ x ] );
  }


int f_filled ( int a, int b, int x ) {
  int arr [ ] = {
    a, b };
    return ( arr [ x ] );
  }



static // f_filled_inner(int param0, int param1, bool param2)
{
return (//) f_filled(param0,param1,(int) param2);
}

int main() {
    int n_success = 0;
    vector<int> param0 {21,17,35,23,48,9,18,46,99,61};
    vector<int> param1 {7,49,43,51,30,44,30,91,23,54};
    vector<int> param2 {34,69,18,80,99,64,34,71,35,5};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i],param2[i]) == f_gold(param0[i],param1[i],param2[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
