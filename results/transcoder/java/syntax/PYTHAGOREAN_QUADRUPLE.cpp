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
bool f_gold ( int a, int b, int c, int d ) {
  int sum = a * a + b * b + c * c;
  if ( d * d == sum ) return true;
  else return false;
}


Boolean f_filled ( unsigned a, unsigned b, unsigned c, unsigned d ) {
  unsigned sum = a * a + b * b + c * c;
  if ( d * d == sum ) {
    return True;
  }
  else {
    return False;
  }
}



static // f_filled_inner(int param0, int param1, int param2, int param3)
{
return (//) f_filled((unsigned) param0,(unsigned) param1,(unsigned) param2,(unsigned) param3);
}

int main() {
    int n_success = 0;
    vector<int> param0 {1,3,0,-1,82,14,6,13,96,70};
    vector<int> param1 {1,2,0,-1,79,57,96,7,65,33};
    vector<int> param2 {1,5,0,-1,6,35,45,3,72,6};
    vector<int> param3 {3,38,0,1,59,29,75,63,93,2};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],param1[i],param2[i],param3[i]) == f_gold(param0[i],param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
